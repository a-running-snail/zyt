#this is platform common Boardconfig

BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/bsp/memsicp

ifeq ($(findstring PRIZE_FOUND,$(patsubst ft9362,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/bsp/ft9362/sepolicy
endif
ifeq ($(findstring PRIZE_FOUND,$(patsubst ft9362_tee,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/bsp/ft9362_tee/sepolicy
endif
#prize added by chenhongjin, sunwave ree fingerprint, 20190122-start
ifeq ($(findstring PRIZE_FOUND,$(patsubst sw_ree_none_android9,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/bsp/sw_ree_none_android9/sepolicy
endif
#prize added by chenhongjin, sunwave ree fingerprint, 20190122-end

#prize added by chenhongjin, sunwave tee fingerprint, 20190304-start
ifeq ($(findstring PRIZE_FOUND,$(patsubst sw_tee_none_android9,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/bsp/sw_tee_none_android9/sepolicy
endif
#prize added by chenhongjin, sunwave tee fingerprint, 20190304-end
#prize-add wyq 20181227 for goodix fingerprint gw9518 with tee env-start
ifeq ($(findstring PRIZE_FOUND,$(patsubst gw9518_tee,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/bsp/gw9518_tee/sepolicy
endif
#gw9518 with ree env
ifeq ($(findstring PRIZE_FOUND,$(patsubst gw9518,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/bsp/gw9518/sepolicy
endif
#prize-add wyq 20181227 for goodix fingerprint gw9518 with tee env-end

#prize-add wyq 20190220 for goodix fingerprint gf5118m with tee env-start
ifeq ($(findstring PRIZE_FOUND,$(patsubst gf5118m_tee,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/bsp/gf5118m_tee/sepolicy
endif
#gf5118m with ree env
ifeq ($(findstring PRIZE_FOUND,$(patsubst gf5118m,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/bsp/gf5118m/sepolicy
endif
#prize-add wyq 20190220 for goodix fingerprint gf5118m with tee env-end

ifeq ($(findstring PRIZE_FOUND,$(patsubst sw531,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/bsp/sw531/sepolicy
endif

ifeq ($(findstring PRIZE_FOUND,$(patsubst microarray,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/bsp/microarray/sepolicy
endif

#prize added by chenjiaxi, sunwave tee fingerprint, 20190111-start
ifeq ($(findstring PRIZE_FOUND,$(patsubst sw_tee_trustkernel,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/bsp/sw_tee_trustkernel/sepolicy
endif
#prize added by chenjiaxi, sunwave tee fingerprint, 20190111-end

#prize add for wifi mac houjian 20180928 start
BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/basic/wifimacaddr
#prize add for wifi mac houjian 20180928 end

BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/bsp/prize_dual_cam
ifeq ($(strip $(PRIZE_CUSTOMER_ZYT)), yes)
	#prize add for zyt securechip by Peilong 20190328 start
	BOARD_SEPOLICY_DIRS += vendor/prize/device/mediatek/sepolicy/bsp/zyt/sepolicy
	#prize add for zyt securechip by Peilong 20190328 end
endif