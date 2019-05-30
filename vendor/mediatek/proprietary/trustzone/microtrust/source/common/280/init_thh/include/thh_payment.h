/*
 *Copyright (c) 2015-2018 MICROTRUST Incorporated
 *All rights reserved
 *
 *This file and software is confidential and proprietary to MICROTRUST
 *Inc.
 *Unauthorized copying of this file and software is strictly prohibited.
 *You MUST NOT disclose this file and software unless you get a license
 *agreement from MICROTRUST Incorporated.
 */
#ifndef __INCLUDE_RP_THH_PAYMENT_H_
#define __INCLUDE_RP_THH_PAYMENT_H_

#define IFAA_PRIKEY_FILE                 "/data/vendor/thh/tee_00/ifaa.key"
#define IFAA_TRANSFER_KEY_FILE           "/data/vendor/thh/tee_00/ifaa.aes"
#define THH_PUBKEY_FILE                  "/data/vendor/thh/tee_00/thh.pubkey"
#define THH_UUID_FILE                    "/data/vendor/thh/tee_00/thh.uuid"
#define WECHAT_UUID_FILE                 "/data/vendor/thh/tee_00/wechat.uuid"
#define WECHAT_PUBKEY_FILE               "/data/vendor/thh/tee_00/wechat.pubkey"

#define COMMAND_EXPORT_WECHAT_PUBKEY     "export_wechat_pubkey"
#define COMMAND_EXPORT_WECHAT_UUID       "export_wechat_uuid"
#define COMMAND_EXPORT_THH_PUBKEY        "export_thh_pubkey"
#define COMMAND_EXPORT_THH_UUID          "export_thh_uuid"
#define COMMAND_EXPORT_IFAA_TRANSFER_KEY "export_ifaa_aes"
#define COMMAND_IMPORT_IFAA_KEY          "import_ifaa_key"
#define COMMAND_STARTLOAD                "startload"
#define COMMAND_WRITE_RPMB_KEY           "write_rpmb_key"
#define COMMAND_CHECK_RPMB_STATUS        "check_rpmb_status"

#define RPMB_KEY_STATUS_PROPERTY         "vendor.soter.teei.rpmb.status"

static const char *SHELL_SUCCESS_PATH = "/data/local/tmp/init_thh_SUCCESS";
#endif
