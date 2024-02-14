#
# Copyright (C) 2022 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit from device makefile.
$(call inherit-product, device/xiaomi/rosemary/device.mk)

# Inherit some common Awaken stuff.
$(call inherit-product, vendor/awaken/config/common_full_phone.mk)
TARGET_SUPPORTS_GOOGLE_RECORDER := true
TARGET_INCLUDE_LIVE_WALLPAPERS := true
TARGET_SUPPORTS_QUICK_TAP := true
TARGET_USES_AOSP_RECOVERY := true
TARGET_BOOT_ANIMATION_RES := 1080

#Use Face unlock
TARGET_FACE_UNLOCK_SUPPORTED := true

#Include Gapps
WITH_GAPPS=true

# Build GCamGO
$(call inherit-product-if-exists, vendor/gcgop/config.mk)

PRODUCT_DEVICE := rosemary
PRODUCT_MANUFACTURER := Xiaomi
PRODUCT_BRAND := Redmi
PRODUCT_MODEL := Redmi Note 10S
PRODUCT_NAME := awaken_rosemary

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi
PRODUCT_SYSTEM_NAME := rosemary_global
PRODUCT_SYSTEM_DEVICE := rosemary

PRODUCT_BUILD_PROP_OVERRIDES += \
    PRIVATE_BUILD_DESC="rosemary-user 11 RP1A.200720.011 V12.5.16.0.RKLMIXM release-keys"
    TARGET_DEVICE=$(PRODUCT_SYSTEM_DEVICE) \
    TARGET_PRODUCT=$(PRODUCT_SYSTEM_NAME)

BUILD_FINGERPRINT := Redmi/rosemary_global/rosemary:11/RP1A.200720.011/V12.5.16.0.RKLMIXM:user/release-keys
