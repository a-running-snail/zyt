#define LOG_NDEBUG 0
#define LOG_TAG "IFAA-Manager-Interface"

#include <utils/Log.h>
#include <utils/misc.h>
#include <utils/threads.h>

#include <string>

#include <assert.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#include <log/log.h>
#include <cutils/log.h>

#include <vendor/microtrust/hardware/ifaa/1.0/IIFAADevice.h>
#include <vendor/microtrust/hardware/ifaa/1.0/types.h>

#include "ifaa_manager_interface.h"

using ::android::hardware::Return;
using ::android::hardware::hidl_vec;
using ::android::sp;
using ::vendor::microtrust::hardware::ifaa::V1_0::IIFAADevice;
using ::vendor::microtrust::hardware::ifaa::V1_0::ErrorCode;

int daemonProcessCmd(const uint8_t* param, size_t size_param, uint8_t** result, size_t* size_result)
{
    if(NULL == param || size_param < 1 || NULL == result || NULL == size_result){
        ALOGE("Parameter missing.");
        return -1;
    }

    ErrorCode error = ErrorCode::ERROR_UNKNOWN;
    android::hardware::hidl_vec<uint8_t> input;
    const android::sp<IIFAADevice> dev = IIFAADevice::getService();

    if (dev != 0) {
        input.setToExternal(const_cast<unsigned char*>(param), size_param);

        auto hidlCb = [&](ErrorCode ret,const hidl_vec<uint8_t>& output) {
            error = ret;
            if(ErrorCode::OK != error)
                return;
            if(output.size() < 1){
                error = ErrorCode::ERROR_UNKNOWN;
                return;
            }

            *result = reinterpret_cast<uint8_t*> (malloc(output.size()));
            if (NULL == *result) {
                ALOGE("Error allocation buffer for output");
                error = ErrorCode::ERROR_UNKNOWN;
                return;
            }
            *size_result = output.size();
            memcpy(*result,output.data(),*size_result);
        };
	Return<void> rc = dev->processCmd(input, hidlCb);
	if (!rc.isOk()) {
            error = ErrorCode::ERROR_UNKNOWN;
            ALOGE("HIDL call failed. ");
        }
    }else{
        ALOGE("Access daemon failed.");
    }
    return  static_cast<int> (error);
}
