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
#define LOG_TAG "wechatservice"

#include <vendor/microtrust/hardware/soter/1.0/ISoter.h>

#include <hidl/HidlTransportSupport.h>
#include <hidl/LegacySupport.h>

#include <log/log.h>
#include "Soter.h"

using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;

// add for join sp thread
using android::sp;
using android::status_t;
using android::OK;


using vendor::microtrust::hardware::soter::V1_0::ISoter;
using vendor::microtrust::hardware::soter::V1_0::implementation::Soter;

int main() {
    ALOGI("Soter Hardware service is starting");
    android::sp<ISoter> service = new Soter();

    configureRpcThreadpool(1, true /* callerWillJoin */);

    status_t status = service->registerAsService();
    if (status == OK) {
        ALOGI("soter HAL Ready.");
        joinRpcThreadpool();
    } else {
        ALOGE("Could not register service (%d).",  status);
    }

    // In normal operation, we don't expect the thread pool to exit
    ALOGE("soter Hardware service is shutting down");

    return 1;

}
