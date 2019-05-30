/*
 * Copyright (c) 2015-2018 MICROTRUST Incorporated
 * All rights reserved
 *
 * This file and software is confidential and proprietary to MICROTRUST Inc.
 * Unauthorized copying of this file and software is strictly prohibited.
 * You MUST NOT disclose this file and software unless you get a license
 * agreement from MICROTRUST Incorporated.
 */

#include "MicrotrustFactory.h"

/*
 * name: read_file_to_buffer
 * function:read file content to buffer
 */
static void read_file_to_buffer(const char *file_path, char *data_out, int file_seek_counter, int *data_out_len)
{
    int fseek_result = 0;
    size_t read_bytes_count = 0;

    FILE *read_stream = fopen(file_path, "rb");
    if (read_stream == NULL)
    {
        META_LOG("[Meta][Microtrust] %s open %s failed, %s", __func__, file_path, strerror(errno));
        data_out[0] = 1;
        *data_out_len = 1;

        goto END;
    }

    fseek_result = fseek(read_stream, DATA_OUT_BUFFER_SIZE*file_seek_counter, SEEK_SET);
    if (fseek_result != 0)
    {
        META_LOG("[Meta][Microtrust] %s, fseek file failed, %s", __func__, strerror(errno));
        data_out[0] = 2;
        *data_out_len = 1;

        goto END;
    }

    if (!feof(read_stream))
    {
        read_bytes_count = fread(&data_out[2], 1, DATA_OUT_BUFFER_SIZE, read_stream);
        if (read_bytes_count == DATA_OUT_BUFFER_SIZE)
        {
            data_out[1] = file_seek_counter + 1;
        }
        else
        {
            data_out[1] = 0;
        }
        *data_out_len = read_bytes_count + 2;
    }
    data_out[0] = 0;

END:
    if (read_stream)
    {
        fclose(read_stream);
        read_stream = NULL;
    }

    return;
}

/*
 * name: wait_thh_signal
 * function: wait property from init_thh
 */
static int wait_thh_signal(char *property)
{
    if (property == NULL)
    {
        META_LOG("[Meta][Microtrust] input parameters invalid");
        return -1;
    }
    META_LOG("[Meta][Microtrust] %s, property is: %s", __func__, property);
    int result = -1;
    unsigned int counter = 10;
    char property_result[PROPERTY_VALUE_MAX];
    memset(property_result, 0, PROPERTY_VALUE_MAX);

    while(counter>0)
    {
        memset(property_result, 0, PROPERTY_VALUE_MAX);
        property_get(property, property_result, "");
        if (strncmp(property_result, "END", strlen("END")) == 0)
        {
            result = 0;
            break;
        }
        counter--;
        sleep(1);
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return result;
}

/*
 * name: thh_get_req
 * function: get device activation request file
 */
static int thh_get_req(char *data_out, int *data_out_len)
{
    int result = -1;
    property_set(THH_COMMAND_PROPERTY, COMMAND_REQ);

    META_LOG("[Meta][Microtrust] %s in", __func__);

    result = wait_thh_signal(THH_COMMAND_PROPERTY);
    if (result == 0)
    {
        data_out[0] = 0;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait thh req end signal");
    }
    else
    {
        data_out[0] = 1;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait thh req signal timeout, result %d", result);
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return result;
}

/*
 * name: thh_startload
 * function: update vendor.soter.teei.thh.info property
 */
static int thh_startload(char *data_out, int *data_out_len)
{
    int result = -1;
    property_set(THH_COMMAND_PROPERTY, COMMAND_STARTLOAD);

    META_LOG("[Meta][Microtrust] %s in", __func__);

    result = wait_thh_signal(THH_COMMAND_PROPERTY);
    if (result == 0)
    {
        META_LOG("[Meta][Microtrust] wait thh end signal");
        data_out[0] = 0;
        *data_out_len = 1;
    }
    else
    {
        META_LOG("[Meta][Microtrust] wait thh signal timeout, result %d", result);
        data_out[0] = 1;
        *data_out_len = 1;
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return result;
}

/*
 * name: thh_export_beanpod_pubkey
 * function: export beanpod pubkey
 */
static int thh_export_beanpod_pubkey(char *data_out, int *data_out_len)
{
    int result = -1;
    property_set(THH_COMMAND_PROPERTY, COMMAND_EXPORT_BEANPOD_PUBKEY);

    META_LOG("[Meta][Microtrust] %s in", __func__);

    result = wait_thh_signal(THH_COMMAND_PROPERTY);
    if (result == 0)
    {
        META_LOG("[Meta][Microtrust] wait thh end signal");
        data_out[0] = 0;
        *data_out_len = 1;
    }
    else
    {
        data_out[0] = 1;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait thh signal timeout, result %d", result);
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return result;
}

/*
 * name: thh_export_beanpod_uuid
 * function: export beanpod uuid
 */
static int thh_export_beanpod_uuid(char *data_out, int *data_out_len)
{
    int result = -1;
    property_set(THH_COMMAND_PROPERTY, COMMAND_EXPORT_BEANPOD_UUID);

    META_LOG("[Meta][Microtrust] %s in", __func__);

    result = wait_thh_signal(THH_COMMAND_PROPERTY);
    if (result == 0)
    {
        META_LOG("[Meta][Microtrust] wait thh end signal");
        data_out[0] = 0;
        *data_out_len = 1;
    }
    else
    {
        data_out[0] = 1;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait thh signal timeout, result %d", result);
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return result;
}

/*
 * name: thh_export_wechat_uuid
 * function: export wechat uuid
 */
static int thh_export_wechat_uuid(char *data_out, int *data_out_len)
{
    int result = -1;
    property_set(THH_COMMAND_PROPERTY, COMMAND_EXPORT_WECHAT_UUID);

    META_LOG("[Meta][Microtrust] %s in", __func__);

    result = wait_thh_signal(THH_COMMAND_PROPERTY);
    if (result == 0)
    {
        data_out[0] = 0;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait thh end signal");
    }
    else
    {
        data_out[0] = 1;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait thh signal timeout, result %d", result);
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return result;
}

/*
 * name: thh_export_wechat_pubkey
 * function: export wechat  pubkey
 */
static int thh_export_wechat_pubkey(char *data_out, int *data_out_len)
{
    int result = -1;
    property_set(THH_COMMAND_PROPERTY, COMMAND_EXPORT_WECHAT_PUBKEY);

    META_LOG("[Meta][Microtrust] %s in", __func__);

    result = wait_thh_signal(THH_COMMAND_PROPERTY);
    if (result == 0)
    {
        data_out[0] = 0;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait thh end signal");
    }
    else
    {
        data_out[0] = 1;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait thh signal timeout, result %d", result);
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return result;
}

/*
 * name: thh_export_ifaa_transfer_key
 * function: export ifaa transfer key
 */
static int thh_export_ifaa_transfer_key(char *data_out, int *data_out_len)
{
    int result = -1;
    property_set(THH_COMMAND_PROPERTY, COMMAND_EXPORT_IFAA_TRANSFER_KEY);

    META_LOG("[Meta][Microtrust] %s in", __func__);

    result = wait_thh_signal(THH_COMMAND_PROPERTY);
    if (result == 0)
    {
        data_out[0] = 0;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait thh end signal");
    }
    else
    {
        data_out[0] = 1;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait thh signal timeout, result %d", result);
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return result;
}

/*
 * name: thh_import_ifaa_key
 * function: import ifaa private key
 */
static int thh_import_ifaa_key(char *data_out, int *data_out_len)
{
    int result = -1;
    property_set(THH_COMMAND_PROPERTY, COMMAND_IMPORT_IFAA_KEY);

    META_LOG("[Meta][Microtrust] %s in", __func__);

    result = wait_thh_signal(THH_COMMAND_PROPERTY);
    if (result == 0)
    {
        data_out[0] = 0;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] %s end signal", __func__);
    }
    else
    {
        data_out[0] = 1;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait %s timeout, result %d", __func__, result);
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return result;
}

/*
 * name: thh_write_rpmb_key
 * function: program rpmb key
 */
static int thh_write_rpmb_key(char *data_out, int *data_out_len)
{
    int result = -1;
    property_set(THH_COMMAND_PROPERTY, COMMAND_WRITE_RPMB_KEY);

    META_LOG("[Meta][Microtrust] %s in", __func__);

    result = wait_thh_signal(THH_COMMAND_PROPERTY);
    if (result == 0)
    {
        data_out[0] = 0;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] %s end signal", __func__);
    }
    else
    {
        data_out[0] = 1;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait %s timeout, result %d", __func__, result);
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return result;
}

/*
 * name: thh_check_rpmb_status
 * function: check rpmb status
 */
static int thh_check_rpmb_status(char *data_out, int *data_out_len)
{
    int result = -1;
    char rpmb_key_status[128] = { 0 };

    property_set(THH_COMMAND_PROPERTY, COMMAND_CHECK_RPMB_STATUS);

    META_LOG("[Meta][Microtrust] %s in", __func__);

    result = wait_thh_signal(THH_COMMAND_PROPERTY);
    if (result == 0)
    {
        property_get(RPMB_KEY_STATUS_PROPERTY, rpmb_key_status, NULL);
        if (strncmp(RPMB_KEY_NOT_PROGRAM, rpmb_key_status, strlen(RPMB_KEY_NOT_PROGRAM)) == 0)
        {
            data_out[0] = 7;
        }
        else if (strncmp(RPMB_KEY_MATCH, rpmb_key_status, strlen(RPMB_KEY_MATCH)) == 0)
        {
            data_out[0] = 0;
        }
        else if (strncmp(RPMB_KEY_MISMATCH, rpmb_key_status, strlen(RPMB_KEY_MISMATCH)) == 0)
        {
            data_out[0] = 2;
        }
        else
        {
            data_out[0] = 10;
            META_LOG("[Meta][Microtrust] unknown rpmb key status %s ,%s end signal", rpmb_key_status, __func__);
        }
        META_LOG("[Meta][Microtrust] %s end signal", __func__);
    }
    else
    {
        data_out[0] = 11;
        META_LOG("[Meta][Microtrust] wait %s timeout, result %d", __func__, result);
    }

    *data_out_len = 1;

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return result;
}

/*
 * name: thh_active_device
 * function: active device by dongle
 */
static int thh_active_device(char *data_out, int *data_out_len)
{
    int result = -1;
    property_set(THH_COMMAND_PROPERTY, COMMAND_RET);

    META_LOG("[Meta][Microtrust] %s in", __func__);

    result = wait_thh_signal(THH_COMMAND_PROPERTY);
    if (result == 0)
    {
        data_out[0] = 0;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait thh active device end signal");
    }
    else
    {
        data_out[0] = 1;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait thh signal timeout, result %d", result);
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);
    return result;
}

/*
 * name: thh_active_verify
 * function: get device activation status
 */
static int thh_active_verify(char *data_out, int *data_out_len)
{
    int result = -1;
    property_set(THH_COMMAND_PROPERTY, COMMAND_VFY);

    META_LOG("[Meta][Microtrust] %s in", __func__);

    result = wait_thh_signal(THH_COMMAND_PROPERTY);
    if (result == 0)
    {
        data_out[0] = 0;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait thh end signal");
    }
    else
    {
        data_out[0] = 1;
        *data_out_len = 1;
        META_LOG("[Meta][Microtrust] wait thh signal timeout, %s result %d", __func__, result);
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return result;
}

/*
 * name: parse_init_thh_command
 * function: parse init_thh command from PC tool
 */
static int parse_init_thh_command(char *command)
{
    int result = -1;

    META_LOG("[Meta][Microtrust] %s in, command is: %s", __func__, command);

    if (strncmp(command, INIT_THH_GET_REQUEST, strlen(INIT_THH_GET_REQUEST)) == 0)
    {
        result = THH_REQ;
    }
    else if(strncmp(command, INIT_THH_ACTIVE_DEVICE, strlen(INIT_THH_ACTIVE_DEVICE)) == 0)
    {
        result = THH_RET;
    }
    else if(strncmp(command, INIT_THH_ACTIVE_VERIFY, strlen(INIT_THH_ACTIVE_VERIFY)) == 0)
    {
        result = THH_VFY;
    }
    else if(strncmp(command, INIT_THH_STARTLOAD, strlen(INIT_THH_STARTLOAD)) == 0)
    {
        result = THH_STARTLOAD;
    }
    else if(strncmp(command, INIT_THH_EXPORT_THH_PUBKEY, strlen(INIT_THH_EXPORT_THH_PUBKEY)) == 0)
    {
        result = THH_EXPORT_THH_PUBKEY;
    }
    else if(strncmp(command, INIT_THH_EXPORT_THH_UUID, strlen(INIT_THH_EXPORT_THH_UUID)) == 0)
    {
        result = THH_EXPORT_THH_UUID;
    }
    else if(strncmp(command, INIT_THH_EXPORT_WECHAT_PUBKEY, strlen(INIT_THH_EXPORT_WECHAT_PUBKEY)) == 0)
    {
        result = THH_EXPORT_WECHAT_PUBKEY;
    }
    else if(strncmp(command, INIT_THH_EXPORT_WECHAT_UUID, strlen(INIT_THH_EXPORT_WECHAT_UUID)) == 0)
    {
        result = THH_EXPORT_WECHAT_UUID;
    }
    else if(strncmp(command, INIT_THH_EXPORT_IFAA_TRANSFER_KEY, strlen(INIT_THH_EXPORT_IFAA_TRANSFER_KEY)) == 0)
    {
        result = THH_EXPORT_IFAA_TRANSFER_KEY;
    }
    else if(strncmp(command, INIT_THH_IMPORT_IFAA_PRIKEY, strlen(INIT_THH_IMPORT_IFAA_PRIKEY)) == 0)
    {
        result = THH_IMPORT_IFAA_PRIKEY;
    }
    else if(strncmp(command, INIT_THH_WRITE_RPMB_KEY, strlen(INIT_THH_WRITE_RPMB_KEY)) == 0)
    {
        result = THH_WRITE_RPMB_KEY;
    }
    else if(strncmp(command, INIT_THH_CHECK_RPMB_STATUS, strlen(INIT_THH_CHECK_RPMB_STATUS)) == 0)
    {
        result = THH_CHECK_RPMB_STATUS;
    }
    else
    {
        META_LOG("[Meta][Microtrust] command not found");
        result = UNKOWN_COMMAND;
    }

    META_LOG("[Meta][Microtrust] %s out, result:%d", __func__, result);

    return result;
}

/*
 * name: thh_get_property
 * function: get android property
 */
static void thh_get_property(char *data_in, char *data_out, int *data_out_len)
{
	char property_result[128] = { 0 };
	data_out[0] = 0;
        int property_result_len = 0;

	META_LOG("[Meta][Microtrust] %s in", __func__);

	property_get(data_in, property_result, NULL);
        property_result_len = strlen(property_result);

	if (0 < property_result_len && property_result_len < 128)
	{
		data_out[0] = property_result_len;
		memcpy(&data_out[1], property_result, property_result_len);
		*data_out_len = 1 + property_result_len;
	}
	else
	{
		data_out[0] = 0;
		*data_out_len = 1;
		META_LOG("[Meta][Microtrust] %s out, get property failed, prop is %s, prop length is %zu", __func__, property_result, strlen(property_result));
	}

	META_LOG("[Meta][Microtrust] %s out, get property success, prop is %s", __func__, property_result);

	return;
}

/*
 * name: check_active_status
 * function: check device activation status
 */
static void check_active_status(char *data_out, int *data_out_len)
{
    char property_result[128] = { 0 };
    *data_out_len = 1;
    data_out[0] = 3;

    META_LOG("[Meta][Microtrust] %s in", __func__);

	property_get("vendor.soter.teei.thh.init", property_result, NULL);
    if (0 == strncmp(property_result, "ACTIVE", strlen("ACTIVE")))
    {
        data_out[0] = 0;
        META_LOG("[Meta][Microtrust] %s out, check status ok, status is %s", __func__, property_result);
    }
    else
    {
        data_out[0] = 1;
        META_LOG("[Meta][Microtrust] %s out, check status failed, status is %s", __func__, property_result);
    }

    return;
}

/*
 * name: check_soter_status
 * function: check Microtrust soter status
 */
static void check_soter_status(char *data_out, int *data_out_len)
{
    char property_result[128] = { 0 };
    *data_out_len = 1;
    data_out[0] = 3;

    META_LOG("[Meta][Microtrust] %s in", __func__);

	property_get("vendor.soter.teei.init", property_result, NULL);
    if (0 == strncmp(property_result, "INIT_OK", strlen("INIT_OK")))
    {
        data_out[0] = 0;
        META_LOG("[Meta][Microtrust] %s out, check status ok, status is %s", __func__, property_result);
    }
    else
    {
        data_out[0] = 1;
        META_LOG("[Meta][Microtrust] %s out, check status failed, status is %s", __func__, property_result);
    }

    return;
}

/*
 * name: check_init_thh_status
 * function: check Microtrust factory status
 */
static void check_init_thh_status(char *data_out, int *data_out_len)
{
    *data_out_len = 1;
    data_out[0] = 20;
    char property_result[128] = { 0 };

    META_LOG("[Meta][Microtrust] %s in", __func__);

	property_get("vendor.soter.teei.init", property_result, NULL);
    if (0 != strncmp(property_result, "INIT_OK", strlen("INIT_OK")))
    {
        data_out[0] = 21;
        META_LOG("[Meta][Microtrust] check_soter_status out, check status ok, status is %s", property_result);
        return;
    }

    memset(property_result, 0, 128);
	property_get("vendor.soter.teei.thh.info", property_result, NULL);
    if (strlen(property_result) > 0)
    {
        data_out[0] = 23;
        META_LOG("[Meta][Microtrust] check_thh_status out, check status ok, status is %s", property_result);
    }
    else
    {
        data_out[0] = 22;
        META_LOG("[Meta][Microtrust] check_thh_status out, check status failed, status is %s", property_result);
    }

    META_LOG("[Meta][Microtrust] %s out , result %d", __func__, data_out[0]);

    return;
}

/*
 * name: write_buffer_to_file
 * function: write buffer content to file
 */

static void write_buffer_to_file(const void *buffer, const char *filepath, size_t write_file_len, char *data_out, int *data_out_len)
{
    FILE *write_stream = NULL;
    size_t ret = 0;
    *data_out_len = 1;

    write_stream = fopen(filepath, "w+");
    if (write_stream == NULL)
    {
        META_LOG("[Meta][Microtrust] %s open %s failed, %s ", __func__, filepath, strerror(errno));
        data_out[0] = 1;

        return;
    }
    ret = fwrite(buffer, 1, write_file_len, write_stream);
    if (ret != write_file_len)
    {
        META_LOG("[Meta][Microtrust] %s write %s failed, buf len: %zu, result: %zu, %s", __func__, filepath, write_file_len, ret, strerror(errno));
        data_out[0] = 2;
        fclose(write_stream);

        return;
    }

    if (write_stream)
    {
        fclose(write_stream);
        write_stream = NULL;
    }
    data_out[0] = 0;

    return;
}

/*
 * name: call_phone_program
 * function: call Microtrust product line command for export uuids and pubkeys
 */
static void call_init_thh_command(char *command, char *data_out, int *data_out_len)
{
    int result = 0;
    *data_out_len = 1;

    META_LOG("[Meta][Microtrust] call_init_thh_command in, command is: %s", command);

    result = parse_init_thh_command(command);
    switch(result)
    {
    case THH_REQ:
        {
            thh_get_req(data_out, data_out_len);
            break;
        }
    case THH_RET:
        {
            thh_active_device(data_out, data_out_len);
            break;
        }
    case THH_VFY:
        {
            thh_active_verify(data_out, data_out_len);
            break;
        }
    case THH_STARTLOAD:
        {
            thh_startload(data_out, data_out_len);
            break;
        }
    case THH_EXPORT_THH_PUBKEY:
        {
            thh_export_beanpod_pubkey(data_out, data_out_len);
            break;
        }
    case THH_EXPORT_THH_UUID:
        {
            thh_export_beanpod_uuid(data_out, data_out_len);
            break;
        }
    case THH_EXPORT_WECHAT_PUBKEY:
        {
            thh_export_wechat_pubkey(data_out, data_out_len);
            break;
        }
    case THH_EXPORT_WECHAT_UUID:
        {
            thh_export_wechat_uuid(data_out, data_out_len);
            break;
        }
    case THH_EXPORT_IFAA_TRANSFER_KEY:
        {
            thh_export_ifaa_transfer_key(data_out, data_out_len);
            break;
        }
    case THH_IMPORT_IFAA_PRIKEY:
        {
            thh_import_ifaa_key(data_out, data_out_len);
            break;
        }
    case THH_WRITE_RPMB_KEY:
        {
            thh_write_rpmb_key(data_out, data_out_len);
            break;
        }
    case THH_CHECK_RPMB_STATUS:
        {
            thh_check_rpmb_status(data_out, data_out_len);
            break;
        }
    default:
        {
            data_out[0] = 121;
            *data_out_len = 1;
            META_LOG("[Meta][Microtrust] unkown comannd %d", result);
            break;
        }
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return;
}

/*
 * name: test_file_exist
 * function: test if exist file
 */
static void test_file_exist(const char *filepath, char *data_out, int *data_out_len)
{
    int result[256] = { 0 };
    char folder[256] = { 0 };
    int i = 0;
    int j = 0;
    *data_out_len = 1;

    META_LOG("[Meta][Microtrust] %s in", __func__);
    while (filepath[i] != '\0')
    {
        if (filepath[i] == '/')
        {
            memcpy(folder, filepath, i + 1);
            result[j] = access(folder, F_OK);
            j++;
        }
        i++;
    }
    if (result[j - 1] == 0)
    {
        data_out[0] = 0;  // the file exist
    }
    else
    {
        data_out[0] = 1;  // the folder no exist

        return;
    }

    if (access(filepath, F_OK) == -1)
    {
        data_out[0] = 2;  // the folder exist but file not exist
        META_LOG("[Meta][Microtrust] the folder exist but file not exist");
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return;
}

/*
 * name: get_file_length
 * function: get file length
 */
static void get_file_length(const char *filepath, char *data_out, int *data_out_len)
{
    FILE *fp = NULL;

    META_LOG("[Meta][Microtrust] %s in", __func__);

    if ((fp = fopen(filepath, "r")) == NULL)
    {
        *data_out_len = 1;
        data_out[0] = 1;
        META_LOG("[Meta][Microtrust] %s open %s failed, %s", __func__, filepath, strerror(errno));
    }
    else
    {
        fseek(fp, 0, 2);
        snprintf(&data_out[1], DATA_OUT_BUFFER_SIZE-1, "%ld", ftell(fp));
        data_out[0] = 0;
        *data_out_len = DATA_OUT_BUFFER_SIZE;
    }

    if (fp)
    {
        fclose(fp);
        fp = NULL;
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return;
}

/*
 * name: get_filename_by_suffix
 * function: find file by suffix, use for search Microtrust product line config file
 */
static void get_filename_by_suffix(const char *filepath, char *file_suffix, char *data_out, int *data_out_len)
{
    struct dirent *dir_entry = NULL;
    DIR *dir_info = NULL;
    int filename_length = 0;
    int suffix_length = 0;

    data_out[0] = 1;
    suffix_length = strlen(file_suffix);

    dir_info = opendir(filepath);
    if (dir_info)
    {
        while ((dir_entry = readdir(dir_info)) != NULL)
        {
            filename_length = strlen(dir_entry->d_name);
            if (strncmp(&dir_entry->d_name[filename_length - 4], file_suffix, suffix_length) == 0)
            {
                memcpy(&data_out[1], dir_entry->d_name, filename_length);
                data_out[0] = 0;
                break;
            }
        }
    }

    if (dir_info)
    {
        closedir(dir_info);
    }

    *data_out_len = filename_length + 1;

    return;
}

/*
 * name: check_googlekey_status
 * function: check Google Key status
 */
static void check_googlekey_status(char *data_out, int *data_out_len)
{
    char property_result[128] = { 0 };
    *data_out_len = 1;
    data_out[0] = 3;

    META_LOG("[Meta][Microtrust] %s in", __func__);

	property_get("vendor.soter.teei.googlekey.status", property_result, NULL);
    if (0 == strncmp(property_result, "OK", strlen("OK")))
    {
        data_out[0] = 0;
        META_LOG("[Meta][Microtrust] %s out, check status ok, status is %s", __func__, property_result);
    }
    else
    {
        data_out[0] = 1;
        META_LOG("[Meta][Microtrust] %s out, check status failed, status is %s", __func__, property_result);
    }

    return;
}

/*
 * name: handle_spmeta_request
 * function: handle request from PC tool
 */
int  handle_spmeta_request(unsigned char *data_in, int data_in_len, char *peer_buf, int *peer_buff_size)
{
    unsigned int filepath_len = 0;
    int tmp = data_in[1];
    int file_seek_counter = 0;
    char filepath[256] = { 0 };
    char file_suffix[8] = { 0 };
    char command[512] = { 0 };

    META_LOG("[Meta][Microtrust] ver:v2.0, %s in, request is %d", __func__, data_in[0]);

    switch (data_in[0]) {
    case WRITE_BUFFER_TO_PHONE:
        filepath_len = data_in[1];
        memcpy(filepath, &data_in[2], data_in[1]);
        write_buffer_to_file(&data_in[2 + filepath_len], filepath, data_in_len - 2 - data_in[1], peer_buf, peer_buff_size);
        break;
    case READ_FILE_TO_BUFFER:
        file_seek_counter = data_in[2];
        memcpy(filepath, &data_in[3], data_in[1]);
        read_file_to_buffer(filepath, peer_buf, file_seek_counter, peer_buff_size);
        break;
    case CALL_INIT_THH_COMMAND:
        memcpy(command, &data_in[2], data_in[1]);
        call_init_thh_command(command, peer_buf, peer_buff_size);
        break;
    case TEST_FILE_EXIST:
        memcpy(filepath, &data_in[2], data_in[1]);
        test_file_exist(filepath, peer_buf, peer_buff_size);
        break;
    case GET_FILE_LENGTH:
        memcpy(filepath, &data_in[2], data_in[1]);
        get_file_length(filepath, peer_buf, peer_buff_size);
        break;
    case CHECK_INIT_THH_STATUS:
        check_init_thh_status(peer_buf, peer_buff_size);
        break;
    case GET_FILENAME_BY_SUFFIX:
        memcpy(filepath, &data_in[2], tmp);
        memcpy(file_suffix, &data_in[2 + tmp + 1], data_in[2 + tmp]);
        get_filename_by_suffix(filepath, file_suffix, peer_buf, peer_buff_size);
        break;
    case CHECK_SOTER_STATUS:
        check_soter_status(peer_buf, peer_buff_size);
        break;
    case CHECK_ACTIVE_STATUS:
        check_active_status(peer_buf, peer_buff_size);
        break;
    case THH_GET_PROPERTY:
        memcpy(command, &data_in[2], data_in[1]);
        thh_get_property(command, peer_buf, peer_buff_size);
        break;
    case CHECK_GOOGLEKEY_STATUS:
        check_googlekey_status(peer_buf, peer_buff_size);
        break;
    default:
        peer_buf[0] = 123;
        break;
    }

    META_LOG("[Meta][Microtrust] %s out", __func__);

    return 0;
}

