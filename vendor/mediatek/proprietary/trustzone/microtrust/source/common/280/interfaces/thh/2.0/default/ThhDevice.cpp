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

#define IMSG_TAG "vendor.microtrust.hardware.thh@2.0-impl"

#include "ThhDevice.h"
#include "cJSON.c"
#include <dlfcn.h>
#include <string.h>
#include <imsg_log.h>
#include <include/thhclient.h>
#include <include/thh_log.h>
#include <include/soter_ca.h>
#include <cutils/properties.h>

using ::android::hardware::hidl_string;
using ::vendor::microtrust::hardware::thh::V2_0::ErrorCode;

namespace vendor
{
namespace microtrust
{
namespace hardware
{
namespace thh
{
namespace V2_0
{
namespace implementation
{

ThhDevice::ThhDevice()
{
}

ThhDevice::~ThhDevice()
{
}

#define THHDEVICE_VERSION "2.0"
#define THHDEVICE_THHST "st_thh"
#define THHDEVICE_WECHATST "st_wechat"
#define THHDEVICE_IFAAST "st_ifaa"
#define WECHAT_BUFFER_SIZE 1000

static int thh_get_wechat_info(char *version)
{
    (void*)version;
    return 0;

}

static bool is_support_wechat(void)
{
#ifdef SUPPORT_SOTER
    THH_INFO("wechat support");
    return true;
#else
    THH_INFO("wechat not support");
    return false;
#endif
}

#ifdef SUPPORT_SOTER
static int thh_export_wechat_public_key(unsigned char *pubkey, size_t *len);
static int thh_export_wechat_public_key(unsigned char *pubkey, size_t *len)
{
    soter_error_t ret = export_attk_public_key(pubkey, len);
    if(ret == SOTER_ERROR_OK)
    {
        THH_INFO("export wechat pubkey success");
        return 0;
    }
    else
    {
        THH_ERROR("export wechat pubkey failed 0x%x", ret);
        return -1;
    }
}

int thh_get_wechat_device_id(unsigned char *id, size_t *len)
{
    soter_error_t ret = get_device_id(id, len);

    if(ret == SOTER_ERROR_OK)
    {
        THH_INFO("get wechat device id success");
        return 0;
    }
    else
    {
        THH_ERROR("get wechat device id failed 0x%x", ret);
        return -1;
    }
}

static bool thh_verify_wechat_key_pair(void)
{
    soter_error_t ret = verify_attk_key_pair();
    if (ret == SOTER_ERROR_OK)
    {
        return true;
    }
    else
    {
        THH_ERROR("verify wechat key pair failed 0x%x", ret);
        return false;
    }
}

static int thh_gen_wechat_key_pair(uint8_t copy_num)
{
    soter_error_t ret = generate_attk_key_pair(copy_num);
    if (ret == SOTER_ERROR_OK)
    {
        THH_INFO("generate wechat key pair success");
        return 0;
    }
    else
    {
        THH_ERROR("generate wechat key pair failed 0x%x", ret);
        return -1;
    }
}

static bool thh_check_wechat_key_pair_status(void)
{
    bool ret = false;

    ret = thh_verify_wechat_key_pair();
    if (ret)
    {
        THH_INFO("wechat key pair already exist");
    }
    else
    {
        THH_INFO("wechat key pair not exist");
    }

    return ret;
}
#endif

Return<void> ThhDevice::thhClientInvoke(const hidl_array<hidl_string, 8> &argv, thhClientInvoke_cb _hidl_cb)
{
    int32_t ret = 0;
    hidl_vec<uint8_t> output;
    uint8_t* res = NULL;
    size_t res_len = 0;
    if (strcmp(argv[0].c_str(), "version") == 0)
    {
        char *version = (char *) malloc(256);
        memset(version, 0x00, 256);
        strcpy(version, "THH Device Version: ");
        strcat(version, THHDEVICE_VERSION);
        strcat(version, "\n");
        ret = libdo_version(&res, (uint32_t *)&res_len);
        if ((uint32_t)ret != 0xc0000001)
        {
            THH_ERROR("get uTAgent Version Failed %x", ret);
        }
        else
        {
            if (res_len < 256 - (int)strlen(version))
            {
                strncat(version, (char *) res, res_len);
                strcat(version, "\n");
            }

            ret = thh_get_wechat_info(version);
            if(ret)
            {
                THH_ERROR("get wechat Version Failed %x", ret);
            }
            free(res);
            res = NULL;
            res_len = 0;
            ret = libdo_get_ifaa_version(&res, (uint32_t *)&res_len);
            if(ret == 0)
            {
                strcat(version, "ifaa support version:");
                strncat(version, (char *) res, res_len);
                strcat(version, "\n");
            }
            ret = (int32_t)ErrorCode::OK;
        }

        if(!ret)
        {
            output.setToExternal(const_cast<uint8_t*>((uint8_t *) version), strlen(version));
        }

        if (version)
        {
            free(version);
            version = NULL;
        }
    }
    else if (strcmp(argv[0].c_str(), "check_thh_status") == 0)
    {
        if(libdo_check_thh_status() != 0xff01)
        {
            ret = -(int32_t)ErrorCode::CHECK_INIT_THHSTATUS_ERROR;
        }
#ifdef SUPPORT_SOTER
        else if(is_support_wechat() && thh_check_wechat_key_pair_status() == false)
        {
            ret = -(int32_t)ErrorCode::CHECK_INIT_WECHATSTATUS_ERROR;
        }
#endif
        else
        {
            res_len = libdo_vfy_ifaae();
            if((uint32_t)res_len != 0xffff0008 && res_len != 0)// not ta and not success
            {
                ret = -(int32_t)ErrorCode::CHECK_INIT_IFAASTATUS_ERROR;
            }
            else
            {
                ret = (int32_t)ErrorCode::OK;
            }
        }

    }
    else if (strcmp(argv[0].c_str(), "export") == 0)
    {
        if(strcmp(argv[1].c_str(), "thh") == 0)
        {
            ret = libdo_export(argv[2].c_str(), &res, (uint32_t *)&res_len);
        }
        else if (strcmp(argv[1].c_str(), "ifaa") == 0)
        {
            if(strcmp(argv[2].c_str(), "uuid") == 0)
            {
                ret = -(int32_t)ErrorCode::UNIMPLEMENTED;
            }
            else if (strcmp(argv[2].c_str(), "msginfo") == 0)
            {
                ret = libdo_imp_msginf(&res, (uint32_t *)&res_len);
            }
            else if (strcmp(argv[2].c_str(), "pubkey") == 0)
            {
                ret = -(int32_t)ErrorCode::UNIMPLEMENTED;
            }
            else
            {
                ret = -(int32_t)ErrorCode::NOTSUPPORT_TYPE;
            }
        }
#ifdef SUPPORT_SOTER
        else if (strcmp(argv[1].c_str(), "kmstr") == 0)
        {
            if(strcmp(argv[2].c_str(), "uuid") == 0)
            {
                res = (uint8_t*)malloc(WECHAT_BUFFER_SIZE);
                if (res == NULL)
                {
                    THH_ERROR("malloc %d bytes failed", WECHAT_BUFFER_SIZE);
                    ret = -(int32_t)ErrorCode::UNKNOWN_ERROR;
                }
                else
                {
                    res_len = WECHAT_BUFFER_SIZE;
                    memset(res, 0, WECHAT_BUFFER_SIZE);
                    ret = thh_get_wechat_device_id(res, &res_len);
                }
            }
            else if (strcmp(argv[2].c_str(), "pubkey") == 0)
            {
                res = (uint8_t*)malloc(WECHAT_BUFFER_SIZE);
                if (res == NULL)
                {
                    THH_ERROR("malloc %d bytes failed", WECHAT_BUFFER_SIZE);
                    ret = -(int32_t)ErrorCode::UNKNOWN_ERROR;
                }
                else
                {
                    res_len = WECHAT_BUFFER_SIZE;
                    memset(res, 0, WECHAT_BUFFER_SIZE);
                    ret = thh_export_wechat_public_key(res, &res_len);
                }
            }
            else
            {
                ret = -(int32_t)ErrorCode::NOTSUPPORT_TYPE;
            }
        }
#endif
        else
        {
            ret = -(int32_t)ErrorCode::NOTSUPPORT_TYPE;
        }

        if(!ret)
        {
            THH_INFO("receive data len", res_len);
            output.setToExternal(const_cast<uint8_t*>(res), res_len);
        }
    }
    else if (strcmp(argv[0].c_str(), "reset") == 0)
    {
        // convert hexstring argv[3].c_str()
        res = (uint8_t *) malloc(argv[3].size());
        memset(res, 0x00, argv[3].size());
        res_len = unhexify(res, (const char *)argv[3].c_str(), (uint32_t)argv[3].size());
        if (res_len < 0)
        {
            free(res);
            res = NULL;
            res_len = 0;
        }
        ret = libdo_reset((const char *)res, (uint32_t)res_len);
        if((uint32_t)ret == 0xc0000001)
        {
            ret = (int32_t)ErrorCode::OK;
        }
    }
    else if (strcmp(argv[0].c_str(), "startload") == 0)
    {
	THH_ERROR("thh daemon run startload command");
        cJSON *obj = cJSON_CreateObject();
        cJSON_AddStringToObject(obj, "version", THHDEVICE_VERSION);
        ret = init_thh();
        if(ret)
        {
            THH_ERROR("thh init fail %x", ret);
        }

        ret = libdo_check_thh_status();
        if(ret == 0xff01)
        {
            cJSON_AddBoolToObject(obj, THHDEVICE_THHST, true);
        }
        else
        {
            cJSON_AddBoolToObject(obj, THHDEVICE_THHST, false);
        }
#ifdef SUPPORT_SOTER
	THH_ERROR("thh daemon run startload command, enter wechat check");
        if(is_support_wechat() && thh_check_wechat_key_pair_status() == false)
        {
            ret = thh_gen_wechat_key_pair(4);
            if(ret)
            {
                cJSON_AddBoolToObject(obj, THHDEVICE_WECHATST, false);
                THH_ERROR("wechat init Data fail %x", ret);
            }
            else
            {
                cJSON_AddBoolToObject(obj, THHDEVICE_WECHATST, true);
            }
        }
        else
        {
            cJSON_AddBoolToObject(obj, THHDEVICE_WECHATST, true);
        }
#endif

#ifdef SUPPORT_IFAA
        // ifaa stauts
        res_len = libdo_vfy_ifaae();
        if((uint32_t)res_len == 0xffff0008)
        {
            THH_INFO("ifaa not support, maybe load ta failed");
        }
        else if(res_len == 0)
        {
            cJSON_AddBoolToObject(obj, THHDEVICE_IFAAST, true);
        }
        else
        {
            cJSON_AddBoolToObject(obj, THHDEVICE_IFAAST, false);
        }
#endif

        ret = (int32_t)ErrorCode::OK;

        char *print = cJSON_PrintUnformatted(obj);
        property_set("vendor.soter.teei.thh.info", print);
        if(print)
        {
            free(print);
        }
        cJSON_Delete(obj);
    }
    else if (strcmp(argv[0].c_str(), "import") == 0)
    {
        if(strcmp(argv[1].c_str(), "ifaa") == 0)
        {
            res = (uint8_t *) malloc(argv[3].size());
            memset(res, 0x00, argv[3].size());
            res_len = unhexify(res, (const char *)argv[3].c_str(), (uint32_t)argv[3].size());
            if (res_len < 0)
            {
                free(res);
                res = NULL;
                res_len = 0;
                ret = -(int32_t)ErrorCode::UNIMPLEMENTED;
                THH_ERROR("unhexify data failed %d", res_len);
            }
            else
            {
                ret = libdo_imp_ifaae(res, res_len);
                if (ret)
                {
                    THH_ERROR("write ifaa key failed %x", ret);
                }
            }

        }
        else
        {
            THH_ERROR("import unsupport %s", argv[1].c_str());
            ret = -(int32_t)ErrorCode::NOTSUPPORT_TYPE;
        }
    }
    else if (strcmp(argv[0].c_str(), "active") == 0)
    {
        if(strcmp(argv[2].c_str(), "ret") == 0)
        {
            res = (uint8_t *) malloc(argv[3].size());
            memset(res, 0x00, argv[3].size());
            res_len = unhexify(res, (const char *)argv[3].c_str(), (uint32_t)argv[3].size());
            if (res_len < 0)
            {
                free(res);
                res = NULL;
                res_len = 0;
                ret = -(int32_t)ErrorCode::UNIMPLEMENTED;
            }
            else
            {
                ret = libdo_active_device(argv[2].c_str(), res, res_len);
            }
        }
        else if (strcmp(argv[2].c_str(), "req") == 0)
        {
            ret = libdo_get_active_request(argv[2].c_str(), &res, (uint32_t *)&res_len);
            if(!ret)
            {
                output.setToExternal(const_cast<uint8_t*>(res), res_len);
            }
        }
        else if (strcmp(argv[2].c_str(), "vfy") == 0)
        {
            ret = libdo_active_verify(argv[2].c_str());
        }
        else if (strcmp(argv[2].c_str(), "solution") == 0)
        {
            ret = libdo_get_active_solution(argv[2].c_str());
        }

    }
    else if (strcmp(argv[0].c_str(), "initrpmbk") == 0)
    {
        ret = libdo_write_rpmbkey();
    }
    else if (strcmp(argv[0].c_str(), "initrpmbk_status") == 0)
    {
        ret = libdo_get_rpmb_status();
    }
    else
    {
        ret = (int32_t)ErrorCode::NOTSUPPORT_CMD;
    }
    _hidl_cb(ErrorCode(ret), output);

    if (res)
    {
        free(res);
        res = NULL;
    }
    return Void();
}

}  // namespace implementation
}  // namespace V2_0
}  // namespace keymaster_attestation
}  // namespace hardware
}  // namespace microtrust
}  // namespace vendor
