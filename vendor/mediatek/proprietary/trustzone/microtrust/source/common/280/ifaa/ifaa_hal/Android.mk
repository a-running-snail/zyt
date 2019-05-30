LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libifaa_hal

LOCAL_SRC_FILES := ifaa_manager_interface.cpp

LOCAL_C_INCLUDES:= $(LOCAL_PATH)

LOCAL_SHARED_LIBRARIES := \
        liblog \
        libcutils \
        libutils \
        libhidlbase \
        libhidltransport \
        libc \
        vendor.microtrust.hardware.ifaa@1.0

#LOCAL_CFLAGS := -Wall -Werror -g
LOCAL_LDFLAGS := -Wl,--unresolved-symbols=ignore-all
#LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_TAGS := optional

LOCAL_EXPORT_C_INCLUDE_DIRS := $(LOCAL_PATH)
LOCAL_ADDITIONAL_DEPENDENCIES := $(LOCAL_PATH)/Android.mk

include $(BUILD_SHARED_LIBRARY)

include $(call all-makefiles-under, $(LOCAL_PATH))
