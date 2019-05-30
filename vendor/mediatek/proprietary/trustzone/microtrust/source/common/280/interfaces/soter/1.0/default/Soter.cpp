/*
 **
 ** Copyright 2016, The Android Open Source Project
 **
 ** Licensed under the Apache License, Version 2.0 (the "License");
 ** you may not use this file except in compliance with the License.
 ** You may obtain a copy of the License at
 **
 **     http://www.apache.org/licenses/LICENSE-2.0
 **
 ** Unless required by applicable law or agreed to in writing, software
 ** distributed under the License is distributed on an "AS IS" BASIS,
 ** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 ** See the License for the specific language governing permissions and
 ** limitations under the License.
 */

#define LOG_TAG "wechatimpl"
#include "Soter.h"

#include <cutils/log.h>
#include <dlfcn.h>

#include <soter_ca.h>

using namespace android;

namespace vendor {
namespace microtrust {
namespace hardware {
namespace soter {
namespace V1_0 {
namespace implementation {


Soter::Soter() {
    ALOGI("init soter device HAL.\n");
}

Soter::~Soter() {

    ALOGI("finalize soter device HAL");
}

Return<SoterErrorCode> Soter::generateAttkKeyPair(uint8_t copyNum)
{
    ALOGI("%s called\n", __func__);
    soter_error_t ret = generate_attk_key_pair(copyNum);
    return static_cast<SoterErrorCode>(ret);
}

Return<SoterErrorCode> Soter::verifyAttkKeyPair()
{
    ALOGI("%s called\n", __func__);
    soter_error_t ret = verify_attk_key_pair();
    return static_cast<SoterErrorCode>(ret);
}

Return<void> Soter::exportAttkPublicKey(exportAttkPublicKey_cb _hidl_cb)
{
    ALOGI("%s called\n", __func__);
    SoterErrorCode ret = SoterErrorCode::SOTER_ERROR_OK;
    hidl_vec<uint8_t> output;
    size_t pubkey_len = 1024;
    uint8_t* pubkey = (uint8_t*) malloc(pubkey_len);
    export_attk_public_key(pubkey, &pubkey_len);

    ALOGI("attk pubkey", (unsigned char*)pubkey, (uint32_t)pubkey_len);

    output.setToExternal(const_cast<uint8_t*>(pubkey), pubkey_len);
     _hidl_cb(ret, output, pubkey_len);
     if (pubkey) {
       free(pubkey);
     }

    return Void();
}

Return<void> Soter::getDeviceId(getDeviceId_cb _hidl_cb)
{
    ALOGI("%s called\n", __func__);
    SoterErrorCode ret = SoterErrorCode::SOTER_ERROR_OK;
    hidl_vec<uint8_t> output;
    size_t device_id_len = 128;
    uint8_t* device_id = (uint8_t*) malloc(device_id_len);

    get_device_id(device_id, &device_id_len);
    output.setToExternal(const_cast<uint8_t*>(device_id), device_id_len);
     _hidl_cb(ret, output, device_id_len);
     if (device_id) {
       free(device_id);
     }

    return Void();
}

Return<SoterErrorCode> Soter::generateAskKeyPair(uint32_t uid)
{
    ALOGI("%s called\n", __func__);
    uint8_t uid_buf[4];
    memcpy(uid_buf, &uid, sizeof(uint32_t));
//    soter_error_t ret = soter.generate_ask_key_pair(uid_buf);
    soter_error_t ret = generate_ask_key_pair(uid_buf);
    return static_cast<SoterErrorCode>(ret);
}

Return<void> Soter::exportAskPublicKey(uint32_t uid, exportAskPublicKey_cb _hidl_cb)
{
    ALOGI("%s called\n", __func__);
    size_t json_len = 1024;

    uint8_t* json_buf = (uint8_t*) malloc(json_len);
    size_t signature_len = 256;
    uint8_t* signature_buf = (uint8_t*) malloc(signature_len);
    hidl_vec<uint8_t> output;
    soter_ask_struct data;
    data.json = (char *)json_buf;
    data.json_length = json_len;
    data.signature = signature_buf;
    data.signature_length = signature_len;
    uint8_t uid_buf[4];
    memcpy(uid_buf, &uid, sizeof(uint32_t));

    soter_error_t ret = export_ask_public_key(uid_buf, &data);

    ALOGI("%s called data json len : %d\n", __func__, data.json_length);


    uint32_t ret_size = 4 + data.json_length + data.signature_length;
    uint32_t ret_len = data.json_length;
    uint8_t *ret_buf = (uint8_t*) malloc(ret_size);
    if (ret_buf == NULL)
    {
        ret = SOTER_ERROR_MALLOC_FAILED;
        _hidl_cb(static_cast<SoterErrorCode>(ret), NULL, 0);
        return Void();
    }
    memset(ret_buf, 0, ret_size);
    memcpy(ret_buf, &ret_len, 4);
    memcpy(ret_buf + 4, data.json, data.json_length);
    memcpy(ret_buf + 4 + data.json_length, data.signature, data.signature_length);


    output.setToExternal(const_cast<uint8_t*>(ret_buf), ret_size);
    _hidl_cb(static_cast<SoterErrorCode>(ret), output, ret_size);
    if (json_buf)
      free(json_buf);
    if (signature_buf)
      free(signature_buf);
    if (ret_buf)
      free(ret_buf);
    return Void();
}

Return<SoterErrorCode> Soter::removeAllUidKey(uint32_t uid)
{
    ALOGI("%s called\n", __func__);
    uint8_t uid_buf[4];

    memcpy(uid_buf, &uid, sizeof(uint32_t));

    soter_error_t ret = remove_all_uid_key(uid_buf);

    return static_cast<SoterErrorCode>(ret);
}

Return<SoterErrorCode> Soter::hasAskAlready(uint32_t uid)
{
    ALOGI(" %s called\n", __func__);
    uint8_t uid_buf[4];
    memcpy(uid_buf, &uid, sizeof(uint32_t));

    soter_error_t ret = has_ask_already(uid_buf);
    ALOGI(" %s return %d \n", __func__, ret);

    return static_cast<SoterErrorCode>(ret);
}

Return<SoterErrorCode> Soter::generateAuthKeyPair(uint32_t uid, const hidl_string& name)
{
    ALOGI("%s called\n", __func__);
    uint8_t uid_buf[4];
    memcpy(uid_buf, &uid, sizeof(uint32_t));

    soter_error_t ret = generate_auth_key_pair(uid_buf, name.c_str());

    return static_cast<SoterErrorCode>(ret);
}

Return<void> Soter::exportAuthKeyPublicKey(uint32_t uid, const hidl_string& name, exportAuthKeyPublicKey_cb _hidl_cb)
{
    ALOGI("%s called\n", __func__);
    size_t json_len = 1024;
    uint8_t* json_buf = (uint8_t*) malloc(json_len);
    size_t signature_len = 256;
    uint8_t* signature_buf = (uint8_t*) malloc(signature_len);
    hidl_vec<uint8_t> output;
    soter_auth_key_struct data;
    data.json = (char *)json_buf;
    data.json_length = json_len;
    data.signature = signature_buf;
    data.signature_length = signature_len;
    uint8_t uid_buf[4];
    memcpy(uid_buf, &uid, sizeof(uint32_t));

    soter_error_t ret = export_auth_key_public_key(uid_buf, name.c_str(), &data);

    uint32_t ret_size = 4 + data.json_length + data.signature_length;
    uint32_t ret_len = data.json_length;
    uint8_t *ret_buf = (uint8_t*) malloc(ret_size);
    if (ret_buf == NULL)
    {
        ret = SOTER_ERROR_MALLOC_FAILED;
        _hidl_cb(static_cast<SoterErrorCode>(ret), NULL, 0);
        return Void();
    }
    memset(ret_buf, 0, ret_size);
    memcpy(ret_buf, &ret_len, 4);
    memcpy(ret_buf + 4, data.json, data.json_length);
    memcpy(ret_buf + 4 + data.json_length, data.signature, data.signature_length);

    output.setToExternal(const_cast<uint8_t*>(ret_buf), ret_size);
    _hidl_cb(static_cast<SoterErrorCode>(ret), output, ret_size);
    if (json_buf)
      free(json_buf);
    if (signature_buf)
      free(signature_buf);
    if (ret_buf)
      free(ret_buf);

    return Void();
}

Return<SoterErrorCode> Soter::removeAuthKey(uint32_t uid, const hidl_string& name)
{
    ALOGI("%s called\n", __func__);
    uint8_t uid_buf[4];
    memcpy(uid_buf, &uid, sizeof(uint32_t));

    soter_error_t ret = remove_auth_key(uid_buf, name.c_str());

    return static_cast<SoterErrorCode>(ret);
}

Return<SoterErrorCode> Soter::hasAuthKey(uint32_t uid, const hidl_string& name)
{
    ALOGI("%s called\n", __func__);
    uint8_t uid_buf[4];
    memcpy(uid_buf, &uid, sizeof(uint32_t));

    soter_error_t ret = has_auth_key(uid_buf, name.c_str());
    ALOGI("%s return %d \n", __func__, ret);
    return static_cast<SoterErrorCode>(ret);
}

Return<void> Soter::initSign(uint32_t uid, const hidl_string& name, const hidl_string& challenge, initSign_cb _hidl_cb)
{
    ALOGI("%s called\n", __func__);
    size_t session_length = 1024;
    char* session = (char*) malloc(session_length);
    soter_sign_session data;
    data.session = (char *)session;
    data.session_length = session_length;

    uint8_t uid_buf[4];
    memcpy(uid_buf, &uid, sizeof(uint32_t));

    soter_error_t ret = init_sign(uid_buf, name.c_str(), challenge.c_str(), &data);
    uint64_t buffer = 0;
    memcpy(&buffer, data.session, data.session_length);

    ALOGI("%s session %llx \n", __func__, buffer);
    _hidl_cb(static_cast<SoterErrorCode>(ret), buffer);
    if (session)
      free(session);
    return Void();
}

Return<void> Soter::finishSign(uint64_t session, finishSign_cb _hidl_cb)
{
    ALOGI("%s called\n", __func__);
    hidl_vec<uint8_t> output;
    size_t json_len = 1024;
    uint8_t* json_buf = (uint8_t*) malloc(json_len);
    size_t signature_len = 256;
    uint8_t* signature_buf = (uint8_t*) malloc(signature_len);

    soter_sign_result_struct data;
    data.json = (char *)json_buf;
    data.json_length = json_len;
    data.signature = signature_buf;
    data.signature_length = signature_len;

    char* session_string = (char*) malloc(sizeof(uint64_t));
    soter_sign_session session_data;
    memcpy(session_string, &session, sizeof(uint64_t));
    session_data.session = session_string;


    session_data.session_length = sizeof(uint64_t);

    soter_error_t ret = finish_sign(&session_data, &data);

    uint32_t ret_size = 4 + data.json_length + data.signature_length;
    uint32_t ret_len = data.json_length;
    uint8_t *ret_buf = (uint8_t*) malloc(ret_size);
    if (ret_buf == NULL)
    {
        ret = SOTER_ERROR_MALLOC_FAILED;
        _hidl_cb(static_cast<SoterErrorCode>(ret), NULL, 0);
        return Void();
    }
    memset(ret_buf, 0, ret_size);
    memcpy(ret_buf, &ret_len, 4);
    memcpy(ret_buf + 4, data.json, data.json_length);
    memcpy(ret_buf + 4 + data.json_length, data.signature, data.signature_length);

    output.setToExternal(const_cast<uint8_t*>(ret_buf), ret_size);
    _hidl_cb(static_cast<SoterErrorCode>(ret), output, ret_size);

    if (json_buf)
      free(json_buf);
    if (signature_buf)
      free(signature_buf);
    if (session_string)
      free(session_string);
    if (ret_buf)
      free(ret_buf);

    return Void();
}

}  // namespace implementation
}  // namespace V1_0
}  // namespace soter
}  // namespace hardware
}  // namespace microtrust
}  // namespace vendor
