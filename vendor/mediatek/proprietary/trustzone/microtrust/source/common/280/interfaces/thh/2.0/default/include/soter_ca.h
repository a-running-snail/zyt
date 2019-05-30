/*
 * Copyright (c) 2015-2018 MICROTRUST Incorporated
 * All rights reserved
 *
 * This file and software is confidential and proprietary to MICROTRUST Inc.
 * Unauthorized copying of this file and software is strictly prohibited.
 * You MUST NOT disclose this file and software unless you get a license
 * agreement from MICROTRUST Incorporated.
 */
#ifndef __SOTER_CA_H__
#define __SOTER_CA_H__
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <imsg_log.h>

#include "soter_defs.h"

#include <stdbool.h>
#include <stdint.h>
#include <hardware/hardware.h>

#define WECHAT_HARDWARE_MODULE_NAME "Hardware wechat HAL"
#define WECHAT_HARDWARE_MODULE_ID "wechat"
#define WECHAT_MODULE_API_VERSION_0_1 HARDWARE_MODULE_API_VERSION(0, 1)

typedef struct {
        uint32_t version;
        uint32_t wechatversion;
        uint32_t supportwechat;
        uint32_t reserved;
} wechat_info_t;


struct wechat_module {

        hw_module_t common;
};

typedef struct wechat_device wechat_device_t;

void printlog(char *name, unsigned char *hex, int len);

int get_info(int command_id, uint8_t* rcv_buf, uint32_t* rbuf_len);
int set_info(int command_id, void* send_buf, uint32_t sbuf_len);
int gen_auth_key(int command_id, void* uid_buf, uint32_t uid_len, void* name_buf, uint32_t name_len);
int auth_key_utils(int command_id, void* uid_buf, uint32_t uid_len, void* name_buf, uint32_t name_len,
                    void* result_buffer, uint32_t* result_len, void* signature_buffer, uint32_t* signature_len);
int auth_init_sign(int command_id, void* uid_buf, uint32_t uid_len, void* name_buf, uint32_t name_len, void* challenge, uint32_t challenge_len, void* result_buffer, uint32_t* result_len);
int auth_finish_sign(int command_id, void* session_buf, uint32_t session_len, void* result_buffer, uint32_t* result_len, void* signature_buffer, uint32_t* signature_len);
int invoke_command(int command_id, uint32_t uid, void* rcv_buf, uint32_t* rbuf_len, uint8_t* rcv_sign, uint32_t* rcv_sign_len);

soter_error_t generate_attk_key_pair(const uint8_t copy_num);
soter_error_t verify_attk_key_pair();
soter_error_t export_attk_public_key(uint8_t* pub_key_data, size_t* pub_key_data_length);
soter_error_t get_device_id(uint8_t* device_id, size_t* device_id_length);
soter_error_t generate_ask_key_pair(const uint8_t* uid);
soter_error_t export_ask_public_key(const uint8_t* uid, soter_ask_struct* data);
soter_error_t remove_all_uid_key(const uint8_t* uid);
soter_error_t has_ask_already(const uint8_t* uid);
soter_error_t generate_auth_key_pair(const uint8_t* uid, const char* name);
soter_error_t export_auth_key_public_key(const uint8_t* uid, const char* name, soter_auth_key_struct* data);
soter_error_t remove_auth_key(const uint8_t* uid, const char* name);
soter_error_t has_auth_key(const uint8_t* uid, const char* name);
soter_error_t init_sign(const uint8_t* uid, const char* name, const char* challenge, soter_sign_session* data);
soter_error_t finish_sign(const soter_sign_session* session, soter_sign_result_struct* data);

struct wechat_device {

        hw_device_t common;
  soter_error_t (*generate_attk_key_pair)(const uint8_t copy_num);
  soter_error_t (*verify_attk_key_pair)();
  soter_error_t (*export_attk_public_key)(uint8_t* pub_key_data, size_t* pub_key_data_length);
  soter_error_t (*get_device_id)(uint8_t* device_id, size_t* device_id_length);
};
#endif
