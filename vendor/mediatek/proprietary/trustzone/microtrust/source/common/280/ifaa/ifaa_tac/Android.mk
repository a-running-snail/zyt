ifeq ($(MICROTRUST_TEE_SUPPORT),yes)

LOCAL_PATH := $(call my-dir)

#-----------------------------------------------------
include $(CLEAR_VARS)

LOCAL_MODULE := libteeclientjni

LOCAL_SRC_FILES := \
    src/nativeTeeClient.cpp \
    src/kpi.cpp \
    src/utils.cpp

LOCAL_CFLAGS += -Wunused -DKPI_SUPPORTED -DDEBUG_DO -DIMSG_TAG='"IFAA_CA"'
LOCAL_C_INCLUDES += $(LOCAL_PATH)/include

# For NDK build
ifneq ($(ANDROID_VENDOR_PATH),)
LOCAL_CFLAGS += -I../android_backend/$(ANDROID_VERSION)/include
LOCAL_CFLAGS += -I../imsg_log/include
LOCAL_CFLAGS += -I../../optee_client/public
LOCAL_CFLAGS += -DMICROTRUST_TEE_DEBUG_BUILD
LOCAL_LDFLAGS += -L../imsg_log/libs/$(TARGET_ARCH_ABI) -limsg_log
LOCAL_LDFLAGS += -L../../optee_client/libs/$(TARGET_ARCH_ABI) -lmtee
LOCAL_LDFLAGS += -llog -Wl,--allow-shlib-undefined
else
# For Android build
LOCAL_EXPORT_C_INCLUDE_DIRS := $(LOCAL_PATH)/include
LOCAL_SHARED_LIBRARIES := libmtee_hs liblog
LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_OWNER := mtk
endif

include $(BUILD_SHARED_LIBRARY)
#-----------------------------------------------------

endif
