/*
 * Copyright (C) 2017 MICROTRUST Incorporated
 * All rights reserved
 *
 * This file and software is confidential and proprietary to MICROTRUST Inc.
 * Unauthorized copying of this file and software is strictly prohibited.
 * You MUST NOT disclose this file and software unless you get a license
 * agreement from MICROTRUST Incorporated.
 */

#define IMSG_TAG "ut_kmsetkey"

#include <errno.h>
#include <hardware/hardware.h>
#include <malloc.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <imsg_log.h>

#include "ut_km_def.h"
#include "ut_km_ioctl.h"
#include "ut_kmsetkey.h"
#include "ut_km_tac.h"

typedef struct {
    unsigned int all_len;
    unsigned int peakb_len;
    unsigned int inputpkb_len;
    unsigned int ekkb_pub_len;
    unsigned int reserved[4];
} kmsetkey_t;

static unsigned char input_ekkb_pub[] = {
    0x8A, 0x42, 0xBF, 0x0A, 0x5F, 0x70, 0xFD, 0x0F, 0x0D, 0xB5, 0x7A, 0xE7, 0xC4, 0x6B, 0xFA, 0xCB, 
    0x88, 0xAB, 0x8D, 0xCA, 0xCF, 0xF5, 0xB7, 0x93, 0xD3, 0x40, 0x9D, 0x77, 0xDF, 0xA0, 0x7C, 0x66, 
    0x4B, 0x39, 0x11, 0xCA, 0x86, 0x35, 0x48, 0xA3, 0x8F, 0x86, 0x46, 0xB7, 0x9E, 0x0F, 0x47, 0xFF, 
    0x0C, 0x06, 0x9F, 0xAC, 0xBC, 0x44, 0xC9, 0xE1, 0x6D, 0x22, 0x17, 0xF8, 0x96, 0x8F, 0xDE, 0xE1, 
    0x0B, 0xFA, 0x4B, 0xA9, 0xC9, 0x1F, 0xDE, 0x02, 0xEA, 0xCC, 0xC2, 0x7E, 0xC6, 0x04, 0xF0, 0x45, 
    0x89, 0xC3, 0x19, 0xF2, 0xB4, 0xE5, 0x67, 0xDD, 0xFC, 0x5F, 0x8B, 0x1B, 0x9E, 0x6A, 0x1C, 0xD7, 
    0x58, 0x69, 0xC4, 0x1C, 0x03, 0xBB, 0xD5, 0x2D, 0x4E, 0x77, 0x18, 0x75, 0x00, 0x8F, 0x6F, 0x9D, 
    0x77, 0x62, 0x9A, 0x02, 0x18, 0x96, 0x74, 0x13, 0x3D, 0xEB, 0x52, 0x11, 0x14, 0x13, 0xD2, 0x59, 
    0xAD, 0x7A, 0x1A, 0x6D, 0x12, 0x17, 0xDC, 0x55, 0xEE, 0xD7, 0x47, 0x78, 0x32, 0xD7, 0xE3, 0x78, 
    0x74, 0x6A, 0x46, 0x95, 0x82, 0x03, 0x6E, 0x88, 0x6B, 0xDF, 0xDF, 0x9B, 0xE5, 0x79, 0xAD, 0x94, 
    0x6D, 0x35, 0x56, 0xB1, 0x58, 0x8A, 0x37, 0x28, 0x2F, 0x47, 0xAB, 0x7E, 0xFA, 0x8B, 0xEC, 0x79, 
    0xD5, 0xBB, 0xC0, 0x3E, 0x0D, 0x18, 0xDF, 0x51, 0x40, 0x0F, 0xCA, 0x69, 0x05, 0x93, 0x39, 0x67, 
    0xA5, 0x06, 0xC9, 0x15, 0xB8, 0x99, 0x33, 0x98, 0x6A, 0x0F, 0x36, 0xCC, 0xA4, 0xDE, 0x26, 0xB1, 
    0x93, 0xE7, 0x72, 0xE8, 0xA4, 0x81, 0xFE, 0x65, 0x90, 0x78, 0x4A, 0xE9, 0xA1, 0x44, 0x39, 0x7F, 
    0x34, 0xC9, 0xEB, 0x24, 0xBC, 0x67, 0x01, 0x43, 0xC1, 0xF0, 0x04, 0xD0, 0x82, 0xD5, 0xD2, 0x86, 
    0x05, 0x9B, 0xF9, 0x96, 0xC3, 0x58, 0x22, 0x51, 0xE3, 0x9D, 0x09, 0x8C, 0x0C, 0xA9, 0x0B, 0x8E, 
};



static unsigned char inputpkb[] = {
    0x61, 0x5B, 0xBA, 0x37, 0xD3, 0xD5, 0x36, 0x99, 0x08, 0xB1, 0x0A, 0x45, 0x7A, 0x58, 0x67, 0xCE, 
    0x5D, 0xCD, 0xA3, 0x37, 0x09, 0xE9, 0xB5, 0x23, 0x0E, 0xB2, 0xD2, 0xA6, 0x5E, 0xE9, 0x94, 0x7D, 
    0xD2, 0x4D, 0x26, 0x1F, 0x0A, 0x40, 0xBA, 0x53, 0xC7, 0xFD, 0x80, 0xCE, 0x52, 0xCA, 0x53, 0x00, 
    0xEE, 0x5A, 0xF5, 0x86, 0x92, 0x2F, 0x67, 0xFF, 0x8B, 0xD3, 0x54, 0x29, 0xE0, 0xD5, 0xBB, 0x57, 
    0xF1, 0x38, 0x1A, 0x6B, 0xB4, 0xEC, 0x56, 0xB9, 0xDE, 0x97, 0xD1, 0x60, 0xAA, 0x7F, 0xFD, 0x01, 
    0x8F, 0x53, 0x58, 0xE8, 0x9C, 0xB9, 0xF7, 0x9B, 0x27, 0x59, 0x86, 0x02, 0x88, 0xE7, 0x9F, 0x01, 
    0xA3, 0x0F, 0x77, 0x65, 0x38, 0xC0, 0xC3, 0x49, 0xCC, 0x57, 0xE1, 0x1F, 0xBF, 0xA4, 0xC7, 0x25, 
    0x93, 0xC0, 0x68, 0x42, 0xBE, 0x00, 0x9D, 0x22, 0x5C, 0xC7, 0x6E, 0x62, 0xF3, 0xC2, 0xFD, 0xEF, 
};

static int ut_kmsetkey_open(const hw_module_t* module, const char* name, hw_device_t** device);

static kmsetkey_error_t ut_ree_check_attest_keybox()
{
    IMSG_ENTER();
    int retVal = 0;
    ut_message_t msg;

    if (TEE_Alloc_KM_Buffer_And_Reset() != 0) {
        IMSG_ERROR("%s: malloc km buffer failed", __FUNCTION__);
        return KMSK_ERROR_MEMORY_ALLOCATION_FAILED;
    }

    memset(&msg, 0, sizeof(ut_message_t));
    msg.command.commandId = CMD_ID_TEE_REE_CHECK_KEYBOX;
    memcpy(keymaster_buffer, &msg, sizeof(ut_message_t));

    retVal = TEE_InvokeCommand();

    if (retVal != 0) {
        IMSG_ERROR("TEE invoke command err %d", retVal);
        return KMSK_ERROR_INVOKE_COMMAND_FAILED;
    }

    memcpy(&msg, keymaster_buffer, sizeof(ut_message_t));

    if (msg.response.error != KMSK_ERROR_OK) {
        IMSG_ERROR("check keybox failed %d", msg.response.error);
        return KMSK_ERROR_KEY_NOT_EXIST;
    }

    return KMSK_ERROR_OK;
}

static kmsetkey_error_t ut_ree_import_attest_keybox(const unsigned char* peakb,
    const unsigned int peakb_len)
{
    IMSG_INFO("kmsetkey ca start");
    int32_t retVal;
    uint8_t* p_data_buff = 0;
    uint32_t in_params_size = 0;
    ut_message_t kmstr_msg;
    kmsetkey_t input_msg;

	if (peakb == NULL) {
		IMSG_ERROR("null pointer in import attest key");
		return KMSK_ERROR_UNEXPECTED_NULL_POINTER;
	}

    if (TEE_Alloc_KM_Buffer_And_Reset() != 0) {
        IMSG_ERROR("%s: malloc km buffer failed", __FUNCTION__);
        return KMSK_ERROR_MEMORY_ALLOCATION_FAILED;
    }

    memset(&input_msg, 0, sizeof(kmsetkey_t));
    input_msg.peakb_len = peakb_len;
    input_msg.inputpkb_len = sizeof(inputpkb);
    input_msg.ekkb_pub_len = sizeof(input_ekkb_pub);
    input_msg.all_len = input_msg.peakb_len + input_msg.inputpkb_len
                        + input_msg.ekkb_pub_len + sizeof(kmsetkey_t);

    if (input_msg.inputpkb_len != 128 ||
        input_msg.ekkb_pub_len != 256) {
        IMSG_ERROR("invalid inputlen in import attest key");
        return KMSK_ERROR_UNKNOWN_ERROR;
    }

    /* msg header + kmsetkey_t + peakb + inputPkb + Ekkb_pub */
    memset(&kmstr_msg, 0, sizeof(ut_message_t));
    p_data_buff = keymaster_buffer + sizeof(ut_message_t);
    kmstr_msg.command.commandId = CMD_ID_TEE_REE_IMPORT_KEYBOX;
    kmstr_msg.import_attest_keybox.attest_keybox_len = input_msg.all_len;
    memcpy(keymaster_buffer, &kmstr_msg, sizeof(ut_message_t));

    memcpy(p_data_buff, &input_msg, sizeof(kmsetkey_t));
    p_data_buff += sizeof(kmsetkey_t);

    memcpy(p_data_buff, peakb, input_msg.peakb_len);
    p_data_buff += input_msg.peakb_len;
    memcpy(p_data_buff, inputpkb, input_msg.inputpkb_len);
    p_data_buff += input_msg.inputpkb_len;
    memcpy(p_data_buff, input_ekkb_pub, input_msg.ekkb_pub_len);

    p_data_buff = keymaster_buffer + sizeof(ut_message_t);

    //retVal = TEE_InvokeCommand();
    retVal = ut_km_import_google_key(p_data_buff, input_msg.all_len);

    if (retVal != 0) {
        IMSG_ERROR("TEE invoke command err %d", retVal);
        return KMSK_ERROR_INVOKE_COMMAND_FAILED;
    }

    memcpy(&kmstr_msg, keymaster_buffer, sizeof(ut_message_t));

    if (kmstr_msg.response.error != KMSK_ERROR_OK) {
        IMSG_ERROR("import attestkeybox failed %d", kmstr_msg.response.error);
        return KMSK_ERROR_RESPONSE_ERROR;
    }

    //retVal = kmstr_msg.response.error;
    IMSG_INFO("kmsetkey ca end");
    return KMSK_ERROR_OK;

}

static int ut_kmsetkey_close(hw_device_t* dev) {
    IMSG_ENTER();
    TEE_Free_KM_Buffer();
    free(dev);

    return 0;
}

static struct hw_module_methods_t kmsetkey_module_methods = {
	.open = ut_kmsetkey_open,
};

__attribute__((visibility("default")))
struct kmsetkey_module HAL_MODULE_INFO_SYM = {
	.common =
	{
		.tag = HARDWARE_MODULE_TAG,
		.module_api_version = KMSETKEY_MODULE_API_VERSION_0_1,
		.hal_api_version = HARDWARE_HAL_API_VERSION,
		.id = KMSETKEY_HARDWARE_MODULE_ID,
		.name = KMSETKEY_HARDWARE_MODULE_NAME,
		.author = "Microtrust",
		.methods = &kmsetkey_module_methods,
		.dso = 0,
		.reserved = {},
	},
};

static int ut_kmsetkey_open(const hw_module_t* module, const char* name, hw_device_t** device) {
    IMSG_ENTER();

    if (name == NULL)
        return -EINVAL;

    // Make sure we initialize only if module provided is known
    if ((module->tag != HAL_MODULE_INFO_SYM.common.tag) ||
        (module->module_api_version != HAL_MODULE_INFO_SYM.common.module_api_version) ||
        (module->hal_api_version != HAL_MODULE_INFO_SYM.common.hal_api_version) ||
        (0 != memcmp(module->name, HAL_MODULE_INFO_SYM.common.name,
                    sizeof(KMSETKEY_HARDWARE_MODULE_NAME)-1)) )
	  {
        IMSG_ERROR("invalide kmsetkey module information");
        return -EINVAL;
    }

    kmsetkey_device_t* dev = NULL;
    dev = (kmsetkey_device_t*)malloc(sizeof(kmsetkey_device_t));

    dev->common.tag = HARDWARE_MODULE_TAG;
    dev->common.version = 1;
    dev->common.module = (struct hw_module_t*) module;
    dev->common.close = ut_kmsetkey_close;

    dev->attest_key_install = ut_ree_import_attest_keybox;

    *device = (hw_device_t*)dev;
    return 0;
}
