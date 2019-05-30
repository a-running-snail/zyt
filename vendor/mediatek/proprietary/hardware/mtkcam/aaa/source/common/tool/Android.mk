################################################################################
#Debug
#-------"."
#$(info "TOP path "$(TOP)")
#------"vendor/mediatek/proprietary/hardware/mtkcam/legacy/platform/mt6755"
#$(info "MTK_MTKCAM_PLATFORM path"$(MTK_MTKCAM_PLATFORM)")
#------"vendor/mediatek/proprietary"
#$(info "MTK_PATH_SOURCE path"$(MTK_PATH_SOURCE)")
#------"vendor/mediatek/proprietary/platform/mt6755"
#$(info "MTK_PATH_PLATFORM path"$(MTK_PATH_PLATFORM)")
#------"./vendor/mediatek/proprietary/hardware/mtkcam/legacy/include/mtkcam"
#$(info "MTKCAM_C_INCLUDES path"$(MTKCAM_C_INCLUDES)")
#------"vendor/mediatek/proprietary/custom/k55v1_64"
#$(info "MTK_PATH_CUSTOM path"$(MTK_PATH_CUSTOM)")
#------"vendor/mediatek/proprietary/custom/mt6755"
#$(info "MTK_PATH_CUSTOM_PLATFORM path"$(MTK_PATH_CUSTOM_PLATFORM)")
#------"vendor/mediatek/proprietary"
#$(info "MTK_ROOT path"$(MTK_ROOT)")
#------""
#$(info "MTKCAM_3A_INCLUDE path"$(MTKCAM_3A_INCLUDE)")
################################################################################

################################################################################
# Main_test
#
################################################################################

ifeq ($(TARGET_BOARD_PLATFORM), mt6799)
COMMON_TGT_BD_PLATFORM := mt6799
ifeq ($(strip $(MTK_CAM_SW_VERSION)),ver2)
SPECIFIC_TGT_BD_PLATFORM := mt6799p
else
SPECIFIC_TGT_BD_PLATFORM := mt6799
endif
endif

ifeq ($(TARGET_BOARD_PLATFORM), mt6757)
COMMON_TGT_BD_PLATFORM := mt6757
ifeq ($(strip $(MTK_CAM_SW_VERSION)),ver2)
SPECIFIC_TGT_BD_PLATFORM := mt6757p
else
SPECIFIC_TGT_BD_PLATFORM := mt6757
endif
endif

ifeq ($(TARGET_BOARD_PLATFORM), mt6763)
COMMON_TGT_BD_PLATFORM := mt6763
SPECIFIC_TGT_BD_PLATFORM := mt6763
endif

ifeq ($(TARGET_BOARD_PLATFORM), mt6775)
COMMON_TGT_BD_PLATFORM := isp_50
SPECIFIC_TGT_BD_PLATFORM := isp_50
endif

ifeq ($(TARGET_BOARD_PLATFORM), mt6771)
COMMON_TGT_BD_PLATFORM := isp_50
SPECIFIC_TGT_BD_PLATFORM := isp_50
endif

ifeq ($(TARGET_BOARD_PLATFORM), mt6779)
COMMON_TGT_BD_PLATFORM := isp_60
SPECIFIC_TGT_BD_PLATFORM := isp_60
endif

ifeq ($(TARGET_BOARD_PLATFORM), mt3967)
COMMON_TGT_BD_PLATFORM := isp_50
SPECIFIC_TGT_BD_PLATFORM := isp_50
endif

ifeq ($(TARGET_BOARD_PLATFORM), mt6765)
COMMON_TGT_BD_PLATFORM := mt6765
SPECIFIC_TGT_BD_PLATFORM := mt6765
endif

ifneq (,$(filter $(TARGET_BOARD_PLATFORM), mt6739 mt6761))
COMMON_TGT_BD_PLATFORM := $(TARGET_BOARD_PLATFORM)
SPECIFIC_TGT_BD_PLATFORM := isp_30
endif

################################################################################
ifneq (,$(filter $(SPECIFIC_TGT_BD_PLATFORM), mt6757p mt6799 mt6799p mt6763 isp_50 mt6765 isp_30 isp_60))
LOCAL_PATH := $(call my-dir)


include $(CLEAR_VARS)

#-----------------------------------------------------------
sinclude $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/mtkcam.mk

#-----------------------------------------------------------
LOCAL_SRC_FILES += camtool.cpp

#-----------------------------------------------------------
#-----------------------------------------------------------
LOCAL_C_INCLUDES += $(MTKCAM_C_INCLUDES)
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/middleware/common/include
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/gralloc_extra/include
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/ext/include

LOCAL_C_INCLUDES += system/media/camera/include
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/include
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_PLATFORM)/hardware/include
#
LOCAL_C_INCLUDES += $(TOP)/bionic $(TOP)/external/stlport/stlport
#
LOCAL_C_INCLUDES += $(MTK_PATH_CUSTOM)/kernel/imgsensor/inc
LOCAL_C_INCLUDES += $(MTK_PATH_CUSTOM)/hal/inc/camera_feature
LOCAL_C_INCLUDES += $(MTK_PATH_CUSTOM_PLATFORM)/hal/inc/
LOCAL_C_INCLUDES += $(MTK_PATH_CUSTOM_PLATFORM)/hal/inc/$(MTK_CAM_SW_VERSION)
LOCAL_C_INCLUDES += $(MTK_PATH_CUSTOM_PLATFORM)/hal/inc/aaa
LOCAL_C_INCLUDES += $(MTK_PATH_CUSTOM_PLATFORM)/hal/inc/isp_tuning
LOCAL_C_INCLUDES += $(MTK_PATH_CUSTOM)/hal/inc
LOCAL_C_INCLUDES += $(MTK_PATH_CUSTOM)/hal/camera
LOCAL_C_INCLUDES += $(MTK_PATH_CUSTOM_PLATFORM)/cgen/cfgfileinc
#LOCAL_C_INCLUDES += $(MTKCAM_3A_INCLUDE)/
#LOCAL_C_INCLUDES += $(MTKCAM_3A_INCLUDE)/Hal3
#
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/include/mtkcam
#
LOCAL_C_INCLUDES += $(MTKCAM_C_INCLUDES)/..
LOCAL_C_INCLUDES += $(TOP)/$(MTK_MTKCAM_PLATFORM)/include
LOCAL_C_INCLUDES += $(TOP)/$(MTK_MTKCAM_PLATFORM)/include/mtkcam/featureio
LOCAL_C_INCLUDES += $(TOP)/$(MTK_MTKCAM_PLATFORM)/core/featureio/pipe/aaa/isp_mgr
LOCAL_C_INCLUDES += $(TOP)/$(MTK_MTKCAM_PLATFORM)/core/featureio/pipe/aaa/ispdrv_mgr
LOCAL_C_INCLUDES += $(TOP)/$(MTK_MTKCAM_PLATFORM)/include/mtkcam/drv/
LOCAL_C_INCLUDES += $(TOP)/$(MTK_MTKCAM_PLATFORM)/core/imageio/inc/
LOCAL_C_INCLUDES += $(TOP)/$(MTK_MTKCAM_PLATFORM)/include/mtkcam/acdk/

# add by Jokery for mt6757
LOCAL_C_INCLUDES += $(MTK_PATH_CUSTOM_PLATFORM)/hal/inc/acdk
LOCAL_C_INCLUDES += $(MTK_PATH_CUSTOM_PLATFORM)/hal/inc/acdk/$(MTK_CAM_SW_VERSION)
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/include
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/drv/include/$(COMMON_TGT_BD_PLATFORM)/drv
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/drv/src/isp/$(COMMON_TGT_BD_PLATFORM)/inc
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/aaa/include
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/aaa/source/$(SPECIFIC_TGT_BD_PLATFORM)/isp_mgr
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/aaa/source/$(SPECIFIC_TGT_BD_PLATFORM)/isp_mgr/$(TARGET_BOARD_PLATFORM)
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/aaa/source/$(SPECIFIC_TGT_BD_PLATFORM)/ispdrv_mgr
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/aaa/source/$(SPECIFIC_TGT_BD_PLATFORM)/ispdrv_mgr/$(TARGET_BOARD_PLATFORM)
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/include/algorithm/$(COMMON_TGT_BD_PLATFORM)
LOCAL_C_INCLUDES += $(MTK_PATH_SOURCE)/hardware/libcamera_feature/libdngop_lib/include

ifeq (,$(filter $(SPECIFIC_TGT_BD_PLATFORM), mt6757p mt6799 mt6799p mt6763))
LOCAL_C_INCLUDES += $(TOP)/$(MTK_PATH_SOURCE)/hardware/mtkcam/drv/include/dip/$(COMMON_TGT_BD_PLATFORM)
endif

#-----------------------------------------------------------
LOCAL_CFLAGS += $(MTKCAM_CFLAGS)

ifeq (,$(filter $(SPECIFIC_TGT_BD_PLATFORM), mt6757p mt6799 mt6799p mt6763 mt6765))
LOCAL_CFLAGS += -DINCLUDE_DIP
endif

# vector
LOCAL_SHARED_LIBRARIES += \
    liblog \
    libcutils \
    libutils

#-----------------------------------------------------------
LOCAL_WHOLE_STATIC_LIBRARIES +=
#
LOCAL_STATIC_LIBRARIES +=
#
#-----------------------------------------------------------
LOCAL_PRELINK_MODULE := false
LOCAL_MODULE_TAGS := eng
LOCAL_MODULE := camtool
LOCAL_MODULE_OWNER := mtk
LOCAL_PROPRIETARY_MODULE := false

#-----------------------------------------------------------

# End of common part ---------------------------------------

include $(MTK_EXECUTABLE)

endif
################################################################################
