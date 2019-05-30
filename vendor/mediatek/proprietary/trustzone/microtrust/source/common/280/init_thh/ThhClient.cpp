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
#define IMSG_TAG "[INIT_THH]"

#include <string.h>
#include <unistd.h>
#include <imsg_log.h>
#include <stdlib.h>
#include <vendor/microtrust/hardware/thh/2.0/IThhDevice.h>
#include <include/thh_error.h>
#include <include/thh_client_operation_handle.h>
#include <include/thh_file_util.h>
#include <include/thh_str_util.h>
#include <include/thh_active.h>
#include <include/thh_log.h>
#include <include/thh_payment.h>
#include <sys/system_properties.h>

using ::vendor::microtrust::hardware::thh::V2_0::IThhDevice;
using ::vendor::microtrust::hardware::thh::V2_0::ErrorCode;
using ::android::hardware::Return;
using ::android::hardware::hidl_vec;
using ::android::hardware::hidl_array;
using ::android::hardware::hidl_string;
using ::android::sp;


static void wait_tee_boot(void)
{
    char tee_init_status[PROP_VALUE_MAX] = {0};
    int count = 30;
    __system_property_get(SOTER_INIT_PROPERTY, tee_init_status);

    while(strncmp(tee_init_status, INIT_OK, strlen(INIT_OK)) != 0 && count > 0)
    {
        sleep(1);
        __system_property_get(SOTER_INIT_PROPERTY, tee_init_status);
        count--;
    }

    return;
}

void do_help(void)
{
    printf("Usage: init_thh <command> [-options] [args]\n");
    printf("\n");
    printf("Commands: \n");
    printf("\n");
    printf("init\n");
    printf("initializes THH System\n");
    printf("\n");
    printf("initcheck\n");
    printf("checks the initialization status of THH System\n");
    printf("\n");
    printf("export <-options> <args> \n");
    printf("exports the THH system certificate \n");
    printf("\n");
    printf("update <-options> <args> \n");
    printf("update Data\n");
    printf("\n");
    printf("-v | version\n");
    printf("fetchs the THH System Version \n");
    printf("\n");
    printf("-h | --help\n");
    printf("display helper \n");
    printf("\n");
    printf("where options include:\n");
    printf("-h | --help      display helper\n");
    printf("-t | --target    operating target  \n");
    printf("-p | --property  operating property  \n");
    printf("-i | --in        input path\n");
    printf("-o | --out       output path\n");
    printf("-s | --string    sign path\n");
}

static void help_version(void)
{
    printf("Usage: init_thh <version|-v> \n");
    printf("\n");
    printf("Description: \n");
    printf("\n");
    printf("fetchs the THH System Version \n");
}

static void help_export(void)
{
    printf("Usage: init_thh export <--target|-t> <tartget_type> <--property|-p> <property_type> [--out|-o <outfile>]\n");
    printf("\n");
    printf("Description:\n");
    printf("\n");
    printf("export Publice Data \n");
    printf("\n");
    printf("tartget Type:\n");
    printf("thh     operation thh system data info\n");
    printf("ifaa    operation IFAA tee data info\n");
    printf("wechat  operation IFAA tee data info\n");
    printf("\n");
    printf("property Type:\n");
    printf("uuid      operation UUID data \n");
    printf("pubkey    operation public key data \n");
    printf("config    operation init config data \n");
    printf("roocert   operation rootcert data \n");
    printf("signcert  operation signcert data \n");
    printf("\n");
    printf("Optional output:\n");
    printf("-o|--out  output data to file, defult printf terminator\n");
}

static void help_import(void)
{
    printf(
            "Usage:init_thh import <--target|-t> <tartget_type> <--property|-p> <property_type> <--in|-i|--string|-s> <infile>\n");
    printf("\n");
    printf("Description:\n");
    printf("\n");
    printf("import Publice Data \n");
    printf("\n");
    printf("tartget Type:\n");
    printf("thh     operation thh system data info\n");
    printf("ifaa    operation IFAA tee data info\n");
    printf("wechat  operation IFAA tee data info\n");
    printf("\n");
    printf("property Type:\n");
    printf("uuid         operation UUID data \n");
    printf("pubkey       operation public key data \n");
    printf("req          operation request data \n");
    printf("\n");
    printf("input Type:\n");
    printf("-i|--in      input data is file\n");
    printf("-s|--string  input data is hexstring, sample: '--string d3f2c4'\n");

}

static void help_initcheck(void)
{
    printf("Usage: init_thh initcheck [--out|-o <outfile>]\n");
    printf("\n");
    printf("Description:\n");
    printf("\n");
    printf("gen file to '--out' file, default generate to '/data/local/tmp/init_thh_SUCCESS' \n");
    printf("\n");
    printf("Optional output:\n");
    printf("-o|--out  output data to file\n");
}

static void help_active(void)
{
    printf(
            "Usage: init_thh active <--property|-p> <property_type> <--in|-i|--string|-s> <infile>\n");
    printf("\n");
    printf("Description:\n");
    printf("\n");
    printf("active deive \n");
    printf("\n");
    printf("property Type:\n");
    printf("req          get active request data \n");
    printf("ret          active device\n");
    printf("vfy          get device active status \n");
    printf("\n");
    printf("input Type:\n");
    printf("-i|--in      input data is file\n");
    printf("-s|--string  input data is hexstring, sample: '--string d3f2c4'\n");

}

static ErrorCode client_service(global_args_t *args, uint8_t **outdata, uint32_t *outlen)
{
    ErrorCode result = ErrorCode::UNKNOWN_ERROR;

    const sp<IThhDevice> dev = IThhDevice::getService();
    if (dev == NULL)
    {
        THH_LOG_ERR("IThhDevice service client Failed !!\n");
        result = ErrorCode::UNKNOWN_ERROR;
    }
    else
    {
        hidl_array < hidl_string, 8 > request;
        request[0] = args->cmd;
        request[1] = args->target;
        request[2] = args->property;
        if (args->string != NULL)
        {
            request[3] = args->string;
        }
        else if (args->in != NULL)
        {
            if (strlen(args->in) < 1)
            {
                THH_LOG_ERR("The <-i|--in> cannot be empty\n");
                result = ErrorCode::UNKNOWN_ERROR;
                return result;
            }
            if (!exist(args->in))
            {
                THH_LOG_ERR("\"%s\" is not exist\n", args->in);
                result = ErrorCode::UNKNOWN_ERROR;
                return result;
            }
            if (isDir(args->in))
            {
                THH_LOG_ERR("The \"%s\" is a Directory\n", args->in);
                result = ErrorCode::UNKNOWN_ERROR;
                return result;
            }

            char * data = NULL;
            int datalen = 0;
            datalen = getFileLen(args->in);
            if (datalen < 1)
            {
                THH_LOG_ERR("ERROR: cannot be empty .\n");
                result = ErrorCode::UNKNOWN_ERROR;
                return result;
            }

            data = (char *) malloc(datalen);
            readFile(args->in, data, datalen);
            args->string = (char *)malloc(datalen * 2 + 1);
            memset(args->string, 0x00, datalen * 2 + 1);
            hexify((uint8_t *)args->string, (const char *)data, datalen);
            request[3] = args->string;

            if (data)
            {
                free(data);
            }
        }
        auto hidlCb = [&](ErrorCode ret,const hidl_vec<uint8_t>& output)
        {
            result = ret;
            if(ErrorCode::OK != ret && ret != ErrorCode::ACTIVE_DEVICE_FAILED)
            return;
            if(output.size() > 0)
            {
                *outlen = output.size();
                *outdata = (uint8_t *) malloc(*outlen);
                memcpy(*outdata,output.data(),*outlen);
                return;
            }

        };
        Return<void> rc = dev->thhClientInvoke(request, hidlCb);
    }
    return result;
}

static int gen_init_mark_file(const char * savepath, const char * context)
{
    int len = 0;
    len = getFileLen(savepath);
    int result = THH_INTERNAL_ERROR;
    result = writeFile(savepath, (void *) context, strlen(context), 0);
    if (result < 0)
    {
        THH_LOG_ERR("Write \"%s\" failed!\n", savepath);
        return THH_INTERNAL_ERROR;
    }
    else
    {
        result = chmod(savepath, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
        if (result < 0)
        {
            THH_LOG_ERR("chmod file failed!\n");
            return THH_INTERNAL_ERROR;
        }
    }
    return THH_SUCCESS;
}

static void clean_active_prop(void)
{
    __system_property_set(DONGLE_PROPERTY, DONGLE_UNACTIVE);
    __system_property_set(DONGLE_FACEID_PROPERTY, DONGLE_UNACTIVE);
    __system_property_set(DONGLE_FP_PROPERTY, DONGLE_UNACTIVE);
    __system_property_set(DONGLE_GOOGLEKEY_PROPERTY, DONGLE_UNACTIVE);
}

static void set_active_prop(int verifybit)
{
    clean_active_prop();

    __system_property_set(DONGLE_PROPERTY, DONGLE_ACTIVE);
    if ((1<<4)&verifybit)
    {
        __system_property_set(DONGLE_FACEID_PROPERTY, DONGLE_ACTIVE);
    }
    if ((1<<5)&verifybit)
    {
        __system_property_set(DONGLE_FP_PROPERTY, DONGLE_ACTIVE);
    }
    if ((1<<6)&verifybit)
    {
        __system_property_set(DONGLE_GOOGLEKEY_PROPERTY, DONGLE_ACTIVE);
    }
}

static int print_help_info(const char* command, int is_help)
{
    if (strcmp(command, "--help") == 0 || strcmp(command, "-h") == 0)
    {
        do_help();
        return 1;
    }

    if (is_help)
    {
        if (strcmp(command, "version") == 0)
        {
            help_version();
        }
        else if (strcmp(command, "check_thh_status") == 0)
        {
            help_initcheck();
        }
        else if (strcmp(command, "export") == 0)
        {
            help_export();
        }
        else if (strcmp(command, "import") == 0)
        {
            help_import();
        }
        else if (strcmp(command, "active") == 0)
        {
            help_active();
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

static int call_send(int argc, char **argv)
{
    int ret = 0;
    ErrorCode result = ErrorCode::UNKNOWN_ERROR;
    global_args_t global_args;
    init_global_args(&global_args);

    ret = thh_param_parser(argc, argv, &global_args);
    if (ret)
    {
        THH_LOG_INF("Try '%s <-h|--help>' for more information", argv[0]);
    }
    else
    {
        uint8_t *data = NULL;
        uint32_t datalen = 0;

        ret = print_help_info(global_args.cmd, global_args.ishelp);

        if (ret == 0)
        {
            if (strcmp(global_args.cmd, "version") == 0)
            {
                result = client_service(&global_args, &data, &datalen);
                if (result != ErrorCode::OK)
                {
                    THH_LOG_ERR("get thh version failed %x.\n", result);
                    ret = THH_INTERNAL_ERROR;
                }
                else
                {
                    THH_LOG_INF("%s version %s\n", argv[0], "1.0");
                    THH_LOG_INF("%s\n", data);
                }
            }
            else if (strcmp(global_args.cmd, "startload") == 0)
            {
                wait_tee_boot();
                sleep(2);
                result = client_service(&global_args, &data, &datalen);
                if (result != ErrorCode::OK)
                {
                    THH_LOG_ERR("init_thh startload failed %x.\n", result);
                    ret = THH_INTERNAL_ERROR;
                }
            }
            else if (strcmp(global_args.cmd, "initcheck") == 0)
            {
                result = client_service(&global_args, &data, &datalen);
                if (result != ErrorCode::OK)
                {
                    THH_LOG_ERR("init_thh initcheck failed %xd.\n", result);
                    ret = THH_INTERNAL_ERROR;
                }
            }
            else if (strcmp(global_args.cmd, "check_thh_status") == 0)
            {
                result = client_service(&global_args, &data, &datalen);
                if (result != ErrorCode::OK)
                {
                    THH_LOG_ERR("init_thh check_thh_status failed %x.\n", result);
                    ret = THH_INTERNAL_ERROR;
                }
                else
                {
                    gen_init_mark_file(SHELL_SUCCESS_PATH, "SUCCESS");
                    THH_LOG_INF("The init operation is already executed!\n");
                }
            }
            else if (strcmp(global_args.cmd, "export") == 0)
            {
                result = client_service(&global_args, &data, &datalen);
                if (result != ErrorCode::OK)
                {
                    THH_LOG_ERR("init_thh export failed %x.\n", result);
                    ret = THH_INTERNAL_ERROR;
                }
                else
                {
                    if (datalen == 0 || NULL == data)
                    {
                        THH_LOG_ERR("no data received.\n");
                    }
                    else if (global_args.out != NULL)
                    {
                        writeFile(global_args.out, data, datalen, 0);
                    }
                    else
                    {
                        hexDump(data, datalen);
                    }
                }
            }
            else if (strcmp(global_args.cmd, "import") == 0)
            {
                if(global_args.in == NULL && global_args.string == NULL)
                {
                    THH_LOG_ERR("input parameter invalid.\n");
                }
                else
                {
                    result = client_service(&global_args, &data, &datalen);
                    if (result != ErrorCode::OK)
                    {
                        THH_LOG_ERR("init_thh import failed %x.\n", result);
                        ret = THH_INTERNAL_ERROR;
                    }
                    else
                    {
                        THH_LOG_INF("import success.\n");
                    }
                }
            }
            else if (strcmp(global_args.cmd, "reset") == 0)
            {
                result = client_service(&global_args, &data, &datalen);
                if (result != ErrorCode::OK)
                {
                    THH_LOG_ERR("init_thh reset failed %d.\n", result);
                    ret = THH_INTERNAL_ERROR;
                }
                else
                {
                    THH_LOG_INF("reset success\n");
                }
            }
            else if (strcmp(global_args.cmd, "initrpmbk") == 0)
            {
                result = client_service(&global_args, &data, &datalen);
                if (ErrorCode::OK == result)
                {
                    THH_LOG_INF("write rpmb key success.\n");
                }
                else
                {
                    THH_LOG_ERR("write rpmb key failed 0x%04x.\n", result);
                }
            }
            else if (strcmp(global_args.cmd, "initrpmbk_status") == 0)
            {
                result = client_service(&global_args, &data, &datalen);
                if (1 == (uint32_t)result)
                {
                    THH_LOG_INF("key is not programed.\n");
                    __system_property_set(RPMB_KEY_STATUS_PROPERTY, "not_program");
                }
                else if (ErrorCode::OK == result)
                {
                    THH_LOG_INF("rpmb key already programed.\n");
                    __system_property_set(RPMB_KEY_STATUS_PROPERTY, "match");
                }
                else if (2 == (uint32_t)result)
                {
                    THH_LOG_ERR("rpmb key mismatch.\n");
                    __system_property_set(RPMB_KEY_STATUS_PROPERTY, "mismatch");
                }
                else
                {
                    THH_LOG_ERR("get rpmb key status failed 0x%04x.\n", result);
                }
            }
            else if (strcmp(global_args.cmd, "active") == 0)
            {
                if (global_args.property == NULL)
                {
                    THH_LOG_ERR("input parameters invalid.\n");
                    ret = THH_PARAMETER_MISS;
                }
                else
                {
                    if (strcmp(global_args.property, "ret") == 0)
                    {
                        if(global_args.in == NULL && global_args.string == NULL)
                        {
                            THH_LOG_ERR("input parameters invalid.\n");
                            ret = THH_PARAMETER_MISS;
                        }
                    }
                    else if (strcmp(global_args.property, "vfy") == 0)
                    {
                        wait_tee_boot();
                        sleep(2);
                    }

                    if (!ret)
                    {
                        char success[8] = "SUCCESS";
                        result = client_service(&global_args, &data, &datalen);
                        if (result != ErrorCode::OK)
                        {
                            if (result == ErrorCode::ACTIVE_DEVICE_FAILED)
                            {
                                THH_LOG_ERR("init_thh active failed %08x.\n", result);
                                clean_active_prop();
                                ret = THH_INTERNAL_ERROR;
                            }
                            else
                            {
                                if (strcmp(global_args.property, "vfy") == 0)
                                {
                                    set_active_prop((int)result);
                                    writeFile(DONGLE_ACTIVED_FILE, success, strlen("SUCCESS"), 0);
                                }
                            }

                            if (strcmp(global_args.property, "vfy") == 0)
                            {

                                free_global_args(&global_args);
                                init_global_args(&global_args);
                                char* argv[4] = {(char*)"init_thh", (char*)"active", (char*)"-p", (char*)"solution"};
                                ret = thh_param_parser(4, argv, &global_args);
                                if (ret)
                                {
                                    THH_LOG_ERR("parameters parse failed %x.", ret);
                                }
                                else
                                {
                                    result = client_service(&global_args, &data, &datalen);
                                    if (result == ErrorCode::ACTIVE_PROINFO_SOLUTION)
                                    {
                                        __system_property_set(ACTIVE_SOLUTION_PROPERTY, PROINFO_SOLUTION);
                                    }
                                    else if (result == ErrorCode::ACTIVE_RPMB_SOLUTION)
                                    {
                                        __system_property_set(ACTIVE_SOLUTION_PROPERTY, RPMB_SOLUTION);
                                    }
                                    else
                                    {
                                        __system_property_set(ACTIVE_SOLUTION_PROPERTY, UNKNOWN_SOLUTION);
                                    }
                                }

                            }
                        }
                        else
                        {
                            if (strcmp(global_args.property, "vfy") == 0)
                            {
                                writeFile(DONGLE_ACTIVED_FILE, success, strlen("SUCCESS"), 0);
                                __system_property_set(DONGLE_PROPERTY, DONGLE_ACTIVE);
                            }
                            if (datalen == 0 || NULL == data)
                            {
                                THH_LOG_ERR("[info]response data is empty\n");
                            }
                            else if (global_args.out != NULL)
                            {
                                writeFile(global_args.out, data, datalen, 0);
                            }
                            else
                            {
                                hexDump(data, datalen);
                            }
                        }
                    }
                }
            }
            else
            {
                THH_LOG_ERR("Try '%s <-h|--help>' for more information\n", argv[0]);
            }
        }

        if (data)
        {
            free(data);
        }

    }
    free_global_args(&global_args);
    return ret;

}

static void thh_import_ifaa_key(void)
{
    int argc = 6;
    char* argv[6];
    argv[0] = (char*)"init_thh";
    argv[1] = (char*)"import";
    argv[2] = (char*)"-t";
    argv[3] = (char*)"ifaa";
    argv[4] = (char*)"-i";
    argv[5] = (char*)IFAA_PRIKEY_FILE;

    call_send(argc, argv);
    return;
}

static void thh_export_ifaa_transfer_aeskey(void)
{
    int argc = 8;
    char* argv[8];
    argv[0] = (char*)"init_thh";
    argv[1] = (char*)"export";
    argv[2] = (char*)"-t";
    argv[3] = (char*)"ifaa";
    argv[4] = (char*)"-p";
    argv[5] = (char*)"msginfo";
    argv[6] = (char*)"-o";
    argv[7] = (char*)IFAA_TRANSFER_KEY_FILE;

    call_send(argc, argv);
    writeFile(IFAA_PRIKEY_FILE, (void*)"NULL", 0, 0);
    return;
}

static void thh_export_wechat_info(int type)
{
    int argc = 8;
    char* argv[8];
    argv[0] = (char*)"init_thh";
    argv[1] = (char*)"export";
    argv[2] = (char*)"-t";
    argv[3] = (char*)"kmstr";
    argv[4] = (char*)"-p";
    if (type == 0)
    {
        argv[5] = (char*)"pubkey";
        argv[7] = (char*)WECHAT_PUBKEY_FILE;
    }
    else if (type == 1)
    {
        argv[5] = (char*)"uuid";
        argv[7] = (char*)WECHAT_UUID_FILE;
    }
    else
    {
        THH_LOG_ERR("[error]input parameter error\n");
        return;
    }
    argv[6] = (char*)"-o";

    call_send(argc, argv);
    return;
}

static void thh_export_thh_info(int type)
{
    int argc = 8;
    char* argv[8];
    argv[0] = (char*)"init_thh";
    argv[1] = (char*)"export";
    argv[2] = (char*)"-t";
    argv[3] = (char*)"thh";
    argv[4] = (char*)"-p";
    if (type == 0)
    {
        argv[5] = (char*)"pubkey";
        argv[7] = (char*)THH_PUBKEY_FILE;
    }
    else if (type == 1)
    {
        argv[5] = (char*)"uuid";
        argv[7] = (char*)THH_UUID_FILE;
    }
    else
    {
        THH_LOG_ERR("[error]input parameter error\n");
        return;
    }
    argv[6] = (char*)"-o";

    call_send(argc, argv);
    return;
}

static void thh_active_verify(void)
{
    int argc = 4;
    char* argv[4];
    argv[0] = (char*)"init_thh";
    argv[1] = (char*)"active";
    argv[2] = (char*)"-p";
    argv[3] = (char*)"vfy";
    call_send(argc, argv);
    return;
}

static void thh_startload(void)
{
    int argc = 2;
    char* argv[2];
    argv[0] = (char*)"init_thh";
    argv[1] = (char*)"startload";
    call_send(argc, argv);
    return;
}

static void thh_write_rpmb_key(void)
{
    int argc = 2;
    char* argv[2];
    argv[0] = (char*)"init_thh";
    argv[1] = (char*)"initrpmbk";
    call_send(argc, argv);
    return;
}

static void thh_check_rpmb_status(void)
{
    int argc = 2;
    char* argv[2];
    argv[0] = (char*)"init_thh";
    argv[1] = (char*)"initrpmbk_status";
    call_send(argc, argv);
    return;
}

static void thh_get_req(void)
{
    int argc = 6;
    char* argv[6];
    argv[0] = (char*)"init_thh";
    argv[1] = (char*)"active";
    argv[2] = (char*)"-p";
    argv[3] = (char*)"req";
    argv[4] = (char*)"-o";
    argv[5] = (char*)ACTIVE_REQUEST_FILE;
    call_send(argc, argv);

    int result = writeFile(ACTIVE_DATA_FILE, (void *) "null", 0, 0);
    if (result < 0)
    {
        THH_LOG_ERR("generate \"%s\" failed!\n", ACTIVE_DATA_FILE);
    }

    return;
}

static void thh_active_device(void)
{
    int argc = 6;
    char* argv[6];
    argv[0] = (char*)"init_thh";
    argv[1] = (char*)"active";
    argv[2] = (char*)"-p";
    argv[3] = (char*)"ret";
    argv[4] = (char*)"-i";
    argv[5] = (char*)ACTIVE_DATA_FILE;

    call_send(argc, argv);
    return;
}

static int wait_signal(void)
{
    unsigned int counter = 60;
    char property_result[PROP_VALUE_MAX] = {0};
    while(counter>0)
    {
        memset(property_result, 0, PROP_VALUE_MAX);
        __system_property_get(THH_COMMAND_PROPERTY, property_result);
        if (strncmp(property_result, COMMAND_REQ, strlen(COMMAND_REQ)) == 0)
        {
            __system_property_set(THH_COMMAND_PROPERTY, "WAIT");
            thh_get_req();
            counter = 60;
			__system_property_set(THH_COMMAND_PROPERTY, "END");
        }
        else if (strncmp(property_result, COMMAND_RET, strlen(COMMAND_RET)) == 0)
        {
            __system_property_set(THH_COMMAND_PROPERTY, "WAIT");
            thh_active_device();
            counter = 60;
			__system_property_set(THH_COMMAND_PROPERTY, "END");
        }
        else if (strncmp(property_result, COMMAND_VFY, strlen(COMMAND_VFY)) == 0)
        {
            __system_property_set(THH_COMMAND_PROPERTY, "WAIT");
            thh_active_verify();
            counter = 60;
			__system_property_set(THH_COMMAND_PROPERTY, "END");
        }
		else if (strncmp(property_result, COMMAND_EXPORT_WECHAT_PUBKEY, strlen(COMMAND_EXPORT_WECHAT_PUBKEY)) == 0)
        {
            __system_property_set(THH_COMMAND_PROPERTY, "WAIT");
			thh_export_wechat_info(0);
            counter = 60;
			__system_property_set(THH_COMMAND_PROPERTY, "END");
        }
		else if (strncmp(property_result, COMMAND_EXPORT_WECHAT_UUID, strlen(COMMAND_EXPORT_WECHAT_UUID)) == 0)
		{
			__system_property_set(THH_COMMAND_PROPERTY, "WAIT");
			thh_export_wechat_info(1);
			counter = 60;
			__system_property_set(THH_COMMAND_PROPERTY, "END");
		}
		else if (strncmp(property_result, COMMAND_EXPORT_THH_UUID, strlen(COMMAND_EXPORT_THH_UUID)) == 0)
		{
			__system_property_set(THH_COMMAND_PROPERTY, "WAIT");
			thh_export_thh_info(1);
			counter = 60;
			__system_property_set(THH_COMMAND_PROPERTY, "END");
		}
		else if (strncmp(property_result, COMMAND_EXPORT_THH_PUBKEY, strlen(COMMAND_EXPORT_THH_PUBKEY)) == 0)
		{
			__system_property_set(THH_COMMAND_PROPERTY, "WAIT");
			thh_export_thh_info(0);
			counter = 60;
			__system_property_set(THH_COMMAND_PROPERTY, "END");
		}
		else if (strncmp(property_result, COMMAND_EXPORT_IFAA_TRANSFER_KEY, strlen(COMMAND_EXPORT_IFAA_TRANSFER_KEY)) == 0)
		{
			__system_property_set(THH_COMMAND_PROPERTY, "WAIT");
			thh_export_ifaa_transfer_aeskey();
			counter = 60;
			__system_property_set(THH_COMMAND_PROPERTY, "END");
		}
		else if (strncmp(property_result, COMMAND_IMPORT_IFAA_KEY, strlen(COMMAND_IMPORT_IFAA_KEY)) == 0)
		{
			__system_property_set(THH_COMMAND_PROPERTY, "WAIT");
			thh_import_ifaa_key();
			counter = 60;
			__system_property_set(THH_COMMAND_PROPERTY, "END");
		}
        else if (strncmp(property_result, COMMAND_KILL, strlen(COMMAND_KILL)) == 0)
        {
           THH_LOG_ERR("init_thh will exit\n");
           return 0;
        }
        else if (strncmp(property_result, COMMAND_STARTLOAD, strlen(COMMAND_STARTLOAD)) == 0)
        {
			__system_property_set(THH_COMMAND_PROPERTY, "WAIT");
			thh_startload();
			counter = 60;
			__system_property_set(THH_COMMAND_PROPERTY, "END");
        }
        else if (strncmp(property_result, COMMAND_WRITE_RPMB_KEY, strlen(COMMAND_WRITE_RPMB_KEY)) == 0)
        {
			__system_property_set(THH_COMMAND_PROPERTY, "WAIT");
			thh_write_rpmb_key();
			counter = 60;
			__system_property_set(THH_COMMAND_PROPERTY, "END");
        }
        else if (strncmp(property_result, COMMAND_CHECK_RPMB_STATUS, strlen(COMMAND_CHECK_RPMB_STATUS)) == 0)
        {
			__system_property_set(THH_COMMAND_PROPERTY, "WAIT");
			thh_check_rpmb_status();
			counter = 60;
			__system_property_set(THH_COMMAND_PROPERTY, "END");
        }
        else
        {
           THH_LOG_ERR("not found command\n");
        }

        sleep(1);
        counter--;
    }
    return 0;
}

int main(void)
{
    thh_startload();
    thh_active_verify();
    wait_signal();

    return 0;
}
