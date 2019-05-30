/*
 * Copyright (c) 2015-2018 MICROTRUST Incorporated
 * All rights reserved
 *
 * This file and software is confidential and proprietary to MICROTRUST Inc.
 * Unauthorized copying of this file and software is strictly prohibited.
 * You MUST NOT disclose this file and software unless you get a license
 * agreement from MICROTRUST Incorporated.
 */
#define LOG_TAG "wechatnative"
#include <soter_ca.h>
//#include <tc_common.h>

#include <log/log.h>
#include <cutils/properties.h>
#include <errno.h>

// demo ca code
char host_name[] = "wechat";

static const TEEC_UUID WECHAT_TA_UUID = { 0xd78d338b, 0x1ac3, 0x49e0, { 0x9f, 0x65, 0xf4, 0xef, 0xe1, 0x79, 0x73, 0x9d } };


#define COMMAND_ID_GEN_ATTK_KEY                 0x1000
#define COMMAND_ID_VERIFY_ATTK_KEY              0x1001
#define COMMAND_ID_EXPORT_ATTK_KEY              0x1002
#define COMMAND_ID_GET_DEVICE_ID                0x1003
#define COMMAND_ID_GENERATE_ASK_KEY             0x1004
#define COMMAND_ID_EXPORT_ASK_KEY               0x1005
#define COMMAND_ID_REMOVE_ASK_KEY               0x1006
#define COMMAND_ID_HAS_ASK_KEY                  0x1007
#define COMMAND_ID_GENERATE_AUTH_KEY            0x1008
#define COMMAND_ID_EXPORT_AUTH_KEY              0x1009
#define COMMAND_ID_REMOVE_AUTH_KEY              0x100a
#define COMMAND_ID_HAS_AUTH_KEY                 0x100b
#define COMMAND_ID_INIT_SIGN                    0x100c
#define COMMAND_ID_FINISH_SIGN                  0x100d

#define COMMAND_ID_TEST_FILE                    0x2000

#define MAX_SHARED_MEMORY 2048



int gen_attk_key(int command_id, uint32_t num)
{
    TEEC_Context context;
    TEEC_Session session ;
    TEEC_Operation operation;
    TEEC_Result result;
    uint32_t returnOrigin = 0;
    char value[128] = {0};

    memset(&context, 0, sizeof(TEEC_Context));
    memset(&session, 0, sizeof(TEEC_Session));
    memset(&operation, 0, sizeof(TEEC_Operation));

    result = TEEC_InitializeContext(host_name, &context);
    if(result != TEEC_SUCCESS) {
        ALOGE("function [%s] TEEC_InitializeContext failed [%d]", __func__, __LINE__);
        goto cleanup_1;
    }

    result = TEEC_OpenSession(
            &context,
            &session,
            &WECHAT_TA_UUID,
            TEEC_LOGIN_PUBLIC,
            NULL,
            NULL,
            &returnOrigin);
    if(result != TEEC_SUCCESS) {
        ALOGE("function [%s] TEEC_OpenSession failed [%d]", __func__, __LINE__);
        goto cleanup_2;
    }

    operation.paramTypes = TEEC_PARAM_TYPES(TEEC_VALUE_INOUT, TEEC_NONE, TEEC_NONE, TEEC_NONE);
    property_get("ro.hardware", value, "");

    ALOGI("ro.hardware=%s", value);

    operation.params[0].value.a = num;
    memcpy(&operation.params[0].value.b, &value[2], 4);
    operation.started = 1;

    result = TEEC_InvokeCommand(&session,command_id,&operation,NULL);
    if (result != TEEC_SUCCESS) {
        ALOGE("function [%s] TEEC_InvokeCommand failed [%d]", __func__, __LINE__);
        goto cleanup_3;
    }

    cleanup_3:
        TEEC_CloseSession(&session);
    cleanup_2:
        TEEC_FinalizeContext(&context);
    cleanup_1:

    ALOGI("function [%s] result return %d [%d]", __func__, result, __LINE__);
    return result;
}

static int call_to_ta(int command_id, uint32_t id)
{
    TEEC_Context context;
    TEEC_Session session ;
    TEEC_Operation operation;
    TEEC_Result result;
    uint32_t returnOrigin = 0;

    memset(&context, 0, sizeof(TEEC_Context));
    memset(&session, 0, sizeof(TEEC_Session));
    memset(&operation, 0, sizeof(TEEC_Operation));

    result = TEEC_InitializeContext(host_name, &context);
    if(result != TEEC_SUCCESS) {
        ALOGE("function [%s] TEEC_InitializeContext failed [%d]", __func__, __LINE__);
        goto cleanup_1;
    }

    result = TEEC_OpenSession(
            &context,
            &session,
            &WECHAT_TA_UUID,
            TEEC_LOGIN_PUBLIC,
            NULL,
            NULL,
            &returnOrigin);
    if(result != TEEC_SUCCESS) {
        ALOGE("function [%s] TEEC_OpenSession failed [%d]", __func__, __LINE__);
        goto cleanup_2;
    }

    operation.paramTypes = TEEC_PARAM_TYPES(TEEC_VALUE_INOUT, TEEC_NONE, TEEC_NONE, TEEC_NONE);

    operation.params[0].value.a = id;
    operation.started = 1;

    result = TEEC_InvokeCommand(&session,command_id,&operation,NULL);
    if (result != TEEC_SUCCESS) {
        ALOGE("function [%s] TEEC_InvokeCommand failed [%d]", __func__, __LINE__);
        goto cleanup_3;
    }

    cleanup_3:
        TEEC_CloseSession(&session);
    cleanup_2:
        TEEC_FinalizeContext(&context);
    cleanup_1:

    ALOGI("function [%s] result return %d [%d]", __func__, result, __LINE__);
    return result;
}

int get_info(int command_id, uint8_t* rcv_buf, size_t* rbuf_len)
{
    ALOGI("%s called rcv_buf point %p, rbuf_len point %p rbuf_len value %zu", __func__, rcv_buf, rbuf_len, *rbuf_len);

    if (rcv_buf == NULL) {
        ALOGE("function [%s] rcv_buf is null [%d]", __func__, __LINE__);
        return -1;
    }

    if (rbuf_len == NULL) {
        ALOGE("function [%s] rbuf_len is null [%d]", __func__, __LINE__);
        return -2;
    }

    if (*rbuf_len > MAX_SHARED_MEMORY) {
        ALOGE("function [%s] *rbuf_len > MAX_SHARED_MEMORY [%d], *rbuf_len %zu, MAX_SHARED_MEMORY %d", __func__, __LINE__, *rbuf_len, MAX_SHARED_MEMORY);
        return -3;
    }

    TEEC_Context context;
    TEEC_Session session ;
    TEEC_Operation operation ;
    TEEC_SharedMemory output_buffer;
    TEEC_Result result;
    uint32_t returnOrigin = 0;

    memset(&context, 0, sizeof(TEEC_Context));
    memset(&session, 0, sizeof(TEEC_Session));
    memset(&operation, 0, sizeof(TEEC_Operation));

    result = TEEC_InitializeContext(host_name, &context);
    if(result != TEEC_SUCCESS) {
        ALOGE("function [%s] TEEC_InitializeContext failed [%d]", __func__, __LINE__);
        goto cleanup_1;
    }

    result = TEEC_OpenSession(
            &context,
            &session,
            &WECHAT_TA_UUID,
            TEEC_LOGIN_PUBLIC,
            NULL,
            NULL,
            &returnOrigin);
    if(result != TEEC_SUCCESS) {
        ALOGE("function [%s] TEEC_OpenSession failed [%d]", __func__, __LINE__);
        goto cleanup_2;
    }

    output_buffer.size = *rbuf_len;
    output_buffer.flags = TEEC_MEM_OUTPUT;
    result = TEEC_AllocateSharedMemory(&context, &output_buffer);
    if (result != TEEC_SUCCESS || output_buffer.buffer == 0) {
        ALOGE("function [%s] TEEC_AllocateSharedMemory failed [%d]", __func__, __LINE__);
        goto cleanup_3;
    }
    memset(output_buffer.buffer, 0, output_buffer.size);
    operation.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_PARTIAL_OUTPUT, TEEC_NONE, TEEC_NONE, TEEC_NONE);

    operation.params[0].memref.parent = &output_buffer;
    operation.params[0].memref.offset = 0;
    operation.params[0].memref.size = output_buffer.size;
    operation.started = 1;
    result = TEEC_InvokeCommand(&session,command_id,&operation,NULL);
    if (result != TEEC_SUCCESS) {
        ALOGE("function [%s] TEEC_InvokeCommand failed [%d]", __func__, __LINE__);
        goto cleanup_4;
    }

    *rbuf_len = operation.params[0].memref.size;
    memcpy(rcv_buf, output_buffer.buffer, *rbuf_len);
    cleanup_4:
        TEEC_ReleaseSharedMemory(&output_buffer);
    cleanup_3:
        TEEC_CloseSession(&session);
    cleanup_2:
        TEEC_FinalizeContext(&context);
    cleanup_1:

    ALOGI("function [%s] result return %d [%d]", __func__, result, __LINE__);
    return result;
}

int set_info(int command_id, void* send_buf, uint32_t sbuf_len)
{
    if (send_buf == NULL || sbuf_len > MAX_SHARED_MEMORY) {
        return -1;
    }
    TEEC_Context context;
    TEEC_Session session;
    TEEC_Operation operation;
    TEEC_SharedMemory input_buffer;
    TEEC_Result result;
    uint32_t returnOrigin = 0;

    memset(&context, 0, sizeof(TEEC_Context));
    memset(&session, 0, sizeof(TEEC_Session));
    memset(&operation, 0, sizeof(TEEC_Operation));

    result = TEEC_InitializeContext(host_name, &context);
    if(result != TEEC_SUCCESS) {
        goto cleanup_1;
    }

    result = TEEC_OpenSession(
            &context,
            &session,
            &WECHAT_TA_UUID,
            TEEC_LOGIN_PUBLIC,
            NULL,
            NULL,
            &returnOrigin);
    if(result != TEEC_SUCCESS) {
        goto cleanup_2;
    }

    input_buffer.size = sbuf_len;
    input_buffer.flags = TEEC_MEM_INPUT;
    result = TEEC_AllocateSharedMemory(&context, &input_buffer);
    if (result != TEEC_SUCCESS || input_buffer.buffer == 0) {
        goto cleanup_3;
    }
    memcpy(input_buffer.buffer, send_buf, sbuf_len);

    operation.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_PARTIAL_INPUT, TEEC_NONE, TEEC_NONE, TEEC_NONE);

    operation.params[0].memref.parent = &input_buffer;
    operation.params[0].memref.offset = 0;
    operation.params[0].memref.size = input_buffer.size;
    operation.started = 1;

    result = TEEC_InvokeCommand(&session,command_id,&operation,NULL);
    if (result != TEEC_SUCCESS) {
        goto cleanup_4;
    }

    cleanup_4:
        TEEC_ReleaseSharedMemory(&input_buffer);
    cleanup_3:
        TEEC_CloseSession(&session);
    cleanup_2:
        TEEC_FinalizeContext(&context);
    cleanup_1:

    ALOGI("function [%s] result return %d [%d]", __func__, result, __LINE__);
    return result;
}

int gen_auth_key(int command_id, int uid, void* name_buf, uint32_t name_len)
{
    if (name_buf == NULL || name_len > MAX_SHARED_MEMORY) {
        return -1;
    }

    TEEC_Context context;
    TEEC_Session session;
    TEEC_Operation operation;
    TEEC_SharedMemory name_buffer;
    TEEC_Result result;
    uint32_t returnOrigin = 0;

    memset(&context, 0, sizeof(TEEC_Context));
    memset(&session, 0, sizeof(TEEC_Session));
    memset(&operation, 0, sizeof(TEEC_Operation));

    result = TEEC_InitializeContext(host_name, &context);
    if(result != TEEC_SUCCESS) {
        goto cleanup_1;
    }

    result = TEEC_OpenSession(
            &context,
            &session,
            &WECHAT_TA_UUID,
            TEEC_LOGIN_PUBLIC,
            NULL,
            NULL,
            &returnOrigin);
    if(result != TEEC_SUCCESS) {
        goto cleanup_2;
    }

    name_buffer.size = name_len;
    name_buffer.flags = TEEC_MEM_INPUT;
    result = TEEC_AllocateSharedMemory(&context, &name_buffer);
    if (result != TEEC_SUCCESS || name_buffer.buffer == 0) {
        goto cleanup_3;
    }
    memcpy(name_buffer.buffer, name_buf, name_len);

    operation.paramTypes = TEEC_PARAM_TYPES(TEEC_VALUE_INOUT, TEEC_MEMREF_PARTIAL_INPUT, TEEC_NONE, TEEC_NONE);

    operation.params[0].value.a = uid;

    operation.params[1].memref.parent = &name_buffer;
    operation.params[1].memref.offset = 0;
    operation.params[1].memref.size = name_buffer.size;

    operation.started = 1;

    result = TEEC_InvokeCommand(&session,command_id,&operation,NULL);
    if (result != TEEC_SUCCESS) {
        goto cleanup_4;
    }

    cleanup_4:
        TEEC_ReleaseSharedMemory(&name_buffer);
    cleanup_3:
        TEEC_CloseSession(&session);
    cleanup_2:
        TEEC_FinalizeContext(&context);
    cleanup_1:

    ALOGI("function [%s] result return %d [%d]", __func__, result, __LINE__);
    return result;
}

int auth_key_utils(int command_id, int uid, void* name_buf, uint32_t name_len,
                    void* result_buffer, uint32_t* result_len, void* signature_buffer, uint32_t* signature_len)
{
    if (name_buf == NULL || name_len > MAX_SHARED_MEMORY
     || result_buffer == NULL || *result_len > MAX_SHARED_MEMORY || result_len == NULL
     || signature_buffer == NULL || signature_len == NULL || *signature_len > MAX_SHARED_MEMORY) {
        return -1;
    }

    TEEC_Context context;
    TEEC_Session session;
    TEEC_Operation operation;
    TEEC_SharedMemory name_buffer;
    TEEC_SharedMemory result_buf;
    TEEC_SharedMemory signature_buf;
    TEEC_Result result;
    uint32_t returnOrigin = 0;

    memset(&context, 0, sizeof(TEEC_Context));
    memset(&session, 0, sizeof(TEEC_Session));
    memset(&operation, 0, sizeof(TEEC_Operation));

    result = TEEC_InitializeContext(host_name, &context);
    if(result != TEEC_SUCCESS) {
        goto cleanup_1;
    }

    result = TEEC_OpenSession(
            &context,
            &session,
            &WECHAT_TA_UUID,
            TEEC_LOGIN_PUBLIC,
            NULL,
            NULL,
            &returnOrigin);
    if(result != TEEC_SUCCESS) {
        goto cleanup_2;
    }

    name_buffer.size = name_len;
    name_buffer.flags = TEEC_MEM_INPUT;
    result = TEEC_AllocateSharedMemory(&context, &name_buffer);
    if (result != TEEC_SUCCESS || name_buffer.buffer == 0) {
        goto cleanup_3;
    }
    memcpy(name_buffer.buffer, name_buf, name_len);

    result_buf.size = *result_len;
    result_buf.flags = TEEC_MEM_OUTPUT;
    result = TEEC_AllocateSharedMemory(&context, &result_buf);
    if (result != TEEC_SUCCESS || result_buf.buffer == 0) {
        goto cleanup_4;
    }

    signature_buf.size = *signature_len;
    signature_buf.flags = TEEC_MEM_OUTPUT;
    result = TEEC_AllocateSharedMemory(&context, &signature_buf);
    if (result != TEEC_SUCCESS || signature_buf.buffer == 0) {
        goto cleanup_5;
    }

    operation.paramTypes = TEEC_PARAM_TYPES(TEEC_VALUE_INOUT, TEEC_MEMREF_PARTIAL_INPUT, TEEC_MEMREF_PARTIAL_OUTPUT, TEEC_MEMREF_PARTIAL_OUTPUT);

    operation.params[0].value.a = uid;

    operation.params[1].memref.parent = &name_buffer;
    operation.params[1].memref.offset = 0;
    operation.params[1].memref.size = name_buffer.size;

    operation.params[2].memref.parent = &result_buf;
    operation.params[2].memref.offset = 0;
    operation.params[2].memref.size = result_buf.size;

    operation.params[3].memref.parent = &signature_buf;
    operation.params[3].memref.offset = 0;
    operation.params[3].memref.size = signature_buf.size;

    operation.started = 1;

    result = TEEC_InvokeCommand(&session,command_id,&operation,NULL);
    if (result != TEEC_SUCCESS) {
        goto cleanup_6;
    }

    *result_len = operation.params[2].memref.size;
    *signature_len = operation.params[3].memref.size;
    memcpy(result_buffer, result_buf.buffer, *result_len);
    memcpy(signature_buffer, signature_buf.buffer, *signature_len);


    cleanup_6:
        TEEC_ReleaseSharedMemory(&signature_buf);
    cleanup_5:
        TEEC_ReleaseSharedMemory(&result_buf);
    cleanup_4:
        TEEC_ReleaseSharedMemory(&name_buffer);
    cleanup_3:
        TEEC_CloseSession(&session);
    cleanup_2:
        TEEC_FinalizeContext(&context);
    cleanup_1:

    ALOGI("function [%s] result return %d [%d]", __func__, result, __LINE__);
    return result;
}

int auth_init_sign(int command_id, int uid, void* name_buf, uint32_t name_len, void* challenge, uint32_t challenge_len,
                    void* result_buffer, uint32_t* result_len)
{
    if (name_buf == NULL || name_len > MAX_SHARED_MEMORY
     || challenge == NULL || challenge_len > MAX_SHARED_MEMORY
     || result_buffer == NULL || *result_len > MAX_SHARED_MEMORY || result_len == NULL) {
        return -1;
    }

    TEEC_Context context;
    TEEC_Session session;
    TEEC_Operation operation;
    TEEC_SharedMemory name_buffer;
    TEEC_SharedMemory challenge_buf;
    TEEC_SharedMemory result_buf;
    TEEC_Result result;
    uint32_t returnOrigin = 0;

    memset(&context, 0, sizeof(TEEC_Context));
    memset(&session, 0, sizeof(TEEC_Session));
    memset(&operation, 0, sizeof(TEEC_Operation));

    result = TEEC_InitializeContext(host_name, &context);
    if(result != TEEC_SUCCESS) {
        goto cleanup_1;
    }

    result = TEEC_OpenSession(
            &context,
            &session,
            &WECHAT_TA_UUID,
            TEEC_LOGIN_PUBLIC,
            NULL,
            NULL,
            &returnOrigin);
    if(result != TEEC_SUCCESS) {
        goto cleanup_2;
    }

    name_buffer.size = name_len;
    name_buffer.flags = TEEC_MEM_INPUT;
    result = TEEC_AllocateSharedMemory(&context, &name_buffer);
    if (result != TEEC_SUCCESS || name_buffer.buffer == 0) {
        goto cleanup_3;
    }
    memcpy(name_buffer.buffer, name_buf, name_len);

    challenge_buf.size = challenge_len;
    challenge_buf.flags = TEEC_MEM_INPUT;
    result = TEEC_AllocateSharedMemory(&context, &challenge_buf);
    if (result != TEEC_SUCCESS || challenge_buf.buffer == 0) {
        goto cleanup_4;
    }

	memcpy(challenge_buf.buffer, challenge, challenge_len);

    result_buf.size = *result_len;
    result_buf.flags = TEEC_MEM_OUTPUT;
    result = TEEC_AllocateSharedMemory(&context, &result_buf);
    if (result != TEEC_SUCCESS || result_buf.buffer == 0) {
        goto cleanup_5;
    }

    operation.paramTypes = TEEC_PARAM_TYPES(TEEC_VALUE_INOUT, TEEC_MEMREF_PARTIAL_INPUT, TEEC_MEMREF_PARTIAL_INPUT, TEEC_MEMREF_PARTIAL_OUTPUT);

    operation.params[0].value.a = uid;

    operation.params[1].memref.parent = &name_buffer;
    operation.params[1].memref.offset = 0;
    operation.params[1].memref.size = name_buffer.size;

    operation.params[2].memref.parent = &challenge_buf;
    operation.params[2].memref.offset = 0;
    operation.params[2].memref.size = challenge_buf.size;

    operation.params[3].memref.parent = &result_buf;
    operation.params[3].memref.offset = 0;
    operation.params[3].memref.size = result_buf.size;

    operation.started = 1;

    result = TEEC_InvokeCommand(&session,command_id,&operation,NULL);
    if (result != TEEC_SUCCESS) {
        goto cleanup_6;
    }

    *result_len = operation.params[3].memref.size;
    memcpy(result_buffer, result_buf.buffer, *result_len);

    cleanup_6:
        TEEC_ReleaseSharedMemory(&result_buf);
    cleanup_5:
        TEEC_ReleaseSharedMemory(&challenge_buf);
    cleanup_4:
        TEEC_ReleaseSharedMemory(&name_buffer);
    cleanup_3:
        TEEC_CloseSession(&session);
    cleanup_2:
        TEEC_FinalizeContext(&context);
    cleanup_1:

    ALOGI("function [%s] result return %d [%d]", __func__, result, __LINE__);
    return result;
}

int auth_finish_sign(int command_id, void* session_buf, uint32_t session_len, void* result_buffer, uint32_t* result_len, void* signature_buffer, uint32_t* signature_len)
{

    if (session_buf == NULL || session_len > MAX_SHARED_MEMORY
     || result_buffer == NULL  || result_len == NULL || *result_len > MAX_SHARED_MEMORY
     || signature_buffer == NULL || signature_len == NULL || *signature_len > MAX_SHARED_MEMORY) {
         ALOGE("finish sign input error");
        return -1;
    }

    TEEC_Context context;
    TEEC_Session session;
    TEEC_Operation operation;
    TEEC_SharedMemory session_buffer;
    TEEC_SharedMemory result_buf;
    TEEC_SharedMemory signature_buf;
    TEEC_Result result;
    uint32_t returnOrigin = 0;

    memset(&context, 0, sizeof(TEEC_Context));
    memset(&session, 0, sizeof(TEEC_Session));
    memset(&operation, 0, sizeof(TEEC_Operation));

    result = TEEC_InitializeContext(host_name, &context);
    if(result != TEEC_SUCCESS) {
        goto cleanup_1;
    }

    result = TEEC_OpenSession(
            &context,
            &session,
            &WECHAT_TA_UUID,
            TEEC_LOGIN_PUBLIC,
            NULL,
            NULL,
            &returnOrigin);
    if(result != TEEC_SUCCESS) {
        goto cleanup_2;
    }

    session_buffer.size = session_len;
    session_buffer.flags = TEEC_MEM_INPUT;
    result = TEEC_AllocateSharedMemory(&context, &session_buffer);
    if (result != TEEC_SUCCESS || session_buffer.buffer == 0) {
        goto cleanup_3;
    }
    memcpy(session_buffer.buffer, session_buf, session_len);

    result_buf.size = *result_len;
    result_buf.flags = TEEC_MEM_OUTPUT;
    result = TEEC_AllocateSharedMemory(&context, &result_buf);
    if (result != TEEC_SUCCESS || result_buf.buffer == 0) {
        goto cleanup_4;
    }

    signature_buf.size = *signature_len;
    signature_buf.flags = TEEC_MEM_OUTPUT;
    result = TEEC_AllocateSharedMemory(&context, &signature_buf);
    if (result != TEEC_SUCCESS || signature_buf.buffer == 0) {
        goto cleanup_5;
    }

    operation.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_PARTIAL_INPUT, TEEC_MEMREF_PARTIAL_OUTPUT, TEEC_MEMREF_PARTIAL_OUTPUT, TEEC_NONE);

    operation.params[0].memref.parent = &session_buffer;
    operation.params[0].memref.offset = 0;
    operation.params[0].memref.size = session_buffer.size;

    operation.params[1].memref.parent = &result_buf;
    operation.params[1].memref.offset = 0;
    operation.params[1].memref.size = result_buf.size;

    operation.params[2].memref.parent = &signature_buf;
    operation.params[2].memref.offset = 0;
    operation.params[2].memref.size = signature_buf.size;

    operation.started = 1;

    result = TEEC_InvokeCommand(&session,command_id,&operation,NULL);
    if (result != TEEC_SUCCESS) {
        goto cleanup_6;
    }

    *result_len = operation.params[1].memref.size;
    memcpy(result_buffer, result_buf.buffer, *result_len);
    *signature_len = operation.params[2].memref.size;
    memcpy(signature_buffer, signature_buf.buffer, *signature_len);

    cleanup_6:
        TEEC_ReleaseSharedMemory(&session_buffer);
    cleanup_5:
        TEEC_ReleaseSharedMemory(&signature_buf);
    cleanup_4:
        TEEC_ReleaseSharedMemory(&result_buf);
    cleanup_3:
        TEEC_CloseSession(&session);
    cleanup_2:
        TEEC_FinalizeContext(&context);
    cleanup_1:

    return result;
}

int invoke_command(int command_id, uint32_t uid, void* rcv_buf, uint32_t* rbuf_len, void* rcv_sign, uint32_t* rcv_sign_len)
{
    ALOGI("called function %s\n", __func__);
    if (rcv_buf == NULL || rbuf_len == NULL || *rbuf_len < 1 || *rbuf_len > MAX_SHARED_MEMORY) {
        return -1;
    }

    TEEC_Context context;
    TEEC_Session session;
    TEEC_Operation operation;
    TEEC_SharedMemory output_buffer;
    TEEC_SharedMemory sign_buffer;
    TEEC_Result result;
    uint32_t returnOrigin = 0;

    memset(&context, 0, sizeof(TEEC_Context));
    memset(&session, 0, sizeof(TEEC_Session));
    memset(&operation, 0, sizeof(TEEC_Operation));

    result = TEEC_InitializeContext(host_name,&context);
    if(result != TEEC_SUCCESS) {
        goto cleanup_1;
    }

    result = TEEC_OpenSession(
            &context,
            &session,
            &WECHAT_TA_UUID,
            TEEC_LOGIN_PUBLIC,
            NULL,
            NULL,
            &returnOrigin);
    if(result != TEEC_SUCCESS) {
        goto cleanup_2;
    }

    output_buffer.size = *rbuf_len;
    output_buffer.flags = TEEC_MEM_OUTPUT;
    result = TEEC_AllocateSharedMemory(&context, &output_buffer);
    if (result != TEEC_SUCCESS || output_buffer.buffer == 0) {
        goto cleanup_3;
    }
    memset(output_buffer.buffer, 0, output_buffer.size);

    sign_buffer.size = *rcv_sign_len;
    sign_buffer.flags = TEEC_MEM_OUTPUT;
    result = TEEC_AllocateSharedMemory(&context, &sign_buffer);
    if (result != TEEC_SUCCESS || sign_buffer.buffer == 0) {
        goto cleanup_4;
    }
    memset(sign_buffer.buffer, 0, sign_buffer.size);

    operation.paramTypes = TEEC_PARAM_TYPES(TEEC_VALUE_INPUT,TEEC_MEMREF_PARTIAL_OUTPUT,
                    TEEC_MEMREF_PARTIAL_OUTPUT, TEEC_NONE);

    operation.params[0].value.a = uid;

    operation.params[1].memref.parent = &output_buffer;
    operation.params[1].memref.offset = 0;
    operation.params[1].memref.size = output_buffer.size;
    operation.params[2].memref.parent = &sign_buffer;
    operation.params[2].memref.offset = 0;
    operation.params[2].memref.size = sign_buffer.size;
    operation.started = 1;

    result = TEEC_InvokeCommand(&session,command_id,&operation,NULL);
    if (result != TEEC_SUCCESS) {
        goto cleanup_5;
    }

    *rbuf_len = operation.params[1].memref.size;
    memcpy(rcv_buf, output_buffer.buffer, *rbuf_len);


    *rcv_sign_len = operation.params[2].memref.size;
    memcpy(rcv_sign, sign_buffer.buffer, *rcv_sign_len);

    cleanup_5:
        TEEC_ReleaseSharedMemory(&sign_buffer);
    cleanup_4:
        TEEC_ReleaseSharedMemory(&output_buffer);
    cleanup_3:
        TEEC_CloseSession(&session);
    cleanup_2:
        TEEC_FinalizeContext(&context);
    cleanup_1:

    ALOGI("function [%s] result return %d [%d]", __func__, result, __LINE__);
    return result;
}

soter_error_t generate_attk_key_pair(const uint8_t copy_num)
{
    int result = gen_attk_key(COMMAND_ID_GEN_ATTK_KEY, copy_num);
    ALOGI("%s called and result %d", __func__, result);
    if (result == 0) {
        return SOTER_ERROR_OK;
    }

    return SOTER_ERROR_ATTK_IS_VALID;
}

soter_error_t verify_attk_key_pair()
{
    int result = call_to_ta(COMMAND_ID_VERIFY_ATTK_KEY, 0);
    ALOGI("%s called and result %d", __func__, result);
    if (result == 0)
    {
        return SOTER_ERROR_OK;
    }

    return SOTER_ERROR_ATTK_IS_VALID;
}

soter_error_t export_attk_public_key(uint8_t* pub_key_data, size_t* pub_key_data_length)
{
    int result = get_info(COMMAND_ID_EXPORT_ATTK_KEY, pub_key_data, pub_key_data_length);
    ALOGI("%s called and result %d", __func__, result);
    if (result == 0) {
        return SOTER_ERROR_OK;
    }

    return SOTER_ERROR_ATTK_IS_VALID;
}

soter_error_t get_device_id(uint8_t* device_id, size_t* device_id_length)
{
    int result = get_info(COMMAND_ID_GET_DEVICE_ID, device_id, device_id_length);
    ALOGI("%s called and result %d", __func__, result);
    if (result == 0) {
        return SOTER_ERROR_OK;
    }

    return SOTER_ERROR_ATTK_IS_VALID;
}

soter_error_t generate_ask_key_pair(const uint8_t* uid)
{
    int uid_int = 0;
    memcpy(&uid_int, uid, sizeof(int));
    int result = call_to_ta(COMMAND_ID_GENERATE_ASK_KEY, uid_int);
    ALOGI("%s called and result %d", __func__, result);
    if (result == 0) {
        return SOTER_ERROR_OK;
    }

    return SOTER_ERROR_ATTK_IS_VALID;
}

soter_error_t export_ask_public_key(const uint8_t* uid, soter_ask_struct* data)
{
    // params for soter ask key buffer
    uint32_t rbuf_len = 1024;
    uint8_t rcv_buf[rbuf_len];

    uint32_t rcv_sign_len = 1024;
    uint8_t rcv_sign_buf[rcv_sign_len];

    uint32_t uid_val = 0;
    memcpy(&uid_val, uid, sizeof(uint32_t));

    int result = invoke_command(COMMAND_ID_EXPORT_ASK_KEY, uid_val, (void*)rcv_buf, (uint32_t*)&rbuf_len, (void*)rcv_sign_buf, (uint32_t*)&rcv_sign_len);
    ALOGI("%s called and result %d", __func__, result);
    if (result != 0)
    {
        return SOTER_ERROR_UNKNOWN_ERROR;
    }

    memcpy(data->json, rcv_buf, rbuf_len);
    data->json_length = rbuf_len;
    memcpy(data->signature, rcv_sign_buf, rcv_sign_len);
    data->signature_length = rcv_sign_len;

    ALOGI("%s rbuf_len %d", __func__, rbuf_len);
    ALOGI("%s rcv_sign_len %d", __func__, rcv_sign_len);

    return SOTER_ERROR_OK;
}

soter_error_t remove_all_uid_key(const uint8_t* uid)
{
    int uid_int = 0;
    memcpy(&uid_int, uid, sizeof(int));
    int result = call_to_ta(COMMAND_ID_REMOVE_ASK_KEY, uid_int);
    ALOGI("%s called and result %d", __func__, result);
    if (result == 0) {
        return SOTER_ERROR_OK;
    }

    return SOTER_ERROR_ATTK_IS_VALID;
}

soter_error_t has_ask_already(const uint8_t* uid)
{
    int uid_int = 0;
    memcpy(&uid_int, uid, sizeof(int));
    int result = call_to_ta(COMMAND_ID_HAS_ASK_KEY, uid_int);
    ALOGI("%s called and result %d", __func__, result);
    if (result == 0) {
        return SOTER_ERROR_OK;
    }

    return SOTER_ERROR_ATTK_IS_VALID;
}

soter_error_t generate_auth_key_pair(const uint8_t* uid, const char* name)
{
    int uid_int = 0;

    memcpy(&uid_int, uid, sizeof(int));
    int result = gen_auth_key(COMMAND_ID_GENERATE_AUTH_KEY, uid_int, (void*)name, (uint32_t)strlen(name));
    ALOGI("%s called and result %d", __func__, result);
    if (result == 0)
    {
        return SOTER_ERROR_OK;
    }

    return SOTER_ERROR_ATTK_IS_VALID;
}

soter_error_t export_auth_key_public_key(const uint8_t* uid, const char* name, soter_auth_key_struct* data)
{
    int uid_int = 0;

    memcpy(&uid_int, uid, sizeof(int));
    int result = auth_key_utils(COMMAND_ID_EXPORT_AUTH_KEY, uid_int, (void*)name, (uint32_t)strlen(name),
                               (void*)data->json, (uint32_t*)&(data->json_length),
                               (void*)data->signature, (uint32_t*)&(data->signature_length));
    ALOGI("%s called and result %d", __func__, result);
    if (result != 0) {
        return SOTER_ERROR_ATTK_IS_VALID;
    }

    return SOTER_ERROR_OK;
}

soter_error_t remove_auth_key(const uint8_t* uid, const char* name)
{
    int uid_int = 0;

    memcpy(&uid_int, uid, sizeof(int));
    int result = gen_auth_key(COMMAND_ID_REMOVE_AUTH_KEY, uid_int,(void*)name, (uint32_t)strlen(name));
    ALOGI("%s called and result %d", __func__, result);
    if (result == 0) {
        return SOTER_ERROR_OK;
    }

    return SOTER_ERROR_ATTK_IS_VALID;
}

soter_error_t has_auth_key(const uint8_t* uid, const char* name)
{
    int uid_int = 0;

    memcpy(&uid_int, uid, sizeof(int));
    int result = gen_auth_key(COMMAND_ID_HAS_AUTH_KEY, uid_int, (void*)name, (uint32_t)strlen(name));
    ALOGI("%s called and result %d", __func__, result);
    if (result == 0) {
        return SOTER_ERROR_OK;
    }

    return SOTER_ERROR_ATTK_IS_VALID;
}

soter_error_t init_sign(const uint8_t* uid, const char* name, const char* challenge, soter_sign_session* data)
{
    int uid_int = 0;
    unsigned long long handler = 0;

    memcpy(&uid_int, uid, sizeof(int));

    int result = auth_init_sign(COMMAND_ID_INIT_SIGN, uid_int, (void*)name, (uint32_t)strlen(name), (void*)challenge, (uint32_t)strlen(challenge), (void*)data->session, (uint32_t*)&(data->session_length));
    ALOGI("%s called and result %d", __func__, result);
    memcpy(&handler, data->session, data->session_length);

    if (result == 0) {
        return SOTER_ERROR_OK;
    }

    return SOTER_ERROR_ATTK_IS_VALID;
}

soter_error_t finish_sign(const soter_sign_session* session, soter_sign_result_struct* data)
{
    unsigned long long handler = 0;
    memcpy(&handler, session->session, session->session_length);

    int result = auth_finish_sign(COMMAND_ID_FINISH_SIGN, (void*)session->session, (uint32_t)session->session_length, (void*)data->json, (uint32_t*)(&(data->json_length)), (void*)data->signature, (uint32_t*)(&(data->signature_length)));
    ALOGI("%s called and result %d", __func__, result);
    if (result == 0) {
        return SOTER_ERROR_OK;
    }

    return SOTER_ERROR_ATTK_IS_VALID;
}

soter_error_t ut_get_wechat_info(wechat_info_t *wechat_info) {
    (void)wechat_info;

    soter_error_t ret = SOTER_ERROR_OK;
//    ret = wechat_get_wechat_info(wechat_info);
    return ret;
}

static int ut_wechat_open(const hw_module_t* module, const char* name, hw_device_t** device);

static int ut_wechat_close(hw_device_t* dev);

static struct hw_module_methods_t wechat_module_methods = {
        .open = ut_wechat_open,
};

__attribute__((visibility("default")))
struct wechat_module HAL_MODULE_INFO_SYM = {
        .common =
        {
                .tag = HARDWARE_MODULE_TAG,
                .module_api_version = WECHAT_MODULE_API_VERSION_0_1,
                .hal_api_version = HARDWARE_HAL_API_VERSION,
                .id = WECHAT_HARDWARE_MODULE_ID,
                .name = WECHAT_HARDWARE_MODULE_NAME,
                .author = "Microtrust",
                .methods = &wechat_module_methods,
                .dso = 0,
                .reserved = {},
        },
};

static int ut_wechat_open(const hw_module_t* module, const char* name, hw_device_t** device) {
    IMSG_ENTER();

    if (name == NULL)
        return -EINVAL;

    // Make sure we initialize only if module provided is known
    if ((module->tag != HAL_MODULE_INFO_SYM.common.tag) ||
        (module->module_api_version != HAL_MODULE_INFO_SYM.common.module_api_version) ||
        (module->hal_api_version != HAL_MODULE_INFO_SYM.common.hal_api_version) ||
        (0 != memcmp(module->name, HAL_MODULE_INFO_SYM.common.name,
                    sizeof(WECHAT_HARDWARE_MODULE_NAME)-1)) )
    {
        ALOGE("invalide kmwechat module information");
        return -EINVAL;
    }

    wechat_device_t* dev = NULL;
    dev = (wechat_device_t*)malloc(sizeof(wechat_device_t));

    dev->common.tag = HARDWARE_MODULE_TAG;
    dev->common.version = 1;
    dev->common.module = (struct hw_module_t*) module;
    dev->common.close = ut_wechat_close;

    dev->generate_attk_key_pair = generate_attk_key_pair;
    dev->verify_attk_key_pair = verify_attk_key_pair;
    dev->export_attk_public_key = export_attk_public_key;
    dev->get_device_id = get_device_id;

    *device = (hw_device_t*)dev;
    return 0;
}

static int ut_wechat_close(hw_device_t* dev) {
    IMSG_ENTER();

    free(dev);

    return 0;
}
