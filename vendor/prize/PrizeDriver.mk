#PRIZE-sensor-daemon-make-huarui-20180109-start
PRODUCT_PACKAGES += $(foreach value,$(CUSTOM_HAL_SENSOR_DAEMON),$(strip $(value)))

#PRIZE Flash CODE GEN
$(call inherit-product-if-exists, vendor/prize/device/prize/PrizeFlashCode.mk)
ifeq ($(findstring PRIZE_FOUND,$(patsubst ft9362,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
PRODUCT_PACKAGES += android.hardware.biometrics.fingerprint@2.1-service \
					fingerprint.default
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.fingerprint.xml:system/etc/permissions/android.hardware.fingerprint.xml
PRODUCT_COPY_FILES += vendor/prize/libs/ft9362/bin/ff_ta.elf:vendor/bin/ff_ta.elf
PRODUCT_COPY_FILES += vendor/prize/libs/ft9362/lib64/hw/fingerprint.default.so:vendor/lib64/hw/fingerprint.default.so
PRODUCT_COPY_FILES += vendor/prize/libs/afx133d/arm64/libstdc++.so:vendor/lib64/libstdc++.so

DEVICE_MANIFEST_FILE += vendor/prize/libs/ft9362/manifest.xml
endif
ifeq ($(findstring PRIZE_FOUND,$(patsubst ft9362_tee,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
PRODUCT_PACKAGES += android.hardware.biometrics.fingerprint@2.1-service \
					fingerprint.default
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.fingerprint.xml:vendor/etc/permissions/android.hardware.fingerprint.xml
PRODUCT_COPY_FILES += vendor/prize/libs/ft9362_tee/lib64/hw/fingerprint.default.so:vendor/lib64/hw/fingerprint.default.so
PRODUCT_COPY_FILES += vendor/prize/libs/ft9362_tee/thh/ta/04190000000000000000000000000000.ta:/vendor/thh/ta/04190000000000000000000000000000.ta

PRODUCT_COPY_FILES += vendor/prize/libs/afx133d/arm64/libstdc++.so:vendor/lib64/libstdc++.so

DEVICE_MANIFEST_FILE += vendor/prize/libs/ft9362_tee/manifest.xml
endif

#prize-add chenhongjin 20191223 add for sunwave fingerprint-start
ifeq ($(findstring PRIZE_FOUND,$(patsubst sw_ree_none_android9,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
PRODUCT_COPY_FILES += vendor/prize/libs/sw_ree_none_android9/bin/sf_ta:vendor/bin/sf_ta
PRODUCT_COPY_FILES += vendor/prize/libs/sw_ree_none_android9/bin/hw/vendor.sw.swfingerprint@1.0-service:vendor/bin/hw/vendor.sw.swfingerprint@1.0-service
PRODUCT_COPY_FILES += vendor/prize/libs/sw_ree_none_android9/etc/init/vendor.sw.swfingerprint@1.0-service.rc:vendor/etc/init/vendor.sw.swfingerprint@1.0-service.rc
PRODUCT_COPY_FILES += vendor/prize/libs/sw_ree_none_android9/lib/hw/fingerprint.default.so:vendor/lib/hw/fingerprint.default.so
PRODUCT_COPY_FILES += vendor/prize/libs/sw_ree_none_android9/lib/vendor.sw.swfingerprint@1.0.so:vendor/lib/vendor.sw.swfingerprint@1.0.so
PRODUCT_COPY_FILES += vendor/prize/libs/sw_ree_none_android9/lib/hw/vendor.sw.swfingerprint@1.0-impl.so:vendor/lib/hw/vendor.sw.swfingerprint@1.0-impl.so
PRODUCT_COPY_FILES += vendor/prize/libs/sw_ree_none_android9/lib64/hw/fingerprint.default.so:vendor/lib64/hw/fingerprint.default.so
PRODUCT_COPY_FILES += vendor/prize/libs/sw_ree_none_android9/etc/sw_config.xml:vendor/etc/sw_config.xml
PRODUCT_PACKAGES += android.hardware.biometrics.fingerprint@2.1-service
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.fingerprint.xml:vendor/etc/permissions/android.hardware.fingerprint.xml
DEVICE_MANIFEST_FILE += vendor/prize/libs/sw_ree_none_android9/manifest.xml
endif
#prize-add chenhongjin 20191223 add for sunwave fingerprint-end

#prize-add chenhongjin 20190304 add for sunwave tee fingerprint-start
ifeq ($(findstring PRIZE_FOUND,$(patsubst sw_tee_none_android9,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)

PRODUCT_PACKAGES += android.hardware.biometrics.fingerprint@2.1-service \
					fingerprint.default
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.fingerprint.xml:vendor/etc/permissions/android.hardware.fingerprint.xml
PRODUCT_COPY_FILES += vendor/prize/libs/sw_tee_none_android9/vendor/lib64/hw/fingerprint.default.so:vendor/lib64/hw/fingerprint.default.so
PRODUCT_COPY_FILES += vendor/prize/libs/sw_tee_none_android9/vendor/lib/hw/vendor.sw.swfingerprint@1.0-impl.so:vendor/lib/hw/vendor.sw.swfingerprint@1.0-impl.so
PRODUCT_COPY_FILES += vendor/prize/libs/sw_tee_none_android9/vendor/lib/vendor.sw.swfingerprint@1.0.so:vendor/lib/vendor.sw.swfingerprint@1.0.so
PRODUCT_COPY_FILES += vendor/prize/libs/sw_tee_none_android9/vendor/bin/hw/vendor.sw.swfingerprint@1.0-service:vendor/bin/hw/vendor.sw.swfingerprint@1.0-service
PRODUCT_COPY_FILES += vendor/prize/libs/sw_tee_none_android9/vendor/etc/sw_config.xml:vendor/etc/sw_config.xml
PRODUCT_COPY_FILES += vendor/prize/libs/sw_tee_none_android9/vendor/etc/init/vendor.sw.swfingerprint@1.0-service.rc:vendor/etc/init/vendor.sw.swfingerprint@1.0-service.rc
PRODUCT_COPY_FILES += vendor/prize/libs/sw_tee_none_android9/vendor/thh/ta/7778c03fc30c4dd0a319ea29643d4d4b.ta:/vendor/thh/ta/7778c03fc30c4dd0a319ea29643d4d4b.ta
DEVICE_MANIFEST_FILE += vendor/prize/libs/sw_tee_none_android9/manifest.xml				
					
endif

#prize-add chenhongjin 20190304 add for sunwave tee fingerprint-end


#prize-add wyq 20181220 add for goodix fingerprint-start
ifeq ($(findstring PRIZE_FOUND,$(patsubst gw9518_tee,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
PRODUCT_PACKAGES += android.hardware.biometrics.fingerprint@2.1-service \
					fingerprint.default
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.fingerprint.xml:vendor/etc/permissions/android.hardware.fingerprint.xml
PRODUCT_COPY_FILES += vendor/prize/libs/gw9518_tee/vendor/thh/ta/7778c03fc30c4dd0a319ea29643d4d4b.ta:/vendor/thh/ta/7778c03fc30c4dd0a319ea29643d4d4b.ta
PRODUCT_COPY_FILES += vendor/prize/libs/gw9518_tee/vendor/lib64/libgf_hal.so:vendor/lib64/libgf_hal.so
PRODUCT_COPY_FILES += vendor/prize/libs/gw9518_tee/vendor/lib64/libvendor.goodix.hardware.biometrics.fingerprint@2.1.so:vendor/lib64/libvendor.goodix.hardware.biometrics.fingerprint@2.1.so
PRODUCT_COPY_FILES += vendor/prize/libs/gw9518_tee/vendor/lib64/hw/fingerprint.default.so:vendor/lib64/hw/fingerprint.default.so
DEVICE_MANIFEST_FILE += vendor/prize/libs/gw9518_tee/manifest.xml
endif
ifeq ($(findstring PRIZE_FOUND,$(patsubst gw9518,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
PRODUCT_PACKAGES += android.hardware.biometrics.fingerprint@2.1-service \
					fingerprint.default
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.fingerprint.xml:vendor/etc/permissions/android.hardware.fingerprint.xml
PRODUCT_COPY_FILES += vendor/prize/libs/gw9518/vendor/lib64/libgf_ta.so:vendor/lib64/libgf_ta.so
PRODUCT_COPY_FILES += vendor/prize/libs/gw9518/vendor/lib64/libgf_hal.so:vendor/lib64/libgf_hal.so
PRODUCT_COPY_FILES += vendor/prize/libs/gw9518/vendor/lib64/libvendor.goodix.hardware.biometrics.fingerprint@2.1.so:vendor/lib64/libvendor.goodix.hardware.biometrics.fingerprint@2.1.so
PRODUCT_COPY_FILES += vendor/prize/libs/gw9518/vendor/lib64/hw/fingerprint.default.so:vendor/lib64/hw/fingerprint.default.so
PRODUCT_COPY_FILES += vendor/prize/libs/gw9518/vendor/lib64/libstdc++.so:vendor/lib64/libstdc++.so
DEVICE_MANIFEST_FILE += vendor/prize/libs/gw9518/manifest.xml
endif
#prize-add wyq 20181220 add for goodix fingerprint-end

#prize-add penggy 20190121 add for goodix fingerprint-start
ifeq ($(findstring PRIZE_FOUND,$(patsubst gf5118m_tee,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
PRODUCT_PACKAGES += android.hardware.biometrics.fingerprint@2.1-service\
			android.hardware.biometrics.fingerprint@2.1\
			fingerprint.default
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.fingerprint.xml:vendor/etc/permissions/android.hardware.fingerprint.xml
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m_tee/vendor/thh/ta/7778c03fc30c4dd0a319ea29643d4d4b.ta:/vendor/thh/ta/7778c03fc30c4dd0a319ea29643d4d4b.ta
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m_tee/vendor/thh/tee_05:/data/vendor/thh/tee_05/tee_05
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m_tee/vendor/lib64/libgf_algo.so:vendor/lib64/libgf_algo.so
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m_tee/vendor/lib64/libgf_ca.so:vendor/lib64/libgf_ca.so
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m_tee/vendor/lib64/libgf_hal.so:vendor/lib64/libgf_hal.so
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m_tee/vendor/lib64/libgfdevice.so:vendor/lib64/libgfdevice.so
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m_tee/vendor/lib64/libvendor.goodix.hardware.biometrics.fingerprint@2.1-service.so:vendor/lib64/libvendor.goodix.hardware.biometrics.fingerprint@2.1-service.so
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m_tee/vendor/lib64/libvendor.goodix.hardware.biometrics.fingerprint@2.1.so:vendor/lib64/libvendor.goodix.hardware.biometrics.fingerprint@2.1.so
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m_tee/vendor/lib64/hw/fingerprint.default.so:vendor/lib64/hw/fingerprint.default.so
DEVICE_MANIFEST_FILE += vendor/prize/libs/gf5118m_tee/manifest.xml
endif
#prize-add penggy 20190121 add for goodix fingerprint-end
#prize-add penggy 20190128 add for goodix fingerprint-start
ifeq ($(findstring PRIZE_FOUND,$(patsubst gf5118m,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
PRODUCT_PACKAGES += android.hardware.biometrics.fingerprint@2.1-service\
			android.hardware.biometrics.fingerprint@2.1\
			fingerprint.default
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.fingerprint.xml:vendor/etc/permissions/android.hardware.fingerprint.xml
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m/vendor/lib64/libgf_algo.so:vendor/lib64/libgf_algo.so
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m/vendor/lib64/libgf_ca.so:vendor/lib64/libgf_ca.so
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m/vendor/lib64/libgf_hal.so:vendor/lib64/libgf_hal.so
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m/vendor/lib64/libgf_ta.so:vendor/lib64/libgf_ta.so
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m/vendor/lib64/libgfdevice.so:vendor/lib64/libgfdevice.so
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m/vendor/lib64/libvendor.goodix.hardware.biometrics.fingerprint@2.1-service.so:vendor/lib64/libvendor.goodix.hardware.biometrics.fingerprint@2.1-service.so
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m/vendor/lib64/libvendor.goodix.hardware.biometrics.fingerprint@2.1.so:vendor/lib64/libvendor.goodix.hardware.biometrics.fingerprint@2.1.so
PRODUCT_COPY_FILES += vendor/prize/libs/gf5118m/vendor/lib64/hw/fingerprint.default.so:vendor/lib64/hw/fingerprint.default.so
DEVICE_MANIFEST_FILE += vendor/prize/libs/gf5118m/manifest.xml
endif
#prize-add penggy 20190128 add for goodix fingerprint-end

ifeq ($(findstring PRIZE_FOUND,$(patsubst sw531,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)

# android biometrics service
PRODUCT_PACKAGES += android.hardware.biometrics.fingerprint@2.1-service
PRODUCT_COPY_FILES += frameworks/native/data/etc/android.hardware.fingerprint.xml:system/etc/permissions/android.hardware.fingerprint.xml

# sunwave init rc file
PRODUCT_COPY_FILES += vendor/prize/libs/sw531/etc/init/vendor.sw.swfingerprint@1.0-service.rc:vendor/etc/init/vendor.sw.swfingerprint@1.0-service.rc

# sunwave sf_ta
PRODUCT_COPY_FILES += vendor/prize/libs/sw531/bin/sf_ta:vendor/bin/sf_ta
PRODUCT_COPY_FILES += vendor/prize/libs/sw531/bin/hw/vendor.sw.swfingerprint@1.0-service:vendor/bin/hw/vendor.sw.swfingerprint@1.0-service

# sunwave 32bits libs
PRODUCT_COPY_FILES += vendor/prize/libs/sw531/lib/vendor.sw.swfingerprint@1.0.so:vendor/lib/vendor.sw.swfingerprint@1.0.so
PRODUCT_COPY_FILES += vendor/prize/libs/sw531/lib/hw/vendor.sw.swfingerprint@1.0-impl.so:vendor/lib/hw/vendor.sw.swfingerprint@1.0-impl.so

HAVE_SUNWAVE_FINGERPRINT_FILE32 := $(shell test -f vendor/prize/libs/sw531/lib/hw/sunwave.fingerprint.default.so && echo yes)
HAVE_SUNWAVE_FINGERPRINT_FILE64 := $(shell test -f vendor/prize/libs/sw531/lib64/hw/sunwave.fingerprint.default.so && echo yes)
HAVE_SWFINGERPRINT_FILE32 := $(shell test -f vendor/prize/libs/sw531/lib/hw/swfingerprint.default.so && echo yes)
HAVE_SWFINGERPRINT_FILE64 := $(shell test -f vendor/prize/libs/sw531/lib64/hw/swfingerprint.default.so && echo yes)

# sunwave 32bits libs
ifeq ($(HAVE_SUNWAVE_FINGERPRINT_FILE32),yes)
PRODUCT_COPY_FILES += vendor/prize/libs/sw531/lib/hw/sunwave.fingerprint.default.so:vendor/lib/hw/sunwave.fingerprint.default.so
else ifeq ($(HAVE_SWFINGERPRINT_FILE32),yes)
PRODUCT_COPY_FILES += vendor/prize/libs/sw531/lib/hw/swfingerprint.default.so:vendor/lib/hw/swfingerprint.default.so
else
PRODUCT_COPY_FILES += vendor/prize/libs/sw531/lib/hw/fingerprint.default.so:vendor/lib/hw/fingerprint.default.so
endif

# sunwave 64bits libs
ifeq ($(HAVE_SUNWAVE_FINGERPRINT_FILE64),yes)
PRODUCT_COPY_FILES += vendor/prize/libs/sw531/lib64/hw/sunwave.fingerprint.default.so:vendor/lib64/hw/sunwave.fingerprint.default.so
else ifeq ($(HAVE_SWFINGERPRINT_FILE64),yes)
PRODUCT_COPY_FILES += vendor/prize/libs/sw531/lib64/hw/swfingerprint.default.so:vendor/lib64/hw/swfingerprint.default.so
else
PRODUCT_COPY_FILES += vendor/prize/libs/sw531/lib64/hw/fingerprint.default.so:vendor/lib64/hw/fingerprint.default.so
endif
PRODUCT_COPY_FILES += vendor/prize/libs/afx133d/arm64/libstdc++.so:vendor/lib64/libstdc++.so

# sunwave manifest.xml
DEVICE_MANIFEST_FILE += vendor/prize/libs/sw531/manifest.xml
PRODUCT_COPY_FILES += vendor/prize/libs/sw531/etc/sw_config.xml:vendor/etc/sw_config.xml
endif

ifeq ($(findstring PRIZE_FOUND,$(patsubst microarray,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
$(call inherit-product-if-exists, vendor/prize/libs/microarray/mafp.mk)
endif

#prize added by chenjiaxi, sunwave tee fingerprint, 20190111-start
ifeq ($(findstring PRIZE_FOUND,$(patsubst sw_tee_trustkernel,PRIZE_FOUND,$(PRIZE_FINGER_PRINT))),PRIZE_FOUND)
$(call inherit-product-if-exists, vendor/prize/libs/sw_tee_trustkernel/swfp.mk)
endif
#prize added by chenjiaxi, sunwave tee fingerprint, 20190111-end

# prize added by lifenfen, for afx133d sensor , 20190123 begin
ifeq (vtclib,$(findstring vtclib,$(CUSTOM_HAL_MSENSORLIB)))
PRODUCT_COPY_FILES += vendor/prize/libs/afx133d/arm64/libstdc++.so:vendor/lib64/libstdc++.so
# prize added by penggy, for afx133d sensor , 20190301 begin
PRODUCT_COPY_FILES += vendor/prize/libs/afx133d/arm64/libvtclib.so:vendor/lib64/libvtclib.so
# prize added by penggy, for afx133d sensor , 20190301 end
endif
# prize added by lifenfen, for afx133d sensor , 20190123 end
ifeq ($(strip $(PRIZE_CUSTOMER_ZYT)), yes)
	# added by Peilong for zyt securechip, 20190328 begin
	#-----Application-----
	PRODUCT_DEFAULT_PROPERTY_OVERRIDES += ro.use.zytsafe=true
	PRODUCT_PACKAGES += Zyt_AntiLocation
	PRODUCT_PACKAGES += Zyt_PrivateContacts
	PRODUCT_PACKAGES += Zyt_VFM
	PRODUCT_PACKAGES += Zyt_Gallery
	PRODUCT_PACKAGES += Zyt_PrivateSpace
	PRODUCT_PACKAGES += MultiSystem
	#PRODUCT_PACKAGES += Zyt_ContactEncrypt
	#-----HIDL-----
	PRODUCT_PACKAGES += vendor.qti.zyitong.device@1.0-service
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/bin/hw/vendor.qti.zyitong.device@1.0-service:vendor/bin/hw/vendor.qti.zyitong.device@1.0-service
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib64/vendor.qti.zyitong.device@1.0.so:vendor/lib64/vendor.qti.zyitong.device@1.0.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib/vendor.qti.zyitong.device@1.0.so:vendor/lib/vendor.qti.zyitong.device@1.0.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/etc/init/vendor.qti.zyitong.device@1.0-service.rc:vendor/etc/init/vendor.qti.zyitong.device@1.0-service.rc
	DEVICE_MANIFEST_FILE += vendor/prize/libs/zyt/manifest.xml
	#-----Middle hal-----
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib/libveb_crypto.so:vendor/lib/libveb_crypto.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib/libvebhw.so:vendor/lib/libvebhw.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib/libVEBSKF_FRI.so:vendor/lib/libVEBSKF_FRI.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib/libVEBSKF_STD.so:vendor/lib/libVEBSKF_STD.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib/VEBSKF_ForFRI.so:vendor/lib/VEBSKF_ForFRI.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib64/libveb_crypto.so:vendor/lib64/libveb_crypto.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib64/libvebhw.so:vendor/lib64/libvebhw.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib64/libVEBSKF_FRI.so:vendor/lib64/libVEBSKF_FRI.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib64/libVEBSKF_STD.so:vendor/lib64/libVEBSKF_STD.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib64/VEBSKF_ForFRI.so:vendor/lib64/VEBSKF_ForFRI.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib/hw/veb_skf.default.so:vendor/lib/hw/veb_skf.default.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib/hw/veb_skf_fri.default.so:vendor/lib/hw/veb_skf_fri.default.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib64/hw/veb_skf.default.so:vendor/lib64/hw/veb_skf.default.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib64/hw/veb_skf_fri.default.so:vendor/lib64/hw/veb_skf_fri.default.so
	#-----Cos-----
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/cos/cos_code.hex:vendor/etc/firmware/cos_code.hex
	#-----Test tools-----
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib64/hw/veb_skf.default.so:vendor/lib64/veb_skf.default.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib64/hw/veb_skf_fri.default.so:vendor/lib64/veb_skf_fri.default.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/lib64/libperm_daemon.so:vendor/lib64/libperm_daemon.so
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/tools/a5SpiUtil_product:vendor/bin/a5SpiUtil_product
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/tools/pdt_tool:vendor/bin/pdt_tool
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/tools/TEST_TOOL_4_FRI:vendor/bin/TEST_TOOL_4_FRI
	PRODUCT_COPY_FILES += vendor/prize/libs/zyt/tools/TEST_TOOL_4_STD:vendor/bin/TEST_TOOL_4_STD
	# added by Peilong for zyt securechip, 20190328 end
endif
