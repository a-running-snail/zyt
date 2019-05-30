/*
 * Copyright (c) 2015-2018 MICROTRUST Incorporated
 * All rights reserved
 *
 * This file and software is confidential and proprietary to MICROTRUST Inc.
 * Unauthorized copying of this file and software is strictly prohibited.
 * You MUST NOT disclose this file and software unless you get a license
 * agreement from MICROTRUST Incorporated.
 */

#include <stdlib.h>

typedef struct __attribute__ ((__packed__)) {
   char* session;
   size_t session_length;
} soter_sign_session;

typedef struct __attribute__ ((__packed__)) {
   char* json;
   size_t json_length;
   uint8_t* signature;
   size_t signature_length;
} soter_auth_key_struct;

typedef struct __attribute__ ((__packed__)) {
   char* json;
   size_t json_length;
   uint8_t* signature;
   size_t signature_length;
} soter_ask_struct;

typedef struct __attribute__ ((__packed__)) {
   char* json;
   size_t json_length;
   uint8_t* signature;
   size_t signature_length;
} soter_sign_result_struct;

typedef struct __attribute__ ((__packed__)) {
    uint8_t hash[32];
    uint32_t copynumber;
    uint32_t index_key;
} attk_info_t;

typedef struct __attribute__ ((__packed__)) {
    uint32_t status;
    uint32_t magic;
    attk_info_t attk_info;
    uint8_t uuid[32];
    uint32_t uuid_length;
    uint8_t platform[8];
    uint32_t platformlen;
    uint64_t counter;
} attk_status_t;

typedef enum {
   SOTER_ERROR_OK = 0,
   SOTER_ERROR_ATTK_IS_VALID = -1,
   SOTER_ERROR_ATTK_NOT_EXIST = -2,
   SOTER_ERROR_ATTK_DIGEST_NOT_MATCH = -3,
   SOTER_ERROR_ATTK_DIGEST_NOT_READY = -4,
   SOTER_ERROR_ASK_NOT_READY = -5,
   SOTER_ERROR_AUTH_KEY_NOT_READY = -6,
   SOTER_ERROR_SESSION_OUT_OF_TIME = -7,
   SOTER_ERROR_NO_AUTH_KEY_MATCHED = -8,
   SOTER_ERROR_IS_AUTHING = -9,
   SOTER_ERROR_OTHERS = -10,
   SOTER_ERROR_MEMORY_ALLOCATION_FAILED = -11,
   SOTER_ERROR_SOTER_NOT_ENABLED = -12,
   SOTER_ERROR_ATTK_NOT_PROVISIONED = -13,
   SOTER_SECURITY_STATE_FAILURE = -14,
   SOTER_ERROR_INVALID_TAG = -15,
   SOTER_ERROR_INVALID_ARGUMENT = -16,
   SOTER_ERROR_UNSUPPORTED_KEY_SIZE = -17,
   SOTER_ERROR_SECURE_HW_COMMUNICATION_FAILED = -18,
   SOTER_ERROR_ATTK_ALREADY_PROVISIONED = -20,
   SOTER_RPMB_NOT_PROVISIONED = -21,
   SOTER_ERROR_INSUFFICIENT_BUFFER_SPACE = -22,
   SOTER_ERROR_UNSUPPORTED_DIGEST = -23,
   SOTER_ERROR_UNSUPPORTED_PADDING_MODE = -24,
   SOTER_ERROR_INVALID_KEY_BLOB = -25,
   SOTER_ERROR_VERIFICATION_FAILED = -26,
   SOTER_ERROR_INVALID_AUTHORIZATION_TIMEOUT = -27,
   SOTER_ERROR_KEY_EXPORT_OPTIONS_INVALID = -28,
   SOTER_ERROR_UNEXPECTED_NULL_POINTER = -29,
   SOTER_WRAPPERERROR_UNKNOWN = -200,
   SOTER_ERROR_UID_NULL = -201,
   SOTER_ERROR_KNAME_NULL = -202,
   SOTER_ERROR_CHALLENGE_NULL = -203,
   SOTER_ERROR_OPERATEID_NULL = -204,
   SOTER_ERROR_UNKNOWN_ERROR = -1000,
   SOTER_ERROR_INVALID_INPUT = -1001,
   SOTER_ERROR_GET_DEVICE_ID = -1002,
   SOTER_ERROR_RPMB_UNKNOWN_FAILED = -1003,
   SOTER_ERROR_MALLOC_FAILED = -1004,
   SOTER_ERROR_CRYPTO_OPEN_FAILED = -1005,
   SOTER_ERROR_CRYPTO_GEN_FAILED = -1006,
   SOTER_ERROR_CRYPTO_START_FAILED = -1007,
   SOTER_ERROR_CRYPTO_UPDATE_FAILED = -1008,
   SOTER_ERROR_CRYPTO_FINISH_FAILED = -1009,
   SOTER_ERROR_FILE_WRITE_FAILED = -1010,
   SOTER_ERROR_FILE_READ_FAILED = -1011,
   SOTER_ERROR_FILE_NOT_EXIST = -1012,
   SOTER_ERROR_FILE_REMOVE_FAILED = -1013,
} soter_error_t;

struct soter_device {

   /**
    * Generates a pair of ATTK defined in SOTER. Save the private key into RPMB and export the public key in
    * X.509v3 format. Note that the ATTK generated will never be touched outside thekey master.
    * \param[in] copy_num the number of copies that will be saved in the RPMB. E.g. the ATTK generated will
    * be saved twice if the copy_num is 1.
    */
   soter_error_t (*generate_attk_key_pair)(const uint8_t copy_num);

   /**
    * Verify the existance ATTK defined in SOTER.
    * Returns: 0 if the ATTK exists.
    */
   soter_error_t (*verify_attk_key_pair)();

   /**
    * Export the public key of ATTK in X.509v3 format.
    * \param[out] pub_key_data the public key data with X.509v3 format
    * \param[out] pub_key_data_length the length of the public key data.
    */
   soter_error_t (*export_attk_public_key)(uint8_t* pub_key_data, size_t* pub_key_data_length);

   /**
    *Get the unique id.
    * \param[out] device_id the device id data.
    * unique_id The unique id for each device, format as below:
    * 1.bytes 0-3: Identify each silicon provider id, defined by WeChat (
    * 2.bytes 4-7: SoC model ID, defined by each silicon provider like Qualcomm and)Trustonic
    * 3.bytes 8-15: Public Chip Serial *Number of SoC, defined by each silicon (provider like Qualcomm and Trustonic)
    * e.g 090000006795000012706b461410496b
    * We can use 09 to identify MTK *or QC ... etc. chips.
    * Use 6795 to identify different model
    * Use CSN to identify each device. NOTE: THE DEVICE ID IS CALSS-SENSITIVE
    * \prama[out] device_id_length the length of the device_id
    */
   soter_error_t (*get_device_id)(uint8_t* device_id, size_t* device_id_length);

   /**
    *Generates a pair of #define ATTK_SIZE 2048ASK defined in SOTER. Save the private key into safe storage file and export the public key in x.509v3 format.
    * App can generate ask more than one time, and the new ask will replace the old ask which was generated last time.
    * \param[in] uid User Identifier means which app wants to generate ask_key_pair.
    */
   soter_error_t (*generate_ask_key_pair)(const uint8_t* uid);
   /**
    * Export the public key of ASK in x.509v3 format and signed with ATTK with givenformat.
    * \param[in] uid User Identifier means which app wants to generate ask_key_pair.
    * \param[out] data the data assembled of public key data.
    **/
   soter_error_t (*export_ask_public_key)(const uint8_t* uid, soter_ask_struct* data);
   /**
    * Remove the ASK and auth keys of this ASK defined in stoer.
    * \param[in] uid User Identifier means which app wants to remove ask_key.
    **/
   soter_error_t (*remove_all_uid_key)(const uint8_t* uid);
   /**
    * Check if the ask of a uid has been already.
    * \param[in] uid User Identifier.
    **/
   soter_error_t (*has_ask_already)(const uint8_t* uid);
   /**
    * Generated a pair of Auth key defined in soter(Authentication Key).
      save the private key into safe storage file and export the public key in x.509v3 format.
      App can generate auth key more than one time.
    * \param[in] uid User Identifier means which app wants to generate auth_key_pair.
    * \param[in] name the name of the AuthKey.
    **/
   soter_error_t (*generate_auth_key_pair)(const uint8_t* uid, const char* name);
   /**
    * Export the public key of Auth Key in x.509v3 format and signed with ASK with given format.
    * \param[in] uid User Identifier means which app wants to generate auth_key_pair.
    * \param[in] name the name of the AuthKey.
    * \param[out] data the data assembled of public key.
    **/
   soter_error_t (*export_auth_key_public_key)(const uint8_t* uid, const char* name, soter_auth_key_struct* data);
   /**
    * Remove the Auth Key defined in soter.
    * \param[in] uid User Identifier means which app wants to remove auth_key.
    * \param[in] name the name of the AuthKey.
    **/
   soter_error_t (*remove_auth_key)(const uint8_t* uid, const char* name);
   /**
    * Check if the Auth Key of a name has been already.
    * \param[in] uid User Identifier.
    * \param[in] name the name of the AuthKey.
    **/
   soter_error_t (*has_auth_key)(const uint8_t* uid, const char* name);
   /**
    * init sign
    * \param[in] uid User Identifier means which app wants to remove auth_key.
    * \param[in] name the name of the AuthKey.
    * \param[in] challenge generated by 3rd app.
    * \param[out] session generated by SoterTA according to uid, name and challenge.
    **/
   soter_error_t (*init_sign)(const uint8_t* uid, const char* name, const char* challenge, soter_sign_session* session);
   /**
    * finish sign. Sign the auth key defined in soter.
    * \param[in] session generated by SoterTA according to uid, name and challenge.
    * \param[out] result result of signature.
    **/
   soter_error_t (*finish_sign)(const soter_sign_session* session, soter_sign_result_struct* result);
};
