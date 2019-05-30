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

#define LOG_TAG "vendor.microtrust.hardware.ifaa@1.0-impl"
#include "IFAADevice.h"

#include <nativeTeeClient.h>
#include <cutils/log.h>
#include <dlfcn.h>

//#include <nativeTeeClient.h>

namespace vendor {
namespace microtrust {
namespace hardware {
namespace ifaa {
namespace V1_0 {
namespace implementation {

IFAADevice::IFAADevice() {
    ALOGE("init ifaa device HAL.\n");
}

IFAADevice::~IFAADevice() {

    ALOGE("finalize ifaa device HAL");
}

Return<void> IFAADevice::processCmd(const hidl_vec<uint8_t>& input, processCmd_cb _hidl_cb) {

    ErrorCode ret = ErrorCode::OK;
    hidl_vec<uint8_t> output;
    uint32_t res_len = 5120;
    unsigned char* res = (unsigned char*)malloc(res_len);

//    ALOGE("Calling processCmd.");

    ret = (ErrorCode)invoke_command((void *)input.data(), input.size(), res, &res_len);

    if (ErrorCode::OK == ret && NULL != res && res_len > 0) {
        output.setToExternal(const_cast<unsigned char*>(res), res_len);
    }

    _hidl_cb(ErrorCode(ret), output);

    if (res) {
        free (res);
        res = NULL;
    }
    return Void();
}

//IIFAADevice* HIDL_FETCH_IIFAADevice(const char* name) {
//
//	ALOGI("%s Fetching ifaa device name %s", __func__, name);
//	return new IFAADevice();
//}

}  // namespace implementation
}  // namespace V1_0
}  // namespace ifaa
}  // namespace hardware
}  // namespace microtrust
}  // namespace vendor
