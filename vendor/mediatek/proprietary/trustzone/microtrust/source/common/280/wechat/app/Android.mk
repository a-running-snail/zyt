LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_PACKAGE_NAME := SoterServiceApp

LOCAL_CERTIFICATE := platform

LOCAL_MODULE_TAGS := optional
#LOCAL_PROPRIETARY_MODULE := true
LOCAL_SDK_VERSION := system_current
LOCAL_MODULE_OWNER := mtk
#LOCAL_JAVA_LIBRARIES := SoterService
LOCAL_STATIC_JAVA_LIBRARIES := vendor.microtrust.hardware.soter-V1.0-java SoterService
LOCAL_STATIC_JAVA_LIBRARIES += android.hidl.base-V1.0-java

LOCAL_SRC_FILES := $(call all-java-files-under, src)

LOCAL_PROGUARD_ENABLED := disabled

include $(BUILD_PACKAGE)
