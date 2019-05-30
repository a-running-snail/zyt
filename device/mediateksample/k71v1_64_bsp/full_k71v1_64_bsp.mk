# Inherit for devices that support 64-bit primary and 32-bit secondary zygote startup script
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)

# Inherit from those products. Most specific first.
#$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)
# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base.mk)

# Set target and base project for flavor build
MTK_TARGET_PROJECT := $(subst full_,,$(TARGET_PRODUCT))
MTK_BASE_PROJECT := $(MTK_TARGET_PROJECT)
MTK_PROJECT_FOLDER := $(LOCAL_PATH)
MTK_TARGET_PROJECT_FOLDER := $(LOCAL_PATH)

# This is where we'd set a backup provider if we had one
#$(call inherit-product, device/sample/products/backup_overlay.mk)
$(call inherit-product, $(LOCAL_PATH)/device.mk)

# set locales & aapt config.
include $(LOCAL_PATH)/ProjectConfig.mk
include $(wildcard $(LOCAL_PATH)/RuntimeSwitchConfig.mk)

#prize-include PrizeConfig.mk and PrizeProperty.mk-lanwm-20180106-begin
PRIZE_CONFIG_FILE = device/mediateksample/prize/PrizeConfig.mk
PRIZE_PROPERTY_FILE = device/mediateksample/prize/PrizeProperty.mk
ifeq ($(PRIZE_CONFIG_FILE), $(wildcard $(PRIZE_CONFIG_FILE)))
    include  $(PRIZE_CONFIG_FILE)
else
    $(warning #####$(PRIZE_CONFIG_FILE) Not Exist.)
endif
ifeq ($(PRIZE_PROPERTY_FILE), $(wildcard $(PRIZE_PROPERTY_FILE)))
    include  $(PRIZE_PROPERTY_FILE)
else
    $(warning #####$(PRIZE_PROPERTY_FILE) Not Exist.)
endif
#prize-include PrizeConfig.mk and PrizeProperty.mk-lanwm-20180106-end

#prize-yuanlongjun-20180829-modify-start
#PRODUCT_LOCALES := en_US zh_CN zh_TW es_ES pt_BR ru_RU fr_FR de_DE tr_TR vi_VN ms_MY in_ID th_TH it_IT ar_EG hi_IN bn_IN ur_PK fa_IR pt_PT nl_NL el_GR hu_HU tl_PH ro_RO cs_CZ ko_KR km_KH iw_IL my_MM pl_PL es_US bg_BG hr_HR lv_LV lt_LT sk_SK uk_UA de_AT da_DK fi_FI nb_NO sv_SE en_GB hy_AM zh_HK et_EE ja_JP kk_KZ sr_RS sl_SI ca_ES
ifeq ($(strip $(PRIZE_GMS_SEND_TEST_TYPE)),RUSSIA)
    PRODUCT_LOCALES := ru_RU en_US zh_CN zh_TW es_ES pt_BR fr_FR de_DE tr_TR vi_VN ms_MY in_ID th_TH it_IT ar_EG hi_IN bn_IN ur_PK fa_IR pt_PT nl_NL el_GR hu_HU tl_PH ro_RO cs_CZ ko_KR km_KH iw_IL my_MM pl_PL es_US bg_BG hr_HR lv_LV lt_LT sk_SK uk_UA de_AT da_DK fi_FI nb_NO sv_SE en_GB hy_AM zh_HK et_EE ja_JP kk_KZ sr_RS sl_SI ca_ES
else
    ifneq ($(PRIZE_DEF_LANGUAGE), )
        #prize modify by wuliang 20190127 blu start
        ifeq ($(strip $(ODM_OVERSEA_CUSTOMER)),BLU)
            PRODUCT_LOCALES := $(PRIZE_DEF_LANGUAGE) en_US en_GB es_US es_ES pt_PT pt_BR nl_NL zh_CN zh_TW fr_FR de_DE el_GR hu_HU cs_CZ pl_PL ar_EG fa_IR sr_RS ru_RU iw_IL bg_BG hr_HR th_TH ja_JP tl_PH in_ID vi_VN my_MM bn_BD km_KH ro_RO ko_KR sk_SK ms_MY tr_TR uk_UA sq_AL
        else
		    #prize modify by liyuchong 20190326 add ar_DZ begin
            PRODUCT_LOCALES := $(PRIZE_DEF_LANGUAGE) en_US zh_CN zh_TW es_ES pt_BR ru_RU fr_FR de_DE tr_TR vi_VN ms_MY in_ID th_TH it_IT ar_EG ar_DZ hi_IN bn_IN ur_PK fa_IR pt_PT nl_NL el_GR hu_HU tl_PH ro_RO cs_CZ ko_KR km_KH iw_IL my_MM pl_PL es_US bg_BG hr_HR lv_LV lt_LT sk_SK uk_UA de_AT da_DK fi_FI nb_NO sv_SE en_GB hy_AM zh_HK et_EE ja_JP kk_KZ sr_RS sl_SI ca_ES
			#prize modify by liyuchong 20190326 add ar_DZ end
        endif
        #prize modify by wuliang 20190127 blu end
    endif
endif
#prize-yuanlongjun-20180829-modify-end

# Set those variables here to overwrite the inherited values.
PRODUCT_MANUFACTURER := halove
PRODUCT_NAME := full_k71v1_64_bsp
PRODUCT_DEVICE := k71v1_64_bsp
PRODUCT_MODEL := H2 Plus
PRODUCT_POLICY := android.policy_phone
PRODUCT_BRAND := halove

ifeq ($(TARGET_BUILD_VARIANT), eng)
KERNEL_DEFCONFIG ?= k71v1_64_bsp_debug_defconfig
else
KERNEL_DEFCONFIG ?= k71v1_64_bsp_defconfig
endif
PRELOADER_TARGET_PRODUCT ?= k71v1_64_bsp
LK_PROJECT ?= k71v1_64_bsp
TRUSTY_PROJECT ?= k71v1_64_bsp
