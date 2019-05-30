LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libthhclient
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
LOCAL_SRC_FILES_arm := lib/armeabi-v7a/libthhclient.so
LOCAL_SRC_FILES_arm64 := lib/arm64-v8a/libthhclient.so
LOCAL_MODULE_SUFFIX := .so
LOCAL_MULTILIB := both
LOCAL_PROPRIETARY_MODULE := true
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)

LOCAL_MODULE := vendor.microtrust.hardware.thh@2.0-service

ifeq ($(strip $(MICROTRUST_THH_SUPPORT)), yes)
LOCAL_INIT_RC := vendor.microtrust.hardware.thh@2.0-service.rc
endif

ifeq ($(strip $(MTK_SOTER_SUPPORT)), yes)
LOCAL_CFLAGS+=-DSUPPORT_SOTER
endif

ifeq ($(strip $(MICROTRUST_IFAA_SUPPORT)), yes)
LOCAL_CFLAGS+=-DSUPPORT_IFAA
endif

LOCAL_MODULE_RELATIVE_PATH := hw
LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true

LOCAL_SRC_FILES := \
    service.cpp \
    ThhDevice.cpp \

LOCAL_SHARED_LIBRARIES := \
    libutils \
    libhidlbase \
    libhidltransport \
    vendor.microtrust.hardware.thh@2.0.vendor \
    libimsg_log \
    libthhclient \
    libdl \
    libhardware \
    libcutils

ifneq ($(filter yes, $(MTK_SOTER_SUPPORT) $(MICROTRUST_THH_SUPPORT)),)
LOCAL_SHARED_LIBRARIES += \
    wechat.beanpod
endif

include $(BUILD_EXECUTABLE)
