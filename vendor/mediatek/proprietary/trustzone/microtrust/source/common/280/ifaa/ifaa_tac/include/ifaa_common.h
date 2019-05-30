#ifndef IFAA_COMMON_H
#define IFAA_COMMON_H
#include "stdint.h"
#include "stddef.h"
#include <string.h>



//是否开启测试模式
#define __IFAA_TEST_MODE__


#define IFAA_DEVICE_VENDOR 0xAAAA
#define  IFAA_CHIP_VENDOR 0xBBBB
#define IFAA_TEE_VENDOR 0xCCCC
#define IFAA_SENSOR_VENDOR 0xDDDD



#define EXTERNC_BEGIN  extern "C"{
#define EXTERNC_END }
#if defined(__cplusplus)
#define EXTERNC extern "C"
#else
#define EXTERNC
#endif  // defined(__cplusplus)



#define SHA1_HASH_LEN 20
#define SHA256_HASH_LEN 32
#define RSA2048_LEN 256

#define MAX_FILE_PATH 255

#define HOTP_LEN 8
#define KEY_ID_LEN 41
#define DEVICE_ID_LEN 48//40
#define MAX_FP_ID_COUNT 10
#define __LEN_PORTOCAL_VERSION        4
#define __LEN_INDEX             32 //  4
#define __LEN_RSA2048           256
#define __LEN_AUTH_VERSION      4
#define __LEN_PUB_ALG_ENCODE    4
#define __LEN_KEY_TYPE          4
#define __LEN_SIGN_ALGORITHM    4
#define __MAX_COUNT_ID_LIST     10
#define __LEN_SHA256_DIGEST     32
#define __MAX_CERT_LEVEL        4

#define IFAA_RETURN_CODE(code)                \
    if (ret != TEE_SUCCESS){                  \
        return code;                          \
    }                                         \
    else{                                     \
        return IFAA_ERR_SUCCESS;              \
    }





#ifndef NULL
#ifdef __cplusplus
#define NULL 0
#else
#define NULL ((void*)0)
#endif
#endif


#if !defined(__cplusplus)
typedef unsigned char bool;
#define false ((bool)0)
#define true  ((bool)1)
#endif


///////////////////////////////////////////////
///// 客户端安全等级(从低到高)
///////////////////////////////////////////////
typedef enum {
    //obligate
    SECURITY_LEVEL_TA_PER_MODULE_   = 1 << 4,
    SECURITY_LEVEL_RPMB_PER_MODULE  = 1 << 5,
    SECURITY_LEVEL_RPMB_PER_DEVICE  = 1 << 6,
    SECURITY_LEVEL_SE_PER_DEVICE    = 1 << 7,
    //more in considering...
} IFAA_SecureLevel;



/**
 * 入口函数接受的command
 */
typedef enum {
    IFAA_TA_CMD_GET_DEVICE_ID           = 1 << 0,  //获取设备ID
    IFAA_TA_CMD_REGISTER                = 1 << 1,  //注册
    IFAA_TA_CMD_AUTHENTICATE            = 1 << 2,  //验证
    IFAA_TA_CMD_DEREGISTER              = 1 << 3,  //注销
    IFAA_TA_CMD_QUERY_STATUS            = 1 << 4,  //查询本地免密开通状态
    IFAA_TA_CMD_GEN_ASYMMETRIC_KEY      = 1 << 5,  //预生成非对称秘钥
    IFAA_TA_CMD_GET_PROTOCOL_VERSION    = 1 << 6,  //获取协议版本号
	IFAA_TA_CMD_GET_CERT_ALG_ENCODE     = 1 << 7   //获取TA支持证书编码

#ifdef __IFAA_TEST_MODE__
    ,
    /////文件操作
    IFAA_TA_CMD_READ_FILE,                      //读文件
    IFAA_TA_CMD_WRITE_FILE,                     //写文件
    IFAA_TA_CMD_DELETE_FILE,                    //删除文件10

    IFAA_GET_LAST_IDENTIFIED_RESULT,
    IFAA_GET_AUTHENTICATOR_VERSION,
    IFAA_GET_ID_LIST,
    IFAA_BIO_ID_COMPARE,

    IFAA_INTERNAL_SHA256,                       //SHA256
    IFAA_INTERNAL_SIGN,                         //签名
    IFAA_INTERNAL_VERIFY,                       //验证签名
    IFAA_INTERNAL_KEY_GENERATE,                 //生成公私钥
    IFAA_INTERNAL_HMAC_SHA1,                    //HmacSha1

    IFAA_INTERNAL_AUTHENTICATOR_SIGN,           //校验器签名(可暂不实现)
    IFAA_INTERNAL_AUTHENTICATOR_VERIFY         //校验器验签
#endif
} ifaa_ta_cmd;





typedef enum {
    IFAA_BIO_FINGERPRINT = 1 << 0,              //指纹
    IFAA_BIO_IRIS        = 1 << 1,              //虹膜
    IFAA_BIO_FACE        = 1 << 2,              //人脸
    IFAA_BIO_UNKNOWN     = 1 << 31              //未知
    //more
} IFAA_BioType;
#define IFAA_BioType_Total 3

typedef enum {
    IFAA_ENTRYLAST_IDENTIFIED_RESULT_GETTER     = 0x01, //获取最近一次认证通过的id
    IFAA_ENTRY_AUTHENTICATOR_VERSION_GETTER,            //获取对应Authenticator的版本
    IFAA_ENTRY_ID_LIST_GETTER,                          //获取系统中录入的生物特征的id列表
    IFAA_ENTRY_EQUATOR                                 //生物特征id的比较符
} IFAA_TaEntry;
#define IFAA_ENTRY_TOTAL 4

typedef enum {
    IFAA_NO = 0,
    IFAA_YES
} IFAABoolean;


typedef struct{
    uint8_t* buf;
    uint32_t len;
} vlb_t;

///////////////////////////////////////////////
///// 证书编码格式
///////////////////////////////////////////////

typedef enum {
    CERT_ENCODE_ALG_X509 = 0x01,    //X509格式
    CERT_ENCODE_ALG_IFAA            //自定义格式，待后面算法评估
    //more here...
} IFAA_CertEncodeAlgorithm;





typedef struct {
    vlb_t n;
    vlb_t d;
    vlb_t e;
} IFAA_RsaKey;
// /**
//  * IFAA山寨证书格式
//  * +-----------------------------------+
//  * | n_len | n | e_len | e | signature |
//  * +-----------------------------------+
//  */
// typedef struct {
//     /**
//      * 公钥格式
//      * +-----------------------+
//      * | n_len | n | e_len | e |
//      * +-----------------------+
//      */
//     vlb_t pub_key; //公钥buffer
//     vlb_t s;       //签名
// } IFAA_Certificate;




///**
// * IFAA自定义证书格式
// * +----------------------------------------------------+
// * | n_len |  n   | e_len |   e   | sig_len | signature |
// * +-4bytes--------4bytes------------4bytes-------------+
// */
//typedef struct {
//    /**
//     * 公钥格式
//     * +-----------------------+
//     * | n_len | n | e_len | e |
//     * +-4bytes-----4bytes-----+
//     */
//    vlb_t pub_key;      //公钥buffer
//    vlb_t sig;          //签名
//} IFAA_Certificate;


/**
 * 证书统一编码格式 tag-union
 * +---------------------------------------+
 * | cert_enc_alg | content of certificate |
 * +----4 bytes----------------------------+
 */
typedef struct x509 x509; //forward declaration

typedef struct {
    IFAA_CertEncodeAlgorithm cert_enc_alg; //证书类型

    union {
         //////////////////////////////////////////////////
         // IFAA自定义证书序列化格式
         // +---------------------------------------------+
         // | n_len | n | e_len | e | sig_len | signature |
         // +---------------------------------------------+
         //////////////////////////////////////////////////
        struct {
            /**
             * 公钥序列化格式
             * +-----------------------+
             * | n_len | n | e_len | e |
             * +-----------------------+
             */
            struct {
                vlb_t n;    //大整数n
                vlb_t e;    //大整数e
            } pub_key;
            vlb_t sig;      //签名
        } ifaa_cert;

        //////////////////////////////////////////////////
        // X509标准证书,格式暂参考DER编码
        //////////////////////////////////////////////////
        struct {
             vlb_t x509;
             //x509 *certificate;
        } x509_cert;

        //more others...
    } body;
} IFAA_Certificate;


typedef enum {
    RSA_BITS_2048,
    RSA_BITS_4096
} IFAA_RsaBit;


#endif
