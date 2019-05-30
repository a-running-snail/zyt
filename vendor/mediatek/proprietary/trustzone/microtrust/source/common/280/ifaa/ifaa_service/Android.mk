LOCAL_PATH := $(call my-dir)

IFAA_JNI_PATH := src/jni

include $(CLEAR_VARS)

LOCAL_MODULE := libifaa_jni

LOCAL_C_INCLUDES += $(JNI_H_INCLUDE)
LOCAL_SRC_FILES := $(IFAA_JNI_PATH)/org_ifaa_android_service_IFAANative.cpp

LOCAL_MODULE_TAGS := optional
#LOCAL_PROPRIETARY_MODULE := true
LOCAL_CFLAGS := -Wall -Wextra -Werror -Wunused

LOCAL_SHARED_LIBRARIES := \
	liblog \
	libcutils \
	libutils \
	libc \
	libifaa_hal

include $(BUILD_SHARED_LIBRARY)

############################ build ifaa_service ############################
include $(CLEAR_VARS)

IFAA_SERVICE_JAVA_PATH := src/java

LOCAL_PACKAGE_NAME := ifaa_service

LOCAL_STATIC_JAVA_LIBRARIES := ifaa_fw

LOCAL_CERTIFICATE := platform
LOCAL_MODULE_OWNER := mtk

LOCAL_MODULE_TAGS := optional
#LOCAL_PROPRIETARY_MODULE := true

LOCAL_SHARED_LIBRARIES += libifaa_jni

LOCAL_SRC_FILES := $(call all-java-files-under, $(IFAA_SERVICE_JAVA_PATH))

LOCAL_PROGUARD_ENABLED := disabled

#LOCAL_SDK_VERSION := system_current
LOCAL_PRIVATE_PLATFORM_APIS := true
LOCAL_STATIC_JAVA_LIBRARIES += mediatek-framework

include $(BUILD_PACKAGE)
