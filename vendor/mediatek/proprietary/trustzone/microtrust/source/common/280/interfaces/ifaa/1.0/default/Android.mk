LOCAL_PATH := $(call my-dir)

#include $(CLEAR_VARS)
#LOCAL_MODULE := vendor.microtrust.hardware.ifaa@1.0-impl
#LOCAL_PROPRIETARY_MODULE := true
#LOCAL_MODULE_RELATIVE_PATH := hw
#LOCAL_MODULE_OWNER := mtk
#LOCAL_SRC_FILES := \
#    IFAADevice.cpp \
#
#LOCAL_C_INCLUDES += \
#        $(LOCAL_PATH)/include \
#        $(TARGET_OUT_INTERMEDIATES)/KERNEL_OBJ/usr/include \
#        vendor/microtrust/proprietary/trustzone/microtrust/source/platform/mt6797/external/libteeclientjni/include
#
#
#LOCAL_SHARED_LIBRARIES := \
#    liblog \
#    libhidlbase \
#    libhidltransport \
#    libutils \
#    libhardware \
#libteeclientjni \
#    vendor.microtrust.hardware.ifaa@1.0
#
#include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := vendor.microtrust.hardware.ifaa@1.0-service
LOCAL_INIT_RC := vendor.microtrust.hardware.ifaa@1.0-service.rc

LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true

LOCAL_MODULE_RELATIVE_PATH := hw
LOCAL_MODULE_OWNER := mtk

LOCAL_SRC_FILES := \
    service.cpp \
    IFAADevice.cpp

LOCAL_C_INCLUDES += $(LOCAL_PATH)/include \

LOCAL_SHARED_LIBRARIES := \
    liblog \
    libcutils \
    libdl \
    libbase \
    libutils \
    libhardware \
    libhidlbase \
    libhidltransport \
    vendor.microtrust.hardware.ifaa@1.0 \
    libteeclientjni \

include $(BUILD_EXECUTABLE)
