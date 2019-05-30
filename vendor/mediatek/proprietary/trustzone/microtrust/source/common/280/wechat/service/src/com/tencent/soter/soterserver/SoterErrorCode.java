/*
 * Copyright (c) 2015-2018 MICROTRUST Incorporated
 * All rights reserved
 *
 * This file and software is confidential and proprietary to MICROTRUST Inc.
 * Unauthorized copying of this file and software is strictly prohibited.
 * You MUST NOT disclose this file and software unless you get a license
 * agreement from MICROTRUST Incorporated.
 */

package com.tencent.soter.soterserver;
/**
 * @hide
 */
public final class SoterErrorCode {
    public static final int SOTER_ERROR_OK = 0;
    public static final int SOTER_ERROR_ATTK_IS_VALID = -1; // (-1)
    public static final int SOTER_ERROR_ATTK_NOT_EXIST = -2; // (-2)
    public static final int SOTER_ERROR_ATTK_DIGEST_NOT_MATCH = -3; // (-3)
    public static final int SOTER_ERROR_ATTK_DIGEST_NOT_READY = -4; // (-4)
    public static final int SOTER_ERROR_ASK_NOT_READY = -5; // (-5)
    public static final int SOTER_ERROR_AUTH_KEY_NOT_READY = -6; // (-6)
    public static final int SOTER_ERROR_SESSION_OUT_OF_TIME = -7; // (-7)
    public static final int SOTER_ERROR_NO_AUTH_KEY_MATCHED = -8; // (-8)
    public static final int SOTER_ERROR_IS_AUTHING = -9; // (-9)
    public static final int SOTER_ERROR_OTHERS = -10; // (-10)
    public static final int SOTER_ERROR_MEMORY_ALLOCATION_FAILED = -11; // (-11)
    public static final int SOTER_ERROR_SOTER_NOT_ENABLED = -12; // (-12)
    public static final int SOTER_ERROR_ATTK_NOT_PROVISIONED = -13; // (-13)
    public static final int SOTER_SECURITY_STATE_FAILURE = -14; // (-14)
    public static final int SOTER_ERROR_INVALID_TAG = -15; // (-15)
    public static final int SOTER_ERROR_INVALID_ARGUMENT = -16; // (-16)
    public static final int SOTER_ERROR_UNSUPPORTED_KEY_SIZE = -17; // (-17)
    public static final int SOTER_ERROR_SECURE_HW_COMMUNICATION_FAILED = -18; // (-18)
    public static final int SOTER_ERROR_ATTK_ALREADY_PROVISIONED = -20; // (-20)
    public static final int SOTER_RPMB_NOT_PROVISIONED = -21; // (-21)
    public static final int SOTER_ERROR_INSUFFICIENT_BUFFER_SPACE = -22; // (-22)
    public static final int SOTER_ERROR_UNSUPPORTED_DIGEST = -23; // (-23)
    public static final int SOTER_ERROR_UNSUPPORTED_PADDING_MODE = -24; // (-24)
    public static final int SOTER_ERROR_INVALID_KEY_BLOB = -25; // (-25)
    public static final int SOTER_ERROR_VERIFICATION_FAILED = -26; // (-26)
    public static final int SOTER_ERROR_INVALID_AUTHORIZATION_TIMEOUT = -27; // (-27)
    public static final int SOTER_ERROR_KEY_EXPORT_OPTIONS_INVALID = -28; // (-28)
    public static final int SOTER_ERROR_UNEXPECTED_NULL_POINTER = -29; // (-29)
    public static final int SOTER_WRAPPERERROR_UNKNOWN = -200; // (-200)
    public static final int SOTER_ERROR_UID_NULL = -201; // (-201)
    public static final int SOTER_ERROR_KNAME_NULL = -202; // (-202)
    public static final int SOTER_ERROR_CHALLENGE_NULL = -203; // (-203)
    public static final int SOTER_ERROR_OPERATEID_NULL = -204; // (-204)
    public static final int SOTER_ERROR_UNKNOWN_ERROR = -1000; // (-1000)
    public static final String toString(int o) {
        if (o == SOTER_ERROR_OK) {
            return "SOTER_ERROR_OK";
        }
        if (o == SOTER_ERROR_ATTK_IS_VALID) {
            return "SOTER_ERROR_ATTK_IS_VALID";
        }
        if (o == SOTER_ERROR_ATTK_NOT_EXIST) {
            return "SOTER_ERROR_ATTK_NOT_EXIST";
        }
        if (o == SOTER_ERROR_ATTK_DIGEST_NOT_MATCH) {
            return "SOTER_ERROR_ATTK_DIGEST_NOT_MATCH";
        }
        if (o == SOTER_ERROR_ATTK_DIGEST_NOT_READY) {
            return "SOTER_ERROR_ATTK_DIGEST_NOT_READY";
        }
        if (o == SOTER_ERROR_ASK_NOT_READY) {
            return "SOTER_ERROR_ASK_NOT_READY";
        }
        if (o == SOTER_ERROR_AUTH_KEY_NOT_READY) {
            return "SOTER_ERROR_AUTH_KEY_NOT_READY";
        }
        if (o == SOTER_ERROR_SESSION_OUT_OF_TIME) {
            return "SOTER_ERROR_SESSION_OUT_OF_TIME";
        }
        if (o == SOTER_ERROR_NO_AUTH_KEY_MATCHED) {
            return "SOTER_ERROR_NO_AUTH_KEY_MATCHED";
        }
        if (o == SOTER_ERROR_IS_AUTHING) {
            return "SOTER_ERROR_IS_AUTHING";
        }
        if (o == SOTER_ERROR_OTHERS) {
            return "SOTER_ERROR_OTHERS";
        }
        if (o == SOTER_ERROR_MEMORY_ALLOCATION_FAILED) {
            return "SOTER_ERROR_MEMORY_ALLOCATION_FAILED";
        }
        if (o == SOTER_ERROR_SOTER_NOT_ENABLED) {
            return "SOTER_ERROR_SOTER_NOT_ENABLED";
        }
        if (o == SOTER_ERROR_ATTK_NOT_PROVISIONED) {
            return "SOTER_ERROR_ATTK_NOT_PROVISIONED";
        }
        if (o == SOTER_SECURITY_STATE_FAILURE) {
            return "SOTER_SECURITY_STATE_FAILURE";
        }
        if (o == SOTER_ERROR_INVALID_TAG) {
            return "SOTER_ERROR_INVALID_TAG";
        }
        if (o == SOTER_ERROR_INVALID_ARGUMENT) {
            return "SOTER_ERROR_INVALID_ARGUMENT";
        }
        if (o == SOTER_ERROR_UNSUPPORTED_KEY_SIZE) {
            return "SOTER_ERROR_UNSUPPORTED_KEY_SIZE";
        }
        if (o == SOTER_ERROR_SECURE_HW_COMMUNICATION_FAILED) {
            return "SOTER_ERROR_SECURE_HW_COMMUNICATION_FAILED";
        }
        if (o == SOTER_ERROR_ATTK_ALREADY_PROVISIONED) {
            return "SOTER_ERROR_ATTK_ALREADY_PROVISIONED";
        }
        if (o == SOTER_RPMB_NOT_PROVISIONED) {
            return "SOTER_RPMB_NOT_PROVISIONED";
        }
        if (o == SOTER_ERROR_INSUFFICIENT_BUFFER_SPACE) {
            return "SOTER_ERROR_INSUFFICIENT_BUFFER_SPACE";
        }
        if (o == SOTER_ERROR_UNSUPPORTED_DIGEST) {
            return "SOTER_ERROR_UNSUPPORTED_DIGEST";
        }
        if (o == SOTER_ERROR_UNSUPPORTED_PADDING_MODE) {
            return "SOTER_ERROR_UNSUPPORTED_PADDING_MODE";
        }
        if (o == SOTER_ERROR_INVALID_KEY_BLOB) {
            return "SOTER_ERROR_INVALID_KEY_BLOB";
        }
        if (o == SOTER_ERROR_VERIFICATION_FAILED) {
            return "SOTER_ERROR_VERIFICATION_FAILED";
        }
        if (o == SOTER_ERROR_INVALID_AUTHORIZATION_TIMEOUT) {
            return "SOTER_ERROR_INVALID_AUTHORIZATION_TIMEOUT";
        }
        if (o == SOTER_ERROR_KEY_EXPORT_OPTIONS_INVALID) {
            return "SOTER_ERROR_KEY_EXPORT_OPTIONS_INVALID";
        }
        if (o == SOTER_ERROR_UNEXPECTED_NULL_POINTER) {
            return "SOTER_ERROR_UNEXPECTED_NULL_POINTER";
        }
        if (o == SOTER_WRAPPERERROR_UNKNOWN) {
            return "SOTER_WRAPPERERROR_UNKNOWN";
        }
        if (o == SOTER_ERROR_UID_NULL) {
            return "SOTER_ERROR_UID_NULL";
        }
        if (o == SOTER_ERROR_KNAME_NULL) {
            return "SOTER_ERROR_KNAME_NULL";
        }
        if (o == SOTER_ERROR_CHALLENGE_NULL) {
            return "SOTER_ERROR_CHALLENGE_NULL";
        }
        if (o == SOTER_ERROR_OPERATEID_NULL) {
            return "SOTER_ERROR_OPERATEID_NULL";
        }
        if (o == SOTER_ERROR_UNKNOWN_ERROR) {
            return "SOTER_ERROR_UNKNOWN_ERROR";
        }
        return "0x" + Integer.toHexString(o);
    }



};

