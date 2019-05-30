ifneq ($(MTK_EMULATOR_SUPPORT), yes)
ifeq ($(MICROTRUST_TEE_SUPPORT), yes)

LOCAL_PATH := $(call my-dir)

# --------------------------------------------------
include $(CLEAR_VARS)
LOCAL_MODULE := libTEECommon
LOCAL_MODULE_TAGS := optional
LOCAL_SRC_FILES_64 := arm64-v8a/libmtee.so
LOCAL_SRC_FILES_32 := armeabi/libmtee.so
LOCAL_EXPORT_C_INCLUDE_DIRS := $(LOCAL_PATH)/include
LOCAL_MULTILIB := both
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
LOCAL_MODULE_SUFFIX := .so
PLATFORM_VERSION_MAJOR := $(word 1,$(subst .,$(space),$(PLATFORM_VERSION)))
ifneq ($(PLATFORM_VERSION_MAJOR), 6)
LOCAL_PROPRIETARY_MODULE := true
endif
include $(BUILD_PREBUILT)

# --------------------------------------------------
include $(CLEAR_VARS)
# hs is short for high speed
LOCAL_MODULE := libmtee_hs
LOCAL_MODULE_TAGS := optional
LOCAL_SRC_FILES_64 := arm64-v8a/libmtee.so
LOCAL_SRC_FILES_32 := armeabi/libmtee.so
LOCAL_EXPORT_C_INCLUDE_DIRS := $(LOCAL_PATH)/include
LOCAL_MULTILIB := both
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
LOCAL_MODULE_SUFFIX := .so
PLATFORM_VERSION_MAJOR := $(word 1,$(subst .,$(space),$(PLATFORM_VERSION)))
ifneq ($(PLATFORM_VERSION_MAJOR), 6)
LOCAL_PROPRIETARY_MODULE := true
endif
include $(BUILD_PREBUILT)

# --------------------------------------------------
endif #ifeq ($(MICROTRUST_TEE_SUPPORT), yes)
endif #ifneq ($(MTK_EMULATOR_SUPPORT), yes)
