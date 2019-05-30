/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2019. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/********************************************************************************************
 *     LEGAL DISCLAIMER
 *
 *     (Header of MediaTek Software/Firmware Release or Documentation)
 *
 *     BY OPENING OR USING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 *     THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE") RECEIVED
 *     FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON AN "AS-IS" BASIS
 *     ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, EXPRESS OR IMPLIED,
 *     INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR
 *     A PARTICULAR PURPOSE OR NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY
 *     WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 *     INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK
 *     ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
 *     NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S SPECIFICATION
 *     OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
 *
 *     BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH
 *     RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION,
 *     TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE
 *     FEES OR SERVICE CHARGE PAID BY BUYER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 *     THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE WITH THE LAWS
 *     OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF LAWS PRINCIPLES.
 ************************************************************************************************/
#include "camera_custom_nvram.h"
#include "imx499mipiraw_AutoHDR_Video.h"

const ISP_NVRAM_LCE_TUNING_PARAM_T imx499mipiraw_LCE_0004 = {
    .i4AutoHDREnable =
        0,

    .rAutoLCEParam = {
        .rLCEStats = {
            30,   //i4HistCCLB
            1600, //i4HistCCUB
            0,   //i4LCESeg
            0, //i4LCEContrastRatio
            0,  //i4LCEHistYThr
            51,  //SlopeLow --> 0.2*256
            1331,//SlopeHigh --> 2.4*256
            384, //SlopeTop --> 1.5*256
            20,  //i4DetailRangeRatio --> base 1000
            64,  //i4CenSlopeMin

            0,    //i4vBlacKeep
            1600, //i4vFixedPt1
            2100, //i4vFixedPt2
            2800, //i4vFixedPt3
            3450, //i4vFixedPt4
            1000, //i4TCPLB
            20000,//I4TCPUB

            1,    //i4Stats0
            768,  //i4Stats1
            384,  //i4Stats2
            384,  //i4Stats3
            256,  //i4Stats4
        },

        .rLCELUTs = {//i4LCETbl
            {//  /*                            Dark    Strangth                                   */  |  /*   Bright    Strength   */
             //   LV0   LV1   LV2   LV3   LV4   LV5   LV6   LV7   LV8   LV9   LV10  LV11  LV12  LV13  |  LV2   LV4   LV6   LV8   LV10
                 {1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,     0,  0,  0,  0,  0},   //  0 DR index
                 {1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,     0,  0,  0,  0,  0},   //  1
                 {1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,     0,  0,  0,  0,  0},   //  2
                 {1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,     0,  0,  0,  0,  0},   //  3
                 {1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,     0,  0,  0,  0,  0},   //  4
                 {1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,     0,  0,  0,  0,  0},   //  5
                 {1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,     0,  0,  0,  0,  0},   //  6
                 {1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,     0,  0,  0,  0,  0},   //  7
                 {1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,     0,  0,  0,  0,  0},   //  8
                 {1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,     0,  0,  0,  0,  0},   //  9
                 {1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024,     0,  0,  0,  0,  0}    // 10
            },

            {    //i4CenSlopeEnhance
                //  0   1   2   3   4   5   6   7   8   9   10   11
                    0,  5, 10, 15, 20, 25, 20, 15, 10,  5,   0,   0
            }

        },

        .rLCEPara = {
        //      LV0    LV1    LV2    LV3    LV4    LV5    LV6    LV7    LV8    LV9   LV10   LV11   LV12   LV13   LV14   LV15   LV16   LV17   LV18
            {  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, //0 LVTarget
            {   950,   950,   940,   930,   920,   910,   900,   890,   880,   880,   880,   880,   880,   880,   880,   880,   880,   880,   880}, //1 BriRatio
            {  3400,  3400,  3400,   400,   390,  3380,  3370,  3360,  3350,  3350,  3350,  3350,  3350,  3350,  3350,  3350,  3350,  3350,  3350}, //2 BriLimit
            {  2600,  2600,  2600,  2600,  2642,  2684,  2726,  2770,  2812,  2854,  2900,  2900,  2900,  2900,  2900,  2900,  2900,  2900,  2900}, //3 FlatBriTH
            { 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000}, //4 FlatHiBound
            {  7000,  7000,  7000,  7000,  7000,  7166,  7332,  7498,  7664,  7830,  8000,  8000,  8000,  8000,  8000,  8000,  8000,  8000,  8000}, //5 FlatLoBound
            {    85,    85,    85,    85,    85,    85,    85,    85,    85,    85,    85,    85,    85,    85,    85,    85,    85,    85,    85}, //6 LumaHiBoundRatio
            {    70,    70,    70,    70,    70,    70,    70,    70,    70,    70,    70,    70,    70,    70,    70,    70,    70,    70,    70}, //7 LumaLoBoundRatio
            {     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0}, //i4LCEPara8
            {     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0}, //i4LCEPara9
            {     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,     0}  //i4LCEPara10

        },

        .rFaceLCE = {    //i4FaceLCEPara
            1,   //m_bLCE_FD_Enable
            1,   //m_bKeepBrightEnable
            154, //m_i4keepBrightSlope
            89,  //m_u4LoBoundGainRatio
            128, //m_u4HiBoundGainRatio
            83,  //m_u4BrightTH
            308, //MaxLCEGain_L
            308, //MaxLCEGain_H
            70,  //m_u4FaceLV_L
            110, //m_u4FaceLV_H
            182, //m_u4FDProb_retio
            0,   //face para0
            0,   //face para1
            0,   //face para2
            0,   //face para3
            0,   //face para4
            0,   //face para5
            0,   //face para6
            0,   //face para7
            0,   //face para8
            0,   //face para9
            0,   //face para10


             //   LV0   LV1   LV2   LV3   LV4   LV5   LV6   LV7   LV8   LV9   LV10  LV11  LV12  LV13  LV14  LV15  LV16  LV17  LV18
            {512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512},   //  i4LCEfaceTbl0
            {512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512,  512},   //  i4LCEfaceTbl1


            {    //i4CenSlopeEnhance
                //  0   1   2   3   4   5   6   7   8   9   10   11
                    0,  5, 10, 15, 20, 25, 20, 15, 10,  5,   0,   0
            }
        },

        .rLCESmooth = {  // rLCESmooth
            100,      // i4LCEPosSpeed
            100,      // i4WaitAEStable
            100       // i4LCESpeed4AEStable
        },
        .rLCEFlare = {  // rLCEFlare
            0   // i4Enable
        },
    },
};
const ISP_NVRAM_GMA_STRUCT_T imx499mipiraw_GMA_0004 = {
  .GGM_Reg = {
        {.set={
	0x00000000, 0x00A0280A, 0x01405014, 0x01E0781E, 0x0280A028, 0x0300C030, 0x0380E038, 0x04210842, 0x04C1304C, 0x05615856, 
	0x06018060, 0x0681A068, 0x0701C070, 0x07A1E87A, 0x08421084, 0x08C2308C, 0x09425094, 0x09C2709C, 0x0A4290A4, 0x0AC2B0AC, 
	0x0B42D0B4, 0x0BC2F0BC, 0x0C4310C4, 0x0CA328CA, 0x0D0340D0, 0x0D8360D8, 0x0E0380E0, 0x0E6398E6, 0x0EC3B0EC, 0x0F43D0F4, 
	0x0FC3F0FC, 0x10240902, 0x10842108, 0x10E4390E, 0x11445114, 0x11C4711C, 0x12449124, 0x12A4A92A, 0x1304C130, 0x1364D936, 
	0x13C4F13C, 0x14250942, 0x14852148, 0x14C5314C, 0x15054150, 0x15655956, 0x15C5715C, 0x16258962, 0x1685A168, 0x16C5B16C, 
	0x1705C170, 0x1765D976, 0x17C5F17C, 0x18060180, 0x18461184, 0x18862188, 0x18C6318C, 0x19064190, 0x19465194, 0x19A6699A, 
	0x1A0681A0, 0x1A4691A4, 0x1A86A1A8, 0x1AC6B1AC, 0x1B06C1B0, 0x1B86E1B8, 0x1C0701C0, 0x1C8721C8, 0x1D0741D0, 0x1D8761D8, 
	0x1E0781E0, 0x1E87A1E8, 0x1F07C1F0, 0x1F87E1F8, 0x1FC7F1FC, 0x20481204, 0x20882208, 0x21084210, 0x21886218, 0x21C8721C, 
	0x22489224, 0x22C8B22C, 0x2348D234, 0x23C8F23C, 0x24090240, 0x24892248, 0x24C9324C, 0x25094250, 0x25896258, 0x25C9725C, 
	0x26499264, 0x2689A268, 0x26C9B26C, 0x2709C270, 0x2789E278, 0x27C9F27C, 0x280A0280, 0x28CA328C, 0x294A5294, 0x29CA729C, 
	0x2A4A92A4, 0x2B0AC2B0, 0x2B8AE2B8, 0x2C0B02C0, 0x2C8B22C8, 0x2D0B42D0, 0x2D8B62D8, 0x2DCB72DC, 0x2E4B92E4, 0x2ECBB2EC, 
	0x2F4BD2F4, 0x2F8BE2F8, 0x2FCBF2FC, 0x300C0300, 0x304C1304, 0x30CC330C, 0x310C4310, 0x318C6318, 0x31CC731C, 0x324C9324, 
	0x328CA328, 0x32CCB32C, 0x334CD334, 0x338CE338, 0x340D0340, 0x344D1344, 0x348D2348, 0x34CD334C, 0x350D4350, 0x354D5354, 
	0x354D5354, 0x358D6358, 0x35CD735C, 0x360D8360, 0x364D9364, 0x368DA368, 0x36CDB36C, 0x370DC370, 0x378DE378, 0x37CDF37C, 
	0x380E0380, 0x384E1384, 0x384E1384, 0x388E2388, 0x38CE338C, 0x390E4390, 0x390E4390, 0x394E5394, 0x394E5394, 0x398E6398, 
	0x398E6398, 0x39CE739C, 0x3A0E83A0, 0x3A4E93A4, 0x3A4E93A4, 0x3A8EA3A8, 0x3ACEB3AC, 0x3B0EC3B0, 0x3B0EC3B0, 0x3B4ED3B4, 
	0x3B8EE3B8, 0x3BCEF3BC, 0x3BCEF3BC, 0x3C0F03C0, 0x3C0F03C0, 0x3C4F13C4, 0x3C4F13C4, 0x3C8F23C8, 0x3CCF33CC, 0x3D0F43D0, 
	0x3D0F43D0, 0x3D4F53D4, 0x3D4F53D4, 0x3D8F63D8, 0x3D8F63D8, 0x3DCF73DC, 0x3E0F83E0, 0x3E0F83E0, 0x3E0F83E0, 0x3E4F93E4, 
	0x3E4F93E4, 0x3E8FA3E8, 0x3E8FA3E8, 0x3ECFB3EC, 0x3ECFB3EC, 0x3ECFB3EC, 0x3F0FC3F0, 0x3F0FC3F0, 0x3F4FD3F4, 0x3F4FD3F4, 
	0x3F8FE3F8, 0x3FCFF3FC, 
    }},
        {.set={
	0x00000000, 0x00A0280A, 0x01405014, 0x01E0781E, 0x0280A028, 0x0300C030, 0x0380E038, 0x04210842, 0x04C1304C, 0x05615856, 
	0x06018060, 0x0681A068, 0x0701C070, 0x07A1E87A, 0x08421084, 0x08C2308C, 0x09425094, 0x09C2709C, 0x0A4290A4, 0x0AC2B0AC, 
	0x0B42D0B4, 0x0BC2F0BC, 0x0C4310C4, 0x0CA328CA, 0x0D0340D0, 0x0D8360D8, 0x0E0380E0, 0x0E6398E6, 0x0EC3B0EC, 0x0F43D0F4, 
	0x0FC3F0FC, 0x10240902, 0x10842108, 0x10E4390E, 0x11445114, 0x11C4711C, 0x12449124, 0x12A4A92A, 0x1304C130, 0x1364D936, 
	0x13C4F13C, 0x14250942, 0x14852148, 0x14C5314C, 0x15054150, 0x15655956, 0x15C5715C, 0x16258962, 0x1685A168, 0x16C5B16C, 
	0x1705C170, 0x1765D976, 0x17C5F17C, 0x18060180, 0x18461184, 0x18862188, 0x18C6318C, 0x19064190, 0x19465194, 0x19A6699A, 
	0x1A0681A0, 0x1A4691A4, 0x1A86A1A8, 0x1AC6B1AC, 0x1B06C1B0, 0x1B86E1B8, 0x1C0701C0, 0x1C8721C8, 0x1D0741D0, 0x1D8761D8, 
	0x1E0781E0, 0x1E87A1E8, 0x1F07C1F0, 0x1F87E1F8, 0x1FC7F1FC, 0x20481204, 0x20882208, 0x21084210, 0x21886218, 0x21C8721C, 
	0x22489224, 0x22C8B22C, 0x2348D234, 0x23C8F23C, 0x24090240, 0x24892248, 0x24C9324C, 0x25094250, 0x25896258, 0x25C9725C, 
	0x26499264, 0x2689A268, 0x26C9B26C, 0x2709C270, 0x2789E278, 0x27C9F27C, 0x280A0280, 0x28CA328C, 0x294A5294, 0x29CA729C, 
	0x2A4A92A4, 0x2B0AC2B0, 0x2B8AE2B8, 0x2C0B02C0, 0x2C8B22C8, 0x2D0B42D0, 0x2D8B62D8, 0x2DCB72DC, 0x2E4B92E4, 0x2ECBB2EC, 
	0x2F4BD2F4, 0x2F8BE2F8, 0x2FCBF2FC, 0x300C0300, 0x304C1304, 0x30CC330C, 0x310C4310, 0x318C6318, 0x31CC731C, 0x324C9324, 
	0x328CA328, 0x32CCB32C, 0x334CD334, 0x338CE338, 0x340D0340, 0x344D1344, 0x348D2348, 0x34CD334C, 0x350D4350, 0x354D5354, 
	0x354D5354, 0x358D6358, 0x35CD735C, 0x360D8360, 0x364D9364, 0x368DA368, 0x36CDB36C, 0x370DC370, 0x378DE378, 0x37CDF37C, 
	0x380E0380, 0x384E1384, 0x384E1384, 0x388E2388, 0x38CE338C, 0x390E4390, 0x390E4390, 0x394E5394, 0x394E5394, 0x398E6398, 
	0x398E6398, 0x39CE739C, 0x3A0E83A0, 0x3A4E93A4, 0x3A4E93A4, 0x3A8EA3A8, 0x3ACEB3AC, 0x3B0EC3B0, 0x3B0EC3B0, 0x3B4ED3B4, 
	0x3B8EE3B8, 0x3BCEF3BC, 0x3BCEF3BC, 0x3C0F03C0, 0x3C0F03C0, 0x3C4F13C4, 0x3C4F13C4, 0x3C8F23C8, 0x3CCF33CC, 0x3D0F43D0, 
	0x3D0F43D0, 0x3D4F53D4, 0x3D4F53D4, 0x3D8F63D8, 0x3D8F63D8, 0x3DCF73DC, 0x3E0F83E0, 0x3E0F83E0, 0x3E0F83E0, 0x3E4F93E4, 
	0x3E4F93E4, 0x3E8FA3E8, 0x3E8FA3E8, 0x3ECFB3EC, 0x3ECFB3EC, 0x3ECFB3EC, 0x3F0FC3F0, 0x3F0FC3F0, 0x3F4FD3F4, 0x3F4FD3F4, 
	0x3F8FE3F8, 0x3FCFF3FC, 
    }},
        {.set={
	0x00000000, 0x00A0280A, 0x01405014, 0x01E0781E, 0x0280A028, 0x0300C030, 0x0380E038, 0x04210842, 0x04C1304C, 0x05615856, 
	0x06018060, 0x0681A068, 0x0701C070, 0x07A1E87A, 0x08421084, 0x08C2308C, 0x09425094, 0x09C2709C, 0x0A4290A4, 0x0AC2B0AC, 
	0x0B42D0B4, 0x0BC2F0BC, 0x0C4310C4, 0x0CA328CA, 0x0D0340D0, 0x0D8360D8, 0x0E0380E0, 0x0E6398E6, 0x0EC3B0EC, 0x0F43D0F4, 
	0x0FC3F0FC, 0x10240902, 0x10842108, 0x10E4390E, 0x11445114, 0x11C4711C, 0x12449124, 0x12A4A92A, 0x1304C130, 0x1364D936, 
	0x13C4F13C, 0x14250942, 0x14852148, 0x14C5314C, 0x15054150, 0x15655956, 0x15C5715C, 0x16258962, 0x1685A168, 0x16C5B16C, 
	0x1705C170, 0x1765D976, 0x17C5F17C, 0x18060180, 0x18461184, 0x18862188, 0x18C6318C, 0x19064190, 0x19465194, 0x19A6699A, 
	0x1A0681A0, 0x1A4691A4, 0x1A86A1A8, 0x1AC6B1AC, 0x1B06C1B0, 0x1B86E1B8, 0x1C0701C0, 0x1C8721C8, 0x1D0741D0, 0x1D8761D8, 
	0x1E0781E0, 0x1E87A1E8, 0x1F07C1F0, 0x1F87E1F8, 0x1FC7F1FC, 0x20481204, 0x20882208, 0x21084210, 0x21886218, 0x21C8721C, 
	0x22489224, 0x22C8B22C, 0x2348D234, 0x23C8F23C, 0x24090240, 0x24892248, 0x24C9324C, 0x25094250, 0x25896258, 0x25C9725C, 
	0x26499264, 0x2689A268, 0x26C9B26C, 0x2709C270, 0x2789E278, 0x27C9F27C, 0x280A0280, 0x28CA328C, 0x294A5294, 0x29CA729C, 
	0x2A4A92A4, 0x2B0AC2B0, 0x2B8AE2B8, 0x2C0B02C0, 0x2C8B22C8, 0x2D0B42D0, 0x2D8B62D8, 0x2DCB72DC, 0x2E4B92E4, 0x2ECBB2EC, 
	0x2F4BD2F4, 0x2F8BE2F8, 0x2FCBF2FC, 0x300C0300, 0x304C1304, 0x30CC330C, 0x310C4310, 0x318C6318, 0x31CC731C, 0x324C9324, 
	0x328CA328, 0x32CCB32C, 0x334CD334, 0x338CE338, 0x340D0340, 0x344D1344, 0x348D2348, 0x34CD334C, 0x350D4350, 0x354D5354, 
	0x354D5354, 0x358D6358, 0x35CD735C, 0x360D8360, 0x364D9364, 0x368DA368, 0x36CDB36C, 0x370DC370, 0x378DE378, 0x37CDF37C, 
	0x380E0380, 0x384E1384, 0x384E1384, 0x388E2388, 0x38CE338C, 0x390E4390, 0x390E4390, 0x394E5394, 0x394E5394, 0x398E6398, 
	0x398E6398, 0x39CE739C, 0x3A0E83A0, 0x3A4E93A4, 0x3A4E93A4, 0x3A8EA3A8, 0x3ACEB3AC, 0x3B0EC3B0, 0x3B0EC3B0, 0x3B4ED3B4, 
	0x3B8EE3B8, 0x3BCEF3BC, 0x3BCEF3BC, 0x3C0F03C0, 0x3C0F03C0, 0x3C4F13C4, 0x3C4F13C4, 0x3C8F23C8, 0x3CCF33CC, 0x3D0F43D0, 
	0x3D0F43D0, 0x3D4F53D4, 0x3D4F53D4, 0x3D8F63D8, 0x3D8F63D8, 0x3DCF73DC, 0x3E0F83E0, 0x3E0F83E0, 0x3E0F83E0, 0x3E4F93E4, 
	0x3E4F93E4, 0x3E8FA3E8, 0x3E8FA3E8, 0x3ECFB3EC, 0x3ECFB3EC, 0x3ECFB3EC, 0x3F0FC3F0, 0x3F0FC3F0, 0x3F4FD3F4, 0x3F4FD3F4, 
	0x3F8FE3F8, 0x3FCFF3FC, 
    }},
        {.set={
	0x00000000, 0x00A0280A, 0x01405014, 0x01E0781E, 0x0280A028, 0x0300C030, 0x0380E038, 0x04210842, 0x04C1304C, 0x05615856, 
	0x06018060, 0x0681A068, 0x0701C070, 0x07A1E87A, 0x08421084, 0x08C2308C, 0x09425094, 0x09C2709C, 0x0A4290A4, 0x0AC2B0AC, 
	0x0B42D0B4, 0x0BC2F0BC, 0x0C4310C4, 0x0CA328CA, 0x0D0340D0, 0x0D8360D8, 0x0E0380E0, 0x0E6398E6, 0x0EC3B0EC, 0x0F43D0F4, 
	0x0FC3F0FC, 0x10240902, 0x10842108, 0x10E4390E, 0x11445114, 0x11C4711C, 0x12449124, 0x12A4A92A, 0x1304C130, 0x1364D936, 
	0x13C4F13C, 0x14250942, 0x14852148, 0x14C5314C, 0x15054150, 0x15655956, 0x15C5715C, 0x16258962, 0x1685A168, 0x16C5B16C, 
	0x1705C170, 0x1765D976, 0x17C5F17C, 0x18060180, 0x18461184, 0x18862188, 0x18C6318C, 0x19064190, 0x19465194, 0x19A6699A, 
	0x1A0681A0, 0x1A4691A4, 0x1A86A1A8, 0x1AC6B1AC, 0x1B06C1B0, 0x1B86E1B8, 0x1C0701C0, 0x1C8721C8, 0x1D0741D0, 0x1D8761D8, 
	0x1E0781E0, 0x1E87A1E8, 0x1F07C1F0, 0x1F87E1F8, 0x1FC7F1FC, 0x20481204, 0x20882208, 0x21084210, 0x21886218, 0x21C8721C, 
	0x22489224, 0x22C8B22C, 0x2348D234, 0x23C8F23C, 0x24090240, 0x24892248, 0x24C9324C, 0x25094250, 0x25896258, 0x25C9725C, 
	0x26499264, 0x2689A268, 0x26C9B26C, 0x2709C270, 0x2789E278, 0x27C9F27C, 0x280A0280, 0x28CA328C, 0x294A5294, 0x29CA729C, 
	0x2A4A92A4, 0x2B0AC2B0, 0x2B8AE2B8, 0x2C0B02C0, 0x2C8B22C8, 0x2D0B42D0, 0x2D8B62D8, 0x2DCB72DC, 0x2E4B92E4, 0x2ECBB2EC, 
	0x2F4BD2F4, 0x2F8BE2F8, 0x2FCBF2FC, 0x300C0300, 0x304C1304, 0x30CC330C, 0x310C4310, 0x318C6318, 0x31CC731C, 0x324C9324, 
	0x328CA328, 0x32CCB32C, 0x334CD334, 0x338CE338, 0x340D0340, 0x344D1344, 0x348D2348, 0x34CD334C, 0x350D4350, 0x354D5354, 
	0x354D5354, 0x358D6358, 0x35CD735C, 0x360D8360, 0x364D9364, 0x368DA368, 0x36CDB36C, 0x370DC370, 0x378DE378, 0x37CDF37C, 
	0x380E0380, 0x384E1384, 0x384E1384, 0x388E2388, 0x38CE338C, 0x390E4390, 0x390E4390, 0x394E5394, 0x394E5394, 0x398E6398, 
	0x398E6398, 0x39CE739C, 0x3A0E83A0, 0x3A4E93A4, 0x3A4E93A4, 0x3A8EA3A8, 0x3ACEB3AC, 0x3B0EC3B0, 0x3B0EC3B0, 0x3B4ED3B4, 
	0x3B8EE3B8, 0x3BCEF3BC, 0x3BCEF3BC, 0x3C0F03C0, 0x3C0F03C0, 0x3C4F13C4, 0x3C4F13C4, 0x3C8F23C8, 0x3CCF33CC, 0x3D0F43D0, 
	0x3D0F43D0, 0x3D4F53D4, 0x3D4F53D4, 0x3D8F63D8, 0x3D8F63D8, 0x3DCF73DC, 0x3E0F83E0, 0x3E0F83E0, 0x3E0F83E0, 0x3E4F93E4, 
	0x3E4F93E4, 0x3E8FA3E8, 0x3E8FA3E8, 0x3ECFB3EC, 0x3ECFB3EC, 0x3ECFB3EC, 0x3F0FC3F0, 0x3F0FC3F0, 0x3F4FD3F4, 0x3F4FD3F4, 
	0x3F8FE3F8, 0x3FCFF3FC, 
    }}
  },
  .rGmaParam =  {
     // Normal Preview
       eISP_DYNAMIC_GMA_MODE,  // eGMAMode
       8,                  // i4LowContrastThr
       80,                  // i4LowContrastRatio
       3,                  // i4LowContrastSeg
       {
           {   // i4ContrastWeightingTbl
               //  0   1   2    3    4    5    6    7    8    9    10
                  50, 80, 100, 100, 100, 100, 100, 100, 100, 100, 100
           },
           {   // i4LVWeightingTbl
               //LV0   1   2   3   4   5   6   7   8   9   10   11   12   13   14   15   16   17   18   19
                   0,  0,  0,  0,  0,  0,  0,  0, 33, 66, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100
               //  0,  0,  0,  0,  0, 33, 33, 33, 33, 33,  80,  100, 100, 100, 100, 100, 100, 100, 100, 100
           },
           {   // i4NightContrastWtTbl
               //  0   1   2    3    4    5    6    7    8    9    10
                //  50, 50, 50, 50,  50, 30, 20,  15,   0,   0,   0
             85, 85, 75, 50,  50, 30, 20,  15,   0,   0,   0
           },
           {   // i4NightLVWtTbl
               //LV0   1    2    3   4   5   6   7   8   9   10   11   12   13   14   15   16   17   18   19
               //  50,  50,  50,  40, 40, 40, 30, 30,  0,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  0
                  100, 100, 100, 100, 80, 50, 20, 0,  0,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,  0
           }
       },
       {
           1,      // i4Enable
           0,      // i4WaitAEStable
           4       // i4Speed
       },
       {
           0,      // i4Enable
           9202,   // i4CenterPt
           50,     // i4LowPercent
           100000, // i4LowCurve100
           100000, // i4HighCurve100
           50,     // i4HighPercent
           100,    // i4SlopeH100
           100     // i4SlopeL100
       },
       {
           0       // rGMAFlare.i4Enable
       }
    }
};
const ISP_NVRAM_DCE_TUNING_PARAM_T imx499mipiraw_DCE_0004 = {
    .rDceParam=
    {
        100, // SmoothDCESpeed

        { //rDCELUTs
            { //i4DCETbl1
              // DarkStrength                                 BrightStrength
              // LV0  LV2  LV4  LV6  LV8  LV10 LV12 LV14 LV16 LV0  LV2  LV4  LV6  LV8  LV10 LV12 LV14 LV16  TBD
                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, //  0 DR index : , BrightStrength
                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, //  1
                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, //  2
                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, //  3
                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, //  4
                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, //  5
                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, //  6
                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, //  7
                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, //  8
                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, //  9
                { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}, // 10
            },
            { //i4DCETbl2
              // LV0    LV2   LV4   LV6   LV8  LV10  LV12  LV14  LV16   LV0   LV2   LV4   LV6   LV8  LV10  LV12  LV14  LV16  TBD
				{   0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0, 100}, // Face_DarkStrength : Face_BrightStrength
				{3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3300, 3500, 3500, 3500, 3500, 3500, 3500, 3500, 3500, 3500, 100}, // SkyDetectThr : SkyLimitThr
                {  20,   20,   20,   20,   20,   20,   20,   20,   20,   10,   10,   10,   10,   10,   10,   10,   10,   10, 100}, // SkyProtectOnThr : SkyProtectOffThr
                { 150,  150,  150,  150,  150,  150,  150,  150,  150,  80,  80,  80,  80,  80,  80,  80,  80,  80,  100}, // ContourLimitThr
                { 30,  30,  30,  30,  30,  30,  30,  30,  30,  80,  80,  80,  80,  80,  80,  80,  80,  80,  100}, // TBD
                { 30,  30,  30,  30,  30,  30,  30,  30,  30,  80,  80,  80,  80,  80,  80,  80,  80,  80,  100}, // TBD
                { 30,  30,  30,  30,  30,  30,  30,  30,  30,  80,  80,  80,  80,  80,  80,  80,  80,  80,  100}, // TBD
                { 30,  30,  30,  30,  30,  30,  30,  30,  30,  80,  80,  80,  80,  80,  80,  80,  80,  80,  100}, // TBD
                { 30,  30,  30,  30,  30,  30,  30,  30,  30,  80,  80,  80,  80,  80,  80,  80,  80,  80,  100}, // TBD
                { 30,  30,  30,  30,  30,  30,  30,  30,  30,  80,  80,  80,  80,  80,  80,  80,  80,  80,  100}, // TBD
                { 30,  30,  30,  30,  30,  30,  30,  30,  30,  80,  80,  80,  80,  80,  80,  80,  80,  80,  100}, // TBD              
            }
        }
    }
};
