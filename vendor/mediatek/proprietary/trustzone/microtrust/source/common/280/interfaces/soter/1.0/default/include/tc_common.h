/*
 * Copyright (c) 2015-2018 MICROTRUST Incorporated
 * All rights reserved
 *
 * This file and software is confidential and proprietary to MICROTRUST Inc.
 * Unauthorized copying of this file and software is strictly prohibited.
 * You MUST NOT disclose this file and software unless you get a license
 * agreement from MICROTRUST Incorporated.
 */

#ifndef __TC_COMMON__
#define __TC_COMMON__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef __cplusplus
extern "C" {
#endif

#define TC_TEEC_TAG	    "TCORE_TEEC"
#define DEBUG

//#define TCORE_INVOKE_LISTENER

#define SESSION_ID_FROM_TCORE

//#define TCORE_TZ_MGR_BIN_BUILD_IN

//#define TCORE_APP_SAVE_SAVE_RPMB

#define TCORE_PASS_NULL_SHARED_MEM

#ifdef DEBUG
  #define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, TC_TEEC_TAG, __VA_ARGS__)
  #define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,   TC_TEEC_TAG, __VA_ARGS__) //do {} while (0)//
  #define LOGI(...) __android_log_print(ANDROID_LOG_INFO,    TC_TEEC_TAG, __VA_ARGS__)
  #define LOGW(...) __android_log_print(ANDROID_LOG_WARN,    TC_TEEC_TAG, __VA_ARGS__)
  #define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,    TC_TEEC_TAG, __VA_ARGS__)
#else
  #define LOGV(...) do {} while (0)
  #define LOGD(...) do {} while (0)
  #define LOGI(...) do {} while (0)
  #define LOGW(...) do {} while (0)
#endif

#define TCORE_APP_SAVE_PATH               "/sdcard/" //  "/sdcard/TCoreApp/"       ///system/etc/firmware
#define TCORE_APP_PATH                     "/sdcard"               //"/sdcard/"///system/etc/firmware
#define TCORE_TAMGR_APPNAME                "tcore_mgr"

#define TCORE_APP_MAP_TB                    "TaUuidMap"

#define     TCORE_GET_APP_IOB_MAX_LEN              1024*128

#define     TCORE_IOB_MAX_LEN                      1024*16
#define     TCORE_ION_BUF_MAX_LEN                  1024*4


#define TCORE_TRANSMIT_CMD_GETAPP           0x1FFF0000
#define TCORE_TRANSMIT_CMD_OPENSESSION      0xFFFF0000
#define TCORE_TRANSMIT_CMD_INVOKE           0xFFFF0001
#define TCORE_TRANSMIT_CMD_CLOSESESSION     0xFFFF0002

typedef enum tcore_pkg_type
{
    pkg_file_info = 0x12,
    pkg_file_data = 0x13,
    pkg_file_del = 0x14,
}tcore_pkg_type;


typedef struct
{
    uint32_t timeLow;
    uint16_t timeMid;
    uint16_t timeHiAndVersion;
    uint8_t clockSeqAndNode[8];
}teec_uuid;


typedef struct tcore_file_info
{
    char filename[64];
    unsigned int filelen;
    teec_uuid uuid;
    unsigned char md5[16];
}tcore_file_info;

typedef struct tcore_file_data
{
    unsigned int pkgindex;
    unsigned char data[TCORE_ION_BUF_MAX_LEN];
    unsigned int datalen;
}tcore_file_data;

typedef struct tcore_ivk_pkg
{
    tcore_pkg_type type;
    union
    {
        tcore_file_info info;
        tcore_file_data data;
    };
}tcore_ivk_pkg;

typedef struct tcore_ivk_req_s
{
 unsigned int  cmd;
 unsigned int  data;
 tcore_ivk_pkg  pkg;
} __attribute__ ((packed)) tcore_ivk_req_s;

typedef struct tcore_ivk_res_s
{
    unsigned int  	cmd_id;
    unsigned int		status;
} tcore_ivk_res_s;

//__attribute__ ((packed))

typedef struct tcore_teec_cmd
{
    unsigned char *open;
    unsigned int openlen;
    unsigned char *invoke;
    unsigned int ivklen;
}tcore_teec_cmd;

typedef struct transmit_send_cmd {
       unsigned int cmd_id;
       unsigned int data;
       unsigned int data2;
       unsigned int len;
       unsigned int start_pkt;
       unsigned int end_pkt;
       unsigned int test_buf_size;
       unsigned int tcore_invoke_len;
       unsigned char tcore_invoke_buf[TCORE_ION_BUF_MAX_LEN];
}transmit_send_cmd;



typedef struct getapp_send_cmd {
       unsigned int cmd_id;
       unsigned int data;
       unsigned int len;
       unsigned char tauuid[16];
}getapp_send_cmd;

typedef struct getapp_cmd_rsp {
    int data;
    int status;
    char appname[32];
    unsigned int applen;
    unsigned char md5[16];
}getapp_cmd_rsp;


typedef struct loadapp_send_cmd {
       unsigned char tauuid[16];
}loadapp_send_cmd;

typedef struct loadapp_cmd_rsp {
    char appname[32];
    unsigned char tauuid[16];
    unsigned int applen;
    unsigned char md5[16];
}loadapp_cmd_rsp;



typedef struct transmit_send_cmd_rsp {
    int data;
    int status;
}transmit_send_cmd_rsp;

#define TCORE_IVK_STARTAPP_ERR              -1
#define TCORE_IVK_SENDCMD_ERR               -2
#define TCORE_IVK_MEM_ERR                   -3
#define TCORE_IVK_FOPEN_ERR                 -4
#define TCORE_IVK_FWRITE_ERR                 -5
#define TCORE_IVK_PARSER_ERR                 -6
#define TCORE_IVK_VERIFY_ERR                 -7
#define TCORE_IVK_PARAM_ERR                 -8
#define TCORE_IVK_PERM_ERR                 -9


#ifdef __cplusplus
}
#endif


#endif
