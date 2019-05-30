include $(TRUSTZONE_CUSTOM_BUILD_PATH)/common_config.mk

MICROTRUST_TEE_VERSION ?= 280

$(info "build\microtrust_config.mk:MICROTRUST_TEE_VERSION=$(MICROTRUST_TEE_VERSION)")
ATF_GLOBAL_MAKE_OPTION += MICROTRUST_TEE_VERSION=$(MICROTRUST_TEE_VERSION)

ifeq ($(TARGET_BUILD_VARIANT),eng)
  MICROTRUST_INSTALL_MODE ?= Debug
else
  MICROTRUST_INSTALL_MODE ?= Release
endif
ifeq ($(MICROTRUST_INSTALL_MODE),Debug)
  MICROTRUST_INSTALL_MODE_LC := debug
else
  MICROTRUST_INSTALL_MODE_LC := release
endif

MICROTRUST_UT_SDK_HOME := vendor/mediatek/proprietary/trustzone/microtrust/ut_sdk/$(MICROTRUST_TEE_VERSION)

export UT_SDK_HOME := $(abspath $(MICROTRUST_UT_SDK_HOME))
export UT_SDK_DIR := $(MICROTRUST_UT_SDK_HOME)
$(info Microtrust SDK PATH $(MICROTRUST_UT_SDK_HOME) $(UT_SDK_DIR))

ifneq ($(wildcard $(UT_SDK_HOME)),)

MICROTRUST_PRIVATE_TRUSTLET_PATH := $(MTK_PATH_SOURCE)/trustzone/trustonic/private/trustlets
MICROTRUST_PROTECT_TRUSTLET_PATH := $(MTK_PATH_SOURCE)/trustzone/microtrust/secure/trustlets
MICROTRUST_SOURCE_TRUSTLET_PATH := $(MTK_PATH_SOURCE)/trustzone/microtrust/source/trustlets
MICROTRUST_ALL_MODULE_MAKEFILE :=
# $(1): path
# $(2): common or platform
# $(3): sub-path
define mtk_microtrust_find_module_makefile
$(firstword \
  $(wildcard \
    $(MICROTRUST_PRIVATE_TRUSTLET_PATH)/$(strip $(1))/$(if $(filter platform,$(2)),platform/$(ARCH_MTK_PLATFORM),$(strip $(2)))/$(strip $(3))/Makefile \
    $(MICROTRUST_PROTECT_TRUSTLET_PATH)/$(strip $(1))/$(if $(filter platform,$(2)),platform/$(ARCH_MTK_PLATFORM),$(strip $(2)))/$(strip $(3))/Makefile \
    $(MICROTRUST_SOURCE_TRUSTLET_PATH)/$(strip $(1))/$(if $(filter platform,$(2)),platform/$(ARCH_MTK_PLATFORM),$(strip $(2)))/$(strip $(3))/Makefile \
  )\
)
endef
include $(MTK_PATH_SOURCE)/trustzone/microtrust/source/build/platform/$(ARCH_MTK_PLATFORM)/microtrust_config.mk

MICROTRUST_OUTPUT_PATH ?= $(TARGET_OUT_INTERMEDIATES)/MICROTRUST_OBJ
MICROTRUST_INSTALL_PATH := $(TARGET_OUT_VENDOR)/thh/ta
ifeq ($(strip $(TARGET_ARCH)),arm64)
MICROTRUST_HAL_OUTPUT_PATH := $($(TARGET_2ND_ARCH_VAR_PREFIX)TARGET_OUT_INTERMEDIATES)/STATIC_LIBRARIES
else
MICROTRUST_HAL_OUTPUT_PATH := $(TARGET_OUT_INTERMEDIATES)/STATIC_LIBRARIES
endif
export ANDROID_STATIC_LIBRARIES_OUT_DIR := $(abspath $(MICROTRUST_HAL_OUTPUT_PATH))
export MICROTRUST_ADDITIONAL_DEPENDENCIES := $(abspath $(TRUSTZONE_PROJECT_MAKEFILE) $(TRUSTZONE_CUSTOM_BUILD_PATH)/common_config.mk $(TRUSTZONE_CUSTOM_BUILD_PATH)/microtrust_config.mk)

MICROTRUST_CLEAR_VARS := $(TRUSTZONE_CUSTOM_BUILD_PATH)/microtrust_clear_vars.mk
MICROTRUST_BASE_RULES := $(TRUSTZONE_CUSTOM_BUILD_PATH)/microtrust_base_rules.mk
MICROTRUST_LIB_MODULES := $(MICROTRUST_ALL_MODULES)
MICROTRUST_ALL_MODULES :=
MICROTRUST_modules_to_install :=
MICROTRUST_modules_to_check :=
ifeq ($(strip $(SHOW_COMMANDS)),)
  MICROTRUST_GLOBAL_MAKE_OPTION += --silent
endif
MICROTRUST_GLOBAL_MAKE_OPTION += --no-print-directory
ifneq ($(TRUSTZONE_ROOT_DIR),)
  MICROTRUST_GLOBAL_MAKE_OPTION += ROOTDIR=$(TRUSTZONE_ROOT_DIR)
endif
MICROTRUST_GLOBAL_MAKE_OPTION += MTK_PROJECT=$(MTK_PROJECT)
TEE_DUMP_MAKEFILE_ONLY := true
$(foreach p,$(sort $(MICROTRUST_ALL_MODULE_MAKEFILE)),\
	$(eval include $(MICROTRUST_CLEAR_VARS))\
	$(eval LOCAL_MAKEFILE := $(p))\
	$(info including $(LOCAL_MAKEFILE) ...)\
	$(eval include $(LOCAL_MAKEFILE))\
	$(eval include $(MICROTRUST_BASE_RULES))\
)
TEE_DUMP_MAKEFILE_ONLY :=
$(foreach m,$(sort $(MICROTRUST_ALL_MODULES)),\
	$(foreach r,$(filter-out $(MICROTRUST_ALL_MODULES),$(MICROTRUST_ALL_MODULES.$(m).REQUIRED)),\
		$(info Ignore $(m).REQUIRED = $(r))\
	)\
	$(eval l := $(foreach r,$(filter $(MICROTRUST_ALL_MODULES),$(MICROTRUST_ALL_MODULES.$(m).REQUIRED)),$(abspath $(MICROTRUST_ALL_MODULES.$(r).OUTPUT_ROOT))))\
	$(if $(strip $(l)),\
		$(eval $(MICROTRUST_ALL_MODULES.$(m).BUILT): PRIVATE_MAKE_OPTION += EXTERNAL_LIB_DIR="$(l)")\
	)\
	$(foreach r,$(filter $(MICROTRUST_ALL_MODULES),$(MICROTRUST_ALL_MODULES.$(m).REQUIRED)),\
		$(eval $(MICROTRUST_ALL_MODULES.$(m).BUILT): $(MICROTRUST_ALL_MODULES.$(r).BUILT))\
	)\
	$(foreach r,$(MICROTRUST_ALL_MODULES.$(m).HAL_LIBS),\
		$(eval $(MICROTRUST_ALL_MODULES.$(m).BUILT): $(MICROTRUST_HAL_OUTPUT_PATH)/$(basename $(r))_intermediates/$(r))\
		$(eval $(MICROTRUST_ALL_MODULES.$(m).BUILT): $(MICROTRUST_HAL_OUTPUT_PATH)/$(basename $(r))_intermediates/export_includes)\
	)\
)

# copy headers
$(foreach m,$(filter-out $(TEE_ALL_MODULES) $(TEE_LIB_MODULES),tlutils.tlbin $(TEE_HEADER_REQUIRED_MODULES) msee_fwk_drv.lib msee_fwk_ta.lib),\
	$(if $(TEE_ALL_MODULES.$(m).PATH),,\
		$(eval TEE_ALL_MODULES.$(m).PATH := $(TARGET_OUT_HEADERS)/$(m))\
	)\
)

MICROTRUST_TEE_MIN_MEM_SUPPORT ?= no
$(info MICROTRUST_TEE_MIN_MEM_SUPPORT=$(MICROTRUST_TEE_MIN_MEM_SUPPORT))
MICROTRUST_TUI_SUPPORT ?= no
$(info MICROTRUST_TUI_SUPPORT=$(MICROTRUST_TUI_SUPPORT))
ATF_GLOBAL_MAKE_OPTION += \
	MICROTRUST_TUI_SUPPORT=$(MICROTRUST_TUI_SUPPORT)

else

$(info MICROTRUST SDK is removed for DrvFwk)

endif # ifneq ($(wildcard $(UT_SDK_HOME)),)

TEE_modules_to_install := $(TEE_modules_to_install) $(MICROTRUST_modules_to_install)
TEE_modules_to_check := $(TEE_modules_to_check) $(MICROTRUST_modules_to_check)

MICROTRUST_ORI_IMAGE_NAME := vendor/mediatek/proprietary/trustzone/microtrust/source/common/$(MICROTRUST_TEE_VERSION)/teei/teei.raw
$(shell mkdir -p $(TARGET_OUT_VENDOR)/thh/ta)
$(shell mkdir -p $(TARGET_OUT_VENDOR)/bin)
$(shell mkdir -p $(TARGET_OUT_VENDOR)/etc/init)
$(shell cp -f vendor/mediatek/proprietary/trustzone/microtrust/source/common/$(MICROTRUST_TEE_VERSION)/teei/keymaster_server $(TARGET_OUT_VENDOR)/thh/ta/c09c9c5daa504b78b0e46eda61556c3a.ta)
$(shell cp -f vendor/mediatek/proprietary/trustzone/microtrust/source/common/$(MICROTRUST_TEE_VERSION)/teei/gatekeeper_server $(TARGET_OUT_VENDOR)/thh/ta/c1882f2d885e4e13a8c8e2622461b2fa.ta)
$(shell cp -f vendor/mediatek/proprietary/trustzone/microtrust/source/common/$(MICROTRUST_TEE_VERSION)/teei/km_key_manager_ta $(TARGET_OUT_VENDOR)/thh/ta/d91f322ad5a441d5955110eda3272fc0.ta)
$(shell cp -f vendor/mediatek/proprietary/trustzone/microtrust/source/common/$(MICROTRUST_TEE_VERSION)/teei/93feffccd8ca11e796c7c7a21acb4932.ta $(TARGET_OUT_VENDOR)/thh/ta/93feffccd8ca11e796c7c7a21acb4932.ta)
$(shell cp -f vendor/mediatek/proprietary/trustzone/microtrust/source/common/$(MICROTRUST_TEE_VERSION)/teei/d78d338b1ac349e09f65f4efe179739d.ta $(TARGET_OUT_VENDOR)/thh/ta/d78d338b1ac349e09f65f4efe179739d.ta)
ifneq ($(strip $(MICROTRUST_TEE_MIN_MEM_SUPPORT)), yes)
$(shell cp -f vendor/mediatek/proprietary/trustzone/microtrust/source/common/$(MICROTRUST_TEE_VERSION)/teei/uTAgent $(TARGET_OUT_VENDOR)/thh/ta/0102030405060708090a0b0c0d0e0f10.ta)
endif

MICROTRUST_RAW_IMAGE_NAME := $(TRUSTZONE_IMAGE_OUTPUT_PATH)/bin/$(ARCH_MTK_PLATFORM)_microtrust_$(MICROTRUST_INSTALL_MODE_LC)_raw.img
MICROTRUST_TEMP_PADDING_FILE := $(TRUSTZONE_IMAGE_OUTPUT_PATH)/bin/$(ARCH_MTK_PLATFORM)_microtrust_$(MICROTRUST_INSTALL_MODE_LC)_pad.txt
MICROTRUST_TEMP_CFG_FILE := $(TRUSTZONE_IMAGE_OUTPUT_PATH)/bin/img_hdr_microtrust.cfg
MICROTRUST_SIGNED_IMAGE_NAME := $(TRUSTZONE_IMAGE_OUTPUT_PATH)/bin/$(ARCH_MTK_PLATFORM)_microtrust_$(MICROTRUST_INSTALL_MODE_LC)_signed.img
MICROTRUST_PADDING_IMAGE_NAME := $(TRUSTZONE_IMAGE_OUTPUT_PATH)/bin/$(ARCH_MTK_PLATFORM)_microtrust_$(MICROTRUST_INSTALL_MODE_LC)_pad.img
MICROTRUST_COMP_IMAGE_NAME := $(TRUSTZONE_IMAGE_OUTPUT_PATH)/bin/$(ARCH_MTK_PLATFORM)_microtrust.img

$(MICROTRUST_RAW_IMAGE_NAME): $(MICROTRUST_ORI_IMAGE_NAME) $(MICROTRUST_ADDITIONAL_DEPENDENCIES)
	@echo Microtrust build: $@
	$(hide) mkdir -p $(dir $@)
	$(hide) cp -f $(MICROTRUST_ORI_IMAGE_NAME) $@

$(MICROTRUST_TEMP_PADDING_FILE): ALIGNMENT=512
$(MICROTRUST_TEMP_PADDING_FILE): MKIMAGE_HDR_SIZE=512
$(MICROTRUST_TEMP_PADDING_FILE): RSA_SIGN_HDR_SIZE=576
$(MICROTRUST_TEMP_PADDING_FILE): $(MICROTRUST_RAW_IMAGE_NAME) $(MICROTRUST_ADDITIONAL_DEPENDENCIES)
	@echo Microtrust build: $@
	$(hide) mkdir -p $(dir $@)
	$(hide) rm -f $@
	$(hide) FILE_SIZE=$$(($$(wc -c < "$(MICROTRUST_RAW_IMAGE_NAME)")+$(MKIMAGE_HDR_SIZE)+$(RSA_SIGN_HDR_SIZE)));\
	REMAINDER=$$(($${FILE_SIZE} % $(ALIGNMENT)));\
	if [ $${REMAINDER} -ne 0 ]; then dd if=/dev/zero of=$@ bs=$$(($(ALIGNMENT)-$${REMAINDER})) count=1; else touch $@; fi

$(MICROTRUST_TEMP_CFG_FILE): $(TEE_DRAM_SIZE_CFG) $(MICROTRUST_ADDITIONAL_DEPENDENCIES)
	@echo Microtrust build: $@
	$(hide) mkdir -p $(dir $@)
	$(hide) rm -f $@
	@echo "LOAD_MODE = 0" > $@
	@echo "NAME = tee" >> $@
	@echo "LOAD_ADDR =" $(TEE_TOTAL_DRAM_SIZE) >> $@

$(MICROTRUST_PADDING_IMAGE_NAME): $(MICROTRUST_RAW_IMAGE_NAME) $(MICROTRUST_TEMP_PADDING_FILE) $(MICROTRUST_ADDITIONAL_DEPENDENCIES)
	@echo Microtrust build: $@
	$(hide) mkdir -p $(dir $@)
	$(hide) cat $(MICROTRUST_RAW_IMAGE_NAME) $(MICROTRUST_TEMP_PADDING_FILE) > $@

$(MICROTRUST_SIGNED_IMAGE_NAME): ALIGNMENT=512
$(MICROTRUST_SIGNED_IMAGE_NAME): $(MICROTRUST_PADDING_IMAGE_NAME) $(TRUSTZONE_SIGN_TOOL) $(TRUSTZONE_IMG_PROTECT_CFG) $(TEE_DRAM_SIZE_CFG) $(MICROTRUST_ADDITIONAL_DEPENDENCIES)
	@echo Microtrust build: $@
	$(hide) mkdir -p $(dir $@)
	$(hide) $(TRUSTZONE_SIGN_TOOL) $(TRUSTZONE_IMG_PROTECT_CFG) $(MICROTRUST_PADDING_IMAGE_NAME) $@ $(TEE_DRAM_SIZE)
	$(hide) FILE_SIZE=$$(wc -c < "$(MICROTRUST_SIGNED_IMAGE_NAME)");REMAINDER=$$(($${FILE_SIZE} % $(ALIGNMENT)));\
	if [ $${REMAINDER} -ne 0 ]; then echo "[ERROR] File $@ size $${FILE_SIZE} is not $(ALIGNMENT) bytes aligned";exit 1; fi

$(MICROTRUST_COMP_IMAGE_NAME): ALIGNMENT=512
$(MICROTRUST_COMP_IMAGE_NAME): $(MICROTRUST_SIGNED_IMAGE_NAME) $(MTK_MKIMAGE_TOOL) $(MICROTRUST_TEMP_CFG_FILE)  $(MICROTRUST_ADDITIONAL_DEPENDENCIES)
	@echo Microtrust build: $@
	$(hide) mkdir -p $(dir $@)
	$(hide) $(MTK_MKIMAGE_TOOL) $(MICROTRUST_SIGNED_IMAGE_NAME) $(MICROTRUST_TEMP_CFG_FILE) > $@
	$(hide) FILE_SIZE=$$(wc -c < "$(MICROTRUST_COMP_IMAGE_NAME)");REMAINDER=$$(($${FILE_SIZE} % $(ALIGNMENT)));\
	if [ $${REMAINDER} -ne 0 ]; then echo "[ERROR] File $@ size $${FILE_SIZE} is not $(ALIGNMENT) bytes aligned";exit 1; fi


$(info MICROTRUST_TUI_SUPPORT = $(MICROTRUST_TUI_SUPPORT))
$(info MICROTRUST_FP_SUPPORT = $(MICROTRUST_FP_SUPPORT))
ATF_GLOBAL_MAKE_OPTION += \
	MICROTRUST_TUI_SUPPORT=$(MICROTRUST_TUI_SUPPORT)
ATF_GLOBAL_MAKE_OPTION += \
	MICROTRUST_FP_SUPPORT=$(MICROTRUST_FP_SUPPORT)
