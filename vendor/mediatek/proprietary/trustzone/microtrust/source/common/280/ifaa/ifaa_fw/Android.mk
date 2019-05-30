LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := ifaa_fw

LOCAL_SRC_FILES := $(call all-java-files-under, src) $(call all-Iaidl-files-under, src)

LOCAL_MODULE_TAGS := optional
#LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_PATH := $(TARGET_OUT_JAVA_LIBRARIES)

#LOCAL_STATIC_JAVA_LIBRARIES += mediatek-framework

include $(BUILD_JAVA_LIBRARY)
