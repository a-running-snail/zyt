#include <ifaa_common.h>
#include <string.h>
#include <log/log.h>

void get_cmd_str(int cmd_id,char* cmd_str)
{
    if (cmd_str == NULL) {
        ALOGE("cmd_str == NULL");
        return ;
    }
    switch (cmd_id) {
        case IFAA_TA_CMD_GET_DEVICE_ID: {
            strcat(cmd_str,"IFAA_TA_CMD_GET_DEVICE_ID");
            break;
        }
        case IFAA_TA_CMD_REGISTER: {
            strcat(cmd_str,"IFAA_TA_CMD_REGISTER");
            break;
        }
        case IFAA_TA_CMD_AUTHENTICATE: {
            strcat(cmd_str,"IFAA_TA_CMD_AUTHENTICATE");
            break;
        }
        case IFAA_TA_CMD_DEREGISTER: {
            strcat(cmd_str,"IFAA_TA_CMD_DEREGISTER");
            break;
        }
        case IFAA_TA_CMD_QUERY_STATUS: {
            strcat(cmd_str,"IFAA_TA_CMD_QUERY_STATUS");
            break;
        }
        case IFAA_TA_CMD_GEN_ASYMMETRIC_KEY: {
            strcat(cmd_str,"IFAA_TA_CMD_GEN_ASYMMETRIC_KEY");
            break;
        }
        case IFAA_TA_CMD_GET_PROTOCOL_VERSION: {
            strcat(cmd_str,"IFAA_TA_CMD_GET_PROTOCOL_VERSION");
            break;
        }
        case IFAA_TA_CMD_GET_CERT_ALG_ENCODE: {
            strcat(cmd_str,"IFAA_TA_CMD_GET_CERT_ALG_ENCODE");
            break;
        }
        case IFAA_TA_CMD_READ_FILE: {
            strcat(cmd_str,"IFAA_TA_CMD_READ_FILE");
            break;
        }
        case IFAA_TA_CMD_WRITE_FILE: {
            strcat(cmd_str,"IFAA_TA_CMD_WRITE_FILE");
            break;
        }
        case IFAA_TA_CMD_DELETE_FILE: {
            strcat(cmd_str,"IFAA_TA_CMD_DELETE_FILE");
            break;
        }
        case IFAA_GET_LAST_IDENTIFIED_RESULT: {
            strcat(cmd_str,"IFAA_GET_LAST_IDENTIFIED_RESULT");
            break;
        }
        case IFAA_GET_AUTHENTICATOR_VERSION: {
            strcat(cmd_str,"IFAA_GET_AUTHENTICATOR_VERSION");
            break;
        }
        case IFAA_GET_ID_LIST: {
            strcat(cmd_str,"IFAA_GET_ID_LIST");
            break;
        }
        case IFAA_BIO_ID_COMPARE: {
            strcat(cmd_str,"IFAA_BIO_ID_COMPARE");
            break;
        }
        case IFAA_INTERNAL_SHA256: {
            strcat(cmd_str,"IFAA_INTERNAL_SHA256");
            break;
        }
        case IFAA_INTERNAL_SIGN: {
            strcat(cmd_str,"IFAA_INTERNAL_SIGN");
            break;
        }
        case IFAA_INTERNAL_VERIFY: {
            strcat(cmd_str,"IFAA_INTERNAL_VERIFY");
            break;
        }
        case IFAA_INTERNAL_KEY_GENERATE: {
            strcat(cmd_str,"IFAA_INTERNAL_KEY_GENERATE");
            break;
        }
        case IFAA_INTERNAL_HMAC_SHA1: {
            strcat(cmd_str,"IFAA_INTERNAL_HMAC_SHA1");
            break;
        }
        case IFAA_INTERNAL_AUTHENTICATOR_SIGN: {
            strcat(cmd_str,"IFAA_INTERNAL_AUTHENTICATOR_SIGN");
            break;
        }
        case IFAA_INTERNAL_AUTHENTICATOR_VERIFY: {
            strcat(cmd_str,"IFAA_INTERNAL_AUTHENTICATOR_VERIFY");
            break;
        }
        default: {
            ALOGE("called unknow id : %d",cmd_id);
            strcat(cmd_str,"unknow_id");
            break;
        }
    }
}
