LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := SoterService

LOCAL_SRC_FILES := $(call all-java-files-under, src) $(call all-Iaidl-files-under, src)

LOCAL_MODULE_TAGS := optional
#LOCAL_PROPRIETARY_MODULE := true
LOCAL_SDK_VERSION := system_current
LOCAL_MODULE_OWNER := mtk

#LOCAL_JACK_ENABLED := disabled

#LOCAL_STATIC_JAVA_LIBRARIES := vendor.qti.hardware.soter-V1.0-java

include $(BUILD_JAVA_LIBRARY)
#include $(BUILD_STATIC_JAVA_LIBRARY)
