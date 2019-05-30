#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include "tee_client_api.h"
#include <log/log.h>
#include <kpi.h>

////////////////////////////////////////////////////////
////IFAA TA的UUID为: 08010203-0000-0000-0000000000000000
////////////////////////////////////////////////////////
static const TEEC_UUID IFAA_MANAGER_TA_UUID =  { 0x08010203, 0x0000, 0x0000, \
		                            { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00} };

/*
static const TEEC_UUID uuid = { 0x01020304, 0x0506, 0x0708, { 0x09,
		0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x11 } };
*/
static const char* host_name = "bta_loader";

#ifndef NELEM
	#define NELEM(x) ((int) (sizeof(x) / sizeof((x)[0])))
#endif

static const int SIZE_OF_SHARED_BUFFER_RETURN = 1024 * 5;
static const int MAX_SHARED_MEMORY = 1024 * 1024 * 2;

unsigned int bytetoInt(char* bytes) {
	int result;
	result = ((unsigned int) bytes[0] & 0xff) << 0;
	result += ((unsigned int) bytes[1] & 0xff) << 8;
	result += ((unsigned int) bytes[2] & 0xff) << 16;
	result += ((unsigned int) bytes[3] & 0xff) << 24;
	return result;
}

int invoke_command(void* send_buf, uint32_t sbuf_len,void* rcv_buf, uint32_t* rbuf_len)
{
	ALOGD("invoke_command sbuf_len=%d rbuf_len=%d", sbuf_len, *rbuf_len);
	if (send_buf == NULL || sbuf_len > MAX_SHARED_MEMORY || sbuf_len < 1
			|| rcv_buf == NULL || rbuf_len == NULL || *rbuf_len < 1
			|| *rbuf_len > MAX_SHARED_MEMORY) {
		ALOGE("invoke_command params invaild.");
		return -1;
	}
    TEEC_Context context;
    TEEC_Session session ;
    TEEC_Operation operation ;
	TEEC_SharedMemory inputSM, outputSM;
    TEEC_Result result;
    uint32_t returnOrigin = 0;

    memset(&context, 0, sizeof(TEEC_Context));
    memset(&session, 0, sizeof(TEEC_Session));
    memset(&operation, 0, sizeof(TEEC_Operation));

#ifdef KPI_SUPPORTED
/*
*     +----------------------------------------------------------+
*     | version | sig_len | sig | pkg_len | pkg | cmd | params.. |
*     +----------------------------------------------------------+

*/
	char* p_send_buf_temp = (char*)(send_buf);
	int sig_len = *(p_send_buf_temp+4);
	int pkg_len = *(p_send_buf_temp+8+sig_len);
	int kpi_cmd_id = *(p_send_buf_temp+12+sig_len+pkg_len);
	char* p_rcv_buf = (char*)rcv_buf;
	kpi_start_time_ms = get_current_ms();
#endif
    result = TEEC_InitializeContext(host_name,&context);
    if(result != TEEC_SUCCESS) {
		ALOGE("TEEC_InitializeContext FAILED, err:%x",result);
        goto cleanup_1;
    }

    result = TEEC_OpenSession(
            &context,
            &session,
            &IFAA_MANAGER_TA_UUID,
            TEEC_LOGIN_PUBLIC,
            NULL,
            NULL,
            &returnOrigin);
    if(result != TEEC_SUCCESS) {
		ALOGE("TEEC_OpenSession FAILED, err:%x",result);
        goto cleanup_2;
    }

	inputSM.size = sbuf_len;
	inputSM.flags = TEEC_MEM_INPUT;
	result = TEEC_AllocateSharedMemory(&context, &inputSM);
	if (result != TEEC_SUCCESS || inputSM.buffer == 0) {
		ALOGE("TEEC_AllocateSharedMemory FAILED, err:%x",result);
		goto cleanup_3;
	}

	outputSM.size = *rbuf_len;
	outputSM.flags = TEEC_MEM_OUTPUT;
	result = TEEC_AllocateSharedMemory(&context, &outputSM);
	if (result != TEEC_SUCCESS || outputSM.buffer == 0) {
		ALOGE("TEEC_AllocateSharedMemory FAILED, err:%x",result);
		goto cleanup_4;
	}

	memset(inputSM.buffer, 0, inputSM.size);
	memset(outputSM.buffer, 0, outputSM.size);
	memcpy(inputSM.buffer, send_buf, sbuf_len);

	operation.paramTypes = TEEC_PARAM_TYPES(TEEC_MEMREF_PARTIAL_INPUT,
			TEEC_MEMREF_PARTIAL_OUTPUT, TEEC_NONE, TEEC_NONE);

	operation.params[0].memref.parent = &inputSM;
	operation.params[0].memref.offset = 0;
	operation.params[0].memref.size = inputSM.size;

	operation.params[1].memref.parent = &outputSM;
	operation.params[1].memref.offset = 0;
	operation.params[1].memref.size = outputSM.size;
    operation.started = 1;

    result = TEEC_InvokeCommand(&session,0,&operation,NULL);
    if (result != TEEC_SUCCESS) {
		ALOGE("TEEC_InvokeCommand FAILED, err:%x",result);
        goto cleanup_5;
    }

	memcpy(rcv_buf, outputSM.buffer, *rbuf_len);
	*rbuf_len = operation.params[1].memref.size;
#ifdef KPI_SUPPORTED
	kpi_end_time_ms = get_current_ms();
	print_result(kpi_cmd_id,p_rcv_buf);
#endif
    cleanup_5:
        TEEC_ReleaseSharedMemory(&outputSM);
	cleanup_4:
        TEEC_ReleaseSharedMemory(&inputSM);
    cleanup_3:
        TEEC_CloseSession(&session);
    cleanup_2:
        TEEC_FinalizeContext(&context);
    cleanup_1:
        return result;
}
