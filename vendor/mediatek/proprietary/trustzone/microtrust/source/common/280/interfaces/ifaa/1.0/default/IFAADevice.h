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

#ifndef HIDL_GENERATED_vendor_microtrust_hardware_ifaa_V1_0_IFAADevice_H_
#define HIDL_GENERATED_vendor_microtrust_hardware_ifaa_V1_0_IFAADevice_H_

#include <vendor/microtrust/hardware/ifaa/1.0/IIFAADevice.h>
#include <vendor/microtrust/hardware/ifaa/1.0/types.h>
#include <hidl/Status.h>

#include <hidl/MQDescriptor.h>
namespace vendor {
namespace microtrust {
namespace hardware {
namespace ifaa {
namespace V1_0 {
namespace implementation {

using ::vendor::microtrust::hardware::ifaa::V1_0::IIFAADevice;
using ::vendor::microtrust::hardware::ifaa::V1_0::ErrorCode;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::hardware::hidl_vec;
using ::android::hardware::hidl_string;
using ::android::sp;

class IFAADevice : public IIFAADevice {
	public:
		IFAADevice();
		~IFAADevice();

		////Return<ErrorCode> processCmd(const hidl_vec<uint8_t>& input, processCmd_cb _hidl_cb) override;
		Return<void> processCmd(const hidl_vec<uint8_t>& input, processCmd_cb _hidl_cb) override;

};

//extern "C" IIFAADevice* HIDL_FETCH_IIFAADevice(const char* name);

}  // namespace implementation
}  // namespace V1_0
}  // namespace ifaa
}  // namespace hardware
}  // namespace microtrust
}  // namespace vendor

#endif  // HIDL_GENERATED_vendor_microtrust_hardware_ifaa_V1_0_IFAADevice_H_
