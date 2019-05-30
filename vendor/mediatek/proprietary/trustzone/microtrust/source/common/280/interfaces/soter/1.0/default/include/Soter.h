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

#ifndef HIDL_GENERATED_vendor_microtrust_hardware_soter_V1_0_Soter_H_
#define HIDL_GENERATED_vendor_microtrust_hardware_soter_V1_0_Soter_H_

#include <vendor/microtrust/hardware/soter/1.0/ISoter.h>
#include <vendor/microtrust/hardware/soter/1.0/types.h>
#include <hidl/Status.h>

#include <hidl/MQDescriptor.h>
namespace vendor {
namespace microtrust {
namespace hardware {
namespace soter {
namespace V1_0 {
namespace implementation {

using ::vendor::microtrust::hardware::soter::V1_0::ISoter;
using ::vendor::microtrust::hardware::soter::V1_0::SoterErrorCode;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::hardware::hidl_vec;
using ::android::hardware::hidl_string;
using ::android::sp;

#define UNUSED(x) (void)(x)

class Soter : public ISoter {
    public:
        Soter();
        ~Soter();

    Return<SoterErrorCode> generateAttkKeyPair(uint8_t copyNum) override;

    Return<SoterErrorCode> verifyAttkKeyPair() override;

    Return<void> exportAttkPublicKey(exportAttkPublicKey_cb _hidl_cb) override;

    Return<void> getDeviceId(getDeviceId_cb _hidl_cb) override;

    Return<SoterErrorCode> generateAskKeyPair(uint32_t uid) override;

    Return<void> exportAskPublicKey(uint32_t uid, exportAskPublicKey_cb _hidl_cb) override;

    Return<SoterErrorCode> removeAllUidKey(uint32_t uid) override;

    Return<SoterErrorCode> hasAskAlready(uint32_t uid) override;

    Return<SoterErrorCode> generateAuthKeyPair(uint32_t uid, const hidl_string& name) override;

    Return<void> exportAuthKeyPublicKey(uint32_t uid, const hidl_string& name, exportAuthKeyPublicKey_cb _hidl_cb) override;

    Return<SoterErrorCode> removeAuthKey(uint32_t uid, const hidl_string& name) override;

    Return<SoterErrorCode> hasAuthKey(uint32_t uid, const hidl_string& name) override;

    Return<void> initSign(uint32_t uid, const hidl_string& name, const hidl_string& challenge, initSign_cb _hidl_cb) override;

    Return<void> finishSign(uint64_t session, finishSign_cb _hidl_cb) override;
};

}  // namespace implementation
}  // namespace V1_0
}  // namespace soter
}  // namespace hardware
}  // namespace microtrust
}  // namespace vendor

#endif  // HIDL_GENERATED_vendor_microtrust_hardware_soter_V1_0_Soter_H_
