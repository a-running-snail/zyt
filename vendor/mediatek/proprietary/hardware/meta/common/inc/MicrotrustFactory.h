/*
 * Copyright (c) 2015-2018 MICROTRUST Incorporated
 * All rights reserved
 *
 * This file and software is confidential and proprietary to MICROTRUST Inc.
 * Unauthorized copying of this file and software is strictly prohibited.
 * You MUST NOT disclose this file and software unless you get a license
 * agreement from MICROTRUST Incorporated.
 */

#ifndef __MICROTRUST_FACTORY_H__
#define __MICROTRUST_FACTORY_H__
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/sem.h>
#include <cutils/properties.h>
#include "LogDefine.h"
#include <dirent.h>
#include <string.h>

#define MICROTRUST_USE_COMMAND_ID       251
#define BUFFER_MAX_SIZE                 2000
#define DATA_OUT_BUFFER_SIZE            1998
#define WRITE_BUFFER_TO_PHONE           0
#define READ_FILE_TO_BUFFER             1
#define CHANGE_PHONE_FILE_PERMISSION    2
#define CALL_INIT_THH_COMMAND           4
#define TEST_FILE_EXIST                 5
#define GET_FILE_LENGTH                 6
#define CHECK_INIT_THH_STATUS           8
#define GET_FILENAME_BY_SUFFIX          10
#define CHECK_SOTER_STATUS              11
#define CHECK_ACTIVE_STATUS             13
#define THH_GET_PROPERTY                30
#define CHECK_GOOGLEKEY_STATUS          20

#define INIT_THH_GET_REQUEST            "init_thh active -p req"
#define INIT_THH_ACTIVE_DEVICE          "init_thh active -p ret"
#define INIT_THH_ACTIVE_VERIFY          "init_thh active -p vfy"
#define INIT_THH_EXPORT_THH_PUBKEY      "init_thh export thh -p pubkey"
#define INIT_THH_EXPORT_THH_UUID        "init_thh export thh -p uuid"
#define INIT_THH_EXPORT_WECHAT_PUBKEY   "init_thh export kmstr -p pubkey"
#define INIT_THH_EXPORT_WECHAT_UUID     "init_thh export kmstr -p uuid"
#define INIT_THH_EXPORT_IFAA_TRANSFER_KEY "init_thh export -t ifaa -p msginfo"
#define INIT_THH_IMPORT_IFAA_PRIKEY      "init_thh import -t ifaa"
#define INIT_THH_STARTLOAD               "init_thh startload"
#define INIT_THH_WRITE_RPMB_KEY          "init_thh initrpmbk"
#define INIT_THH_CHECK_RPMB_STATUS       "init_thh initrpmbk_status"

#define THH_REQ 1
#define THH_RET 2
#define THH_VFY 3
#define THH_STARTLOAD 4
#define THH_EXPORT_THH_PUBKEY 5
#define THH_EXPORT_THH_UUID 6
#define THH_EXPORT_WECHAT_PUBKEY 7
#define THH_EXPORT_WECHAT_UUID 8
#define THH_EXPORT_IFAA_TRANSFER_KEY 9
#define THH_IMPORT_IFAA_PRIKEY 10
#define THH_WRITE_RPMB_KEY 11
#define THH_CHECK_RPMB_STATUS 12
#define UNKOWN_COMMAND -1

#define THH_COMMAND_PROPERTY            (char*)"vendor.soter.teei.thh.cmd"
#define THH_COMMAND_EXPORT_PROPERTY     "vendor.soter.teei.thh.cmd.export"
#define THH_COMMAND_IMPORT_PROPERTY     "vendor.soter.teei.thh.cmd.import"
#define COMMAND_REQ                     "req"
#define COMMAND_RET                     "ret"
#define COMMAND_VFY                     "vfy"
#define COMMAND_STARTLOAD               "startload"
#define COMMAND_EXPORT_BEANPOD_PUBKEY   "export_thh_pubkey"
#define COMMAND_EXPORT_BEANPOD_UUID     "export_thh_uuid"
#define COMMAND_EXPORT_IFAA_TRANSFER_KEY   "export_ifaa_aes"
#define COMMAND_EXPORT_WECHAT_PUBKEY   "export_wechat_pubkey"
#define COMMAND_EXPORT_WECHAT_UUID     "export_wechat_uuid"
#define COMMAND_IMPORT_IFAA_KEY        "import_ifaa_key"
#define COMMAND_WRITE_RPMB_KEY         "write_rpmb_key"
#define COMMAND_CHECK_RPMB_STATUS      "check_rpmb_status"

#define RPMB_KEY_STATUS_PROPERTY        "vendor.soter.teei.rpmb.status"
#define RPMB_KEY_NOT_PROGRAM           "not_program"
#define RPMB_KEY_MATCH                 "match"
#define RPMB_KEY_MISMATCH              "mismatch"

int  handle_spmeta_request(unsigned char *data_in, int data_in_len, char *peer_buf, int *peer_buff_size);
#endif
