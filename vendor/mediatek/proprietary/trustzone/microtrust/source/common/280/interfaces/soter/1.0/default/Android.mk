LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := wechat.beanpod

LOCAL_SRC_FILES := soter_ca.cpp

LOCAL_CFLAGS += -Wunused -DKPI_SUPPORTED -DDEBUG_DO -DIMSG_TAG='"SOTER_CA"'
LOCAL_C_INCLUDES += $(LOCAL_PATH)/include \
                    external/openssl/include \

LOCAL_EXPORT_C_INCLUDE_DIRS := $(LOCAL_PATH)/include \

LOCAL_SHARED_LIBRARIES := libmtee \
                    	libhardware \
                        libdl \
			libcutils

LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_OWNER := mtk
LOCAL_LDLIBS    += -llog

include $(BUILD_SHARED_LIBRARY)


include $(CLEAR_VARS)
LOCAL_MODULE := vendor.microtrust.hardware.soter@1.0-service
LOCAL_INIT_RC := vendor.microtrust.hardware.soter@1.0-service.rc

LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true

LOCAL_MODULE_RELATIVE_PATH := hw
LOCAL_MODULE_OWNER := mtk

LOCAL_SRC_FILES := \
    service.cpp \
    Soter.cpp \


LOCAL_C_INCLUDES += $(LOCAL_PATH)/include \
                 external/openssl/include \

LOCAL_SHARED_LIBRARIES := \
    liblog \
    libcutils \
    libdl \
    libbase \
    libutils \
    libhardware \
    libhidlbase \
    libhidltransport \
    vendor.microtrust.hardware.soter@1.0.vendor \
    libmtee \
    libimsg_log \
    libssl \
    wechat.beanpod \
    libcrypto libdl

include $(BUILD_EXECUTABLE)
