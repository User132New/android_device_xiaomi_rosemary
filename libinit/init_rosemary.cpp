/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t maltose_info = {
    .hwc_value = "",
    .sku_value = "",
    .vendor_sku_value = "maltose",

    .brand = "Redmi",
    .device = "maltose",
    .marketname = "Redmi Note 10S",
    .model = "Redmi Note 10S",
    .build_fingerprint = "Redmi/maltose_global/maltose:11/RP1A.200720.011/V12.5.16.0.RKLMIXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t rosemary_info = {
    .hwc_value = "",
    .sku_value = "",
    .vendor_sku_value = "rosemary",

    .brand = "Redmi",
    .device = "rosemary",
    .marketname = "Redmi Note 10S",
    .model = "Redmi Note 10S",
    .build_fingerprint = "Redmi/rosemary_global/rosemary:11/RP1A.200720.011/V12.5.16.0.RKLMIXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t secret_info = {
    .hwc_value = "",
    .sku_value = "",
    .vendor_sku_value = "secret",

    .brand = "Redmi",
    .device = "secret",
    .marketname = "Redmi Note 10S",
    .model = "Redmi Note 10S",
    .build_fingerprint = "Redmi/secret_global/secret:11/RP1A.200720.011/V12.5.16.0.RKLMIXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t secretr_info = {
    .hwc_value = "",
    .sku_value = "",
    .vendor_sku_value = "secretr",

    .brand = "Redmi",
    .device = "secret",
    .marketname = "Redmi Note 11 SE",
    .model = "Redmi Note 11 SE",
    .build_fingerprint = "Redmi/secret_in2/secret:11/RP1A.200720.011/V12.5.19.0.RKLINXM:user/release-keys",

    .nfc = false,
};

static const std::vector<variant_info_t> variants = {
    maltose_info,
    rosemary_info,
    secret_info,
    secretr_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
