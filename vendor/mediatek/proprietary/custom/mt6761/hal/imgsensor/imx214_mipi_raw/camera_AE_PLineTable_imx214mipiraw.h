/* Copyright Statement:
*
* This software/firmware and related documentation ("MediaTek Software") are
* protected under relevant copyright laws. The information contained herein
* is confidential and proprietary to MediaTek Inc. and/or its licensors.
* Without the prior written permission of MediaTek inc. and/or its licensors,
* any reproduction, modification, use or disclosure of MediaTek Software,
* and information contained herein, in whole or in part, shall be strictly prohibited.
*/
/* MediaTek Inc. (C) 2016. All rights reserved.
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
#ifndef _CAMERA_AE_PLINETABLE_IMX214RAWRAW_H
#define _CAMERA_AE_PLINETABLE_IMX214RAWRAW_H

#include <custom/aaa/AEPlinetable.h>
static strEvPline sPreviewPLineTable_60Hz =
{
{
    {94,1198,1032, 0, 0, 0},  //TV = 13.38(6 lines)  AV=2.28  SV=5.24  BV=10.41
    {94,1280,1024, 0, 0, 0},  //TV = 13.38(6 lines)  AV=2.28  SV=5.32  BV=10.33
    {110,1167,1024, 0, 0, 0},  //TV = 13.15(7 lines)  AV=2.28  SV=5.19  BV=10.24
    {110,1239,1024, 0, 0, 0},  //TV = 13.15(7 lines)  AV=2.28  SV=5.27  BV=10.15
    {126,1188,1024, 0, 0, 0},  /* TV = 12.95(8 lines)  AV=2.28  SV=5.21  BV=10.01 */
    {126,1249,1032, 0, 0, 0},  //TV = 12.95(8 lines)  AV=2.28  SV=5.30  BV=9.93
    {141,1198,1024, 0, 0, 0},  //TV = 12.79(9 lines)  AV=2.28  SV=5.23  BV=9.84
    {157,1167,1024, 0, 0, 0},  //TV = 12.64(10 lines)  AV=2.28  SV=5.19  BV=9.72
    {157,1249,1024, 0, 0, 0},  //TV = 12.64(10 lines)  AV=2.28  SV=5.29  BV=9.63
    {173,1219,1032, 0, 0, 0},  //TV = 12.50(11 lines)  AV=2.28  SV=5.26  BV=9.51
    {188,1198,1032, 0, 0, 0},  //TV = 12.38(12 lines)  AV=2.28  SV=5.24  BV=9.41
    {204,1167,1024, 0, 0, 0},  /* TV = 12.26(13 lines)  AV=2.28  SV=5.19  BV=9.35 */
    {220,1147,1032, 0, 0, 0},  //TV = 12.15(14 lines)  AV=2.28  SV=5.17  BV=9.25
    {235,1167,1024, 0, 0, 0},  //TV = 12.06(15 lines)  AV=2.28  SV=5.19  BV=9.14
    {251,1167,1024, 0, 0, 0},  //TV = 11.96(16 lines)  AV=2.28  SV=5.19  BV=9.05
    {267,1167,1024, 0, 0, 0},  //TV = 11.87(17 lines)  AV=2.28  SV=5.19  BV=8.96
    {282,1188,1024, 0, 0, 0},  //TV = 11.79(18 lines)  AV=2.28  SV=5.21  BV=8.85
    {314,1147,1024, 0, 0, 0},  //TV = 11.64(20 lines)  AV=2.28  SV=5.16  BV=8.75
    {329,1167,1024, 0, 0, 0},  //TV = 11.57(21 lines)  AV=2.28  SV=5.19  BV=8.66
    {360,1147,1024, 0, 0, 0},  //TV = 11.44(23 lines)  AV=2.28  SV=5.16  BV=8.55
    {376,1167,1032, 0, 0, 0},  //TV = 11.38(24 lines)  AV=2.28  SV=5.20  BV=8.45
    {407,1167,1024, 0, 0, 0},  //TV = 11.26(26 lines)  AV=2.28  SV=5.19  BV=8.35
    {439,1147,1032, 0, 0, 0},  //TV = 11.15(28 lines)  AV=2.28  SV=5.17  BV=8.25
    {470,1167,1024, 0, 0, 0},  //TV = 11.06(30 lines)  AV=2.28  SV=5.19  BV=8.14
    {501,1167,1024, 0, 0, 0},  //TV = 10.96(32 lines)  AV=2.28  SV=5.19  BV=8.05
    {548,1144,1024, 0, 0, 0},  //TV = 10.83(35 lines)  AV=2.28  SV=5.16  BV=7.95
    {580,1147,1032, 0, 0, 0},  //TV = 10.75(37 lines)  AV=2.28  SV=5.17  BV=7.85
    {627,1147,1024, 0, 0, 0},  //TV = 10.64(40 lines)  AV=2.28  SV=5.16  BV=7.75
    {673,1147,1024, 0, 0, 0},  //TV = 10.54(43 lines)  AV=2.28  SV=5.16  BV=7.65
    {720,1147,1024, 0, 0, 0},  //TV = 10.44(46 lines)  AV=2.28  SV=5.16  BV=7.55
    {767,1147,1032, 0, 0, 0},  //TV = 10.35(49 lines)  AV=2.28  SV=5.17  BV=7.45
    {830,1144,1024, 0, 0, 0},  //TV = 10.23(53 lines)  AV=2.28  SV=5.16  BV=7.35
    {893,1144,1024, 0, 0, 0},  //TV = 10.13(57 lines)  AV=2.28  SV=5.16  BV=7.24
    {955,1144,1024, 0, 0, 0},  //TV = 10.03(61 lines)  AV=2.28  SV=5.16  BV=7.15
    {1018,1147,1024, 0, 0, 0},  //TV = 9.94(65 lines)  AV=2.28  SV=5.16  BV=7.05
    {1080,1147,1032, 0, 0, 0},  //TV = 9.85(69 lines)  AV=2.28  SV=5.17  BV=6.95
    {1159,1147,1032, 0, 0, 0},  //TV = 9.75(74 lines)  AV=2.28  SV=5.17  BV=6.85
    {1253,1147,1024, 0, 0, 0},  //TV = 9.64(80 lines)  AV=2.28  SV=5.16  BV=6.75
    {1331,1147,1032, 0, 0, 0},  //TV = 9.55(85 lines)  AV=2.28  SV=5.17  BV=6.65
    {1440,1147,1024, 0, 0, 0},  //TV = 9.44(92 lines)  AV=2.28  SV=5.16  BV=6.55
    {1550,1144,1024, 0, 0, 0},  //TV = 9.33(99 lines)  AV=2.28  SV=5.16  BV=6.45
    {1660,1144,1024, 0, 0, 0},  //TV = 9.23(106 lines)  AV=2.28  SV=5.16  BV=6.35
    {1785,1144,1024, 0, 0, 0},  //TV = 9.13(114 lines)  AV=2.28  SV=5.16  BV=6.24
    {1910,1144,1024, 0, 0, 0},  //TV = 9.03(122 lines)  AV=2.28  SV=5.16  BV=6.15
    {2051,1144,1024, 0, 0, 0},  //TV = 8.93(131 lines)  AV=2.28  SV=5.16  BV=6.04
    {2192,1144,1024, 0, 0, 0},  //TV = 8.83(140 lines)  AV=2.28  SV=5.16  BV=5.95
    {2348,1144,1024, 0, 0, 0},  //TV = 8.73(150 lines)  AV=2.28  SV=5.16  BV=5.85
    {2505,1147,1024, 0, 0, 0},  //TV = 8.64(160 lines)  AV=2.28  SV=5.16  BV=5.75
    {2708,1144,1024, 0, 0, 0},  //TV = 8.53(173 lines)  AV=2.28  SV=5.16  BV=5.64
    {2896,1144,1024, 0, 0, 0},  //TV = 8.43(185 lines)  AV=2.28  SV=5.16  BV=5.55
    {3099,1144,1024, 0, 0, 0},  //TV = 8.33(198 lines)  AV=2.28  SV=5.16  BV=5.45
    {3303,1147,1024, 0, 0, 0},  //TV = 8.24(211 lines)  AV=2.28  SV=5.16  BV=5.35
    {3538,1147,1024, 0, 0, 0},  //TV = 8.14(226 lines)  AV=2.28  SV=5.16  BV=5.25
    {3819,1144,1024, 0, 0, 0},  //TV = 8.03(244 lines)  AV=2.28  SV=5.16  BV=5.15
    {4117,1144,1024, 0, 0, 0},  //TV = 7.92(263 lines)  AV=2.28  SV=5.16  BV=5.04
    {4383,1144,1024, 0, 0, 0},  //TV = 7.83(280 lines)  AV=2.28  SV=5.16  BV=4.95
    {4711,1144,1024, 0, 0, 0},  //TV = 7.73(301 lines)  AV=2.28  SV=5.16  BV=4.84
    {5056,1144,1024, 0, 0, 0},  //TV = 7.63(323 lines)  AV=2.28  SV=5.16  BV=4.74
    {5416,1144,1024, 0, 0, 0},  //TV = 7.53(346 lines)  AV=2.28  SV=5.16  BV=4.64
    {5791,1144,1024, 0, 0, 0},  //TV = 7.43(370 lines)  AV=2.28  SV=5.16  BV=4.55
    {6198,1144,1024, 0, 0, 0},  //TV = 7.33(396 lines)  AV=2.28  SV=5.16  BV=4.45
    {6652,1144,1024, 0, 0, 0},  //TV = 7.23(425 lines)  AV=2.28  SV=5.16  BV=4.35
    {7122,1144,1024, 0, 0, 0},  //TV = 7.13(455 lines)  AV=2.28  SV=5.16  BV=4.25
    {7669,1144,1024, 0, 0, 0},  //TV = 7.03(490 lines)  AV=2.28  SV=5.16  BV=4.14
    {8217,1144,1024, 0, 0, 0},  //TV = 6.93(525 lines)  AV=2.28  SV=5.16  BV=4.04
    {8327,1198,1032, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.24  BV=3.95
    {8327,1280,1032, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.33  BV=3.85
    {8327,1382,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.43  BV=3.75
    {8327,1475,1032, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.54  BV=3.65
    {8327,1587,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.63  BV=3.55
    {8327,1700,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.73  BV=3.45
    {8327,1823,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.83  BV=3.35
    {8327,1966,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.94  BV=3.24
    {8327,2079,1032, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=6.03  BV=3.15
    {8327,2243,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=6.13  BV=3.05
    {8327,2406,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=6.23  BV=2.95
    {8327,2591,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=6.34  BV=2.84
    {8327,2755,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=6.43  BV=2.76
    {8327,2949,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=6.53  BV=2.66
    {16669,1587,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=5.63  BV=2.55
    {16669,1700,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=5.73  BV=2.45
    {16669,1823,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=5.83  BV=2.35
    {16669,1966,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=5.94  BV=2.24
    {16669,2099,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.04  BV=2.15
    {16669,2243,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.13  BV=2.05
    {16669,2406,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.23  BV=1.95
    {16669,2591,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.34  BV=1.84
    {16669,2755,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.43  BV=1.75
    {16669,2949,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.53  BV=1.66
    {16669,3154,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.62  BV=1.56
    {16669,3400,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.73  BV=1.45
    {16669,3645,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.83  BV=1.35
    {16669,3850,1040, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.93  BV=1.25
    {16669,4157,1032, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=7.03  BV=1.15
    {16669,4444,1032, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=7.13  BV=1.05
    {16669,4762,1032, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=7.23  BV=0.95
    {24995,3451,1024, 0, 0, 0},  //TV = 5.32(1597 lines)  AV=2.28  SV=6.75  BV=0.84
    {24995,3697,1024, 0, 0, 0},  //TV = 5.32(1597 lines)  AV=2.28  SV=6.85  BV=0.75
    {24995,3912,1032, 0, 0, 0},  //TV = 5.32(1597 lines)  AV=2.28  SV=6.94  BV=0.65
    {24995,4229,1024, 0, 0, 0},  //TV = 5.32(1597 lines)  AV=2.28  SV=7.05  BV=0.55
    {24995,4516,1032, 0, 0, 0},  //TV = 5.32(1597 lines)  AV=2.28  SV=7.15  BV=0.45
    {33337,3645,1024, 0, 0, 0},  //TV = 4.91(2130 lines)  AV=2.28  SV=6.83  BV=0.35
    {33337,3912,1024, 0, 0, 0},  //TV = 4.91(2130 lines)  AV=2.28  SV=6.93  BV=0.25
    {33337,4157,1032, 0, 0, 0},  //TV = 4.91(2130 lines)  AV=2.28  SV=7.03  BV=0.15
    {33337,4444,1032, 0, 0, 0},  //TV = 4.91(2130 lines)  AV=2.28  SV=7.13  BV=0.05
    {33337,4762,1032, 0, 0, 0},  //TV = 4.91(2130 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33337,5140,1024, 0, 0, 0},  //TV = 4.91(2130 lines)  AV=2.28  SV=7.33  BV=-0.15
    {33337,5458,1032, 0, 0, 0},  //TV = 4.91(2130 lines)  AV=2.28  SV=7.43  BV=-0.24
    {33337,5827,1040, 0, 0, 0},  //TV = 4.91(2130 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33337,6246,1040, 0, 0, 0},  //TV = 4.91(2130 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33337,6717,1040, 0, 0, 0},  //TV = 4.91(2130 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33337,7281,1024, 0, 0, 0},  //TV = 4.91(2130 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33337,7711,1040, 0, 0, 0},  //TV = 4.91(2130 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33337,8192,1048, 0, 0, 0},  //TV = 4.91(2130 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33337,8192,1128, 0, 0, 0},  //TV = 4.91(2130 lines)  AV=2.28  SV=8.14  BV=-0.96
    {41663,7711,1024, 0, 0, 0},  //TV = 4.59(2662 lines)  AV=2.28  SV=7.91  BV=-1.05
    {41663,8192,1032, 0, 0, 0},  //TV = 4.59(2662 lines)  AV=2.28  SV=8.01  BV=-1.15
    {41663,8192,1104, 0, 0, 0},  //TV = 4.59(2662 lines)  AV=2.28  SV=8.11  BV=-1.25
    {50005,7711,1048, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=7.95  BV=-1.35
    {50005,8192,1056, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.04  BV=-1.45
    {50005,8192,1128, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.14  BV=-1.54
    {50005,8192,1216, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.25  BV=-1.65
    {50005,8192,1296, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.34  BV=-1.74
    {50005,8192,1392, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.44  BV=-1.85
    {50005,8192,1504, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.55  BV=-1.96
    {50005,8192,1608, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.65  BV=-2.05
    {50005,8192,1728, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.75  BV=-2.16
    {50005,8192,1848, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.85  BV=-2.25
    {50005,8192,1976, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.95  BV=-2.35
    {50005,8192,2120, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=9.05  BV=-2.45
    {58332,8192,1944, 0, 0, 0},  //TV = 4.10(3727 lines)  AV=2.28  SV=8.92  BV=-2.55
    {58332,8192,2080, 0, 0, 0},  //TV = 4.10(3727 lines)  AV=2.28  SV=9.02  BV=-2.65
    {66658,8192,1952, 0, 0, 0},  //TV = 3.91(4259 lines)  AV=2.28  SV=8.93  BV=-2.75
    {66658,8192,2096, 0, 0, 0},  //TV = 3.91(4259 lines)  AV=2.28  SV=9.03  BV=-2.85
    {75000,8192,2000, 0, 0, 0},  //TV = 3.74(4792 lines)  AV=2.28  SV=8.97  BV=-2.95
    {75000,8192,2144, 0, 0, 0},  //TV = 3.74(4792 lines)  AV=2.28  SV=9.07  BV=-3.05
    {75000,8192,2296, 0, 0, 0},  //TV = 3.74(4792 lines)  AV=2.28  SV=9.16  BV=-3.15
    {75000,8192,2464, 0, 0, 0},  //TV = 3.74(4792 lines)  AV=2.28  SV=9.27  BV=-3.25
    {75000,8192,2640, 0, 0, 0},  //TV = 3.74(4792 lines)  AV=2.28  SV=9.37  BV=-3.35
    {75000,8192,2832, 0, 0, 0},  //TV = 3.74(4792 lines)  AV=2.28  SV=9.47  BV=-3.46
    {75000,8192,3032, 0, 0, 0},  //TV = 3.74(4792 lines)  AV=2.28  SV=9.57  BV=-3.55
    {75000,8192,3248, 0, 0, 0},  //TV = 3.74(4792 lines)  AV=2.28  SV=9.67  BV=-3.65
    {75000,8192,3480, 0, 0, 0},  //TV = 3.74(4792 lines)  AV=2.28  SV=9.76  BV=-3.75
    {75000,8192,3728, 0, 0, 0},  //TV = 3.74(4792 lines)  AV=2.28  SV=9.86  BV=-3.85
    {75000,8192,4000, 0, 0, 0},  //TV = 3.74(4792 lines)  AV=2.28  SV=9.97  BV=-3.95
    {75000,8192,4288, 0, 0, 0},  //TV = 3.74(4792 lines)  AV=2.28  SV=10.07  BV=-4.05
    {75000,8192,4592, 0, 0, 0},  //TV = 3.74(4792 lines)  AV=2.28  SV=10.16  BV=-4.15
    {75000,8192,4920, 0, 0, 0},  //TV = 3.74(4792 lines)  AV=2.28  SV=10.26  BV=-4.25
    {75000,8192,5120, 0, 0, 0},  /* TV = 3.74(4792 lines)  AV=2.28  SV=10.32  BV=-4.31 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sPreviewPLineTable_50Hz =
{
{
    {94,1198,1032, 0, 0, 0},  //TV = 13.38(6 lines)  AV=2.28  SV=5.24  BV=10.41
    {94,1280,1024, 0, 0, 0},  //TV = 13.38(6 lines)  AV=2.28  SV=5.32  BV=10.33
    {110,1167,1024, 0, 0, 0},  //TV = 13.15(7 lines)  AV=2.28  SV=5.19  BV=10.24
    {110,1239,1024, 0, 0, 0},  //TV = 13.15(7 lines)  AV=2.28  SV=5.27  BV=10.15
    {126,1188,1024, 0, 0, 0},  /* TV = 12.95(8 lines)  AV=2.28  SV=5.21  BV=10.01 */
    {126,1249,1032, 0, 0, 0},  //TV = 12.95(8 lines)  AV=2.28  SV=5.30  BV=9.93
    {141,1198,1024, 0, 0, 0},  //TV = 12.79(9 lines)  AV=2.28  SV=5.23  BV=9.84
    {157,1167,1024, 0, 0, 0},  //TV = 12.64(10 lines)  AV=2.28  SV=5.19  BV=9.72
    {157,1249,1024, 0, 0, 0},  //TV = 12.64(10 lines)  AV=2.28  SV=5.29  BV=9.63
    {173,1219,1032, 0, 0, 0},  //TV = 12.50(11 lines)  AV=2.28  SV=5.26  BV=9.51
    {188,1198,1032, 0, 0, 0},  //TV = 12.38(12 lines)  AV=2.28  SV=5.24  BV=9.41
    {204,1167,1024, 0, 0, 0},  /* TV = 12.26(13 lines)  AV=2.28  SV=5.19  BV=9.35 */
    {220,1147,1032, 0, 0, 0},  //TV = 12.15(14 lines)  AV=2.28  SV=5.17  BV=9.25
    {235,1167,1024, 0, 0, 0},  //TV = 12.06(15 lines)  AV=2.28  SV=5.19  BV=9.14
    {251,1167,1024, 0, 0, 0},  //TV = 11.96(16 lines)  AV=2.28  SV=5.19  BV=9.05
    {267,1167,1024, 0, 0, 0},  //TV = 11.87(17 lines)  AV=2.28  SV=5.19  BV=8.96
    {282,1188,1024, 0, 0, 0},  //TV = 11.79(18 lines)  AV=2.28  SV=5.21  BV=8.85
    {314,1147,1024, 0, 0, 0},  //TV = 11.64(20 lines)  AV=2.28  SV=5.16  BV=8.75
    {329,1167,1024, 0, 0, 0},  //TV = 11.57(21 lines)  AV=2.28  SV=5.19  BV=8.66
    {360,1147,1024, 0, 0, 0},  //TV = 11.44(23 lines)  AV=2.28  SV=5.16  BV=8.55
    {376,1167,1032, 0, 0, 0},  //TV = 11.38(24 lines)  AV=2.28  SV=5.20  BV=8.45
    {407,1167,1024, 0, 0, 0},  //TV = 11.26(26 lines)  AV=2.28  SV=5.19  BV=8.35
    {439,1147,1032, 0, 0, 0},  //TV = 11.15(28 lines)  AV=2.28  SV=5.17  BV=8.25
    {470,1167,1024, 0, 0, 0},  //TV = 11.06(30 lines)  AV=2.28  SV=5.19  BV=8.14
    {501,1167,1024, 0, 0, 0},  //TV = 10.96(32 lines)  AV=2.28  SV=5.19  BV=8.05
    {548,1144,1024, 0, 0, 0},  //TV = 10.83(35 lines)  AV=2.28  SV=5.16  BV=7.95
    {580,1147,1032, 0, 0, 0},  //TV = 10.75(37 lines)  AV=2.28  SV=5.17  BV=7.85
    {627,1147,1024, 0, 0, 0},  //TV = 10.64(40 lines)  AV=2.28  SV=5.16  BV=7.75
    {673,1147,1024, 0, 0, 0},  //TV = 10.54(43 lines)  AV=2.28  SV=5.16  BV=7.65
    {720,1147,1024, 0, 0, 0},  //TV = 10.44(46 lines)  AV=2.28  SV=5.16  BV=7.55
    {767,1147,1032, 0, 0, 0},  //TV = 10.35(49 lines)  AV=2.28  SV=5.17  BV=7.45
    {830,1144,1024, 0, 0, 0},  //TV = 10.23(53 lines)  AV=2.28  SV=5.16  BV=7.35
    {893,1144,1024, 0, 0, 0},  //TV = 10.13(57 lines)  AV=2.28  SV=5.16  BV=7.24
    {955,1144,1024, 0, 0, 0},  //TV = 10.03(61 lines)  AV=2.28  SV=5.16  BV=7.15
    {1018,1147,1024, 0, 0, 0},  //TV = 9.94(65 lines)  AV=2.28  SV=5.16  BV=7.05
    {1080,1147,1032, 0, 0, 0},  //TV = 9.85(69 lines)  AV=2.28  SV=5.17  BV=6.95
    {1159,1147,1032, 0, 0, 0},  //TV = 9.75(74 lines)  AV=2.28  SV=5.17  BV=6.85
    {1253,1147,1024, 0, 0, 0},  //TV = 9.64(80 lines)  AV=2.28  SV=5.16  BV=6.75
    {1331,1147,1032, 0, 0, 0},  //TV = 9.55(85 lines)  AV=2.28  SV=5.17  BV=6.65
    {1440,1147,1024, 0, 0, 0},  //TV = 9.44(92 lines)  AV=2.28  SV=5.16  BV=6.55
    {1550,1144,1024, 0, 0, 0},  //TV = 9.33(99 lines)  AV=2.28  SV=5.16  BV=6.45
    {1660,1144,1024, 0, 0, 0},  //TV = 9.23(106 lines)  AV=2.28  SV=5.16  BV=6.35
    {1785,1144,1024, 0, 0, 0},  //TV = 9.13(114 lines)  AV=2.28  SV=5.16  BV=6.24
    {1910,1144,1024, 0, 0, 0},  //TV = 9.03(122 lines)  AV=2.28  SV=5.16  BV=6.15
    {2051,1144,1024, 0, 0, 0},  //TV = 8.93(131 lines)  AV=2.28  SV=5.16  BV=6.04
    {2192,1144,1024, 0, 0, 0},  //TV = 8.83(140 lines)  AV=2.28  SV=5.16  BV=5.95
    {2348,1144,1024, 0, 0, 0},  //TV = 8.73(150 lines)  AV=2.28  SV=5.16  BV=5.85
    {2505,1147,1024, 0, 0, 0},  //TV = 8.64(160 lines)  AV=2.28  SV=5.16  BV=5.75
    {2708,1144,1024, 0, 0, 0},  //TV = 8.53(173 lines)  AV=2.28  SV=5.16  BV=5.64
    {2896,1144,1024, 0, 0, 0},  //TV = 8.43(185 lines)  AV=2.28  SV=5.16  BV=5.55
    {3099,1144,1024, 0, 0, 0},  //TV = 8.33(198 lines)  AV=2.28  SV=5.16  BV=5.45
    {3303,1147,1024, 0, 0, 0},  //TV = 8.24(211 lines)  AV=2.28  SV=5.16  BV=5.35
    {3538,1147,1024, 0, 0, 0},  //TV = 8.14(226 lines)  AV=2.28  SV=5.16  BV=5.25
    {3819,1144,1024, 0, 0, 0},  //TV = 8.03(244 lines)  AV=2.28  SV=5.16  BV=5.15
    {4117,1144,1024, 0, 0, 0},  //TV = 7.92(263 lines)  AV=2.28  SV=5.16  BV=5.04
    {4383,1144,1024, 0, 0, 0},  //TV = 7.83(280 lines)  AV=2.28  SV=5.16  BV=4.95
    {4711,1144,1024, 0, 0, 0},  //TV = 7.73(301 lines)  AV=2.28  SV=5.16  BV=4.84
    {5056,1144,1024, 0, 0, 0},  //TV = 7.63(323 lines)  AV=2.28  SV=5.16  BV=4.74
    {5416,1144,1024, 0, 0, 0},  //TV = 7.53(346 lines)  AV=2.28  SV=5.16  BV=4.64
    {5791,1144,1024, 0, 0, 0},  //TV = 7.43(370 lines)  AV=2.28  SV=5.16  BV=4.55
    {6198,1144,1024, 0, 0, 0},  //TV = 7.33(396 lines)  AV=2.28  SV=5.16  BV=4.45
    {6652,1144,1024, 0, 0, 0},  //TV = 7.23(425 lines)  AV=2.28  SV=5.16  BV=4.35
    {7122,1144,1024, 0, 0, 0},  //TV = 7.13(455 lines)  AV=2.28  SV=5.16  BV=4.25
    {7669,1144,1024, 0, 0, 0},  //TV = 7.03(490 lines)  AV=2.28  SV=5.16  BV=4.14
    {8217,1144,1024, 0, 0, 0},  //TV = 6.93(525 lines)  AV=2.28  SV=5.16  BV=4.04
    {8327,1198,1032, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.24  BV=3.95
    {8327,1280,1032, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.33  BV=3.85
    {8327,1382,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.43  BV=3.75
    {8327,1475,1032, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.54  BV=3.65
    {8327,1587,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.63  BV=3.55
    {8327,1700,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.73  BV=3.45
    {8327,1823,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.83  BV=3.35
    {8327,1966,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.94  BV=3.24
    {8562,2028,1032, 0, 0, 0},  //TV = 6.87(547 lines)  AV=2.28  SV=6.00  BV=3.15
    {9172,2028,1032, 0, 0, 0},  //TV = 6.77(586 lines)  AV=2.28  SV=6.00  BV=3.05
    {9829,2028,1032, 0, 0, 0},  //TV = 6.67(628 lines)  AV=2.28  SV=6.00  BV=2.95
    {10001,2150,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.07  BV=2.85
    {10001,2304,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.17  BV=2.75
    {10001,2447,1032, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.27  BV=2.65
    {10001,2621,1032, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.37  BV=2.55
    {10001,2816,1032, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.47  BV=2.45
    {10001,3011,1032, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.57  BV=2.35
    {20002,1618,1032, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=5.67  BV=2.25
    {20002,1751,1024, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=5.77  BV=2.14
    {20002,1864,1024, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=5.86  BV=2.05
    {20002,1997,1024, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=5.96  BV=1.96
    {20002,2150,1024, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.07  BV=1.85
    {20002,2304,1024, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.17  BV=1.75
    {20002,2447,1032, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.27  BV=1.65
    {20002,2652,1024, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.37  BV=1.55
    {20002,2847,1024, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.48  BV=1.44
    {20002,3011,1032, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.57  BV=1.35
    {20002,3236,1032, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.67  BV=1.25
    {20002,3492,1024, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.77  BV=1.15
    {20002,3748,1024, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.87  BV=1.05
    {20002,3973,1032, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.97  BV=0.95
    {20002,4301,1024, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=7.07  BV=0.85
    {20002,4598,1024, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=7.17  BV=0.75
    {20002,4946,1024, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=7.27  BV=0.65
    {30003,3492,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=6.78  BV=0.55
    {30003,3748,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=6.88  BV=0.45
    {30003,4035,1024, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=6.98  BV=0.36
    {30003,4301,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.08  BV=0.25
    {30003,4598,1040, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.19  BV=0.14
    {30003,4946,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.28  BV=0.05
    {30003,5345,1024, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.38  BV=-0.05
    {30003,5704,1024, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.48  BV=-0.14
    {30003,6093,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.58  BV=-0.25
    {30003,6554,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.69  BV=-0.36
    {30003,7086,1024, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.79  BV=-0.46
    {30003,7485,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.88  BV=-0.55
    {30003,7946,1048, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.99  BV=-0.66
    {30003,8192,1088, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=8.09  BV=-0.75
    {30003,8192,1168, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=8.19  BV=-0.86
    {40004,7485,1024, 0, 0, 0},  //TV = 4.64(2556 lines)  AV=2.28  SV=7.87  BV=-0.95
    {40004,7946,1032, 0, 0, 0},  //TV = 4.64(2556 lines)  AV=2.28  SV=7.97  BV=-1.05
    {40004,8192,1080, 0, 0, 0},  //TV = 4.64(2556 lines)  AV=2.28  SV=8.08  BV=-1.16
    {50005,7281,1040, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=7.85  BV=-1.26
    {50005,7711,1048, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=7.95  BV=-1.35
    {50005,8192,1056, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.04  BV=-1.45
    {50005,8192,1128, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.14  BV=-1.54
    {50005,8192,1216, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.25  BV=-1.65
    {50005,8192,1296, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.34  BV=-1.74
    {50005,8192,1392, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.44  BV=-1.85
    {50005,8192,1504, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.55  BV=-1.96
    {50005,8192,1608, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.65  BV=-2.05
    {50005,8192,1728, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.75  BV=-2.16
    {50005,8192,1848, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.85  BV=-2.25
    {50005,8192,1976, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=8.95  BV=-2.35
    {50005,8192,2120, 0, 0, 0},  //TV = 4.32(3195 lines)  AV=2.28  SV=9.05  BV=-2.45
    {60006,8192,1888, 0, 0, 0},  //TV = 4.06(3834 lines)  AV=2.28  SV=8.88  BV=-2.55
    {60006,8192,2024, 0, 0, 0},  //TV = 4.06(3834 lines)  AV=2.28  SV=8.98  BV=-2.65
    {60006,8192,2168, 0, 0, 0},  //TV = 4.06(3834 lines)  AV=2.28  SV=9.08  BV=-2.75
    {70007,8192,1992, 0, 0, 0},  //TV = 3.84(4473 lines)  AV=2.28  SV=8.96  BV=-2.85
    {70007,8192,2144, 0, 0, 0},  //TV = 3.84(4473 lines)  AV=2.28  SV=9.07  BV=-2.95
    {70007,8192,2296, 0, 0, 0},  //TV = 3.84(4473 lines)  AV=2.28  SV=9.16  BV=-3.05
    {70007,8192,2464, 0, 0, 0},  //TV = 3.84(4473 lines)  AV=2.28  SV=9.27  BV=-3.16
    {70007,8192,2640, 0, 0, 0},  //TV = 3.84(4473 lines)  AV=2.28  SV=9.37  BV=-3.25
    {70007,8192,2832, 0, 0, 0},  //TV = 3.84(4473 lines)  AV=2.28  SV=9.47  BV=-3.36
    {70007,8192,3032, 0, 0, 0},  //TV = 3.84(4473 lines)  AV=2.28  SV=9.57  BV=-3.45
    {70007,8192,3248, 0, 0, 0},  //TV = 3.84(4473 lines)  AV=2.28  SV=9.67  BV=-3.55
    {70007,8192,3480, 0, 0, 0},  //TV = 3.84(4473 lines)  AV=2.28  SV=9.76  BV=-3.65
    {70007,8192,3728, 0, 0, 0},  //TV = 3.84(4473 lines)  AV=2.28  SV=9.86  BV=-3.75
    {70007,8192,4000, 0, 0, 0},  //TV = 3.84(4473 lines)  AV=2.28  SV=9.97  BV=-3.85
    {70007,8192,4288, 0, 0, 0},  //TV = 3.84(4473 lines)  AV=2.28  SV=10.07  BV=-3.95
    {70007,8192,4592, 0, 0, 0},  //TV = 3.84(4473 lines)  AV=2.28  SV=10.16  BV=-4.05
    {70007,8192,4920, 0, 0, 0},  //TV = 3.84(4473 lines)  AV=2.28  SV=10.26  BV=-4.15
    {70007,8192,5120, 0, 0, 0},  /* TV = 3.84(4473 lines)  AV=2.28  SV=10.32  BV=-4.21 */
    {70007,8192,5120, 0, 0, 0},  /* TV = 3.84(4473 lines)  AV=2.28  SV=10.32  BV=-4.21 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_PreviewAutoTable =
{
    AETABLE_RPEVIEW_AUTO, //eAETableID
    149, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    105, //i4MaxBV
    -43, //i4MinBV
    90, //i4EffectiveMaxBV
    -50, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sPreviewPLineTable_60Hz,
    sPreviewPLineTable_50Hz,
    NULL,
};
static strEvPline sCapturePLineTable_60Hz =
{
{
    {94,1198,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.24  BV=10.41
    {105,1147,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.16  BV=10.33
    {105,1219,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.25  BV=10.24
    {115,1219,1024, 0, 0, 0},  /* TV = 13.09(11 lines)  AV=2.28  SV=5.25  BV=10.11 */
    {126,1188,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.21  BV=10.01
    {136,1167,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.19  BV=9.93
    {147,1147,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.16  BV=9.84
    {157,1167,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.19  BV=9.72
    {167,1167,1024, 0, 0, 0},  //TV = 12.55(16 lines)  AV=2.28  SV=5.19  BV=9.63
    {178,1188,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.21  BV=9.52
    {199,1147,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.16  BV=9.41
    {209,1144,1024, 0, 0, 0},  /* TV = 12.22(20 lines)  AV=2.28  SV=5.16  BV=9.34 */
    {220,1147,1032, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.17  BV=9.25
    {230,1188,1024, 0, 0, 0},  //TV = 12.09(22 lines)  AV=2.28  SV=5.21  BV=9.15
    {251,1167,1024, 0, 0, 0},  //TV = 11.96(24 lines)  AV=2.28  SV=5.19  BV=9.05
    {272,1147,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.16  BV=8.96
    {293,1147,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.16  BV=8.85
    {314,1147,1024, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.16  BV=8.75
    {334,1147,1032, 0, 0, 0},  //TV = 11.55(32 lines)  AV=2.28  SV=5.17  BV=8.65
    {355,1167,1024, 0, 0, 0},  //TV = 11.46(34 lines)  AV=2.28  SV=5.19  BV=8.55
    {387,1147,1024, 0, 0, 0},  //TV = 11.34(37 lines)  AV=2.28  SV=5.16  BV=8.45
    {407,1167,1024, 0, 0, 0},  //TV = 11.26(39 lines)  AV=2.28  SV=5.19  BV=8.35
    {439,1147,1032, 0, 0, 0},  //TV = 11.15(42 lines)  AV=2.28  SV=5.17  BV=8.25
    {480,1144,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.16  BV=8.14
    {501,1167,1024, 0, 0, 0},  //TV = 10.96(48 lines)  AV=2.28  SV=5.19  BV=8.05
    {543,1147,1032, 0, 0, 0},  //TV = 10.85(52 lines)  AV=2.28  SV=5.17  BV=7.95
    {585,1147,1024, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=5.16  BV=7.85
    {627,1147,1024, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=5.16  BV=7.75
    {668,1147,1032, 0, 0, 0},  //TV = 10.55(64 lines)  AV=2.28  SV=5.17  BV=7.65
    {720,1147,1024, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=5.16  BV=7.55
    {773,1147,1024, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=5.16  BV=7.45
    {825,1147,1024, 0, 0, 0},  //TV = 10.24(79 lines)  AV=2.28  SV=5.16  BV=7.35
    {887,1147,1024, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=5.16  BV=7.25
    {950,1147,1024, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=5.16  BV=7.15
    {1023,1144,1024, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=5.16  BV=7.05
    {1096,1147,1024, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=5.16  BV=6.94
    {1180,1144,1024, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=5.16  BV=6.84
    {1253,1147,1024, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=5.16  BV=6.75
    {1346,1147,1024, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=5.16  BV=6.65
    {1451,1144,1024, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=5.16  BV=6.54
    {1545,1147,1024, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=5.16  BV=6.45
    {1660,1144,1024, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=5.16  BV=6.35
    {1785,1144,1024, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=5.16  BV=6.24
    {1910,1144,1024, 0, 0, 0},  //TV = 9.03(183 lines)  AV=2.28  SV=5.16  BV=6.15
    {2056,1144,1024, 0, 0, 0},  //TV = 8.93(197 lines)  AV=2.28  SV=5.16  BV=6.04
    {2192,1144,1024, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=5.16  BV=5.95
    {2348,1144,1024, 0, 0, 0},  //TV = 8.73(225 lines)  AV=2.28  SV=5.16  BV=5.85
    {2526,1144,1024, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=5.16  BV=5.74
    {2703,1144,1024, 0, 0, 0},  //TV = 8.53(259 lines)  AV=2.28  SV=5.16  BV=5.65
    {2891,1144,1024, 0, 0, 0},  //TV = 8.43(277 lines)  AV=2.28  SV=5.16  BV=5.55
    {3099,1144,1024, 0, 0, 0},  //TV = 8.33(297 lines)  AV=2.28  SV=5.16  BV=5.45
    {3339,1144,1024, 0, 0, 0},  //TV = 8.23(320 lines)  AV=2.28  SV=5.16  BV=5.34
    {3569,1144,1024, 0, 0, 0},  //TV = 8.13(342 lines)  AV=2.28  SV=5.16  BV=5.25
    {3819,1144,1024, 0, 0, 0},  //TV = 8.03(366 lines)  AV=2.28  SV=5.16  BV=5.15
    {4091,1144,1024, 0, 0, 0},  //TV = 7.93(392 lines)  AV=2.28  SV=5.16  BV=5.05
    {4383,1144,1024, 0, 0, 0},  //TV = 7.83(420 lines)  AV=2.28  SV=5.16  BV=4.95
    {4717,1144,1024, 0, 0, 0},  //TV = 7.73(452 lines)  AV=2.28  SV=5.16  BV=4.84
    {5051,1144,1024, 0, 0, 0},  //TV = 7.63(484 lines)  AV=2.28  SV=5.16  BV=4.74
    {5416,1144,1024, 0, 0, 0},  //TV = 7.53(519 lines)  AV=2.28  SV=5.16  BV=4.64
    {5791,1144,1024, 0, 0, 0},  //TV = 7.43(555 lines)  AV=2.28  SV=5.16  BV=4.55
    {6209,1144,1024, 0, 0, 0},  //TV = 7.33(595 lines)  AV=2.28  SV=5.16  BV=4.45
    {6647,1144,1024, 0, 0, 0},  //TV = 7.23(637 lines)  AV=2.28  SV=5.16  BV=4.35
    {7116,1144,1024, 0, 0, 0},  //TV = 7.13(682 lines)  AV=2.28  SV=5.16  BV=4.25
    {7628,1144,1024, 0, 0, 0},  //TV = 7.03(731 lines)  AV=2.28  SV=5.16  BV=4.15
    {8222,1144,1024, 0, 0, 0},  //TV = 6.93(788 lines)  AV=2.28  SV=5.16  BV=4.04
    {8338,1198,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.24  BV=3.94
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.53  BV=3.65
    {8338,1587,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.63  BV=3.55
    {8338,1700,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.73  BV=3.45
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1956,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.93  BV=3.25
    {8338,2079,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.03  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {16664,1198,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.24  BV=2.94
    {16664,1300,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.34  BV=2.84
    {16664,1382,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.43  BV=2.75
    {16664,1495,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.55  BV=2.64
    {16664,1587,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.63  BV=2.55
    {16664,1700,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.73  BV=2.45
    {25001,1198,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.24  BV=2.36
    {25001,1300,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.34  BV=2.25
    {25001,1393,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.44  BV=2.15
    {25001,1495,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.55  BV=2.05
    {33327,1198,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.24  BV=1.94
    {33327,1280,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.33  BV=1.85
    {33327,1382,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.43  BV=1.75
    {33327,1475,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.54  BV=1.64
    {33327,1587,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.63  BV=1.55
    {33327,1710,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.74  BV=1.44
    {33327,1823,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.83  BV=1.35
    {33327,1966,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.94  BV=1.24
    {33327,2099,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.04  BV=1.15
    {33327,2243,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.13  BV=1.05
    {33327,2406,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.23  BV=0.95
    {33327,2591,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.34  BV=0.84
    {33327,2755,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.43  BV=0.75
    {33327,2949,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.53  BV=0.66
    {33327,3154,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.62  BV=0.56
    {33327,3400,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.73  BV=0.45
    {33327,3645,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.83  BV=0.35
    {33327,3850,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.93  BV=0.25
    {33337,4157,1032, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.03  BV=0.15
    {33337,4444,1032, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.13  BV=0.05
    {41663,3850,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=6.91  BV=-0.05
    {41663,4096,1032, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.01  BV=-0.15
    {41663,4444,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.12  BV=-0.26
    {41663,4680,1040, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.21  BV=-0.35
    {41663,5038,1032, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.31  BV=-0.45
    {41663,5345,1040, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.41  BV=-0.55
    {41663,5827,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.51  BV=-0.65
    {41663,6246,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.61  BV=-0.75
    {41663,6554,1040, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.70  BV=-0.84
    {41663,7086,1040, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.81  BV=-0.95
    {41663,7711,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.91  BV=-1.05
    {41663,8192,1032, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.01  BV=-1.15
    {41663,8192,1104, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.11  BV=-1.25
    {50000,7711,1048, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=7.95  BV=-1.35
    {50000,8192,1056, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.04  BV=-1.45
    {50000,8192,1128, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.14  BV=-1.54
    {50000,8192,1216, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.25  BV=-1.65
    {50000,8192,1296, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.34  BV=-1.74
    {50000,8192,1392, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.44  BV=-1.85
    {50000,8192,1504, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.55  BV=-1.96
    {50000,8192,1608, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.65  BV=-2.05
    {50000,8192,1728, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.75  BV=-2.16
    {50000,8192,1848, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.85  BV=-2.25
    {50000,8192,1984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.95  BV=-2.36
    {50000,8192,2120, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.05  BV=-2.45
    {58327,8192,1944, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=8.92  BV=-2.55
    {58327,8192,2080, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=9.02  BV=-2.65
    {66663,8192,1952, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.93  BV=-2.75
    {66663,8192,2096, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.03  BV=-2.85
    {75000,8192,2000, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=8.97  BV=-2.95
    {75000,8192,2144, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.07  BV=-3.05
    {75000,8192,2296, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.16  BV=-3.15
    {75000,8192,2464, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.27  BV=-3.25
    {75000,8192,2640, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.37  BV=-3.35
    {75000,8192,2832, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.47  BV=-3.46
    {75000,8192,3032, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.57  BV=-3.55
    {75000,8192,3248, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.67  BV=-3.65
    {75000,8192,3480, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.76  BV=-3.75
    {75000,8192,3728, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.86  BV=-3.85
    {75000,8192,4000, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.97  BV=-3.95
    {75000,8192,4288, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=10.07  BV=-4.05
    {75000,8192,4592, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=10.16  BV=-4.15
    {75000,8192,4920, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=10.26  BV=-4.25
    {75000,8192,5120, 0, 0, 0},  /* TV = 3.74(7188 lines)  AV=2.28  SV=10.32  BV=-4.31 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCapturePLineTable_50Hz =
{
{
    {94,1198,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.24  BV=10.41
    {105,1147,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.16  BV=10.33
    {105,1219,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.25  BV=10.24
    {115,1219,1024, 0, 0, 0},  /* TV = 13.09(11 lines)  AV=2.28  SV=5.25  BV=10.11 */
    {126,1188,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.21  BV=10.01
    {136,1167,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.19  BV=9.93
    {147,1147,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.16  BV=9.84
    {157,1167,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.19  BV=9.72
    {167,1167,1024, 0, 0, 0},  //TV = 12.55(16 lines)  AV=2.28  SV=5.19  BV=9.63
    {178,1188,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.21  BV=9.52
    {199,1147,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.16  BV=9.41
    {209,1144,1024, 0, 0, 0},  /* TV = 12.22(20 lines)  AV=2.28  SV=5.16  BV=9.34 */
    {220,1147,1032, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.17  BV=9.25
    {230,1188,1024, 0, 0, 0},  //TV = 12.09(22 lines)  AV=2.28  SV=5.21  BV=9.15
    {251,1167,1024, 0, 0, 0},  //TV = 11.96(24 lines)  AV=2.28  SV=5.19  BV=9.05
    {272,1147,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.16  BV=8.96
    {293,1147,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.16  BV=8.85
    {314,1147,1024, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.16  BV=8.75
    {334,1147,1032, 0, 0, 0},  //TV = 11.55(32 lines)  AV=2.28  SV=5.17  BV=8.65
    {355,1167,1024, 0, 0, 0},  //TV = 11.46(34 lines)  AV=2.28  SV=5.19  BV=8.55
    {387,1147,1024, 0, 0, 0},  //TV = 11.34(37 lines)  AV=2.28  SV=5.16  BV=8.45
    {407,1167,1024, 0, 0, 0},  //TV = 11.26(39 lines)  AV=2.28  SV=5.19  BV=8.35
    {439,1147,1032, 0, 0, 0},  //TV = 11.15(42 lines)  AV=2.28  SV=5.17  BV=8.25
    {480,1144,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.16  BV=8.14
    {501,1167,1024, 0, 0, 0},  //TV = 10.96(48 lines)  AV=2.28  SV=5.19  BV=8.05
    {543,1147,1032, 0, 0, 0},  //TV = 10.85(52 lines)  AV=2.28  SV=5.17  BV=7.95
    {585,1147,1024, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=5.16  BV=7.85
    {627,1147,1024, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=5.16  BV=7.75
    {668,1147,1032, 0, 0, 0},  //TV = 10.55(64 lines)  AV=2.28  SV=5.17  BV=7.65
    {720,1147,1024, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=5.16  BV=7.55
    {773,1147,1024, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=5.16  BV=7.45
    {825,1147,1024, 0, 0, 0},  //TV = 10.24(79 lines)  AV=2.28  SV=5.16  BV=7.35
    {887,1147,1024, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=5.16  BV=7.25
    {950,1147,1024, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=5.16  BV=7.15
    {1023,1144,1024, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=5.16  BV=7.05
    {1096,1147,1024, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=5.16  BV=6.94
    {1180,1144,1024, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=5.16  BV=6.84
    {1253,1147,1024, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=5.16  BV=6.75
    {1346,1147,1024, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=5.16  BV=6.65
    {1451,1144,1024, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=5.16  BV=6.54
    {1545,1147,1024, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=5.16  BV=6.45
    {1660,1144,1024, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=5.16  BV=6.35
    {1785,1144,1024, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=5.16  BV=6.24
    {1910,1144,1024, 0, 0, 0},  //TV = 9.03(183 lines)  AV=2.28  SV=5.16  BV=6.15
    {2056,1144,1024, 0, 0, 0},  //TV = 8.93(197 lines)  AV=2.28  SV=5.16  BV=6.04
    {2192,1144,1024, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=5.16  BV=5.95
    {2348,1144,1024, 0, 0, 0},  //TV = 8.73(225 lines)  AV=2.28  SV=5.16  BV=5.85
    {2526,1144,1024, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=5.16  BV=5.74
    {2703,1144,1024, 0, 0, 0},  //TV = 8.53(259 lines)  AV=2.28  SV=5.16  BV=5.65
    {2891,1144,1024, 0, 0, 0},  //TV = 8.43(277 lines)  AV=2.28  SV=5.16  BV=5.55
    {3099,1144,1024, 0, 0, 0},  //TV = 8.33(297 lines)  AV=2.28  SV=5.16  BV=5.45
    {3339,1144,1024, 0, 0, 0},  //TV = 8.23(320 lines)  AV=2.28  SV=5.16  BV=5.34
    {3569,1144,1024, 0, 0, 0},  //TV = 8.13(342 lines)  AV=2.28  SV=5.16  BV=5.25
    {3819,1144,1024, 0, 0, 0},  //TV = 8.03(366 lines)  AV=2.28  SV=5.16  BV=5.15
    {4091,1144,1024, 0, 0, 0},  //TV = 7.93(392 lines)  AV=2.28  SV=5.16  BV=5.05
    {4383,1144,1024, 0, 0, 0},  //TV = 7.83(420 lines)  AV=2.28  SV=5.16  BV=4.95
    {4717,1144,1024, 0, 0, 0},  //TV = 7.73(452 lines)  AV=2.28  SV=5.16  BV=4.84
    {5051,1144,1024, 0, 0, 0},  //TV = 7.63(484 lines)  AV=2.28  SV=5.16  BV=4.74
    {5416,1144,1024, 0, 0, 0},  //TV = 7.53(519 lines)  AV=2.28  SV=5.16  BV=4.64
    {5791,1144,1024, 0, 0, 0},  //TV = 7.43(555 lines)  AV=2.28  SV=5.16  BV=4.55
    {6209,1144,1024, 0, 0, 0},  //TV = 7.33(595 lines)  AV=2.28  SV=5.16  BV=4.45
    {6647,1144,1024, 0, 0, 0},  //TV = 7.23(637 lines)  AV=2.28  SV=5.16  BV=4.35
    {7116,1144,1024, 0, 0, 0},  //TV = 7.13(682 lines)  AV=2.28  SV=5.16  BV=4.25
    {7628,1144,1024, 0, 0, 0},  //TV = 7.03(731 lines)  AV=2.28  SV=5.16  BV=4.15
    {8222,1144,1024, 0, 0, 0},  //TV = 6.93(788 lines)  AV=2.28  SV=5.16  BV=4.04
    {8807,1144,1024, 0, 0, 0},  //TV = 6.83(844 lines)  AV=2.28  SV=5.16  BV=3.94
    {9443,1144,1024, 0, 0, 0},  //TV = 6.73(905 lines)  AV=2.28  SV=5.16  BV=3.84
    {9996,1147,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.16  BV=3.76
    {9996,1239,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.27  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1526,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.58  BV=3.34
    {9996,1618,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.67  BV=3.25
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1864,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.86  BV=3.06
    {9996,1997,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.96  BV=2.96
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {20003,1147,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.16  BV=2.75
    {20003,1239,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.27  BV=2.64
    {20003,1331,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.38  BV=2.54
    {20003,1423,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.47  BV=2.44
    {20003,1505,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.57  BV=2.35
    {20003,1618,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.67  BV=2.25
    {29998,1167,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.19  BV=2.15
    {29998,1239,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.27  BV=2.06
    {29998,1341,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.39  BV=1.94
    {29998,1423,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.49  BV=1.85
    {29998,1526,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.58  BV=1.76
    {29998,1649,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.69  BV=1.65
    {29998,1761,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.78  BV=1.55
    {29998,1884,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.89  BV=1.44
    {29998,2028,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.99  BV=1.35
    {29998,2181,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.09  BV=1.24
    {29998,2324,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.18  BV=1.15
    {29998,2478,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.27  BV=1.06
    {29998,2673,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.38  BV=0.95
    {29998,2877,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.49  BV=0.84
    {29998,3052,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.59  BV=0.75
    {29998,3277,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.68  BV=0.66
    {29998,3492,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.78  BV=0.55
    {29998,3799,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.89  BV=0.44
    {29998,4035,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.98  BV=0.36
    {29998,4301,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.08  BV=0.25
    {29998,4598,1040, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.19  BV=0.14
    {40004,3748,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=6.87  BV=0.05
    {40004,3973,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=6.97  BV=-0.05
    {40004,4229,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.07  BV=-0.15
    {40004,4598,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.17  BV=-0.25
    {40004,4946,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.27  BV=-0.35
    {40004,5243,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.37  BV=-0.45
    {40004,5581,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.47  BV=-0.55
    {40004,5960,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.56  BV=-0.64
    {40004,6390,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.66  BV=-0.75
    {40004,6902,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.78  BV=-0.86
    {40004,7485,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.87  BV=-0.95
    {40004,7946,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.97  BV=-1.05
    {40004,8192,1072, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.07  BV=-1.15
    {40004,8192,1152, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.17  BV=-1.25
    {50000,7711,1048, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=7.95  BV=-1.35
    {50000,8192,1056, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.04  BV=-1.45
    {50000,8192,1128, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.14  BV=-1.54
    {50000,8192,1216, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.25  BV=-1.65
    {50000,8192,1296, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.34  BV=-1.74
    {50000,8192,1392, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.44  BV=-1.85
    {50000,8192,1504, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.55  BV=-1.96
    {50000,8192,1608, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.65  BV=-2.05
    {50000,8192,1728, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.75  BV=-2.16
    {50000,8192,1848, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.85  BV=-2.25
    {50000,8192,1984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.95  BV=-2.36
    {50000,8192,2120, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.05  BV=-2.45
    {59996,8192,1888, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.88  BV=-2.55
    {59996,8192,2024, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.98  BV=-2.65
    {59996,8192,2168, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.08  BV=-2.75
    {70002,8192,1992, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.96  BV=-2.85
    {70002,8192,2144, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.07  BV=-2.95
    {70002,8192,2296, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.16  BV=-3.05
    {70002,8192,2464, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.27  BV=-3.16
    {70002,8192,2640, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.37  BV=-3.25
    {70002,8192,2832, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.47  BV=-3.36
    {70002,8192,3032, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.57  BV=-3.45
    {70002,8192,3248, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.67  BV=-3.55
    {70002,8192,3480, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.76  BV=-3.65
    {70002,8192,3728, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.86  BV=-3.75
    {70002,8192,4000, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.97  BV=-3.85
    {70002,8192,4288, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.07  BV=-3.95
    {70002,8192,4592, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.16  BV=-4.05
    {70002,8192,4920, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.26  BV=-4.15
    {70002,8192,5120, 0, 0, 0},  /* TV = 3.84(6709 lines)  AV=2.28  SV=10.32  BV=-4.21 */
    {70002,8192,5120, 0, 0, 0},  /* TV = 3.84(6709 lines)  AV=2.28  SV=10.32  BV=-4.21 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureAutoTable =
{
    AETABLE_CAPTURE_AUTO, //eAETableID
    149, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    105, //i4MaxBV
    -43, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sCapturePLineTable_60Hz,
    sCapturePLineTable_50Hz,
    NULL,
};
static strEvPline sVideoPLineTable_60Hz =
{
{
    {94,1198,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.24  BV=10.41
    {105,1147,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.16  BV=10.33
    {105,1219,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.25  BV=10.24
    {115,1219,1024, 0, 0, 0},  /* TV = 13.09(11 lines)  AV=2.28  SV=5.25  BV=10.11 */
    {126,1188,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.21  BV=10.01
    {136,1167,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.19  BV=9.93
    {147,1147,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.16  BV=9.84
    {157,1167,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.19  BV=9.72
    {167,1167,1024, 0, 0, 0},  //TV = 12.55(16 lines)  AV=2.28  SV=5.19  BV=9.63
    {178,1188,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.21  BV=9.52
    {199,1147,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.16  BV=9.41
    {209,1144,1024, 0, 0, 0},  /* TV = 12.22(20 lines)  AV=2.28  SV=5.16  BV=9.34 */
    {220,1147,1032, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.17  BV=9.25
    {230,1188,1024, 0, 0, 0},  //TV = 12.09(22 lines)  AV=2.28  SV=5.21  BV=9.15
    {251,1167,1024, 0, 0, 0},  //TV = 11.96(24 lines)  AV=2.28  SV=5.19  BV=9.05
    {272,1147,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.16  BV=8.96
    {293,1147,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.16  BV=8.85
    {314,1147,1024, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.16  BV=8.75
    {334,1147,1032, 0, 0, 0},  //TV = 11.55(32 lines)  AV=2.28  SV=5.17  BV=8.65
    {355,1167,1024, 0, 0, 0},  //TV = 11.46(34 lines)  AV=2.28  SV=5.19  BV=8.55
    {387,1147,1024, 0, 0, 0},  //TV = 11.34(37 lines)  AV=2.28  SV=5.16  BV=8.45
    {407,1167,1024, 0, 0, 0},  //TV = 11.26(39 lines)  AV=2.28  SV=5.19  BV=8.35
    {439,1147,1032, 0, 0, 0},  //TV = 11.15(42 lines)  AV=2.28  SV=5.17  BV=8.25
    {480,1144,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.16  BV=8.14
    {501,1167,1024, 0, 0, 0},  //TV = 10.96(48 lines)  AV=2.28  SV=5.19  BV=8.05
    {543,1147,1032, 0, 0, 0},  //TV = 10.85(52 lines)  AV=2.28  SV=5.17  BV=7.95
    {585,1147,1024, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=5.16  BV=7.85
    {627,1147,1024, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=5.16  BV=7.75
    {668,1147,1032, 0, 0, 0},  //TV = 10.55(64 lines)  AV=2.28  SV=5.17  BV=7.65
    {720,1147,1024, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=5.16  BV=7.55
    {773,1147,1024, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=5.16  BV=7.45
    {825,1147,1024, 0, 0, 0},  //TV = 10.24(79 lines)  AV=2.28  SV=5.16  BV=7.35
    {887,1147,1024, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=5.16  BV=7.25
    {950,1147,1024, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=5.16  BV=7.15
    {1023,1144,1024, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=5.16  BV=7.05
    {1096,1147,1024, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=5.16  BV=6.94
    {1180,1144,1024, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=5.16  BV=6.84
    {1253,1147,1024, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=5.16  BV=6.75
    {1346,1147,1024, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=5.16  BV=6.65
    {1451,1144,1024, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=5.16  BV=6.54
    {1545,1147,1024, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=5.16  BV=6.45
    {1660,1144,1024, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=5.16  BV=6.35
    {1785,1144,1024, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=5.16  BV=6.24
    {1910,1144,1024, 0, 0, 0},  //TV = 9.03(183 lines)  AV=2.28  SV=5.16  BV=6.15
    {2056,1144,1024, 0, 0, 0},  //TV = 8.93(197 lines)  AV=2.28  SV=5.16  BV=6.04
    {2192,1144,1024, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=5.16  BV=5.95
    {2348,1144,1024, 0, 0, 0},  //TV = 8.73(225 lines)  AV=2.28  SV=5.16  BV=5.85
    {2526,1144,1024, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=5.16  BV=5.74
    {2703,1144,1024, 0, 0, 0},  //TV = 8.53(259 lines)  AV=2.28  SV=5.16  BV=5.65
    {2891,1144,1024, 0, 0, 0},  //TV = 8.43(277 lines)  AV=2.28  SV=5.16  BV=5.55
    {3099,1144,1024, 0, 0, 0},  //TV = 8.33(297 lines)  AV=2.28  SV=5.16  BV=5.45
    {3339,1144,1024, 0, 0, 0},  //TV = 8.23(320 lines)  AV=2.28  SV=5.16  BV=5.34
    {3569,1144,1024, 0, 0, 0},  //TV = 8.13(342 lines)  AV=2.28  SV=5.16  BV=5.25
    {3819,1144,1024, 0, 0, 0},  //TV = 8.03(366 lines)  AV=2.28  SV=5.16  BV=5.15
    {4091,1144,1024, 0, 0, 0},  //TV = 7.93(392 lines)  AV=2.28  SV=5.16  BV=5.05
    {4383,1144,1024, 0, 0, 0},  //TV = 7.83(420 lines)  AV=2.28  SV=5.16  BV=4.95
    {4717,1144,1024, 0, 0, 0},  //TV = 7.73(452 lines)  AV=2.28  SV=5.16  BV=4.84
    {5051,1144,1024, 0, 0, 0},  //TV = 7.63(484 lines)  AV=2.28  SV=5.16  BV=4.74
    {5416,1144,1024, 0, 0, 0},  //TV = 7.53(519 lines)  AV=2.28  SV=5.16  BV=4.64
    {5791,1144,1024, 0, 0, 0},  //TV = 7.43(555 lines)  AV=2.28  SV=5.16  BV=4.55
    {6209,1144,1024, 0, 0, 0},  //TV = 7.33(595 lines)  AV=2.28  SV=5.16  BV=4.45
    {6647,1144,1024, 0, 0, 0},  //TV = 7.23(637 lines)  AV=2.28  SV=5.16  BV=4.35
    {7116,1144,1024, 0, 0, 0},  //TV = 7.13(682 lines)  AV=2.28  SV=5.16  BV=4.25
    {7628,1144,1024, 0, 0, 0},  //TV = 7.03(731 lines)  AV=2.28  SV=5.16  BV=4.15
    {8222,1144,1024, 0, 0, 0},  //TV = 6.93(788 lines)  AV=2.28  SV=5.16  BV=4.04
    {8338,1198,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.24  BV=3.94
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.53  BV=3.65
    {8338,1587,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.63  BV=3.55
    {8338,1700,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.73  BV=3.45
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1956,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.93  BV=3.25
    {8338,2079,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.03  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {16664,1198,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.24  BV=2.94
    {16664,1280,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.33  BV=2.85
    {16664,1382,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.43  BV=2.75
    {16664,1475,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.54  BV=2.64
    {16664,1587,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.63  BV=2.55
    {16664,1710,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.74  BV=2.44
    {16664,1823,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.83  BV=2.35
    {16664,1966,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.94  BV=2.24
    {16664,2099,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.04  BV=2.15
    {16664,2243,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.13  BV=2.05
    {16664,2406,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.23  BV=1.95
    {16664,2591,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.34  BV=1.84
    {16664,2755,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.43  BV=1.75
    {16664,2949,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.53  BV=1.66
    {16664,3154,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.62  BV=1.56
    {16664,3400,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.73  BV=1.45
    {16664,3645,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.83  BV=1.35
    {16664,3850,1040, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.93  BV=1.25
    {16664,4157,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.03  BV=1.15
    {16664,4444,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.13  BV=1.05
    {16664,4762,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.23  BV=0.95
    {25000,3451,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.75  BV=0.84
    {25000,3645,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.84  BV=0.75
    {25000,3912,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.94  BV=0.65
    {25000,4229,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.05  BV=0.55
    {25000,4516,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.15  BV=0.44
    {33306,3645,1024, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=6.83  BV=0.35
    {33306,3912,1024, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=6.93  BV=0.25
    {33306,4157,1032, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=7.03  BV=0.15
    {33306,4444,1032, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=7.13  BV=0.05
    {33306,4762,1032, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33306,5140,1024, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=7.33  BV=-0.14
    {33306,5458,1032, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=7.43  BV=-0.24
    {33306,5827,1040, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33306,6390,1024, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=7.64  BV=-0.46
    {33306,6717,1040, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33306,7281,1024, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33306,7711,1040, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33306,8192,1048, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33306,8192,1120, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33306,8192,1200, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=8.23  BV=-1.05
    {33306,8192,1288, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=8.33  BV=-1.15
    {33306,8192,1384, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=8.43  BV=-1.25
    {33306,8192,1480, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=8.53  BV=-1.35
    {33306,8192,1592, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=8.64  BV=-1.45
    {33306,8192,1712, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=8.74  BV=-1.56
    {33306,8192,1832, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=8.84  BV=-1.66
    {33306,8192,1960, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=8.94  BV=-1.75
    {33306,8192,2104, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=9.04  BV=-1.86
    {33306,8192,2256, 0, 0, 0},  //TV = 4.91(3192 lines)  AV=2.28  SV=9.14  BV=-1.96
    {41663,8192,1928, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.91  BV=-2.05
    {41663,8192,2072, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.02  BV=-2.16
    {41663,8192,2216, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.11  BV=-2.25
    {50000,8192,1984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.95  BV=-2.36
    {50000,8192,2120, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.05  BV=-2.45
    {58327,8192,1952, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=8.93  BV=-2.56
    {58327,8192,2088, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=9.03  BV=-2.65
    {66632,8192,1960, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=8.94  BV=-2.75
    {66632,8192,2104, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=9.04  BV=-2.86
    {66632,8192,2256, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=9.14  BV=-2.96
    {66632,8192,2416, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=9.24  BV=-3.06
    {66632,8192,2584, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=9.34  BV=-3.15
    {66632,8192,2776, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=9.44  BV=-3.26
    {66632,8192,2976, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=9.54  BV=-3.36
    {66632,8192,3184, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=9.64  BV=-3.45
    {66632,8192,3416, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=9.74  BV=-3.56
    {66632,8192,3656, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=9.84  BV=-3.65
    {66632,8192,3920, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=9.94  BV=-3.75
    {66632,8192,4200, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=10.04  BV=-3.85
    {66632,8192,4504, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=10.14  BV=-3.95
    {66632,8192,4824, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=10.24  BV=-4.05
    {66632,8192,5120, 0, 0, 0},  //TV = 3.91(6386 lines)  AV=2.28  SV=10.32  BV=-4.14
    {66632,8192,5120, 0, 0, 0},  /* TV = 3.91(6386 lines)  AV=2.28  SV=10.32  BV=-4.14 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideoPLineTable_50Hz =
{
{
    {94,1198,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.24  BV=10.41
    {105,1147,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.16  BV=10.33
    {105,1219,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.25  BV=10.24
    {115,1219,1024, 0, 0, 0},  /* TV = 13.09(11 lines)  AV=2.28  SV=5.25  BV=10.11 */
    {126,1188,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.21  BV=10.01
    {136,1167,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.19  BV=9.93
    {147,1147,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.16  BV=9.84
    {157,1167,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.19  BV=9.72
    {167,1167,1024, 0, 0, 0},  //TV = 12.55(16 lines)  AV=2.28  SV=5.19  BV=9.63
    {178,1188,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.21  BV=9.52
    {199,1147,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.16  BV=9.41
    {209,1144,1024, 0, 0, 0},  /* TV = 12.22(20 lines)  AV=2.28  SV=5.16  BV=9.34 */
    {220,1147,1032, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.17  BV=9.25
    {230,1188,1024, 0, 0, 0},  //TV = 12.09(22 lines)  AV=2.28  SV=5.21  BV=9.15
    {251,1167,1024, 0, 0, 0},  //TV = 11.96(24 lines)  AV=2.28  SV=5.19  BV=9.05
    {272,1147,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.16  BV=8.96
    {293,1147,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.16  BV=8.85
    {314,1147,1024, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.16  BV=8.75
    {334,1147,1032, 0, 0, 0},  //TV = 11.55(32 lines)  AV=2.28  SV=5.17  BV=8.65
    {355,1167,1024, 0, 0, 0},  //TV = 11.46(34 lines)  AV=2.28  SV=5.19  BV=8.55
    {387,1147,1024, 0, 0, 0},  //TV = 11.34(37 lines)  AV=2.28  SV=5.16  BV=8.45
    {407,1167,1024, 0, 0, 0},  //TV = 11.26(39 lines)  AV=2.28  SV=5.19  BV=8.35
    {439,1147,1032, 0, 0, 0},  //TV = 11.15(42 lines)  AV=2.28  SV=5.17  BV=8.25
    {480,1144,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.16  BV=8.14
    {501,1167,1024, 0, 0, 0},  //TV = 10.96(48 lines)  AV=2.28  SV=5.19  BV=8.05
    {543,1147,1032, 0, 0, 0},  //TV = 10.85(52 lines)  AV=2.28  SV=5.17  BV=7.95
    {585,1147,1024, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=5.16  BV=7.85
    {627,1147,1024, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=5.16  BV=7.75
    {668,1147,1032, 0, 0, 0},  //TV = 10.55(64 lines)  AV=2.28  SV=5.17  BV=7.65
    {720,1147,1024, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=5.16  BV=7.55
    {773,1147,1024, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=5.16  BV=7.45
    {825,1147,1024, 0, 0, 0},  //TV = 10.24(79 lines)  AV=2.28  SV=5.16  BV=7.35
    {887,1147,1024, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=5.16  BV=7.25
    {950,1147,1024, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=5.16  BV=7.15
    {1023,1144,1024, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=5.16  BV=7.05
    {1096,1147,1024, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=5.16  BV=6.94
    {1180,1144,1024, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=5.16  BV=6.84
    {1253,1147,1024, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=5.16  BV=6.75
    {1346,1147,1024, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=5.16  BV=6.65
    {1451,1144,1024, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=5.16  BV=6.54
    {1545,1147,1024, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=5.16  BV=6.45
    {1660,1144,1024, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=5.16  BV=6.35
    {1785,1144,1024, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=5.16  BV=6.24
    {1910,1144,1024, 0, 0, 0},  //TV = 9.03(183 lines)  AV=2.28  SV=5.16  BV=6.15
    {2056,1144,1024, 0, 0, 0},  //TV = 8.93(197 lines)  AV=2.28  SV=5.16  BV=6.04
    {2192,1144,1024, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=5.16  BV=5.95
    {2348,1144,1024, 0, 0, 0},  //TV = 8.73(225 lines)  AV=2.28  SV=5.16  BV=5.85
    {2526,1144,1024, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=5.16  BV=5.74
    {2703,1144,1024, 0, 0, 0},  //TV = 8.53(259 lines)  AV=2.28  SV=5.16  BV=5.65
    {2891,1144,1024, 0, 0, 0},  //TV = 8.43(277 lines)  AV=2.28  SV=5.16  BV=5.55
    {3099,1144,1024, 0, 0, 0},  //TV = 8.33(297 lines)  AV=2.28  SV=5.16  BV=5.45
    {3339,1144,1024, 0, 0, 0},  //TV = 8.23(320 lines)  AV=2.28  SV=5.16  BV=5.34
    {3569,1144,1024, 0, 0, 0},  //TV = 8.13(342 lines)  AV=2.28  SV=5.16  BV=5.25
    {3819,1144,1024, 0, 0, 0},  //TV = 8.03(366 lines)  AV=2.28  SV=5.16  BV=5.15
    {4091,1144,1024, 0, 0, 0},  //TV = 7.93(392 lines)  AV=2.28  SV=5.16  BV=5.05
    {4383,1144,1024, 0, 0, 0},  //TV = 7.83(420 lines)  AV=2.28  SV=5.16  BV=4.95
    {4717,1144,1024, 0, 0, 0},  //TV = 7.73(452 lines)  AV=2.28  SV=5.16  BV=4.84
    {5051,1144,1024, 0, 0, 0},  //TV = 7.63(484 lines)  AV=2.28  SV=5.16  BV=4.74
    {5416,1144,1024, 0, 0, 0},  //TV = 7.53(519 lines)  AV=2.28  SV=5.16  BV=4.64
    {5791,1144,1024, 0, 0, 0},  //TV = 7.43(555 lines)  AV=2.28  SV=5.16  BV=4.55
    {6209,1144,1024, 0, 0, 0},  //TV = 7.33(595 lines)  AV=2.28  SV=5.16  BV=4.45
    {6647,1144,1024, 0, 0, 0},  //TV = 7.23(637 lines)  AV=2.28  SV=5.16  BV=4.35
    {7116,1144,1024, 0, 0, 0},  //TV = 7.13(682 lines)  AV=2.28  SV=5.16  BV=4.25
    {7628,1144,1024, 0, 0, 0},  //TV = 7.03(731 lines)  AV=2.28  SV=5.16  BV=4.15
    {8222,1144,1024, 0, 0, 0},  //TV = 6.93(788 lines)  AV=2.28  SV=5.16  BV=4.04
    {8807,1144,1024, 0, 0, 0},  //TV = 6.83(844 lines)  AV=2.28  SV=5.16  BV=3.94
    {9443,1144,1024, 0, 0, 0},  //TV = 6.73(905 lines)  AV=2.28  SV=5.16  BV=3.84
    {9996,1147,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.16  BV=3.76
    {9996,1239,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.27  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1526,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.58  BV=3.34
    {9996,1618,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.67  BV=3.25
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1864,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.86  BV=3.06
    {9996,1997,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.97  BV=2.94
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {9996,2304,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.17  BV=2.75
    {9996,2478,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.27  BV=2.64
    {9996,2621,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.37  BV=2.55
    {9996,2847,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.48  BV=2.44
    {9996,3011,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.57  BV=2.35
    {9996,3277,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.68  BV=2.24
    {9996,3492,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.77  BV=2.15
    {9996,3748,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.87  BV=2.05
    {9996,4035,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.98  BV=1.94
    {9996,4301,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.07  BV=1.85
    {9996,4598,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.17  BV=1.75
    {9996,4854,1040, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.27  BV=1.65
    {9996,5243,1040, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.38  BV=1.54
    {9996,5581,1040, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.47  BV=1.45
    {9996,6093,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.57  BV=1.35
    {9996,6390,1040, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.66  BV=1.26
    {20002,3492,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.77  BV=1.15
    {20002,3748,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.87  BV=1.05
    {20002,3973,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.97  BV=0.95
    {20002,4301,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.07  BV=0.85
    {20002,4598,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.17  BV=0.75
    {20002,4946,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.27  BV=0.65
    {29998,3543,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.79  BV=0.54
    {29998,3748,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.88  BV=0.45
    {29998,4035,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.98  BV=0.36
    {29998,4301,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.08  BV=0.25
    {29998,4598,1040, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.19  BV=0.14
    {29998,4946,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.28  BV=0.05
    {29998,5345,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29998,5704,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.48  BV=-0.14
    {29998,6093,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29998,6554,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.69  BV=-0.36
    {29998,7086,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.79  BV=-0.46
    {29998,7485,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29998,7946,1048, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.99  BV=-0.66
    {29998,8192,1088, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.09  BV=-0.75
    {29998,8192,1160, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29998,8192,1248, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.29  BV=-0.95
    {29998,8192,1336, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.38  BV=-1.05
    {29998,8192,1432, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.48  BV=-1.15
    {29998,8192,1536, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.58  BV=-1.25
    {29998,8192,1640, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.68  BV=-1.35
    {29998,8192,1768, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.79  BV=-1.45
    {29998,8192,1896, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.89  BV=-1.55
    {29998,8192,2032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.99  BV=-1.65
    {29998,8192,2176, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.09  BV=-1.75
    {29998,8192,2336, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.19  BV=-1.86
    {40004,8192,1880, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.88  BV=-1.96
    {40004,8192,2008, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.97  BV=-2.05
    {40004,8192,2152, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.07  BV=-2.15
    {50000,8192,1848, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.85  BV=-2.25
    {50000,8192,1984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.95  BV=-2.36
    {50000,8192,2120, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.05  BV=-2.45
    {59996,8192,1896, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.89  BV=-2.55
    {59996,8192,2032, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.99  BV=-2.65
    {59996,8192,2176, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.09  BV=-2.75
    {70002,8192,2000, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.97  BV=-2.85
    {70002,8192,2144, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.07  BV=-2.95
    {70002,8192,2296, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.16  BV=-3.05
    {70002,8192,2464, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.27  BV=-3.16
    {70002,8192,2640, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.37  BV=-3.25
    {70002,8192,2832, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.47  BV=-3.36
    {70002,8192,3032, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.57  BV=-3.45
    {70002,8192,3248, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.67  BV=-3.55
    {70002,8192,3480, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.76  BV=-3.65
    {70002,8192,3728, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.86  BV=-3.75
    {70002,8192,4000, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.97  BV=-3.85
    {70002,8192,4288, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.07  BV=-3.95
    {70002,8192,4592, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.16  BV=-4.05
    {70002,8192,4920, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.26  BV=-4.15
    {70002,8192,5120, 0, 0, 0},  /* TV = 3.84(6709 lines)  AV=2.28  SV=10.32  BV=-4.21 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_VideoAutoTable =
{
    AETABLE_VIDEO_AUTO, //eAETableID
    148, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    105, //i4MaxBV
    -43, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sVideoPLineTable_60Hz,
    sVideoPLineTable_50Hz,
    NULL,
};
static strEvPline sVideo1PLineTable_60Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8264,1198,1032, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.24  BV=3.96
    {8264,1311,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.36  BV=3.84
    {8264,1393,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.44  BV=3.75
    {8264,1495,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.55  BV=3.65
    {8264,1587,1032, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.64  BV=3.55
    {8264,1720,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.75  BV=3.45
    {8264,1843,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.85  BV=3.35
    {8264,1966,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.94  BV=3.25
    {8264,2109,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.04  BV=3.15
    {8264,2263,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.14  BV=3.05
    {8264,2427,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.24  BV=2.95
    {8264,2591,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.34  BV=2.85
    {8264,2785,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.44  BV=2.75
    {8264,2980,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.54  BV=2.65
    {8264,3195,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.64  BV=2.55
    {8264,3400,1032, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.74  BV=2.45
    {8264,3645,1032, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.84  BV=2.35
    {8264,3912,1032, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.94  BV=2.25
    {8264,4229,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.05  BV=2.15
    {8264,4516,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.14  BV=2.05
    {8264,4854,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.24  BV=1.95
    {8264,5140,1032, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.34  BV=1.86
    {8264,5581,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.45  BV=1.75
    {8264,5960,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.54  BV=1.65
    {8264,6390,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.64  BV=1.55
    {8264,6717,1048, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.75  BV=1.45
    {8264,7281,1032, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.84  BV=1.35
    {8264,7711,1048, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.95  BV=1.25
    {8264,8192,1056, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.04  BV=1.15
    {8264,8192,1128, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.14  BV=1.05
    {8264,8192,1208, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.24  BV=0.96
    {8264,8192,1304, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.35  BV=0.85
    {8264,8192,1400, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.45  BV=0.74
    {8264,8192,1496, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.55  BV=0.65
    {8264,8192,1608, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.65  BV=0.54
    {8264,8192,1720, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.75  BV=0.45
    {8264,8192,1840, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.85  BV=0.35
    {8264,8192,1976, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.95  BV=0.25
    {8264,8192,2120, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=9.05  BV=0.14
    {8264,8192,2264, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=9.14  BV=0.05
    {8264,8192,2432, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=9.25  BV=-0.05
    {8264,8192,2560, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=9.32  BV=-0.13
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideo1PLineTable_50Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8264,1198,1032, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.24  BV=3.96
    {8264,1311,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.36  BV=3.84
    {8264,1393,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.44  BV=3.75
    {8264,1495,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.55  BV=3.65
    {8264,1587,1032, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.64  BV=3.55
    {8264,1720,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.75  BV=3.45
    {8264,1843,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.85  BV=3.35
    {8264,1966,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=5.94  BV=3.25
    {8264,2109,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.04  BV=3.15
    {8264,2263,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.14  BV=3.05
    {8264,2427,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.24  BV=2.95
    {8264,2591,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.34  BV=2.85
    {8264,2785,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.44  BV=2.75
    {8264,2980,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.54  BV=2.65
    {8264,3195,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.64  BV=2.55
    {8264,3400,1032, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.74  BV=2.45
    {8264,3645,1032, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.84  BV=2.35
    {8264,3912,1032, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=6.94  BV=2.25
    {8264,4229,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.05  BV=2.15
    {8264,4516,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.14  BV=2.05
    {8264,4854,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.24  BV=1.95
    {8264,5140,1032, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.34  BV=1.86
    {8264,5581,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.45  BV=1.75
    {8264,5960,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.54  BV=1.65
    {8264,6390,1024, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.64  BV=1.55
    {8264,6717,1048, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.75  BV=1.45
    {8264,7281,1032, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.84  BV=1.35
    {8264,7711,1048, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=7.95  BV=1.25
    {8264,8192,1056, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.04  BV=1.15
    {8264,8192,1128, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.14  BV=1.05
    {8264,8192,1208, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.24  BV=0.96
    {8264,8192,1304, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.35  BV=0.85
    {8264,8192,1400, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.45  BV=0.74
    {8264,8192,1496, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.55  BV=0.65
    {8264,8192,1608, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.65  BV=0.54
    {8264,8192,1720, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.75  BV=0.45
    {8264,8192,1840, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.85  BV=0.35
    {8264,8192,1976, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=8.95  BV=0.25
    {8264,8192,2120, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=9.05  BV=0.14
    {8264,8192,2264, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=9.14  BV=0.05
    {8264,8192,2432, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=9.25  BV=-0.05
    {8264,8192,2560, 0, 0, 0},  //TV = 6.92(792 lines)  AV=2.28  SV=9.32  BV=-0.13
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Video1AutoTable =
{
    AETABLE_VIDEO1_AUTO, //eAETableID
    106, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -2, //i4MinBV
    90, //i4EffectiveMaxBV
    0, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sVideo1PLineTable_60Hz,
    sVideo1PLineTable_50Hz,
    NULL,
};
static strEvPline sVideo2PLineTable_60Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(6 lines)  AV=2.28  SV=5.32  BV=10.33
    {94,1382,1024, 0, 0, 0},  //TV = 13.38(6 lines)  AV=2.28  SV=5.43  BV=10.22
    {110,1249,1024, 0, 0, 0},  //TV = 13.15(7 lines)  AV=2.28  SV=5.29  BV=10.14
    {110,1341,1024, 0, 0, 0},  //TV = 13.15(7 lines)  AV=2.28  SV=5.39  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(8 lines)  AV=2.28  SV=5.27  BV=9.95
    {141,1198,1032, 0, 0, 0},  //TV = 12.79(9 lines)  AV=2.28  SV=5.24  BV=9.83
    {141,1311,1024, 0, 0, 0},  //TV = 12.79(9 lines)  AV=2.28  SV=5.36  BV=9.71
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(10 lines)  AV=2.28  SV=5.31  BV=9.60
    {173,1239,1024, 0, 0, 0},  //TV = 12.50(11 lines)  AV=2.28  SV=5.27  BV=9.50
    {173,1280,1024, 0, 0, 0},  /* TV = 12.50(11 lines)  AV=2.28  SV=5.32  BV=9.45 */
    {188,1270,1032, 0, 0, 0},  //TV = 12.38(12 lines)  AV=2.28  SV=5.32  BV=9.33
    {204,1239,1024, 0, 0, 0},  //TV = 12.26(13 lines)  AV=2.28  SV=5.27  BV=9.26
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(14 lines)  AV=2.28  SV=5.27  BV=9.15
    {235,1239,1024, 0, 0, 0},  //TV = 12.06(15 lines)  AV=2.28  SV=5.27  BV=9.06
    {251,1239,1024, 0, 0, 0},  //TV = 11.96(16 lines)  AV=2.28  SV=5.27  BV=8.96
    {267,1249,1032, 0, 0, 0},  //TV = 11.87(17 lines)  AV=2.28  SV=5.30  BV=8.85
    {298,1198,1032, 0, 0, 0},  //TV = 11.71(19 lines)  AV=2.28  SV=5.24  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(20 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(22 lines)  AV=2.28  SV=5.23  BV=8.55
    {360,1219,1032, 0, 0, 0},  //TV = 11.44(23 lines)  AV=2.28  SV=5.26  BV=8.45
    {392,1198,1032, 0, 0, 0},  //TV = 11.32(25 lines)  AV=2.28  SV=5.24  BV=8.35
    {423,1198,1032, 0, 0, 0},  //TV = 11.21(27 lines)  AV=2.28  SV=5.24  BV=8.24
    {454,1198,1032, 0, 0, 0},  //TV = 11.11(29 lines)  AV=2.28  SV=5.24  BV=8.14
    {486,1198,1032, 0, 0, 0},  //TV = 11.01(31 lines)  AV=2.28  SV=5.24  BV=8.04
    {517,1198,1032, 0, 0, 0},  //TV = 10.92(33 lines)  AV=2.28  SV=5.24  BV=7.95
    {548,1219,1032, 0, 0, 0},  //TV = 10.83(35 lines)  AV=2.28  SV=5.26  BV=7.85
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(38 lines)  AV=2.28  SV=5.24  BV=7.75
    {642,1198,1032, 0, 0, 0},  //TV = 10.61(41 lines)  AV=2.28  SV=5.24  BV=7.64
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(44 lines)  AV=2.28  SV=5.24  BV=7.54
    {736,1198,1032, 0, 0, 0},  //TV = 10.41(47 lines)  AV=2.28  SV=5.24  BV=7.45
    {783,1198,1032, 0, 0, 0},  //TV = 10.32(50 lines)  AV=2.28  SV=5.24  BV=7.36
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(54 lines)  AV=2.28  SV=5.24  BV=7.24
    {908,1198,1032, 0, 0, 0},  //TV = 10.11(58 lines)  AV=2.28  SV=5.24  BV=7.14
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(62 lines)  AV=2.28  SV=5.24  BV=7.05
    {1033,1198,1032, 0, 0, 0},  //TV = 9.92(66 lines)  AV=2.28  SV=5.24  BV=6.96
    {1112,1198,1032, 0, 0, 0},  //TV = 9.81(71 lines)  AV=2.28  SV=5.24  BV=6.85
    {1190,1198,1032, 0, 0, 0},  //TV = 9.71(76 lines)  AV=2.28  SV=5.24  BV=6.75
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(82 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(88 lines)  AV=2.28  SV=5.23  BV=6.55
    {1472,1198,1032, 0, 0, 0},  //TV = 9.41(94 lines)  AV=2.28  SV=5.24  BV=6.45
    {1581,1198,1032, 0, 0, 0},  //TV = 9.30(101 lines)  AV=2.28  SV=5.24  BV=6.34
    {1691,1198,1032, 0, 0, 0},  //TV = 9.21(108 lines)  AV=2.28  SV=5.24  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(116 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(124 lines)  AV=2.28  SV=5.24  BV=6.05
    {2098,1198,1024, 0, 0, 0},  //TV = 8.90(134 lines)  AV=2.28  SV=5.23  BV=5.95
    {2239,1198,1024, 0, 0, 0},  //TV = 8.80(143 lines)  AV=2.28  SV=5.23  BV=5.85
    {2411,1198,1024, 0, 0, 0},  //TV = 8.70(154 lines)  AV=2.28  SV=5.23  BV=5.74
    {2583,1198,1024, 0, 0, 0},  //TV = 8.60(165 lines)  AV=2.28  SV=5.23  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(176 lines)  AV=2.28  SV=5.23  BV=5.55
    {2943,1198,1032, 0, 0, 0},  //TV = 8.41(188 lines)  AV=2.28  SV=5.24  BV=5.45
    {3178,1198,1024, 0, 0, 0},  //TV = 8.30(203 lines)  AV=2.28  SV=5.23  BV=5.35
    {3397,1198,1032, 0, 0, 0},  //TV = 8.20(217 lines)  AV=2.28  SV=5.24  BV=5.24
    {3647,1198,1024, 0, 0, 0},  //TV = 8.10(233 lines)  AV=2.28  SV=5.23  BV=5.15
    {3898,1198,1024, 0, 0, 0},  //TV = 8.00(249 lines)  AV=2.28  SV=5.23  BV=5.05
    {4179,1198,1024, 0, 0, 0},  //TV = 7.90(267 lines)  AV=2.28  SV=5.23  BV=4.95
    {4492,1198,1024, 0, 0, 0},  //TV = 7.80(287 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(308 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(330 lines)  AV=2.28  SV=5.23  BV=4.65
    {5525,1198,1024, 0, 0, 0},  //TV = 7.50(353 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(378 lines)  AV=2.28  SV=5.23  BV=4.45
    {6339,1198,1024, 0, 0, 0},  //TV = 7.30(405 lines)  AV=2.28  SV=5.23  BV=4.35
    {6824,1198,1024, 0, 0, 0},  //TV = 7.20(436 lines)  AV=2.28  SV=5.23  BV=4.24
    {7310,1198,1024, 0, 0, 0},  //TV = 7.10(467 lines)  AV=2.28  SV=5.23  BV=4.14
    {7842,1198,1024, 0, 0, 0},  //TV = 6.99(501 lines)  AV=2.28  SV=5.23  BV=4.04
    {8327,1198,1032, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.24  BV=3.95
    {8327,1280,1032, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.33  BV=3.85
    {8327,1382,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.43  BV=3.75
    {8327,1475,1032, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.54  BV=3.65
    {8327,1587,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.63  BV=3.55
    {8327,1700,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.73  BV=3.45
    {8327,1823,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.83  BV=3.35
    {8327,1956,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=5.93  BV=3.25
    {8327,2079,1032, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=6.03  BV=3.15
    {8327,2243,1024, 0, 0, 0},  //TV = 6.91(532 lines)  AV=2.28  SV=6.13  BV=3.05
    {16669,1198,1032, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=5.24  BV=2.94
    {16669,1280,1032, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=5.33  BV=2.85
    {16669,1382,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=5.43  BV=2.75
    {16669,1495,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=5.55  BV=2.64
    {16669,1587,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=5.63  BV=2.55
    {16669,1700,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=5.73  BV=2.45
    {16669,1823,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=5.83  BV=2.35
    {16669,1956,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=5.93  BV=2.25
    {16669,2079,1032, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.03  BV=2.15
    {16669,2243,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.13  BV=2.05
    {16669,2406,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.23  BV=1.95
    {16669,2570,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.33  BV=1.85
    {16669,2755,1032, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.44  BV=1.74
    {16669,2949,1032, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.54  BV=1.64
    {16669,3154,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.62  BV=1.56
    {16669,3400,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.73  BV=1.45
    {16669,3645,1024, 0, 0, 0},  //TV = 5.91(1065 lines)  AV=2.28  SV=6.83  BV=1.35
    {24995,2591,1024, 0, 0, 0},  //TV = 5.32(1597 lines)  AV=2.28  SV=6.34  BV=1.26
    {24995,2785,1032, 0, 0, 0},  //TV = 5.32(1597 lines)  AV=2.28  SV=6.45  BV=1.14
    {24995,3011,1024, 0, 0, 0},  //TV = 5.32(1597 lines)  AV=2.28  SV=6.56  BV=1.04
    {24995,3195,1024, 0, 0, 0},  //TV = 5.32(1597 lines)  AV=2.28  SV=6.64  BV=0.96
    {24995,3400,1032, 0, 0, 0},  //TV = 5.32(1597 lines)  AV=2.28  SV=6.74  BV=0.85
    {33291,2755,1024, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=6.43  BV=0.76
    {33291,2949,1024, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=6.53  BV=0.66
    {33291,3154,1032, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=6.63  BV=0.55
    {33291,3400,1024, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=6.73  BV=0.45
    {33291,3645,1024, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=6.83  BV=0.35
    {33291,3912,1024, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=6.93  BV=0.25
    {33291,4157,1032, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=7.03  BV=0.15
    {33291,4444,1032, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=7.13  BV=0.05
    {33291,4762,1032, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=7.23  BV=-0.04
    {33291,5140,1032, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=7.34  BV=-0.16
    {33291,5458,1040, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=7.44  BV=-0.25
    {33291,5827,1040, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33291,6246,1040, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33291,6717,1040, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33291,7281,1024, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33291,7711,1040, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33291,8192,1048, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33291,8192,1120, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33291,8192,1208, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=8.24  BV=-1.05
    {33291,8192,1280, 0, 0, 0},  //TV = 4.91(2127 lines)  AV=2.28  SV=8.32  BV=-1.14
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideo2PLineTable_50Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(6 lines)  AV=2.28  SV=5.32  BV=10.33
    {94,1382,1024, 0, 0, 0},  //TV = 13.38(6 lines)  AV=2.28  SV=5.43  BV=10.22
    {110,1249,1024, 0, 0, 0},  //TV = 13.15(7 lines)  AV=2.28  SV=5.29  BV=10.14
    {110,1341,1024, 0, 0, 0},  //TV = 13.15(7 lines)  AV=2.28  SV=5.39  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(8 lines)  AV=2.28  SV=5.27  BV=9.95
    {141,1198,1032, 0, 0, 0},  //TV = 12.79(9 lines)  AV=2.28  SV=5.24  BV=9.83
    {141,1311,1024, 0, 0, 0},  //TV = 12.79(9 lines)  AV=2.28  SV=5.36  BV=9.71
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(10 lines)  AV=2.28  SV=5.31  BV=9.60
    {173,1239,1024, 0, 0, 0},  //TV = 12.50(11 lines)  AV=2.28  SV=5.27  BV=9.50
    {173,1280,1024, 0, 0, 0},  /* TV = 12.50(11 lines)  AV=2.28  SV=5.32  BV=9.45 */
    {188,1270,1032, 0, 0, 0},  //TV = 12.38(12 lines)  AV=2.28  SV=5.32  BV=9.33
    {204,1239,1024, 0, 0, 0},  //TV = 12.26(13 lines)  AV=2.28  SV=5.27  BV=9.26
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(14 lines)  AV=2.28  SV=5.27  BV=9.15
    {235,1239,1024, 0, 0, 0},  //TV = 12.06(15 lines)  AV=2.28  SV=5.27  BV=9.06
    {251,1239,1024, 0, 0, 0},  //TV = 11.96(16 lines)  AV=2.28  SV=5.27  BV=8.96
    {267,1249,1032, 0, 0, 0},  //TV = 11.87(17 lines)  AV=2.28  SV=5.30  BV=8.85
    {298,1198,1032, 0, 0, 0},  //TV = 11.71(19 lines)  AV=2.28  SV=5.24  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(20 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(22 lines)  AV=2.28  SV=5.23  BV=8.55
    {360,1219,1032, 0, 0, 0},  //TV = 11.44(23 lines)  AV=2.28  SV=5.26  BV=8.45
    {392,1198,1032, 0, 0, 0},  //TV = 11.32(25 lines)  AV=2.28  SV=5.24  BV=8.35
    {423,1198,1032, 0, 0, 0},  //TV = 11.21(27 lines)  AV=2.28  SV=5.24  BV=8.24
    {454,1198,1032, 0, 0, 0},  //TV = 11.11(29 lines)  AV=2.28  SV=5.24  BV=8.14
    {486,1198,1032, 0, 0, 0},  //TV = 11.01(31 lines)  AV=2.28  SV=5.24  BV=8.04
    {517,1198,1032, 0, 0, 0},  //TV = 10.92(33 lines)  AV=2.28  SV=5.24  BV=7.95
    {548,1219,1032, 0, 0, 0},  //TV = 10.83(35 lines)  AV=2.28  SV=5.26  BV=7.85
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(38 lines)  AV=2.28  SV=5.24  BV=7.75
    {642,1198,1032, 0, 0, 0},  //TV = 10.61(41 lines)  AV=2.28  SV=5.24  BV=7.64
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(44 lines)  AV=2.28  SV=5.24  BV=7.54
    {736,1198,1032, 0, 0, 0},  //TV = 10.41(47 lines)  AV=2.28  SV=5.24  BV=7.45
    {783,1198,1032, 0, 0, 0},  //TV = 10.32(50 lines)  AV=2.28  SV=5.24  BV=7.36
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(54 lines)  AV=2.28  SV=5.24  BV=7.24
    {908,1198,1032, 0, 0, 0},  //TV = 10.11(58 lines)  AV=2.28  SV=5.24  BV=7.14
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(62 lines)  AV=2.28  SV=5.24  BV=7.05
    {1033,1198,1032, 0, 0, 0},  //TV = 9.92(66 lines)  AV=2.28  SV=5.24  BV=6.96
    {1112,1198,1032, 0, 0, 0},  //TV = 9.81(71 lines)  AV=2.28  SV=5.24  BV=6.85
    {1190,1198,1032, 0, 0, 0},  //TV = 9.71(76 lines)  AV=2.28  SV=5.24  BV=6.75
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(82 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(88 lines)  AV=2.28  SV=5.23  BV=6.55
    {1472,1198,1032, 0, 0, 0},  //TV = 9.41(94 lines)  AV=2.28  SV=5.24  BV=6.45
    {1581,1198,1032, 0, 0, 0},  //TV = 9.30(101 lines)  AV=2.28  SV=5.24  BV=6.34
    {1691,1198,1032, 0, 0, 0},  //TV = 9.21(108 lines)  AV=2.28  SV=5.24  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(116 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(124 lines)  AV=2.28  SV=5.24  BV=6.05
    {2098,1198,1024, 0, 0, 0},  //TV = 8.90(134 lines)  AV=2.28  SV=5.23  BV=5.95
    {2239,1198,1024, 0, 0, 0},  //TV = 8.80(143 lines)  AV=2.28  SV=5.23  BV=5.85
    {2411,1198,1024, 0, 0, 0},  //TV = 8.70(154 lines)  AV=2.28  SV=5.23  BV=5.74
    {2583,1198,1024, 0, 0, 0},  //TV = 8.60(165 lines)  AV=2.28  SV=5.23  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(176 lines)  AV=2.28  SV=5.23  BV=5.55
    {2943,1198,1032, 0, 0, 0},  //TV = 8.41(188 lines)  AV=2.28  SV=5.24  BV=5.45
    {3178,1198,1024, 0, 0, 0},  //TV = 8.30(203 lines)  AV=2.28  SV=5.23  BV=5.35
    {3397,1198,1032, 0, 0, 0},  //TV = 8.20(217 lines)  AV=2.28  SV=5.24  BV=5.24
    {3647,1198,1024, 0, 0, 0},  //TV = 8.10(233 lines)  AV=2.28  SV=5.23  BV=5.15
    {3898,1198,1024, 0, 0, 0},  //TV = 8.00(249 lines)  AV=2.28  SV=5.23  BV=5.05
    {4179,1198,1024, 0, 0, 0},  //TV = 7.90(267 lines)  AV=2.28  SV=5.23  BV=4.95
    {4492,1198,1024, 0, 0, 0},  //TV = 7.80(287 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(308 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(330 lines)  AV=2.28  SV=5.23  BV=4.65
    {5525,1198,1024, 0, 0, 0},  //TV = 7.50(353 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(378 lines)  AV=2.28  SV=5.23  BV=4.45
    {6339,1198,1024, 0, 0, 0},  //TV = 7.30(405 lines)  AV=2.28  SV=5.23  BV=4.35
    {6824,1198,1024, 0, 0, 0},  //TV = 7.20(436 lines)  AV=2.28  SV=5.23  BV=4.24
    {7310,1198,1024, 0, 0, 0},  //TV = 7.10(467 lines)  AV=2.28  SV=5.23  BV=4.14
    {7842,1198,1024, 0, 0, 0},  //TV = 6.99(501 lines)  AV=2.28  SV=5.23  BV=4.04
    {8389,1198,1024, 0, 0, 0},  //TV = 6.90(536 lines)  AV=2.28  SV=5.23  BV=3.95
    {8984,1198,1024, 0, 0, 0},  //TV = 6.80(574 lines)  AV=2.28  SV=5.23  BV=3.85
    {9626,1198,1024, 0, 0, 0},  //TV = 6.70(615 lines)  AV=2.28  SV=5.23  BV=3.75
    {10002,1239,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=5.27  BV=3.64
    {10002,1311,1032, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=5.37  BV=3.55
    {10002,1423,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=5.47  BV=3.44
    {10002,1505,1032, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=5.57  BV=3.35
    {10002,1618,1032, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=5.67  BV=3.25
    {10002,1751,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=5.77  BV=3.14
    {10002,1864,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=5.86  BV=3.05
    {10002,1997,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=5.96  BV=2.95
    {10002,2150,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.07  BV=2.85
    {10002,2304,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.17  BV=2.75
    {10002,2447,1032, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.27  BV=2.65
    {10002,2652,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.37  BV=2.55
    {10002,2816,1032, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.47  BV=2.45
    {10002,3052,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.58  BV=2.34
    {10002,3236,1032, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.67  BV=2.25
    {10002,3492,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.77  BV=2.15
    {10002,3748,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.87  BV=2.05
    {10002,3973,1032, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=6.97  BV=1.95
    {10002,4301,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=7.07  BV=1.85
    {10002,4598,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=7.17  BV=1.75
    {10002,4946,1024, 0, 0, 0},  //TV = 6.64(639 lines)  AV=2.28  SV=7.27  BV=1.65
    {20002,2621,1032, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.37  BV=1.55
    {20002,2816,1032, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.47  BV=1.45
    {20002,3011,1032, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.57  BV=1.35
    {20002,3236,1024, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.66  BV=1.26
    {20002,3492,1032, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.78  BV=1.14
    {20002,3697,1032, 0, 0, 0},  //TV = 5.64(1278 lines)  AV=2.28  SV=6.86  BV=1.06
    {30003,2673,1024, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=6.38  BV=0.95
    {30003,2847,1024, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=6.48  BV=0.86
    {30003,3052,1024, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=6.58  BV=0.76
    {30003,3277,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=6.69  BV=0.64
    {30003,3492,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=6.78  BV=0.55
    {30003,3799,1024, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=6.89  BV=0.44
    {30003,4035,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=6.99  BV=0.34
    {30003,4301,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.08  BV=0.25
    {30003,4598,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.18  BV=0.16
    {30003,4946,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.28  BV=0.05
    {30003,5345,1024, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.38  BV=-0.05
    {30003,5704,1024, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.48  BV=-0.14
    {30003,6093,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.58  BV=-0.25
    {30003,6554,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.69  BV=-0.36
    {30003,6902,1048, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.79  BV=-0.45
    {30003,7485,1032, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.88  BV=-0.55
    {30003,7946,1040, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=7.98  BV=-0.64
    {30003,8192,1080, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=8.08  BV=-0.74
    {30003,8192,1160, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=8.18  BV=-0.85
    {30003,8192,1240, 0, 0, 0},  //TV = 5.06(1917 lines)  AV=2.28  SV=8.28  BV=-0.94
    {30003,8192,1280, 0, 0, 0},  /* TV = 5.06(1917 lines)  AV=2.28  SV=8.32  BV=-0.99 */
    {30003,8192,1280, 0, 0, 0},  /* TV = 5.06(1917 lines)  AV=2.28  SV=8.32  BV=-0.99 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Video2AutoTable =
{
    AETABLE_VIDEO2_AUTO, //eAETableID
    116, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -12, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sVideo2PLineTable_60Hz,
    sVideo2PLineTable_50Hz,
    NULL,
};
static strEvPline sCustom1PLineTable_60Hz =
{
{
    {99,1198,1032, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.24  BV=10.34
    {99,1280,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.32  BV=10.26
    {99,1382,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.43  BV=10.14
    {119,1239,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.27  BV=10.04
    {119,1311,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.36  BV=9.96
    {139,1219,1032, 0, 0, 0},  /* TV = 12.81(7 lines)  AV=2.28  SV=5.26  BV=9.82 */
    {139,1311,1032, 0, 0, 0},  //TV = 12.81(7 lines)  AV=2.28  SV=5.37  BV=9.72
    {159,1249,1024, 0, 0, 0},  //TV = 12.62(8 lines)  AV=2.28  SV=5.29  BV=9.61
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(9 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(9 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {198,1198,1032, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.24  BV=9.34
    {198,1280,1024, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.32  BV=9.26
    {218,1249,1024, 0, 0, 0},  //TV = 12.16(11 lines)  AV=2.28  SV=5.29  BV=9.15
    {238,1219,1032, 0, 0, 0},  //TV = 12.04(12 lines)  AV=2.28  SV=5.26  BV=9.05
    {258,1198,1032, 0, 0, 0},  //TV = 11.92(13 lines)  AV=2.28  SV=5.24  BV=8.96
    {277,1198,1032, 0, 0, 0},  //TV = 11.82(14 lines)  AV=2.28  SV=5.24  BV=8.86
    {297,1198,1032, 0, 0, 0},  //TV = 11.72(15 lines)  AV=2.28  SV=5.24  BV=8.75
    {317,1219,1024, 0, 0, 0},  //TV = 11.62(16 lines)  AV=2.28  SV=5.25  BV=8.65
    {337,1219,1032, 0, 0, 0},  //TV = 11.53(17 lines)  AV=2.28  SV=5.26  BV=8.55
    {356,1239,1024, 0, 0, 0},  //TV = 11.46(18 lines)  AV=2.28  SV=5.27  BV=8.46
    {396,1198,1024, 0, 0, 0},  //TV = 11.30(20 lines)  AV=2.28  SV=5.23  BV=8.35
    {416,1219,1024, 0, 0, 0},  //TV = 11.23(21 lines)  AV=2.28  SV=5.25  BV=8.25
    {455,1198,1024, 0, 0, 0},  //TV = 11.10(23 lines)  AV=2.28  SV=5.23  BV=8.15
    {475,1219,1032, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.28  SV=5.26  BV=8.05
    {515,1219,1024, 0, 0, 0},  //TV = 10.92(26 lines)  AV=2.28  SV=5.25  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(28 lines)  AV=2.28  SV=5.24  BV=7.86
    {594,1198,1032, 0, 0, 0},  //TV = 10.72(30 lines)  AV=2.28  SV=5.24  BV=7.75
    {633,1219,1024, 0, 0, 0},  //TV = 10.63(32 lines)  AV=2.28  SV=5.25  BV=7.65
    {692,1198,1024, 0, 0, 0},  //TV = 10.50(35 lines)  AV=2.28  SV=5.23  BV=7.55
    {732,1198,1032, 0, 0, 0},  //TV = 10.42(37 lines)  AV=2.28  SV=5.24  BV=7.45
    {791,1198,1032, 0, 0, 0},  //TV = 10.30(40 lines)  AV=2.28  SV=5.24  BV=7.34
    {851,1198,1032, 0, 0, 0},  //TV = 10.20(43 lines)  AV=2.28  SV=5.24  BV=7.24
    {910,1198,1024, 0, 0, 0},  //TV = 10.10(46 lines)  AV=2.28  SV=5.23  BV=7.15
    {969,1198,1032, 0, 0, 0},  //TV = 10.01(49 lines)  AV=2.28  SV=5.24  BV=7.05
    {1048,1198,1024, 0, 0, 0},  //TV = 9.90(53 lines)  AV=2.28  SV=5.23  BV=6.95
    {1108,1198,1032, 0, 0, 0},  //TV = 9.82(56 lines)  AV=2.28  SV=5.24  BV=6.86
    {1187,1198,1032, 0, 0, 0},  //TV = 9.72(60 lines)  AV=2.28  SV=5.24  BV=6.76
    {1286,1198,1032, 0, 0, 0},  //TV = 9.60(65 lines)  AV=2.28  SV=5.24  BV=6.64
    {1365,1198,1032, 0, 0, 0},  //TV = 9.52(69 lines)  AV=2.28  SV=5.24  BV=6.55
    {1483,1198,1024, 0, 0, 0},  //TV = 9.40(75 lines)  AV=2.28  SV=5.23  BV=6.45
    {1582,1198,1032, 0, 0, 0},  //TV = 9.30(80 lines)  AV=2.28  SV=5.24  BV=6.34
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(86 lines)  AV=2.28  SV=5.23  BV=6.25
    {1819,1198,1024, 0, 0, 0},  //TV = 9.10(92 lines)  AV=2.28  SV=5.23  BV=6.15
    {1938,1198,1032, 0, 0, 0},  //TV = 9.01(98 lines)  AV=2.28  SV=5.24  BV=6.05
    {2076,1198,1032, 0, 0, 0},  //TV = 8.91(105 lines)  AV=2.28  SV=5.24  BV=5.95
    {2235,1198,1032, 0, 0, 0},  //TV = 8.81(113 lines)  AV=2.28  SV=5.24  BV=5.84
    {2412,1198,1024, 0, 0, 0},  //TV = 8.70(122 lines)  AV=2.28  SV=5.23  BV=5.74
    {2571,1198,1032, 0, 0, 0},  //TV = 8.60(130 lines)  AV=2.28  SV=5.24  BV=5.64
    {2749,1198,1032, 0, 0, 0},  //TV = 8.51(139 lines)  AV=2.28  SV=5.24  BV=5.54
    {2946,1198,1032, 0, 0, 0},  //TV = 8.41(149 lines)  AV=2.28  SV=5.24  BV=5.44
    {3144,1198,1032, 0, 0, 0},  //TV = 8.31(159 lines)  AV=2.28  SV=5.24  BV=5.35
    {3401,1198,1024, 0, 0, 0},  //TV = 8.20(172 lines)  AV=2.28  SV=5.23  BV=5.25
    {3638,1198,1024, 0, 0, 0},  //TV = 8.10(184 lines)  AV=2.28  SV=5.23  BV=5.15
    {3915,1198,1032, 0, 0, 0},  //TV = 8.00(198 lines)  AV=2.28  SV=5.24  BV=5.03
    {4192,1198,1032, 0, 0, 0},  //TV = 7.90(212 lines)  AV=2.28  SV=5.24  BV=4.94
    {4488,1198,1032, 0, 0, 0},  //TV = 7.80(227 lines)  AV=2.28  SV=5.24  BV=4.84
    {4824,1198,1024, 0, 0, 0},  //TV = 7.70(244 lines)  AV=2.28  SV=5.23  BV=4.74
    {5160,1198,1024, 0, 0, 0},  //TV = 7.60(261 lines)  AV=2.28  SV=5.23  BV=4.65
    {5516,1198,1024, 0, 0, 0},  //TV = 7.50(279 lines)  AV=2.28  SV=5.23  BV=4.55
    {5912,1198,1024, 0, 0, 0},  //TV = 7.40(299 lines)  AV=2.28  SV=5.23  BV=4.45
    {6366,1198,1024, 0, 0, 0},  //TV = 7.30(322 lines)  AV=2.28  SV=5.23  BV=4.34
    {6821,1198,1024, 0, 0, 0},  //TV = 7.20(345 lines)  AV=2.28  SV=5.23  BV=4.24
    {7315,1198,1024, 0, 0, 0},  //TV = 7.09(370 lines)  AV=2.28  SV=5.23  BV=4.14
    {7829,1198,1024, 0, 0, 0},  //TV = 7.00(396 lines)  AV=2.28  SV=5.23  BV=4.05
    {8324,1198,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.24  BV=3.95
    {8324,1280,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.33  BV=3.85
    {8324,1382,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.43  BV=3.75
    {8324,1475,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.54  BV=3.65
    {8324,1587,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.63  BV=3.55
    {8324,1710,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.74  BV=3.44
    {8324,1823,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.83  BV=3.35
    {8324,1956,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.93  BV=3.25
    {8324,2099,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=6.04  BV=3.15
    {8324,2243,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=6.13  BV=3.05
    {16667,1198,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.24  BV=2.94
    {16667,1280,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.33  BV=2.85
    {16667,1382,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.43  BV=2.75
    {16667,1495,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.55  BV=2.64
    {16667,1587,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.63  BV=2.55
    {16667,1700,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.73  BV=2.45
    {16667,1823,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.83  BV=2.35
    {16667,1956,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.93  BV=2.25
    {16667,2079,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.03  BV=2.15
    {16667,2243,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.13  BV=2.05
    {16667,2406,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.23  BV=1.95
    {16667,2570,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.33  BV=1.85
    {16667,2755,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.44  BV=1.74
    {16667,2949,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.54  BV=1.64
    {16667,3154,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.62  BV=1.56
    {16667,3400,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.73  BV=1.45
    {16667,3645,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.83  BV=1.35
    {24990,2591,1024, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.34  BV=1.26
    {24990,2785,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.45  BV=1.14
    {24990,3011,1024, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.56  BV=1.04
    {24990,3195,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.65  BV=0.94
    {24990,3400,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.74  BV=0.85
    {33333,2755,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.44  BV=0.74
    {33333,2980,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.54  BV=0.64
    {33333,3154,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.62  BV=0.56
    {33333,3400,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.73  BV=0.45
    {33333,3645,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.83  BV=0.35
    {33333,3912,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.93  BV=0.25
    {33333,4157,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.03  BV=0.15
    {33333,4444,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.13  BV=0.05
    {33333,4762,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33333,5140,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.34  BV=-0.16
    {33333,5458,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.44  BV=-0.25
    {33333,5827,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33333,6246,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33333,6717,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33333,7281,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33333,7711,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33333,8192,1048, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33333,8192,1120, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33333,8192,1200, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.23  BV=-1.05
    {33333,8192,1280, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.32  BV=-1.14
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom1PLineTable_50Hz =
{
{
    {99,1198,1032, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.24  BV=10.34
    {99,1280,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.32  BV=10.26
    {99,1382,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.43  BV=10.14
    {119,1239,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.27  BV=10.04
    {119,1311,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.36  BV=9.96
    {139,1219,1032, 0, 0, 0},  /* TV = 12.81(7 lines)  AV=2.28  SV=5.26  BV=9.82 */
    {139,1311,1032, 0, 0, 0},  //TV = 12.81(7 lines)  AV=2.28  SV=5.37  BV=9.72
    {159,1249,1024, 0, 0, 0},  //TV = 12.62(8 lines)  AV=2.28  SV=5.29  BV=9.61
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(9 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(9 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {198,1198,1032, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.24  BV=9.34
    {198,1280,1024, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.32  BV=9.26
    {218,1249,1024, 0, 0, 0},  //TV = 12.16(11 lines)  AV=2.28  SV=5.29  BV=9.15
    {238,1219,1032, 0, 0, 0},  //TV = 12.04(12 lines)  AV=2.28  SV=5.26  BV=9.05
    {258,1198,1032, 0, 0, 0},  //TV = 11.92(13 lines)  AV=2.28  SV=5.24  BV=8.96
    {277,1198,1032, 0, 0, 0},  //TV = 11.82(14 lines)  AV=2.28  SV=5.24  BV=8.86
    {297,1198,1032, 0, 0, 0},  //TV = 11.72(15 lines)  AV=2.28  SV=5.24  BV=8.75
    {317,1219,1024, 0, 0, 0},  //TV = 11.62(16 lines)  AV=2.28  SV=5.25  BV=8.65
    {337,1219,1032, 0, 0, 0},  //TV = 11.53(17 lines)  AV=2.28  SV=5.26  BV=8.55
    {356,1239,1024, 0, 0, 0},  //TV = 11.46(18 lines)  AV=2.28  SV=5.27  BV=8.46
    {396,1198,1024, 0, 0, 0},  //TV = 11.30(20 lines)  AV=2.28  SV=5.23  BV=8.35
    {416,1219,1024, 0, 0, 0},  //TV = 11.23(21 lines)  AV=2.28  SV=5.25  BV=8.25
    {455,1198,1024, 0, 0, 0},  //TV = 11.10(23 lines)  AV=2.28  SV=5.23  BV=8.15
    {475,1219,1032, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.28  SV=5.26  BV=8.05
    {515,1219,1024, 0, 0, 0},  //TV = 10.92(26 lines)  AV=2.28  SV=5.25  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(28 lines)  AV=2.28  SV=5.24  BV=7.86
    {594,1198,1032, 0, 0, 0},  //TV = 10.72(30 lines)  AV=2.28  SV=5.24  BV=7.75
    {633,1219,1024, 0, 0, 0},  //TV = 10.63(32 lines)  AV=2.28  SV=5.25  BV=7.65
    {692,1198,1024, 0, 0, 0},  //TV = 10.50(35 lines)  AV=2.28  SV=5.23  BV=7.55
    {732,1198,1032, 0, 0, 0},  //TV = 10.42(37 lines)  AV=2.28  SV=5.24  BV=7.45
    {791,1198,1032, 0, 0, 0},  //TV = 10.30(40 lines)  AV=2.28  SV=5.24  BV=7.34
    {851,1198,1032, 0, 0, 0},  //TV = 10.20(43 lines)  AV=2.28  SV=5.24  BV=7.24
    {910,1198,1024, 0, 0, 0},  //TV = 10.10(46 lines)  AV=2.28  SV=5.23  BV=7.15
    {969,1198,1032, 0, 0, 0},  //TV = 10.01(49 lines)  AV=2.28  SV=5.24  BV=7.05
    {1048,1198,1024, 0, 0, 0},  //TV = 9.90(53 lines)  AV=2.28  SV=5.23  BV=6.95
    {1108,1198,1032, 0, 0, 0},  //TV = 9.82(56 lines)  AV=2.28  SV=5.24  BV=6.86
    {1187,1198,1032, 0, 0, 0},  //TV = 9.72(60 lines)  AV=2.28  SV=5.24  BV=6.76
    {1286,1198,1032, 0, 0, 0},  //TV = 9.60(65 lines)  AV=2.28  SV=5.24  BV=6.64
    {1365,1198,1032, 0, 0, 0},  //TV = 9.52(69 lines)  AV=2.28  SV=5.24  BV=6.55
    {1483,1198,1024, 0, 0, 0},  //TV = 9.40(75 lines)  AV=2.28  SV=5.23  BV=6.45
    {1582,1198,1032, 0, 0, 0},  //TV = 9.30(80 lines)  AV=2.28  SV=5.24  BV=6.34
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(86 lines)  AV=2.28  SV=5.23  BV=6.25
    {1819,1198,1024, 0, 0, 0},  //TV = 9.10(92 lines)  AV=2.28  SV=5.23  BV=6.15
    {1938,1198,1032, 0, 0, 0},  //TV = 9.01(98 lines)  AV=2.28  SV=5.24  BV=6.05
    {2076,1198,1032, 0, 0, 0},  //TV = 8.91(105 lines)  AV=2.28  SV=5.24  BV=5.95
    {2235,1198,1032, 0, 0, 0},  //TV = 8.81(113 lines)  AV=2.28  SV=5.24  BV=5.84
    {2412,1198,1024, 0, 0, 0},  //TV = 8.70(122 lines)  AV=2.28  SV=5.23  BV=5.74
    {2571,1198,1032, 0, 0, 0},  //TV = 8.60(130 lines)  AV=2.28  SV=5.24  BV=5.64
    {2749,1198,1032, 0, 0, 0},  //TV = 8.51(139 lines)  AV=2.28  SV=5.24  BV=5.54
    {2946,1198,1032, 0, 0, 0},  //TV = 8.41(149 lines)  AV=2.28  SV=5.24  BV=5.44
    {3144,1198,1032, 0, 0, 0},  //TV = 8.31(159 lines)  AV=2.28  SV=5.24  BV=5.35
    {3401,1198,1024, 0, 0, 0},  //TV = 8.20(172 lines)  AV=2.28  SV=5.23  BV=5.25
    {3638,1198,1024, 0, 0, 0},  //TV = 8.10(184 lines)  AV=2.28  SV=5.23  BV=5.15
    {3915,1198,1032, 0, 0, 0},  //TV = 8.00(198 lines)  AV=2.28  SV=5.24  BV=5.03
    {4192,1198,1032, 0, 0, 0},  //TV = 7.90(212 lines)  AV=2.28  SV=5.24  BV=4.94
    {4488,1198,1032, 0, 0, 0},  //TV = 7.80(227 lines)  AV=2.28  SV=5.24  BV=4.84
    {4824,1198,1024, 0, 0, 0},  //TV = 7.70(244 lines)  AV=2.28  SV=5.23  BV=4.74
    {5160,1198,1024, 0, 0, 0},  //TV = 7.60(261 lines)  AV=2.28  SV=5.23  BV=4.65
    {5516,1198,1024, 0, 0, 0},  //TV = 7.50(279 lines)  AV=2.28  SV=5.23  BV=4.55
    {5912,1198,1024, 0, 0, 0},  //TV = 7.40(299 lines)  AV=2.28  SV=5.23  BV=4.45
    {6366,1198,1024, 0, 0, 0},  //TV = 7.30(322 lines)  AV=2.28  SV=5.23  BV=4.34
    {6821,1198,1024, 0, 0, 0},  //TV = 7.20(345 lines)  AV=2.28  SV=5.23  BV=4.24
    {7315,1198,1024, 0, 0, 0},  //TV = 7.09(370 lines)  AV=2.28  SV=5.23  BV=4.14
    {7829,1198,1024, 0, 0, 0},  //TV = 7.00(396 lines)  AV=2.28  SV=5.23  BV=4.05
    {8383,1198,1024, 0, 0, 0},  //TV = 6.90(424 lines)  AV=2.28  SV=5.23  BV=3.95
    {8996,1198,1024, 0, 0, 0},  //TV = 6.80(455 lines)  AV=2.28  SV=5.23  BV=3.85
    {9628,1198,1024, 0, 0, 0},  //TV = 6.70(487 lines)  AV=2.28  SV=5.23  BV=3.75
    {10004,1239,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.27  BV=3.64
    {10004,1311,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.37  BV=3.55
    {10004,1423,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.47  BV=3.44
    {10004,1505,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.57  BV=3.35
    {10004,1618,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.67  BV=3.25
    {10004,1751,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.77  BV=3.14
    {10004,1864,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.86  BV=3.05
    {10004,1997,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.96  BV=2.95
    {10004,2150,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.07  BV=2.85
    {10004,2304,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.17  BV=2.75
    {10004,2447,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.27  BV=2.65
    {10004,2652,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.37  BV=2.55
    {10004,2816,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.47  BV=2.45
    {10004,3052,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.58  BV=2.34
    {10004,3236,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.67  BV=2.25
    {10004,3492,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.77  BV=2.15
    {10004,3748,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.87  BV=2.05
    {10004,3973,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.97  BV=1.95
    {10004,4301,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.07  BV=1.85
    {10004,4598,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.17  BV=1.75
    {10004,4946,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.27  BV=1.65
    {20008,2621,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.37  BV=1.55
    {20008,2816,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.47  BV=1.45
    {20008,3011,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.57  BV=1.35
    {20008,3236,1024, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.66  BV=1.26
    {20008,3492,1024, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.77  BV=1.15
    {20008,3697,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.86  BV=1.05
    {29992,2673,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.40  BV=0.94
    {29992,2877,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.49  BV=0.84
    {29992,3052,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.58  BV=0.76
    {29992,3277,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.69  BV=0.64
    {29992,3492,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.78  BV=0.55
    {29992,3799,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.89  BV=0.44
    {29992,4035,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.99  BV=0.34
    {29992,4301,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.08  BV=0.25
    {29992,4598,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.18  BV=0.16
    {29992,4946,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.28  BV=0.05
    {29992,5345,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29992,5704,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.49  BV=-0.15
    {29992,6093,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29992,6554,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.69  BV=-0.36
    {29992,6902,1048, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.79  BV=-0.45
    {29992,7485,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29992,7946,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.98  BV=-0.64
    {29992,8192,1088, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.09  BV=-0.75
    {29992,8192,1160, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29992,8192,1248, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.29  BV=-0.95
    {29992,8192,1280, 0, 0, 0},  /* TV = 5.06(1517 lines)  AV=2.28  SV=8.32  BV=-0.99 */
    {29992,8192,1280, 0, 0, 0},  /* TV = 5.06(1517 lines)  AV=2.28  SV=8.32  BV=-0.99 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom1AutoTable =
{
    AETABLE_CUSTOM1_AUTO, //eAETableID
    116, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -12, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sCustom1PLineTable_60Hz,
    sCustom1PLineTable_50Hz,
    NULL,
};
static strEvPline sCustom2PLineTable_60Hz =
{
{
    {99,1198,1032, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.24  BV=10.34
    {99,1280,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.32  BV=10.26
    {99,1382,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.43  BV=10.14
    {119,1239,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.27  BV=10.04
    {119,1311,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.36  BV=9.96
    {139,1219,1032, 0, 0, 0},  /* TV = 12.81(7 lines)  AV=2.28  SV=5.26  BV=9.82 */
    {139,1311,1032, 0, 0, 0},  //TV = 12.81(7 lines)  AV=2.28  SV=5.37  BV=9.72
    {159,1249,1024, 0, 0, 0},  //TV = 12.62(8 lines)  AV=2.28  SV=5.29  BV=9.61
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(9 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(9 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {198,1198,1032, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.24  BV=9.34
    {198,1280,1024, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.32  BV=9.26
    {218,1249,1024, 0, 0, 0},  //TV = 12.16(11 lines)  AV=2.28  SV=5.29  BV=9.15
    {238,1219,1032, 0, 0, 0},  //TV = 12.04(12 lines)  AV=2.28  SV=5.26  BV=9.05
    {258,1198,1032, 0, 0, 0},  //TV = 11.92(13 lines)  AV=2.28  SV=5.24  BV=8.96
    {277,1198,1032, 0, 0, 0},  //TV = 11.82(14 lines)  AV=2.28  SV=5.24  BV=8.86
    {297,1198,1032, 0, 0, 0},  //TV = 11.72(15 lines)  AV=2.28  SV=5.24  BV=8.75
    {317,1219,1024, 0, 0, 0},  //TV = 11.62(16 lines)  AV=2.28  SV=5.25  BV=8.65
    {337,1219,1032, 0, 0, 0},  //TV = 11.53(17 lines)  AV=2.28  SV=5.26  BV=8.55
    {356,1239,1024, 0, 0, 0},  //TV = 11.46(18 lines)  AV=2.28  SV=5.27  BV=8.46
    {396,1198,1024, 0, 0, 0},  //TV = 11.30(20 lines)  AV=2.28  SV=5.23  BV=8.35
    {416,1219,1024, 0, 0, 0},  //TV = 11.23(21 lines)  AV=2.28  SV=5.25  BV=8.25
    {455,1198,1024, 0, 0, 0},  //TV = 11.10(23 lines)  AV=2.28  SV=5.23  BV=8.15
    {475,1219,1032, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.28  SV=5.26  BV=8.05
    {515,1219,1024, 0, 0, 0},  //TV = 10.92(26 lines)  AV=2.28  SV=5.25  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(28 lines)  AV=2.28  SV=5.24  BV=7.86
    {594,1198,1032, 0, 0, 0},  //TV = 10.72(30 lines)  AV=2.28  SV=5.24  BV=7.75
    {633,1219,1024, 0, 0, 0},  //TV = 10.63(32 lines)  AV=2.28  SV=5.25  BV=7.65
    {692,1198,1024, 0, 0, 0},  //TV = 10.50(35 lines)  AV=2.28  SV=5.23  BV=7.55
    {732,1198,1032, 0, 0, 0},  //TV = 10.42(37 lines)  AV=2.28  SV=5.24  BV=7.45
    {791,1198,1032, 0, 0, 0},  //TV = 10.30(40 lines)  AV=2.28  SV=5.24  BV=7.34
    {851,1198,1032, 0, 0, 0},  //TV = 10.20(43 lines)  AV=2.28  SV=5.24  BV=7.24
    {910,1198,1024, 0, 0, 0},  //TV = 10.10(46 lines)  AV=2.28  SV=5.23  BV=7.15
    {969,1198,1032, 0, 0, 0},  //TV = 10.01(49 lines)  AV=2.28  SV=5.24  BV=7.05
    {1048,1198,1024, 0, 0, 0},  //TV = 9.90(53 lines)  AV=2.28  SV=5.23  BV=6.95
    {1108,1198,1032, 0, 0, 0},  //TV = 9.82(56 lines)  AV=2.28  SV=5.24  BV=6.86
    {1187,1198,1032, 0, 0, 0},  //TV = 9.72(60 lines)  AV=2.28  SV=5.24  BV=6.76
    {1286,1198,1032, 0, 0, 0},  //TV = 9.60(65 lines)  AV=2.28  SV=5.24  BV=6.64
    {1365,1198,1032, 0, 0, 0},  //TV = 9.52(69 lines)  AV=2.28  SV=5.24  BV=6.55
    {1483,1198,1024, 0, 0, 0},  //TV = 9.40(75 lines)  AV=2.28  SV=5.23  BV=6.45
    {1582,1198,1032, 0, 0, 0},  //TV = 9.30(80 lines)  AV=2.28  SV=5.24  BV=6.34
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(86 lines)  AV=2.28  SV=5.23  BV=6.25
    {1819,1198,1024, 0, 0, 0},  //TV = 9.10(92 lines)  AV=2.28  SV=5.23  BV=6.15
    {1938,1198,1032, 0, 0, 0},  //TV = 9.01(98 lines)  AV=2.28  SV=5.24  BV=6.05
    {2076,1198,1032, 0, 0, 0},  //TV = 8.91(105 lines)  AV=2.28  SV=5.24  BV=5.95
    {2235,1198,1032, 0, 0, 0},  //TV = 8.81(113 lines)  AV=2.28  SV=5.24  BV=5.84
    {2412,1198,1024, 0, 0, 0},  //TV = 8.70(122 lines)  AV=2.28  SV=5.23  BV=5.74
    {2571,1198,1032, 0, 0, 0},  //TV = 8.60(130 lines)  AV=2.28  SV=5.24  BV=5.64
    {2749,1198,1032, 0, 0, 0},  //TV = 8.51(139 lines)  AV=2.28  SV=5.24  BV=5.54
    {2946,1198,1032, 0, 0, 0},  //TV = 8.41(149 lines)  AV=2.28  SV=5.24  BV=5.44
    {3144,1198,1032, 0, 0, 0},  //TV = 8.31(159 lines)  AV=2.28  SV=5.24  BV=5.35
    {3401,1198,1024, 0, 0, 0},  //TV = 8.20(172 lines)  AV=2.28  SV=5.23  BV=5.25
    {3638,1198,1024, 0, 0, 0},  //TV = 8.10(184 lines)  AV=2.28  SV=5.23  BV=5.15
    {3915,1198,1032, 0, 0, 0},  //TV = 8.00(198 lines)  AV=2.28  SV=5.24  BV=5.03
    {4192,1198,1032, 0, 0, 0},  //TV = 7.90(212 lines)  AV=2.28  SV=5.24  BV=4.94
    {4488,1198,1032, 0, 0, 0},  //TV = 7.80(227 lines)  AV=2.28  SV=5.24  BV=4.84
    {4824,1198,1024, 0, 0, 0},  //TV = 7.70(244 lines)  AV=2.28  SV=5.23  BV=4.74
    {5160,1198,1024, 0, 0, 0},  //TV = 7.60(261 lines)  AV=2.28  SV=5.23  BV=4.65
    {5516,1198,1024, 0, 0, 0},  //TV = 7.50(279 lines)  AV=2.28  SV=5.23  BV=4.55
    {5912,1198,1024, 0, 0, 0},  //TV = 7.40(299 lines)  AV=2.28  SV=5.23  BV=4.45
    {6366,1198,1024, 0, 0, 0},  //TV = 7.30(322 lines)  AV=2.28  SV=5.23  BV=4.34
    {6821,1198,1024, 0, 0, 0},  //TV = 7.20(345 lines)  AV=2.28  SV=5.23  BV=4.24
    {7315,1198,1024, 0, 0, 0},  //TV = 7.09(370 lines)  AV=2.28  SV=5.23  BV=4.14
    {7829,1198,1024, 0, 0, 0},  //TV = 7.00(396 lines)  AV=2.28  SV=5.23  BV=4.05
    {8324,1198,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.24  BV=3.95
    {8324,1280,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.33  BV=3.85
    {8324,1382,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.43  BV=3.75
    {8324,1475,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.54  BV=3.65
    {8324,1587,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.63  BV=3.55
    {8324,1710,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.74  BV=3.44
    {8324,1823,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.83  BV=3.35
    {8324,1956,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.93  BV=3.25
    {8324,2099,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=6.04  BV=3.15
    {8324,2243,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=6.13  BV=3.05
    {16667,1198,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.24  BV=2.94
    {16667,1280,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.33  BV=2.85
    {16667,1382,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.43  BV=2.75
    {16667,1495,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.55  BV=2.64
    {16667,1587,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.63  BV=2.55
    {16667,1700,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.73  BV=2.45
    {16667,1823,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.83  BV=2.35
    {16667,1956,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.93  BV=2.25
    {16667,2079,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.03  BV=2.15
    {16667,2243,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.13  BV=2.05
    {16667,2406,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.23  BV=1.95
    {16667,2570,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.33  BV=1.85
    {16667,2755,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.44  BV=1.74
    {16667,2949,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.54  BV=1.64
    {16667,3154,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.62  BV=1.56
    {16667,3400,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.73  BV=1.45
    {16667,3645,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.83  BV=1.35
    {24990,2591,1024, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.34  BV=1.26
    {24990,2785,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.45  BV=1.14
    {24990,3011,1024, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.56  BV=1.04
    {24990,3195,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.65  BV=0.94
    {24990,3400,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.74  BV=0.85
    {33333,2755,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.44  BV=0.74
    {33333,2980,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.54  BV=0.64
    {33333,3154,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.62  BV=0.56
    {33333,3400,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.73  BV=0.45
    {33333,3645,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.83  BV=0.35
    {33333,3912,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.93  BV=0.25
    {33333,4157,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.03  BV=0.15
    {33333,4444,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.13  BV=0.05
    {33333,4762,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33333,5140,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.34  BV=-0.16
    {33333,5458,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.44  BV=-0.25
    {33333,5827,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33333,6246,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33333,6717,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33333,7281,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33333,7711,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33333,8192,1048, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33333,8192,1120, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33333,8192,1200, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.23  BV=-1.05
    {33333,8192,1280, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.32  BV=-1.14
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom2PLineTable_50Hz =
{
{
    {99,1198,1032, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.24  BV=10.34
    {99,1280,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.32  BV=10.26
    {99,1382,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.43  BV=10.14
    {119,1239,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.27  BV=10.04
    {119,1311,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.36  BV=9.96
    {139,1219,1032, 0, 0, 0},  /* TV = 12.81(7 lines)  AV=2.28  SV=5.26  BV=9.82 */
    {139,1311,1032, 0, 0, 0},  //TV = 12.81(7 lines)  AV=2.28  SV=5.37  BV=9.72
    {159,1249,1024, 0, 0, 0},  //TV = 12.62(8 lines)  AV=2.28  SV=5.29  BV=9.61
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(9 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(9 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {198,1198,1032, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.24  BV=9.34
    {198,1280,1024, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.32  BV=9.26
    {218,1249,1024, 0, 0, 0},  //TV = 12.16(11 lines)  AV=2.28  SV=5.29  BV=9.15
    {238,1219,1032, 0, 0, 0},  //TV = 12.04(12 lines)  AV=2.28  SV=5.26  BV=9.05
    {258,1198,1032, 0, 0, 0},  //TV = 11.92(13 lines)  AV=2.28  SV=5.24  BV=8.96
    {277,1198,1032, 0, 0, 0},  //TV = 11.82(14 lines)  AV=2.28  SV=5.24  BV=8.86
    {297,1198,1032, 0, 0, 0},  //TV = 11.72(15 lines)  AV=2.28  SV=5.24  BV=8.75
    {317,1219,1024, 0, 0, 0},  //TV = 11.62(16 lines)  AV=2.28  SV=5.25  BV=8.65
    {337,1219,1032, 0, 0, 0},  //TV = 11.53(17 lines)  AV=2.28  SV=5.26  BV=8.55
    {356,1239,1024, 0, 0, 0},  //TV = 11.46(18 lines)  AV=2.28  SV=5.27  BV=8.46
    {396,1198,1024, 0, 0, 0},  //TV = 11.30(20 lines)  AV=2.28  SV=5.23  BV=8.35
    {416,1219,1024, 0, 0, 0},  //TV = 11.23(21 lines)  AV=2.28  SV=5.25  BV=8.25
    {455,1198,1024, 0, 0, 0},  //TV = 11.10(23 lines)  AV=2.28  SV=5.23  BV=8.15
    {475,1219,1032, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.28  SV=5.26  BV=8.05
    {515,1219,1024, 0, 0, 0},  //TV = 10.92(26 lines)  AV=2.28  SV=5.25  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(28 lines)  AV=2.28  SV=5.24  BV=7.86
    {594,1198,1032, 0, 0, 0},  //TV = 10.72(30 lines)  AV=2.28  SV=5.24  BV=7.75
    {633,1219,1024, 0, 0, 0},  //TV = 10.63(32 lines)  AV=2.28  SV=5.25  BV=7.65
    {692,1198,1024, 0, 0, 0},  //TV = 10.50(35 lines)  AV=2.28  SV=5.23  BV=7.55
    {732,1198,1032, 0, 0, 0},  //TV = 10.42(37 lines)  AV=2.28  SV=5.24  BV=7.45
    {791,1198,1032, 0, 0, 0},  //TV = 10.30(40 lines)  AV=2.28  SV=5.24  BV=7.34
    {851,1198,1032, 0, 0, 0},  //TV = 10.20(43 lines)  AV=2.28  SV=5.24  BV=7.24
    {910,1198,1024, 0, 0, 0},  //TV = 10.10(46 lines)  AV=2.28  SV=5.23  BV=7.15
    {969,1198,1032, 0, 0, 0},  //TV = 10.01(49 lines)  AV=2.28  SV=5.24  BV=7.05
    {1048,1198,1024, 0, 0, 0},  //TV = 9.90(53 lines)  AV=2.28  SV=5.23  BV=6.95
    {1108,1198,1032, 0, 0, 0},  //TV = 9.82(56 lines)  AV=2.28  SV=5.24  BV=6.86
    {1187,1198,1032, 0, 0, 0},  //TV = 9.72(60 lines)  AV=2.28  SV=5.24  BV=6.76
    {1286,1198,1032, 0, 0, 0},  //TV = 9.60(65 lines)  AV=2.28  SV=5.24  BV=6.64
    {1365,1198,1032, 0, 0, 0},  //TV = 9.52(69 lines)  AV=2.28  SV=5.24  BV=6.55
    {1483,1198,1024, 0, 0, 0},  //TV = 9.40(75 lines)  AV=2.28  SV=5.23  BV=6.45
    {1582,1198,1032, 0, 0, 0},  //TV = 9.30(80 lines)  AV=2.28  SV=5.24  BV=6.34
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(86 lines)  AV=2.28  SV=5.23  BV=6.25
    {1819,1198,1024, 0, 0, 0},  //TV = 9.10(92 lines)  AV=2.28  SV=5.23  BV=6.15
    {1938,1198,1032, 0, 0, 0},  //TV = 9.01(98 lines)  AV=2.28  SV=5.24  BV=6.05
    {2076,1198,1032, 0, 0, 0},  //TV = 8.91(105 lines)  AV=2.28  SV=5.24  BV=5.95
    {2235,1198,1032, 0, 0, 0},  //TV = 8.81(113 lines)  AV=2.28  SV=5.24  BV=5.84
    {2412,1198,1024, 0, 0, 0},  //TV = 8.70(122 lines)  AV=2.28  SV=5.23  BV=5.74
    {2571,1198,1032, 0, 0, 0},  //TV = 8.60(130 lines)  AV=2.28  SV=5.24  BV=5.64
    {2749,1198,1032, 0, 0, 0},  //TV = 8.51(139 lines)  AV=2.28  SV=5.24  BV=5.54
    {2946,1198,1032, 0, 0, 0},  //TV = 8.41(149 lines)  AV=2.28  SV=5.24  BV=5.44
    {3144,1198,1032, 0, 0, 0},  //TV = 8.31(159 lines)  AV=2.28  SV=5.24  BV=5.35
    {3401,1198,1024, 0, 0, 0},  //TV = 8.20(172 lines)  AV=2.28  SV=5.23  BV=5.25
    {3638,1198,1024, 0, 0, 0},  //TV = 8.10(184 lines)  AV=2.28  SV=5.23  BV=5.15
    {3915,1198,1032, 0, 0, 0},  //TV = 8.00(198 lines)  AV=2.28  SV=5.24  BV=5.03
    {4192,1198,1032, 0, 0, 0},  //TV = 7.90(212 lines)  AV=2.28  SV=5.24  BV=4.94
    {4488,1198,1032, 0, 0, 0},  //TV = 7.80(227 lines)  AV=2.28  SV=5.24  BV=4.84
    {4824,1198,1024, 0, 0, 0},  //TV = 7.70(244 lines)  AV=2.28  SV=5.23  BV=4.74
    {5160,1198,1024, 0, 0, 0},  //TV = 7.60(261 lines)  AV=2.28  SV=5.23  BV=4.65
    {5516,1198,1024, 0, 0, 0},  //TV = 7.50(279 lines)  AV=2.28  SV=5.23  BV=4.55
    {5912,1198,1024, 0, 0, 0},  //TV = 7.40(299 lines)  AV=2.28  SV=5.23  BV=4.45
    {6366,1198,1024, 0, 0, 0},  //TV = 7.30(322 lines)  AV=2.28  SV=5.23  BV=4.34
    {6821,1198,1024, 0, 0, 0},  //TV = 7.20(345 lines)  AV=2.28  SV=5.23  BV=4.24
    {7315,1198,1024, 0, 0, 0},  //TV = 7.09(370 lines)  AV=2.28  SV=5.23  BV=4.14
    {7829,1198,1024, 0, 0, 0},  //TV = 7.00(396 lines)  AV=2.28  SV=5.23  BV=4.05
    {8383,1198,1024, 0, 0, 0},  //TV = 6.90(424 lines)  AV=2.28  SV=5.23  BV=3.95
    {8996,1198,1024, 0, 0, 0},  //TV = 6.80(455 lines)  AV=2.28  SV=5.23  BV=3.85
    {9628,1198,1024, 0, 0, 0},  //TV = 6.70(487 lines)  AV=2.28  SV=5.23  BV=3.75
    {10004,1239,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.27  BV=3.64
    {10004,1311,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.37  BV=3.55
    {10004,1423,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.47  BV=3.44
    {10004,1505,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.57  BV=3.35
    {10004,1618,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.67  BV=3.25
    {10004,1751,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.77  BV=3.14
    {10004,1864,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.86  BV=3.05
    {10004,1997,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.96  BV=2.95
    {10004,2150,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.07  BV=2.85
    {10004,2304,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.17  BV=2.75
    {10004,2447,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.27  BV=2.65
    {10004,2652,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.37  BV=2.55
    {10004,2816,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.47  BV=2.45
    {10004,3052,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.58  BV=2.34
    {10004,3236,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.67  BV=2.25
    {10004,3492,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.77  BV=2.15
    {10004,3748,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.87  BV=2.05
    {10004,3973,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.97  BV=1.95
    {10004,4301,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.07  BV=1.85
    {10004,4598,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.17  BV=1.75
    {10004,4946,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.27  BV=1.65
    {20008,2621,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.37  BV=1.55
    {20008,2816,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.47  BV=1.45
    {20008,3011,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.57  BV=1.35
    {20008,3236,1024, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.66  BV=1.26
    {20008,3492,1024, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.77  BV=1.15
    {20008,3697,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.86  BV=1.05
    {29992,2673,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.40  BV=0.94
    {29992,2877,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.49  BV=0.84
    {29992,3052,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.58  BV=0.76
    {29992,3277,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.69  BV=0.64
    {29992,3492,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.78  BV=0.55
    {29992,3799,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.89  BV=0.44
    {29992,4035,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.99  BV=0.34
    {29992,4301,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.08  BV=0.25
    {29992,4598,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.18  BV=0.16
    {29992,4946,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.28  BV=0.05
    {29992,5345,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29992,5704,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.49  BV=-0.15
    {29992,6093,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29992,6554,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.69  BV=-0.36
    {29992,6902,1048, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.79  BV=-0.45
    {29992,7485,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29992,7946,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.98  BV=-0.64
    {29992,8192,1088, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.09  BV=-0.75
    {29992,8192,1160, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29992,8192,1248, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.29  BV=-0.95
    {29992,8192,1280, 0, 0, 0},  /* TV = 5.06(1517 lines)  AV=2.28  SV=8.32  BV=-0.99 */
    {29992,8192,1280, 0, 0, 0},  /* TV = 5.06(1517 lines)  AV=2.28  SV=8.32  BV=-0.99 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom2AutoTable =
{
    AETABLE_CUSTOM2_AUTO, //eAETableID
    116, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -12, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sCustom2PLineTable_60Hz,
    sCustom2PLineTable_50Hz,
    NULL,
};
static strEvPline sCustom3PLineTable_60Hz =
{
{
    {99,1198,1032, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.24  BV=10.34
    {99,1280,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.32  BV=10.26
    {99,1382,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.43  BV=10.14
    {119,1239,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.27  BV=10.04
    {119,1311,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.36  BV=9.96
    {139,1219,1032, 0, 0, 0},  /* TV = 12.81(7 lines)  AV=2.28  SV=5.26  BV=9.82 */
    {139,1311,1032, 0, 0, 0},  //TV = 12.81(7 lines)  AV=2.28  SV=5.37  BV=9.72
    {159,1249,1024, 0, 0, 0},  //TV = 12.62(8 lines)  AV=2.28  SV=5.29  BV=9.61
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(9 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(9 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {198,1198,1032, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.24  BV=9.34
    {198,1280,1024, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.32  BV=9.26
    {218,1249,1024, 0, 0, 0},  //TV = 12.16(11 lines)  AV=2.28  SV=5.29  BV=9.15
    {238,1219,1032, 0, 0, 0},  //TV = 12.04(12 lines)  AV=2.28  SV=5.26  BV=9.05
    {258,1198,1032, 0, 0, 0},  //TV = 11.92(13 lines)  AV=2.28  SV=5.24  BV=8.96
    {277,1198,1032, 0, 0, 0},  //TV = 11.82(14 lines)  AV=2.28  SV=5.24  BV=8.86
    {297,1198,1032, 0, 0, 0},  //TV = 11.72(15 lines)  AV=2.28  SV=5.24  BV=8.75
    {317,1219,1024, 0, 0, 0},  //TV = 11.62(16 lines)  AV=2.28  SV=5.25  BV=8.65
    {337,1219,1032, 0, 0, 0},  //TV = 11.53(17 lines)  AV=2.28  SV=5.26  BV=8.55
    {356,1239,1024, 0, 0, 0},  //TV = 11.46(18 lines)  AV=2.28  SV=5.27  BV=8.46
    {396,1198,1024, 0, 0, 0},  //TV = 11.30(20 lines)  AV=2.28  SV=5.23  BV=8.35
    {416,1219,1024, 0, 0, 0},  //TV = 11.23(21 lines)  AV=2.28  SV=5.25  BV=8.25
    {455,1198,1024, 0, 0, 0},  //TV = 11.10(23 lines)  AV=2.28  SV=5.23  BV=8.15
    {475,1219,1032, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.28  SV=5.26  BV=8.05
    {515,1219,1024, 0, 0, 0},  //TV = 10.92(26 lines)  AV=2.28  SV=5.25  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(28 lines)  AV=2.28  SV=5.24  BV=7.86
    {594,1198,1032, 0, 0, 0},  //TV = 10.72(30 lines)  AV=2.28  SV=5.24  BV=7.75
    {633,1219,1024, 0, 0, 0},  //TV = 10.63(32 lines)  AV=2.28  SV=5.25  BV=7.65
    {692,1198,1024, 0, 0, 0},  //TV = 10.50(35 lines)  AV=2.28  SV=5.23  BV=7.55
    {732,1198,1032, 0, 0, 0},  //TV = 10.42(37 lines)  AV=2.28  SV=5.24  BV=7.45
    {791,1198,1032, 0, 0, 0},  //TV = 10.30(40 lines)  AV=2.28  SV=5.24  BV=7.34
    {851,1198,1032, 0, 0, 0},  //TV = 10.20(43 lines)  AV=2.28  SV=5.24  BV=7.24
    {910,1198,1024, 0, 0, 0},  //TV = 10.10(46 lines)  AV=2.28  SV=5.23  BV=7.15
    {969,1198,1032, 0, 0, 0},  //TV = 10.01(49 lines)  AV=2.28  SV=5.24  BV=7.05
    {1048,1198,1024, 0, 0, 0},  //TV = 9.90(53 lines)  AV=2.28  SV=5.23  BV=6.95
    {1108,1198,1032, 0, 0, 0},  //TV = 9.82(56 lines)  AV=2.28  SV=5.24  BV=6.86
    {1187,1198,1032, 0, 0, 0},  //TV = 9.72(60 lines)  AV=2.28  SV=5.24  BV=6.76
    {1286,1198,1032, 0, 0, 0},  //TV = 9.60(65 lines)  AV=2.28  SV=5.24  BV=6.64
    {1365,1198,1032, 0, 0, 0},  //TV = 9.52(69 lines)  AV=2.28  SV=5.24  BV=6.55
    {1483,1198,1024, 0, 0, 0},  //TV = 9.40(75 lines)  AV=2.28  SV=5.23  BV=6.45
    {1582,1198,1032, 0, 0, 0},  //TV = 9.30(80 lines)  AV=2.28  SV=5.24  BV=6.34
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(86 lines)  AV=2.28  SV=5.23  BV=6.25
    {1819,1198,1024, 0, 0, 0},  //TV = 9.10(92 lines)  AV=2.28  SV=5.23  BV=6.15
    {1938,1198,1032, 0, 0, 0},  //TV = 9.01(98 lines)  AV=2.28  SV=5.24  BV=6.05
    {2076,1198,1032, 0, 0, 0},  //TV = 8.91(105 lines)  AV=2.28  SV=5.24  BV=5.95
    {2235,1198,1032, 0, 0, 0},  //TV = 8.81(113 lines)  AV=2.28  SV=5.24  BV=5.84
    {2412,1198,1024, 0, 0, 0},  //TV = 8.70(122 lines)  AV=2.28  SV=5.23  BV=5.74
    {2571,1198,1032, 0, 0, 0},  //TV = 8.60(130 lines)  AV=2.28  SV=5.24  BV=5.64
    {2749,1198,1032, 0, 0, 0},  //TV = 8.51(139 lines)  AV=2.28  SV=5.24  BV=5.54
    {2946,1198,1032, 0, 0, 0},  //TV = 8.41(149 lines)  AV=2.28  SV=5.24  BV=5.44
    {3144,1198,1032, 0, 0, 0},  //TV = 8.31(159 lines)  AV=2.28  SV=5.24  BV=5.35
    {3401,1198,1024, 0, 0, 0},  //TV = 8.20(172 lines)  AV=2.28  SV=5.23  BV=5.25
    {3638,1198,1024, 0, 0, 0},  //TV = 8.10(184 lines)  AV=2.28  SV=5.23  BV=5.15
    {3915,1198,1032, 0, 0, 0},  //TV = 8.00(198 lines)  AV=2.28  SV=5.24  BV=5.03
    {4192,1198,1032, 0, 0, 0},  //TV = 7.90(212 lines)  AV=2.28  SV=5.24  BV=4.94
    {4488,1198,1032, 0, 0, 0},  //TV = 7.80(227 lines)  AV=2.28  SV=5.24  BV=4.84
    {4824,1198,1024, 0, 0, 0},  //TV = 7.70(244 lines)  AV=2.28  SV=5.23  BV=4.74
    {5160,1198,1024, 0, 0, 0},  //TV = 7.60(261 lines)  AV=2.28  SV=5.23  BV=4.65
    {5516,1198,1024, 0, 0, 0},  //TV = 7.50(279 lines)  AV=2.28  SV=5.23  BV=4.55
    {5912,1198,1024, 0, 0, 0},  //TV = 7.40(299 lines)  AV=2.28  SV=5.23  BV=4.45
    {6366,1198,1024, 0, 0, 0},  //TV = 7.30(322 lines)  AV=2.28  SV=5.23  BV=4.34
    {6821,1198,1024, 0, 0, 0},  //TV = 7.20(345 lines)  AV=2.28  SV=5.23  BV=4.24
    {7315,1198,1024, 0, 0, 0},  //TV = 7.09(370 lines)  AV=2.28  SV=5.23  BV=4.14
    {7829,1198,1024, 0, 0, 0},  //TV = 7.00(396 lines)  AV=2.28  SV=5.23  BV=4.05
    {8324,1198,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.24  BV=3.95
    {8324,1280,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.33  BV=3.85
    {8324,1382,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.43  BV=3.75
    {8324,1475,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.54  BV=3.65
    {8324,1587,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.63  BV=3.55
    {8324,1710,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.74  BV=3.44
    {8324,1823,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.83  BV=3.35
    {8324,1956,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.93  BV=3.25
    {8324,2099,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=6.04  BV=3.15
    {8324,2243,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=6.13  BV=3.05
    {16667,1198,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.24  BV=2.94
    {16667,1280,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.33  BV=2.85
    {16667,1382,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.43  BV=2.75
    {16667,1495,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.55  BV=2.64
    {16667,1587,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.63  BV=2.55
    {16667,1700,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.73  BV=2.45
    {16667,1823,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.83  BV=2.35
    {16667,1956,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.93  BV=2.25
    {16667,2079,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.03  BV=2.15
    {16667,2243,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.13  BV=2.05
    {16667,2406,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.23  BV=1.95
    {16667,2570,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.33  BV=1.85
    {16667,2755,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.44  BV=1.74
    {16667,2949,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.54  BV=1.64
    {16667,3154,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.62  BV=1.56
    {16667,3400,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.73  BV=1.45
    {16667,3645,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.83  BV=1.35
    {24990,2591,1024, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.34  BV=1.26
    {24990,2785,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.45  BV=1.14
    {24990,3011,1024, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.56  BV=1.04
    {24990,3195,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.65  BV=0.94
    {24990,3400,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.74  BV=0.85
    {33333,2755,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.44  BV=0.74
    {33333,2980,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.54  BV=0.64
    {33333,3154,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.62  BV=0.56
    {33333,3400,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.73  BV=0.45
    {33333,3645,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.83  BV=0.35
    {33333,3912,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.93  BV=0.25
    {33333,4157,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.03  BV=0.15
    {33333,4444,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.13  BV=0.05
    {33333,4762,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33333,5140,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.34  BV=-0.16
    {33333,5458,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.44  BV=-0.25
    {33333,5827,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33333,6246,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33333,6717,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33333,7281,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33333,7711,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33333,8192,1048, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33333,8192,1120, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33333,8192,1200, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.23  BV=-1.05
    {33333,8192,1280, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.32  BV=-1.14
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom3PLineTable_50Hz =
{
{
    {99,1198,1032, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.24  BV=10.34
    {99,1280,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.32  BV=10.26
    {99,1382,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.43  BV=10.14
    {119,1239,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.27  BV=10.04
    {119,1311,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.36  BV=9.96
    {139,1219,1032, 0, 0, 0},  /* TV = 12.81(7 lines)  AV=2.28  SV=5.26  BV=9.82 */
    {139,1311,1032, 0, 0, 0},  //TV = 12.81(7 lines)  AV=2.28  SV=5.37  BV=9.72
    {159,1249,1024, 0, 0, 0},  //TV = 12.62(8 lines)  AV=2.28  SV=5.29  BV=9.61
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(9 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(9 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {198,1198,1032, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.24  BV=9.34
    {198,1280,1024, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.32  BV=9.26
    {218,1249,1024, 0, 0, 0},  //TV = 12.16(11 lines)  AV=2.28  SV=5.29  BV=9.15
    {238,1219,1032, 0, 0, 0},  //TV = 12.04(12 lines)  AV=2.28  SV=5.26  BV=9.05
    {258,1198,1032, 0, 0, 0},  //TV = 11.92(13 lines)  AV=2.28  SV=5.24  BV=8.96
    {277,1198,1032, 0, 0, 0},  //TV = 11.82(14 lines)  AV=2.28  SV=5.24  BV=8.86
    {297,1198,1032, 0, 0, 0},  //TV = 11.72(15 lines)  AV=2.28  SV=5.24  BV=8.75
    {317,1219,1024, 0, 0, 0},  //TV = 11.62(16 lines)  AV=2.28  SV=5.25  BV=8.65
    {337,1219,1032, 0, 0, 0},  //TV = 11.53(17 lines)  AV=2.28  SV=5.26  BV=8.55
    {356,1239,1024, 0, 0, 0},  //TV = 11.46(18 lines)  AV=2.28  SV=5.27  BV=8.46
    {396,1198,1024, 0, 0, 0},  //TV = 11.30(20 lines)  AV=2.28  SV=5.23  BV=8.35
    {416,1219,1024, 0, 0, 0},  //TV = 11.23(21 lines)  AV=2.28  SV=5.25  BV=8.25
    {455,1198,1024, 0, 0, 0},  //TV = 11.10(23 lines)  AV=2.28  SV=5.23  BV=8.15
    {475,1219,1032, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.28  SV=5.26  BV=8.05
    {515,1219,1024, 0, 0, 0},  //TV = 10.92(26 lines)  AV=2.28  SV=5.25  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(28 lines)  AV=2.28  SV=5.24  BV=7.86
    {594,1198,1032, 0, 0, 0},  //TV = 10.72(30 lines)  AV=2.28  SV=5.24  BV=7.75
    {633,1219,1024, 0, 0, 0},  //TV = 10.63(32 lines)  AV=2.28  SV=5.25  BV=7.65
    {692,1198,1024, 0, 0, 0},  //TV = 10.50(35 lines)  AV=2.28  SV=5.23  BV=7.55
    {732,1198,1032, 0, 0, 0},  //TV = 10.42(37 lines)  AV=2.28  SV=5.24  BV=7.45
    {791,1198,1032, 0, 0, 0},  //TV = 10.30(40 lines)  AV=2.28  SV=5.24  BV=7.34
    {851,1198,1032, 0, 0, 0},  //TV = 10.20(43 lines)  AV=2.28  SV=5.24  BV=7.24
    {910,1198,1024, 0, 0, 0},  //TV = 10.10(46 lines)  AV=2.28  SV=5.23  BV=7.15
    {969,1198,1032, 0, 0, 0},  //TV = 10.01(49 lines)  AV=2.28  SV=5.24  BV=7.05
    {1048,1198,1024, 0, 0, 0},  //TV = 9.90(53 lines)  AV=2.28  SV=5.23  BV=6.95
    {1108,1198,1032, 0, 0, 0},  //TV = 9.82(56 lines)  AV=2.28  SV=5.24  BV=6.86
    {1187,1198,1032, 0, 0, 0},  //TV = 9.72(60 lines)  AV=2.28  SV=5.24  BV=6.76
    {1286,1198,1032, 0, 0, 0},  //TV = 9.60(65 lines)  AV=2.28  SV=5.24  BV=6.64
    {1365,1198,1032, 0, 0, 0},  //TV = 9.52(69 lines)  AV=2.28  SV=5.24  BV=6.55
    {1483,1198,1024, 0, 0, 0},  //TV = 9.40(75 lines)  AV=2.28  SV=5.23  BV=6.45
    {1582,1198,1032, 0, 0, 0},  //TV = 9.30(80 lines)  AV=2.28  SV=5.24  BV=6.34
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(86 lines)  AV=2.28  SV=5.23  BV=6.25
    {1819,1198,1024, 0, 0, 0},  //TV = 9.10(92 lines)  AV=2.28  SV=5.23  BV=6.15
    {1938,1198,1032, 0, 0, 0},  //TV = 9.01(98 lines)  AV=2.28  SV=5.24  BV=6.05
    {2076,1198,1032, 0, 0, 0},  //TV = 8.91(105 lines)  AV=2.28  SV=5.24  BV=5.95
    {2235,1198,1032, 0, 0, 0},  //TV = 8.81(113 lines)  AV=2.28  SV=5.24  BV=5.84
    {2412,1198,1024, 0, 0, 0},  //TV = 8.70(122 lines)  AV=2.28  SV=5.23  BV=5.74
    {2571,1198,1032, 0, 0, 0},  //TV = 8.60(130 lines)  AV=2.28  SV=5.24  BV=5.64
    {2749,1198,1032, 0, 0, 0},  //TV = 8.51(139 lines)  AV=2.28  SV=5.24  BV=5.54
    {2946,1198,1032, 0, 0, 0},  //TV = 8.41(149 lines)  AV=2.28  SV=5.24  BV=5.44
    {3144,1198,1032, 0, 0, 0},  //TV = 8.31(159 lines)  AV=2.28  SV=5.24  BV=5.35
    {3401,1198,1024, 0, 0, 0},  //TV = 8.20(172 lines)  AV=2.28  SV=5.23  BV=5.25
    {3638,1198,1024, 0, 0, 0},  //TV = 8.10(184 lines)  AV=2.28  SV=5.23  BV=5.15
    {3915,1198,1032, 0, 0, 0},  //TV = 8.00(198 lines)  AV=2.28  SV=5.24  BV=5.03
    {4192,1198,1032, 0, 0, 0},  //TV = 7.90(212 lines)  AV=2.28  SV=5.24  BV=4.94
    {4488,1198,1032, 0, 0, 0},  //TV = 7.80(227 lines)  AV=2.28  SV=5.24  BV=4.84
    {4824,1198,1024, 0, 0, 0},  //TV = 7.70(244 lines)  AV=2.28  SV=5.23  BV=4.74
    {5160,1198,1024, 0, 0, 0},  //TV = 7.60(261 lines)  AV=2.28  SV=5.23  BV=4.65
    {5516,1198,1024, 0, 0, 0},  //TV = 7.50(279 lines)  AV=2.28  SV=5.23  BV=4.55
    {5912,1198,1024, 0, 0, 0},  //TV = 7.40(299 lines)  AV=2.28  SV=5.23  BV=4.45
    {6366,1198,1024, 0, 0, 0},  //TV = 7.30(322 lines)  AV=2.28  SV=5.23  BV=4.34
    {6821,1198,1024, 0, 0, 0},  //TV = 7.20(345 lines)  AV=2.28  SV=5.23  BV=4.24
    {7315,1198,1024, 0, 0, 0},  //TV = 7.09(370 lines)  AV=2.28  SV=5.23  BV=4.14
    {7829,1198,1024, 0, 0, 0},  //TV = 7.00(396 lines)  AV=2.28  SV=5.23  BV=4.05
    {8383,1198,1024, 0, 0, 0},  //TV = 6.90(424 lines)  AV=2.28  SV=5.23  BV=3.95
    {8996,1198,1024, 0, 0, 0},  //TV = 6.80(455 lines)  AV=2.28  SV=5.23  BV=3.85
    {9628,1198,1024, 0, 0, 0},  //TV = 6.70(487 lines)  AV=2.28  SV=5.23  BV=3.75
    {10004,1239,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.27  BV=3.64
    {10004,1311,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.37  BV=3.55
    {10004,1423,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.47  BV=3.44
    {10004,1505,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.57  BV=3.35
    {10004,1618,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.67  BV=3.25
    {10004,1751,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.77  BV=3.14
    {10004,1864,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.86  BV=3.05
    {10004,1997,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.96  BV=2.95
    {10004,2150,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.07  BV=2.85
    {10004,2304,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.17  BV=2.75
    {10004,2447,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.27  BV=2.65
    {10004,2652,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.37  BV=2.55
    {10004,2816,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.47  BV=2.45
    {10004,3052,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.58  BV=2.34
    {10004,3236,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.67  BV=2.25
    {10004,3492,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.77  BV=2.15
    {10004,3748,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.87  BV=2.05
    {10004,3973,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.97  BV=1.95
    {10004,4301,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.07  BV=1.85
    {10004,4598,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.17  BV=1.75
    {10004,4946,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.27  BV=1.65
    {20008,2621,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.37  BV=1.55
    {20008,2816,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.47  BV=1.45
    {20008,3011,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.57  BV=1.35
    {20008,3236,1024, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.66  BV=1.26
    {20008,3492,1024, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.77  BV=1.15
    {20008,3697,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.86  BV=1.05
    {29992,2673,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.40  BV=0.94
    {29992,2877,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.49  BV=0.84
    {29992,3052,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.58  BV=0.76
    {29992,3277,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.69  BV=0.64
    {29992,3492,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.78  BV=0.55
    {29992,3799,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.89  BV=0.44
    {29992,4035,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.99  BV=0.34
    {29992,4301,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.08  BV=0.25
    {29992,4598,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.18  BV=0.16
    {29992,4946,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.28  BV=0.05
    {29992,5345,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29992,5704,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.49  BV=-0.15
    {29992,6093,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29992,6554,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.69  BV=-0.36
    {29992,6902,1048, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.79  BV=-0.45
    {29992,7485,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29992,7946,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.98  BV=-0.64
    {29992,8192,1088, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.09  BV=-0.75
    {29992,8192,1160, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29992,8192,1248, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.29  BV=-0.95
    {29992,8192,1280, 0, 0, 0},  /* TV = 5.06(1517 lines)  AV=2.28  SV=8.32  BV=-0.99 */
    {29992,8192,1280, 0, 0, 0},  /* TV = 5.06(1517 lines)  AV=2.28  SV=8.32  BV=-0.99 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom3AutoTable =
{
    AETABLE_CUSTOM3_AUTO, //eAETableID
    116, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -12, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sCustom3PLineTable_60Hz,
    sCustom3PLineTable_50Hz,
    NULL,
};
static strEvPline sCustom4PLineTable_60Hz =
{
{
    {99,1198,1032, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.24  BV=10.34
    {99,1280,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.32  BV=10.26
    {99,1382,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.43  BV=10.14
    {119,1239,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.27  BV=10.04
    {119,1311,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.36  BV=9.96
    {139,1219,1032, 0, 0, 0},  /* TV = 12.81(7 lines)  AV=2.28  SV=5.26  BV=9.82 */
    {139,1311,1032, 0, 0, 0},  //TV = 12.81(7 lines)  AV=2.28  SV=5.37  BV=9.72
    {159,1249,1024, 0, 0, 0},  //TV = 12.62(8 lines)  AV=2.28  SV=5.29  BV=9.61
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(9 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(9 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {198,1198,1032, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.24  BV=9.34
    {198,1280,1024, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.32  BV=9.26
    {218,1249,1024, 0, 0, 0},  //TV = 12.16(11 lines)  AV=2.28  SV=5.29  BV=9.15
    {238,1219,1032, 0, 0, 0},  //TV = 12.04(12 lines)  AV=2.28  SV=5.26  BV=9.05
    {258,1198,1032, 0, 0, 0},  //TV = 11.92(13 lines)  AV=2.28  SV=5.24  BV=8.96
    {277,1198,1032, 0, 0, 0},  //TV = 11.82(14 lines)  AV=2.28  SV=5.24  BV=8.86
    {297,1198,1032, 0, 0, 0},  //TV = 11.72(15 lines)  AV=2.28  SV=5.24  BV=8.75
    {317,1219,1024, 0, 0, 0},  //TV = 11.62(16 lines)  AV=2.28  SV=5.25  BV=8.65
    {337,1219,1032, 0, 0, 0},  //TV = 11.53(17 lines)  AV=2.28  SV=5.26  BV=8.55
    {356,1239,1024, 0, 0, 0},  //TV = 11.46(18 lines)  AV=2.28  SV=5.27  BV=8.46
    {396,1198,1024, 0, 0, 0},  //TV = 11.30(20 lines)  AV=2.28  SV=5.23  BV=8.35
    {416,1219,1024, 0, 0, 0},  //TV = 11.23(21 lines)  AV=2.28  SV=5.25  BV=8.25
    {455,1198,1024, 0, 0, 0},  //TV = 11.10(23 lines)  AV=2.28  SV=5.23  BV=8.15
    {475,1219,1032, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.28  SV=5.26  BV=8.05
    {515,1219,1024, 0, 0, 0},  //TV = 10.92(26 lines)  AV=2.28  SV=5.25  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(28 lines)  AV=2.28  SV=5.24  BV=7.86
    {594,1198,1032, 0, 0, 0},  //TV = 10.72(30 lines)  AV=2.28  SV=5.24  BV=7.75
    {633,1219,1024, 0, 0, 0},  //TV = 10.63(32 lines)  AV=2.28  SV=5.25  BV=7.65
    {692,1198,1024, 0, 0, 0},  //TV = 10.50(35 lines)  AV=2.28  SV=5.23  BV=7.55
    {732,1198,1032, 0, 0, 0},  //TV = 10.42(37 lines)  AV=2.28  SV=5.24  BV=7.45
    {791,1198,1032, 0, 0, 0},  //TV = 10.30(40 lines)  AV=2.28  SV=5.24  BV=7.34
    {851,1198,1032, 0, 0, 0},  //TV = 10.20(43 lines)  AV=2.28  SV=5.24  BV=7.24
    {910,1198,1024, 0, 0, 0},  //TV = 10.10(46 lines)  AV=2.28  SV=5.23  BV=7.15
    {969,1198,1032, 0, 0, 0},  //TV = 10.01(49 lines)  AV=2.28  SV=5.24  BV=7.05
    {1048,1198,1024, 0, 0, 0},  //TV = 9.90(53 lines)  AV=2.28  SV=5.23  BV=6.95
    {1108,1198,1032, 0, 0, 0},  //TV = 9.82(56 lines)  AV=2.28  SV=5.24  BV=6.86
    {1187,1198,1032, 0, 0, 0},  //TV = 9.72(60 lines)  AV=2.28  SV=5.24  BV=6.76
    {1286,1198,1032, 0, 0, 0},  //TV = 9.60(65 lines)  AV=2.28  SV=5.24  BV=6.64
    {1365,1198,1032, 0, 0, 0},  //TV = 9.52(69 lines)  AV=2.28  SV=5.24  BV=6.55
    {1483,1198,1024, 0, 0, 0},  //TV = 9.40(75 lines)  AV=2.28  SV=5.23  BV=6.45
    {1582,1198,1032, 0, 0, 0},  //TV = 9.30(80 lines)  AV=2.28  SV=5.24  BV=6.34
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(86 lines)  AV=2.28  SV=5.23  BV=6.25
    {1819,1198,1024, 0, 0, 0},  //TV = 9.10(92 lines)  AV=2.28  SV=5.23  BV=6.15
    {1938,1198,1032, 0, 0, 0},  //TV = 9.01(98 lines)  AV=2.28  SV=5.24  BV=6.05
    {2076,1198,1032, 0, 0, 0},  //TV = 8.91(105 lines)  AV=2.28  SV=5.24  BV=5.95
    {2235,1198,1032, 0, 0, 0},  //TV = 8.81(113 lines)  AV=2.28  SV=5.24  BV=5.84
    {2412,1198,1024, 0, 0, 0},  //TV = 8.70(122 lines)  AV=2.28  SV=5.23  BV=5.74
    {2571,1198,1032, 0, 0, 0},  //TV = 8.60(130 lines)  AV=2.28  SV=5.24  BV=5.64
    {2749,1198,1032, 0, 0, 0},  //TV = 8.51(139 lines)  AV=2.28  SV=5.24  BV=5.54
    {2946,1198,1032, 0, 0, 0},  //TV = 8.41(149 lines)  AV=2.28  SV=5.24  BV=5.44
    {3144,1198,1032, 0, 0, 0},  //TV = 8.31(159 lines)  AV=2.28  SV=5.24  BV=5.35
    {3401,1198,1024, 0, 0, 0},  //TV = 8.20(172 lines)  AV=2.28  SV=5.23  BV=5.25
    {3638,1198,1024, 0, 0, 0},  //TV = 8.10(184 lines)  AV=2.28  SV=5.23  BV=5.15
    {3915,1198,1032, 0, 0, 0},  //TV = 8.00(198 lines)  AV=2.28  SV=5.24  BV=5.03
    {4192,1198,1032, 0, 0, 0},  //TV = 7.90(212 lines)  AV=2.28  SV=5.24  BV=4.94
    {4488,1198,1032, 0, 0, 0},  //TV = 7.80(227 lines)  AV=2.28  SV=5.24  BV=4.84
    {4824,1198,1024, 0, 0, 0},  //TV = 7.70(244 lines)  AV=2.28  SV=5.23  BV=4.74
    {5160,1198,1024, 0, 0, 0},  //TV = 7.60(261 lines)  AV=2.28  SV=5.23  BV=4.65
    {5516,1198,1024, 0, 0, 0},  //TV = 7.50(279 lines)  AV=2.28  SV=5.23  BV=4.55
    {5912,1198,1024, 0, 0, 0},  //TV = 7.40(299 lines)  AV=2.28  SV=5.23  BV=4.45
    {6366,1198,1024, 0, 0, 0},  //TV = 7.30(322 lines)  AV=2.28  SV=5.23  BV=4.34
    {6821,1198,1024, 0, 0, 0},  //TV = 7.20(345 lines)  AV=2.28  SV=5.23  BV=4.24
    {7315,1198,1024, 0, 0, 0},  //TV = 7.09(370 lines)  AV=2.28  SV=5.23  BV=4.14
    {7829,1198,1024, 0, 0, 0},  //TV = 7.00(396 lines)  AV=2.28  SV=5.23  BV=4.05
    {8324,1198,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.24  BV=3.95
    {8324,1280,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.33  BV=3.85
    {8324,1382,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.43  BV=3.75
    {8324,1475,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.54  BV=3.65
    {8324,1587,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.63  BV=3.55
    {8324,1710,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.74  BV=3.44
    {8324,1823,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.83  BV=3.35
    {8324,1956,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.93  BV=3.25
    {8324,2099,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=6.04  BV=3.15
    {8324,2243,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=6.13  BV=3.05
    {16667,1198,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.24  BV=2.94
    {16667,1280,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.33  BV=2.85
    {16667,1382,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.43  BV=2.75
    {16667,1495,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.55  BV=2.64
    {16667,1587,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.63  BV=2.55
    {16667,1700,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.73  BV=2.45
    {16667,1823,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.83  BV=2.35
    {16667,1956,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.93  BV=2.25
    {16667,2079,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.03  BV=2.15
    {16667,2243,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.13  BV=2.05
    {16667,2406,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.23  BV=1.95
    {16667,2570,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.33  BV=1.85
    {16667,2755,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.44  BV=1.74
    {16667,2949,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.54  BV=1.64
    {16667,3154,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.62  BV=1.56
    {16667,3400,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.73  BV=1.45
    {16667,3645,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.83  BV=1.35
    {24990,2591,1024, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.34  BV=1.26
    {24990,2785,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.45  BV=1.14
    {24990,3011,1024, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.56  BV=1.04
    {24990,3195,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.65  BV=0.94
    {24990,3400,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.74  BV=0.85
    {33333,2755,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.44  BV=0.74
    {33333,2980,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.54  BV=0.64
    {33333,3154,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.62  BV=0.56
    {33333,3400,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.73  BV=0.45
    {33333,3645,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.83  BV=0.35
    {33333,3912,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.93  BV=0.25
    {33333,4157,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.03  BV=0.15
    {33333,4444,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.13  BV=0.05
    {33333,4762,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33333,5140,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.34  BV=-0.16
    {33333,5458,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.44  BV=-0.25
    {33333,5827,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33333,6246,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33333,6717,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33333,7281,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33333,7711,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33333,8192,1048, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33333,8192,1120, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33333,8192,1200, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.23  BV=-1.05
    {33333,8192,1280, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.32  BV=-1.14
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom4PLineTable_50Hz =
{
{
    {99,1198,1032, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.24  BV=10.34
    {99,1280,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.32  BV=10.26
    {99,1382,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.43  BV=10.14
    {119,1239,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.27  BV=10.04
    {119,1311,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.36  BV=9.96
    {139,1219,1032, 0, 0, 0},  /* TV = 12.81(7 lines)  AV=2.28  SV=5.26  BV=9.82 */
    {139,1311,1032, 0, 0, 0},  //TV = 12.81(7 lines)  AV=2.28  SV=5.37  BV=9.72
    {159,1249,1024, 0, 0, 0},  //TV = 12.62(8 lines)  AV=2.28  SV=5.29  BV=9.61
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(9 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(9 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {198,1198,1032, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.24  BV=9.34
    {198,1280,1024, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.32  BV=9.26
    {218,1249,1024, 0, 0, 0},  //TV = 12.16(11 lines)  AV=2.28  SV=5.29  BV=9.15
    {238,1219,1032, 0, 0, 0},  //TV = 12.04(12 lines)  AV=2.28  SV=5.26  BV=9.05
    {258,1198,1032, 0, 0, 0},  //TV = 11.92(13 lines)  AV=2.28  SV=5.24  BV=8.96
    {277,1198,1032, 0, 0, 0},  //TV = 11.82(14 lines)  AV=2.28  SV=5.24  BV=8.86
    {297,1198,1032, 0, 0, 0},  //TV = 11.72(15 lines)  AV=2.28  SV=5.24  BV=8.75
    {317,1219,1024, 0, 0, 0},  //TV = 11.62(16 lines)  AV=2.28  SV=5.25  BV=8.65
    {337,1219,1032, 0, 0, 0},  //TV = 11.53(17 lines)  AV=2.28  SV=5.26  BV=8.55
    {356,1239,1024, 0, 0, 0},  //TV = 11.46(18 lines)  AV=2.28  SV=5.27  BV=8.46
    {396,1198,1024, 0, 0, 0},  //TV = 11.30(20 lines)  AV=2.28  SV=5.23  BV=8.35
    {416,1219,1024, 0, 0, 0},  //TV = 11.23(21 lines)  AV=2.28  SV=5.25  BV=8.25
    {455,1198,1024, 0, 0, 0},  //TV = 11.10(23 lines)  AV=2.28  SV=5.23  BV=8.15
    {475,1219,1032, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.28  SV=5.26  BV=8.05
    {515,1219,1024, 0, 0, 0},  //TV = 10.92(26 lines)  AV=2.28  SV=5.25  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(28 lines)  AV=2.28  SV=5.24  BV=7.86
    {594,1198,1032, 0, 0, 0},  //TV = 10.72(30 lines)  AV=2.28  SV=5.24  BV=7.75
    {633,1219,1024, 0, 0, 0},  //TV = 10.63(32 lines)  AV=2.28  SV=5.25  BV=7.65
    {692,1198,1024, 0, 0, 0},  //TV = 10.50(35 lines)  AV=2.28  SV=5.23  BV=7.55
    {732,1198,1032, 0, 0, 0},  //TV = 10.42(37 lines)  AV=2.28  SV=5.24  BV=7.45
    {791,1198,1032, 0, 0, 0},  //TV = 10.30(40 lines)  AV=2.28  SV=5.24  BV=7.34
    {851,1198,1032, 0, 0, 0},  //TV = 10.20(43 lines)  AV=2.28  SV=5.24  BV=7.24
    {910,1198,1024, 0, 0, 0},  //TV = 10.10(46 lines)  AV=2.28  SV=5.23  BV=7.15
    {969,1198,1032, 0, 0, 0},  //TV = 10.01(49 lines)  AV=2.28  SV=5.24  BV=7.05
    {1048,1198,1024, 0, 0, 0},  //TV = 9.90(53 lines)  AV=2.28  SV=5.23  BV=6.95
    {1108,1198,1032, 0, 0, 0},  //TV = 9.82(56 lines)  AV=2.28  SV=5.24  BV=6.86
    {1187,1198,1032, 0, 0, 0},  //TV = 9.72(60 lines)  AV=2.28  SV=5.24  BV=6.76
    {1286,1198,1032, 0, 0, 0},  //TV = 9.60(65 lines)  AV=2.28  SV=5.24  BV=6.64
    {1365,1198,1032, 0, 0, 0},  //TV = 9.52(69 lines)  AV=2.28  SV=5.24  BV=6.55
    {1483,1198,1024, 0, 0, 0},  //TV = 9.40(75 lines)  AV=2.28  SV=5.23  BV=6.45
    {1582,1198,1032, 0, 0, 0},  //TV = 9.30(80 lines)  AV=2.28  SV=5.24  BV=6.34
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(86 lines)  AV=2.28  SV=5.23  BV=6.25
    {1819,1198,1024, 0, 0, 0},  //TV = 9.10(92 lines)  AV=2.28  SV=5.23  BV=6.15
    {1938,1198,1032, 0, 0, 0},  //TV = 9.01(98 lines)  AV=2.28  SV=5.24  BV=6.05
    {2076,1198,1032, 0, 0, 0},  //TV = 8.91(105 lines)  AV=2.28  SV=5.24  BV=5.95
    {2235,1198,1032, 0, 0, 0},  //TV = 8.81(113 lines)  AV=2.28  SV=5.24  BV=5.84
    {2412,1198,1024, 0, 0, 0},  //TV = 8.70(122 lines)  AV=2.28  SV=5.23  BV=5.74
    {2571,1198,1032, 0, 0, 0},  //TV = 8.60(130 lines)  AV=2.28  SV=5.24  BV=5.64
    {2749,1198,1032, 0, 0, 0},  //TV = 8.51(139 lines)  AV=2.28  SV=5.24  BV=5.54
    {2946,1198,1032, 0, 0, 0},  //TV = 8.41(149 lines)  AV=2.28  SV=5.24  BV=5.44
    {3144,1198,1032, 0, 0, 0},  //TV = 8.31(159 lines)  AV=2.28  SV=5.24  BV=5.35
    {3401,1198,1024, 0, 0, 0},  //TV = 8.20(172 lines)  AV=2.28  SV=5.23  BV=5.25
    {3638,1198,1024, 0, 0, 0},  //TV = 8.10(184 lines)  AV=2.28  SV=5.23  BV=5.15
    {3915,1198,1032, 0, 0, 0},  //TV = 8.00(198 lines)  AV=2.28  SV=5.24  BV=5.03
    {4192,1198,1032, 0, 0, 0},  //TV = 7.90(212 lines)  AV=2.28  SV=5.24  BV=4.94
    {4488,1198,1032, 0, 0, 0},  //TV = 7.80(227 lines)  AV=2.28  SV=5.24  BV=4.84
    {4824,1198,1024, 0, 0, 0},  //TV = 7.70(244 lines)  AV=2.28  SV=5.23  BV=4.74
    {5160,1198,1024, 0, 0, 0},  //TV = 7.60(261 lines)  AV=2.28  SV=5.23  BV=4.65
    {5516,1198,1024, 0, 0, 0},  //TV = 7.50(279 lines)  AV=2.28  SV=5.23  BV=4.55
    {5912,1198,1024, 0, 0, 0},  //TV = 7.40(299 lines)  AV=2.28  SV=5.23  BV=4.45
    {6366,1198,1024, 0, 0, 0},  //TV = 7.30(322 lines)  AV=2.28  SV=5.23  BV=4.34
    {6821,1198,1024, 0, 0, 0},  //TV = 7.20(345 lines)  AV=2.28  SV=5.23  BV=4.24
    {7315,1198,1024, 0, 0, 0},  //TV = 7.09(370 lines)  AV=2.28  SV=5.23  BV=4.14
    {7829,1198,1024, 0, 0, 0},  //TV = 7.00(396 lines)  AV=2.28  SV=5.23  BV=4.05
    {8383,1198,1024, 0, 0, 0},  //TV = 6.90(424 lines)  AV=2.28  SV=5.23  BV=3.95
    {8996,1198,1024, 0, 0, 0},  //TV = 6.80(455 lines)  AV=2.28  SV=5.23  BV=3.85
    {9628,1198,1024, 0, 0, 0},  //TV = 6.70(487 lines)  AV=2.28  SV=5.23  BV=3.75
    {10004,1239,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.27  BV=3.64
    {10004,1311,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.37  BV=3.55
    {10004,1423,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.47  BV=3.44
    {10004,1505,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.57  BV=3.35
    {10004,1618,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.67  BV=3.25
    {10004,1751,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.77  BV=3.14
    {10004,1864,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.86  BV=3.05
    {10004,1997,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.96  BV=2.95
    {10004,2150,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.07  BV=2.85
    {10004,2304,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.17  BV=2.75
    {10004,2447,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.27  BV=2.65
    {10004,2652,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.37  BV=2.55
    {10004,2816,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.47  BV=2.45
    {10004,3052,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.58  BV=2.34
    {10004,3236,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.67  BV=2.25
    {10004,3492,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.77  BV=2.15
    {10004,3748,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.87  BV=2.05
    {10004,3973,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.97  BV=1.95
    {10004,4301,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.07  BV=1.85
    {10004,4598,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.17  BV=1.75
    {10004,4946,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.27  BV=1.65
    {20008,2621,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.37  BV=1.55
    {20008,2816,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.47  BV=1.45
    {20008,3011,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.57  BV=1.35
    {20008,3236,1024, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.66  BV=1.26
    {20008,3492,1024, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.77  BV=1.15
    {20008,3697,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.86  BV=1.05
    {29992,2673,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.40  BV=0.94
    {29992,2877,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.49  BV=0.84
    {29992,3052,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.58  BV=0.76
    {29992,3277,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.69  BV=0.64
    {29992,3492,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.78  BV=0.55
    {29992,3799,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.89  BV=0.44
    {29992,4035,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.99  BV=0.34
    {29992,4301,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.08  BV=0.25
    {29992,4598,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.18  BV=0.16
    {29992,4946,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.28  BV=0.05
    {29992,5345,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29992,5704,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.49  BV=-0.15
    {29992,6093,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29992,6554,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.69  BV=-0.36
    {29992,6902,1048, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.79  BV=-0.45
    {29992,7485,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29992,7946,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.98  BV=-0.64
    {29992,8192,1088, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.09  BV=-0.75
    {29992,8192,1160, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29992,8192,1248, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.29  BV=-0.95
    {29992,8192,1280, 0, 0, 0},  /* TV = 5.06(1517 lines)  AV=2.28  SV=8.32  BV=-0.99 */
    {29992,8192,1280, 0, 0, 0},  /* TV = 5.06(1517 lines)  AV=2.28  SV=8.32  BV=-0.99 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom4AutoTable =
{
    AETABLE_CUSTOM4_AUTO, //eAETableID
    116, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -12, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sCustom4PLineTable_60Hz,
    sCustom4PLineTable_50Hz,
    NULL,
};
static strEvPline sCustom5PLineTable_60Hz =
{
{
    {99,1198,1032, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.24  BV=10.34
    {99,1280,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.32  BV=10.26
    {99,1382,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.43  BV=10.14
    {119,1239,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.27  BV=10.04
    {119,1311,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.36  BV=9.96
    {139,1219,1032, 0, 0, 0},  /* TV = 12.81(7 lines)  AV=2.28  SV=5.26  BV=9.82 */
    {139,1311,1032, 0, 0, 0},  //TV = 12.81(7 lines)  AV=2.28  SV=5.37  BV=9.72
    {159,1249,1024, 0, 0, 0},  //TV = 12.62(8 lines)  AV=2.28  SV=5.29  BV=9.61
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(9 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(9 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {198,1198,1032, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.24  BV=9.34
    {198,1280,1024, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.32  BV=9.26
    {218,1249,1024, 0, 0, 0},  //TV = 12.16(11 lines)  AV=2.28  SV=5.29  BV=9.15
    {238,1219,1032, 0, 0, 0},  //TV = 12.04(12 lines)  AV=2.28  SV=5.26  BV=9.05
    {258,1198,1032, 0, 0, 0},  //TV = 11.92(13 lines)  AV=2.28  SV=5.24  BV=8.96
    {277,1198,1032, 0, 0, 0},  //TV = 11.82(14 lines)  AV=2.28  SV=5.24  BV=8.86
    {297,1198,1032, 0, 0, 0},  //TV = 11.72(15 lines)  AV=2.28  SV=5.24  BV=8.75
    {317,1219,1024, 0, 0, 0},  //TV = 11.62(16 lines)  AV=2.28  SV=5.25  BV=8.65
    {337,1219,1032, 0, 0, 0},  //TV = 11.53(17 lines)  AV=2.28  SV=5.26  BV=8.55
    {356,1239,1024, 0, 0, 0},  //TV = 11.46(18 lines)  AV=2.28  SV=5.27  BV=8.46
    {396,1198,1024, 0, 0, 0},  //TV = 11.30(20 lines)  AV=2.28  SV=5.23  BV=8.35
    {416,1219,1024, 0, 0, 0},  //TV = 11.23(21 lines)  AV=2.28  SV=5.25  BV=8.25
    {455,1198,1024, 0, 0, 0},  //TV = 11.10(23 lines)  AV=2.28  SV=5.23  BV=8.15
    {475,1219,1032, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.28  SV=5.26  BV=8.05
    {515,1219,1024, 0, 0, 0},  //TV = 10.92(26 lines)  AV=2.28  SV=5.25  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(28 lines)  AV=2.28  SV=5.24  BV=7.86
    {594,1198,1032, 0, 0, 0},  //TV = 10.72(30 lines)  AV=2.28  SV=5.24  BV=7.75
    {633,1219,1024, 0, 0, 0},  //TV = 10.63(32 lines)  AV=2.28  SV=5.25  BV=7.65
    {692,1198,1024, 0, 0, 0},  //TV = 10.50(35 lines)  AV=2.28  SV=5.23  BV=7.55
    {732,1198,1032, 0, 0, 0},  //TV = 10.42(37 lines)  AV=2.28  SV=5.24  BV=7.45
    {791,1198,1032, 0, 0, 0},  //TV = 10.30(40 lines)  AV=2.28  SV=5.24  BV=7.34
    {851,1198,1032, 0, 0, 0},  //TV = 10.20(43 lines)  AV=2.28  SV=5.24  BV=7.24
    {910,1198,1024, 0, 0, 0},  //TV = 10.10(46 lines)  AV=2.28  SV=5.23  BV=7.15
    {969,1198,1032, 0, 0, 0},  //TV = 10.01(49 lines)  AV=2.28  SV=5.24  BV=7.05
    {1048,1198,1024, 0, 0, 0},  //TV = 9.90(53 lines)  AV=2.28  SV=5.23  BV=6.95
    {1108,1198,1032, 0, 0, 0},  //TV = 9.82(56 lines)  AV=2.28  SV=5.24  BV=6.86
    {1187,1198,1032, 0, 0, 0},  //TV = 9.72(60 lines)  AV=2.28  SV=5.24  BV=6.76
    {1286,1198,1032, 0, 0, 0},  //TV = 9.60(65 lines)  AV=2.28  SV=5.24  BV=6.64
    {1365,1198,1032, 0, 0, 0},  //TV = 9.52(69 lines)  AV=2.28  SV=5.24  BV=6.55
    {1483,1198,1024, 0, 0, 0},  //TV = 9.40(75 lines)  AV=2.28  SV=5.23  BV=6.45
    {1582,1198,1032, 0, 0, 0},  //TV = 9.30(80 lines)  AV=2.28  SV=5.24  BV=6.34
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(86 lines)  AV=2.28  SV=5.23  BV=6.25
    {1819,1198,1024, 0, 0, 0},  //TV = 9.10(92 lines)  AV=2.28  SV=5.23  BV=6.15
    {1938,1198,1032, 0, 0, 0},  //TV = 9.01(98 lines)  AV=2.28  SV=5.24  BV=6.05
    {2076,1198,1032, 0, 0, 0},  //TV = 8.91(105 lines)  AV=2.28  SV=5.24  BV=5.95
    {2235,1198,1032, 0, 0, 0},  //TV = 8.81(113 lines)  AV=2.28  SV=5.24  BV=5.84
    {2412,1198,1024, 0, 0, 0},  //TV = 8.70(122 lines)  AV=2.28  SV=5.23  BV=5.74
    {2571,1198,1032, 0, 0, 0},  //TV = 8.60(130 lines)  AV=2.28  SV=5.24  BV=5.64
    {2749,1198,1032, 0, 0, 0},  //TV = 8.51(139 lines)  AV=2.28  SV=5.24  BV=5.54
    {2946,1198,1032, 0, 0, 0},  //TV = 8.41(149 lines)  AV=2.28  SV=5.24  BV=5.44
    {3144,1198,1032, 0, 0, 0},  //TV = 8.31(159 lines)  AV=2.28  SV=5.24  BV=5.35
    {3401,1198,1024, 0, 0, 0},  //TV = 8.20(172 lines)  AV=2.28  SV=5.23  BV=5.25
    {3638,1198,1024, 0, 0, 0},  //TV = 8.10(184 lines)  AV=2.28  SV=5.23  BV=5.15
    {3915,1198,1032, 0, 0, 0},  //TV = 8.00(198 lines)  AV=2.28  SV=5.24  BV=5.03
    {4192,1198,1032, 0, 0, 0},  //TV = 7.90(212 lines)  AV=2.28  SV=5.24  BV=4.94
    {4488,1198,1032, 0, 0, 0},  //TV = 7.80(227 lines)  AV=2.28  SV=5.24  BV=4.84
    {4824,1198,1024, 0, 0, 0},  //TV = 7.70(244 lines)  AV=2.28  SV=5.23  BV=4.74
    {5160,1198,1024, 0, 0, 0},  //TV = 7.60(261 lines)  AV=2.28  SV=5.23  BV=4.65
    {5516,1198,1024, 0, 0, 0},  //TV = 7.50(279 lines)  AV=2.28  SV=5.23  BV=4.55
    {5912,1198,1024, 0, 0, 0},  //TV = 7.40(299 lines)  AV=2.28  SV=5.23  BV=4.45
    {6366,1198,1024, 0, 0, 0},  //TV = 7.30(322 lines)  AV=2.28  SV=5.23  BV=4.34
    {6821,1198,1024, 0, 0, 0},  //TV = 7.20(345 lines)  AV=2.28  SV=5.23  BV=4.24
    {7315,1198,1024, 0, 0, 0},  //TV = 7.09(370 lines)  AV=2.28  SV=5.23  BV=4.14
    {7829,1198,1024, 0, 0, 0},  //TV = 7.00(396 lines)  AV=2.28  SV=5.23  BV=4.05
    {8324,1198,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.24  BV=3.95
    {8324,1280,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.33  BV=3.85
    {8324,1382,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.43  BV=3.75
    {8324,1475,1032, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.54  BV=3.65
    {8324,1587,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.63  BV=3.55
    {8324,1710,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.74  BV=3.44
    {8324,1823,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.83  BV=3.35
    {8324,1956,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=5.93  BV=3.25
    {8324,2099,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=6.04  BV=3.15
    {8324,2243,1024, 0, 0, 0},  //TV = 6.91(421 lines)  AV=2.28  SV=6.13  BV=3.05
    {16667,1198,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.24  BV=2.94
    {16667,1280,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.33  BV=2.85
    {16667,1382,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.43  BV=2.75
    {16667,1495,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.55  BV=2.64
    {16667,1587,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.63  BV=2.55
    {16667,1700,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.73  BV=2.45
    {16667,1823,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.83  BV=2.35
    {16667,1956,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=5.93  BV=2.25
    {16667,2079,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.03  BV=2.15
    {16667,2243,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.13  BV=2.05
    {16667,2406,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.23  BV=1.95
    {16667,2570,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.33  BV=1.85
    {16667,2755,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.44  BV=1.74
    {16667,2949,1032, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.54  BV=1.64
    {16667,3154,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.62  BV=1.56
    {16667,3400,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.73  BV=1.45
    {16667,3645,1024, 0, 0, 0},  //TV = 5.91(843 lines)  AV=2.28  SV=6.83  BV=1.35
    {24990,2591,1024, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.34  BV=1.26
    {24990,2785,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.45  BV=1.14
    {24990,3011,1024, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.56  BV=1.04
    {24990,3195,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.65  BV=0.94
    {24990,3400,1032, 0, 0, 0},  //TV = 5.32(1264 lines)  AV=2.28  SV=6.74  BV=0.85
    {33333,2755,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.44  BV=0.74
    {33333,2980,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.54  BV=0.64
    {33333,3154,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.62  BV=0.56
    {33333,3400,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.73  BV=0.45
    {33333,3645,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.83  BV=0.35
    {33333,3912,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=6.93  BV=0.25
    {33333,4157,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.03  BV=0.15
    {33333,4444,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.13  BV=0.05
    {33333,4762,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33333,5140,1032, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.34  BV=-0.16
    {33333,5458,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.44  BV=-0.25
    {33333,5827,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33333,6246,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33333,6717,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33333,7281,1024, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33333,7711,1040, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33333,8192,1048, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33333,8192,1120, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33333,8192,1200, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.23  BV=-1.05
    {33333,8192,1280, 0, 0, 0},  //TV = 4.91(1686 lines)  AV=2.28  SV=8.32  BV=-1.14
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCustom5PLineTable_50Hz =
{
{
    {99,1198,1032, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.24  BV=10.34
    {99,1280,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.32  BV=10.26
    {99,1382,1024, 0, 0, 0},  //TV = 13.30(5 lines)  AV=2.28  SV=5.43  BV=10.14
    {119,1239,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.27  BV=10.04
    {119,1311,1024, 0, 0, 0},  //TV = 13.04(6 lines)  AV=2.28  SV=5.36  BV=9.96
    {139,1219,1032, 0, 0, 0},  /* TV = 12.81(7 lines)  AV=2.28  SV=5.26  BV=9.82 */
    {139,1311,1032, 0, 0, 0},  //TV = 12.81(7 lines)  AV=2.28  SV=5.37  BV=9.72
    {159,1249,1024, 0, 0, 0},  //TV = 12.62(8 lines)  AV=2.28  SV=5.29  BV=9.61
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(9 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(9 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {198,1198,1032, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.24  BV=9.34
    {198,1280,1024, 0, 0, 0},  //TV = 12.30(10 lines)  AV=2.28  SV=5.32  BV=9.26
    {218,1249,1024, 0, 0, 0},  //TV = 12.16(11 lines)  AV=2.28  SV=5.29  BV=9.15
    {238,1219,1032, 0, 0, 0},  //TV = 12.04(12 lines)  AV=2.28  SV=5.26  BV=9.05
    {258,1198,1032, 0, 0, 0},  //TV = 11.92(13 lines)  AV=2.28  SV=5.24  BV=8.96
    {277,1198,1032, 0, 0, 0},  //TV = 11.82(14 lines)  AV=2.28  SV=5.24  BV=8.86
    {297,1198,1032, 0, 0, 0},  //TV = 11.72(15 lines)  AV=2.28  SV=5.24  BV=8.75
    {317,1219,1024, 0, 0, 0},  //TV = 11.62(16 lines)  AV=2.28  SV=5.25  BV=8.65
    {337,1219,1032, 0, 0, 0},  //TV = 11.53(17 lines)  AV=2.28  SV=5.26  BV=8.55
    {356,1239,1024, 0, 0, 0},  //TV = 11.46(18 lines)  AV=2.28  SV=5.27  BV=8.46
    {396,1198,1024, 0, 0, 0},  //TV = 11.30(20 lines)  AV=2.28  SV=5.23  BV=8.35
    {416,1219,1024, 0, 0, 0},  //TV = 11.23(21 lines)  AV=2.28  SV=5.25  BV=8.25
    {455,1198,1024, 0, 0, 0},  //TV = 11.10(23 lines)  AV=2.28  SV=5.23  BV=8.15
    {475,1219,1032, 0, 0, 0},  //TV = 11.04(24 lines)  AV=2.28  SV=5.26  BV=8.05
    {515,1219,1024, 0, 0, 0},  //TV = 10.92(26 lines)  AV=2.28  SV=5.25  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(28 lines)  AV=2.28  SV=5.24  BV=7.86
    {594,1198,1032, 0, 0, 0},  //TV = 10.72(30 lines)  AV=2.28  SV=5.24  BV=7.75
    {633,1219,1024, 0, 0, 0},  //TV = 10.63(32 lines)  AV=2.28  SV=5.25  BV=7.65
    {692,1198,1024, 0, 0, 0},  //TV = 10.50(35 lines)  AV=2.28  SV=5.23  BV=7.55
    {732,1198,1032, 0, 0, 0},  //TV = 10.42(37 lines)  AV=2.28  SV=5.24  BV=7.45
    {791,1198,1032, 0, 0, 0},  //TV = 10.30(40 lines)  AV=2.28  SV=5.24  BV=7.34
    {851,1198,1032, 0, 0, 0},  //TV = 10.20(43 lines)  AV=2.28  SV=5.24  BV=7.24
    {910,1198,1024, 0, 0, 0},  //TV = 10.10(46 lines)  AV=2.28  SV=5.23  BV=7.15
    {969,1198,1032, 0, 0, 0},  //TV = 10.01(49 lines)  AV=2.28  SV=5.24  BV=7.05
    {1048,1198,1024, 0, 0, 0},  //TV = 9.90(53 lines)  AV=2.28  SV=5.23  BV=6.95
    {1108,1198,1032, 0, 0, 0},  //TV = 9.82(56 lines)  AV=2.28  SV=5.24  BV=6.86
    {1187,1198,1032, 0, 0, 0},  //TV = 9.72(60 lines)  AV=2.28  SV=5.24  BV=6.76
    {1286,1198,1032, 0, 0, 0},  //TV = 9.60(65 lines)  AV=2.28  SV=5.24  BV=6.64
    {1365,1198,1032, 0, 0, 0},  //TV = 9.52(69 lines)  AV=2.28  SV=5.24  BV=6.55
    {1483,1198,1024, 0, 0, 0},  //TV = 9.40(75 lines)  AV=2.28  SV=5.23  BV=6.45
    {1582,1198,1032, 0, 0, 0},  //TV = 9.30(80 lines)  AV=2.28  SV=5.24  BV=6.34
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(86 lines)  AV=2.28  SV=5.23  BV=6.25
    {1819,1198,1024, 0, 0, 0},  //TV = 9.10(92 lines)  AV=2.28  SV=5.23  BV=6.15
    {1938,1198,1032, 0, 0, 0},  //TV = 9.01(98 lines)  AV=2.28  SV=5.24  BV=6.05
    {2076,1198,1032, 0, 0, 0},  //TV = 8.91(105 lines)  AV=2.28  SV=5.24  BV=5.95
    {2235,1198,1032, 0, 0, 0},  //TV = 8.81(113 lines)  AV=2.28  SV=5.24  BV=5.84
    {2412,1198,1024, 0, 0, 0},  //TV = 8.70(122 lines)  AV=2.28  SV=5.23  BV=5.74
    {2571,1198,1032, 0, 0, 0},  //TV = 8.60(130 lines)  AV=2.28  SV=5.24  BV=5.64
    {2749,1198,1032, 0, 0, 0},  //TV = 8.51(139 lines)  AV=2.28  SV=5.24  BV=5.54
    {2946,1198,1032, 0, 0, 0},  //TV = 8.41(149 lines)  AV=2.28  SV=5.24  BV=5.44
    {3144,1198,1032, 0, 0, 0},  //TV = 8.31(159 lines)  AV=2.28  SV=5.24  BV=5.35
    {3401,1198,1024, 0, 0, 0},  //TV = 8.20(172 lines)  AV=2.28  SV=5.23  BV=5.25
    {3638,1198,1024, 0, 0, 0},  //TV = 8.10(184 lines)  AV=2.28  SV=5.23  BV=5.15
    {3915,1198,1032, 0, 0, 0},  //TV = 8.00(198 lines)  AV=2.28  SV=5.24  BV=5.03
    {4192,1198,1032, 0, 0, 0},  //TV = 7.90(212 lines)  AV=2.28  SV=5.24  BV=4.94
    {4488,1198,1032, 0, 0, 0},  //TV = 7.80(227 lines)  AV=2.28  SV=5.24  BV=4.84
    {4824,1198,1024, 0, 0, 0},  //TV = 7.70(244 lines)  AV=2.28  SV=5.23  BV=4.74
    {5160,1198,1024, 0, 0, 0},  //TV = 7.60(261 lines)  AV=2.28  SV=5.23  BV=4.65
    {5516,1198,1024, 0, 0, 0},  //TV = 7.50(279 lines)  AV=2.28  SV=5.23  BV=4.55
    {5912,1198,1024, 0, 0, 0},  //TV = 7.40(299 lines)  AV=2.28  SV=5.23  BV=4.45
    {6366,1198,1024, 0, 0, 0},  //TV = 7.30(322 lines)  AV=2.28  SV=5.23  BV=4.34
    {6821,1198,1024, 0, 0, 0},  //TV = 7.20(345 lines)  AV=2.28  SV=5.23  BV=4.24
    {7315,1198,1024, 0, 0, 0},  //TV = 7.09(370 lines)  AV=2.28  SV=5.23  BV=4.14
    {7829,1198,1024, 0, 0, 0},  //TV = 7.00(396 lines)  AV=2.28  SV=5.23  BV=4.05
    {8383,1198,1024, 0, 0, 0},  //TV = 6.90(424 lines)  AV=2.28  SV=5.23  BV=3.95
    {8996,1198,1024, 0, 0, 0},  //TV = 6.80(455 lines)  AV=2.28  SV=5.23  BV=3.85
    {9628,1198,1024, 0, 0, 0},  //TV = 6.70(487 lines)  AV=2.28  SV=5.23  BV=3.75
    {10004,1239,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.27  BV=3.64
    {10004,1311,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.37  BV=3.55
    {10004,1423,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.47  BV=3.44
    {10004,1505,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.57  BV=3.35
    {10004,1618,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.67  BV=3.25
    {10004,1751,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.77  BV=3.14
    {10004,1864,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.86  BV=3.05
    {10004,1997,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=5.96  BV=2.95
    {10004,2150,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.07  BV=2.85
    {10004,2304,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.17  BV=2.75
    {10004,2447,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.27  BV=2.65
    {10004,2652,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.37  BV=2.55
    {10004,2816,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.47  BV=2.45
    {10004,3052,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.58  BV=2.34
    {10004,3236,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.67  BV=2.25
    {10004,3492,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.77  BV=2.15
    {10004,3748,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.87  BV=2.05
    {10004,3973,1032, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=6.97  BV=1.95
    {10004,4301,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.07  BV=1.85
    {10004,4598,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.17  BV=1.75
    {10004,4946,1024, 0, 0, 0},  //TV = 6.64(506 lines)  AV=2.28  SV=7.27  BV=1.65
    {20008,2621,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.37  BV=1.55
    {20008,2816,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.47  BV=1.45
    {20008,3011,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.57  BV=1.35
    {20008,3236,1024, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.66  BV=1.26
    {20008,3492,1024, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.77  BV=1.15
    {20008,3697,1032, 0, 0, 0},  //TV = 5.64(1012 lines)  AV=2.28  SV=6.86  BV=1.05
    {29992,2673,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.40  BV=0.94
    {29992,2877,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.49  BV=0.84
    {29992,3052,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.58  BV=0.76
    {29992,3277,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.69  BV=0.64
    {29992,3492,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.78  BV=0.55
    {29992,3799,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.89  BV=0.44
    {29992,4035,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=6.99  BV=0.34
    {29992,4301,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.08  BV=0.25
    {29992,4598,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.18  BV=0.16
    {29992,4946,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.28  BV=0.05
    {29992,5345,1024, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29992,5704,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.49  BV=-0.15
    {29992,6093,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29992,6554,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.69  BV=-0.36
    {29992,6902,1048, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.79  BV=-0.45
    {29992,7485,1032, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29992,7946,1040, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=7.98  BV=-0.64
    {29992,8192,1088, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.09  BV=-0.75
    {29992,8192,1160, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29992,8192,1248, 0, 0, 0},  //TV = 5.06(1517 lines)  AV=2.28  SV=8.29  BV=-0.95
    {29992,8192,1280, 0, 0, 0},  /* TV = 5.06(1517 lines)  AV=2.28  SV=8.32  BV=-0.99 */
    {29992,8192,1280, 0, 0, 0},  /* TV = 5.06(1517 lines)  AV=2.28  SV=8.32  BV=-0.99 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_Custom5AutoTable =
{
    AETABLE_CUSTOM5_AUTO, //eAETableID
    116, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -12, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sCustom5PLineTable_60Hz,
    sCustom5PLineTable_50Hz,
    NULL,
};
static strEvPline sVideoNightPLineTable_60Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8338,1198,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.24  BV=3.94
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.54  BV=3.64
    {8338,1587,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.63  BV=3.55
    {8338,1700,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.73  BV=3.45
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1956,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.93  BV=3.25
    {8338,2079,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.03  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {16664,1198,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.24  BV=2.94
    {16664,1280,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.33  BV=2.85
    {16664,1382,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.43  BV=2.75
    {16664,1495,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.55  BV=2.64
    {16664,1587,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.64  BV=2.54
    {16664,1700,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.73  BV=2.45
    {25001,1198,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.24  BV=2.36
    {25001,1300,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.34  BV=2.25
    {25001,1393,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.46  BV=2.14
    {25001,1495,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.55  BV=2.05
    {33327,1198,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.24  BV=1.94
    {33327,1280,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.33  BV=1.85
    {33327,1382,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.43  BV=1.75
    {33327,1495,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.55  BV=1.64
    {33327,1587,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.63  BV=1.55
    {33327,1700,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.73  BV=1.45
    {33327,1823,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.83  BV=1.35
    {33327,1956,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.93  BV=1.25
    {33327,2079,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.03  BV=1.15
    {33327,2243,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.13  BV=1.05
    {33327,2406,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.23  BV=0.95
    {33327,2570,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.33  BV=0.85
    {33327,2755,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.44  BV=0.74
    {33327,2949,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.54  BV=0.64
    {33327,3154,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.63  BV=0.55
    {33327,3400,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.73  BV=0.45
    {33327,3645,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.83  BV=0.35
    {33327,3912,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.93  BV=0.25
    {33327,4157,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.03  BV=0.15
    {33327,4444,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.13  BV=0.05
    {33327,4762,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33327,5140,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.33  BV=-0.15
    {33327,5458,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.43  BV=-0.24
    {33327,5827,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33327,6246,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33327,6717,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33327,7281,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33327,7711,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33327,8192,1048, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33327,8192,1120, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33327,8192,1200, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.23  BV=-1.05
    {33327,8192,1288, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.33  BV=-1.15
    {33327,8192,1376, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.43  BV=-1.24
    {33327,8192,1480, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.53  BV=-1.35
    {33337,8192,1584, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.63  BV=-1.45
    {33337,8192,1704, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.73  BV=-1.55
    {41663,8192,1456, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.51  BV=-1.65
    {41663,8192,1560, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.61  BV=-1.75
    {41663,8192,1672, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.71  BV=-1.85
    {50000,8192,1496, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.55  BV=-1.95
    {50000,8192,1600, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.64  BV=-2.05
    {58327,8192,1472, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=8.52  BV=-2.15
    {58327,8192,1576, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=8.62  BV=-2.25
    {66663,8192,1480, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.53  BV=-2.35
    {66663,8192,1584, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.63  BV=-2.45
    {66663,8192,1696, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.73  BV=-2.55
    {66663,8192,1824, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.83  BV=-2.65
    {66663,8192,1952, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.93  BV=-2.75
    {66663,8192,2088, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.03  BV=-2.85
    {66663,8192,2240, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.13  BV=-2.95
    {66663,8192,2416, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.24  BV=-3.06
    {66663,8192,2592, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.34  BV=-3.16
    {66663,8192,2776, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.44  BV=-3.26
    {66663,8192,2976, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.54  BV=-3.36
    {66663,8192,3192, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.64  BV=-3.46
    {66663,8192,3416, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.74  BV=-3.56
    {66663,8192,3664, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.84  BV=-3.66
    {66663,8192,3928, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.94  BV=-3.76
    {66663,8192,4096, 0, 0, 0},  /* TV = 3.91(6389 lines)  AV=2.28  SV=10.00  BV=-3.82 */
    {66663,8192,4096, 0, 0, 0},  /* TV = 3.91(6389 lines)  AV=2.28  SV=10.00  BV=-3.82 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sVideoNightPLineTable_50Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8400,1198,1024, 0, 0, 0},  //TV = 6.90(805 lines)  AV=2.28  SV=5.23  BV=3.94
    {8995,1198,1024, 0, 0, 0},  //TV = 6.80(862 lines)  AV=2.28  SV=5.23  BV=3.85
    {9631,1198,1024, 0, 0, 0},  //TV = 6.70(923 lines)  AV=2.28  SV=5.23  BV=3.75
    {9996,1239,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.27  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1505,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.57  BV=3.35
    {9996,1618,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.67  BV=3.25
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1864,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.86  BV=3.06
    {9996,1997,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.96  BV=2.96
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {9996,2284,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.17  BV=2.75
    {20003,1239,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.27  BV=2.64
    {20003,1331,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.38  BV=2.54
    {20003,1423,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.47  BV=2.44
    {20003,1505,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.57  BV=2.35
    {20003,1638,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.68  BV=2.24
    {20003,1751,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.77  BV=2.14
    {29998,1239,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.27  BV=2.06
    {29998,1341,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.39  BV=1.94
    {29998,1423,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.49  BV=1.85
    {29998,1526,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.58  BV=1.76
    {29998,1638,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.68  BV=1.66
    {29998,1761,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.78  BV=1.55
    {29998,1884,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.88  BV=1.45
    {29998,2028,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.99  BV=1.35
    {29998,2150,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.08  BV=1.25
    {29998,2324,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.18  BV=1.15
    {29998,2499,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.29  BV=1.05
    {29998,2673,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.38  BV=0.95
    {29998,2847,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.49  BV=0.85
    {29998,3052,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.58  BV=0.76
    {29998,3277,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.69  BV=0.64
    {29998,3492,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.78  BV=0.55
    {29998,3748,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.88  BV=0.45
    {29998,4035,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.98  BV=0.36
    {29998,4301,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.08  BV=0.25
    {29998,4598,1040, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.19  BV=0.14
    {29998,4946,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.28  BV=0.05
    {29998,5345,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29998,5704,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.48  BV=-0.14
    {29998,6093,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29998,6554,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.69  BV=-0.36
    {29998,7086,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.79  BV=-0.46
    {29998,7485,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29998,7946,1048, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.99  BV=-0.66
    {29998,8192,1088, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.09  BV=-0.75
    {29998,8192,1160, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29998,8192,1248, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.29  BV=-0.95
    {29998,8192,1336, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.38  BV=-1.05
    {29998,8192,1432, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.48  BV=-1.15
    {29998,8192,1536, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.58  BV=-1.25
    {29998,8192,1656, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.69  BV=-1.36
    {29998,8192,1760, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.78  BV=-1.45
    {40004,8192,1416, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.47  BV=-1.55
    {40004,8192,1520, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.57  BV=-1.65
    {40004,8192,1624, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.67  BV=-1.75
    {50000,8192,1392, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.44  BV=-1.85
    {50000,8192,1496, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.55  BV=-1.95
    {50000,8192,1600, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.64  BV=-2.05
    {59996,8192,1432, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.48  BV=-2.15
    {59996,8192,1536, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.58  BV=-2.25
    {59996,8192,1640, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.68  BV=-2.35
    {70002,8192,1512, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.56  BV=-2.45
    {70002,8192,1616, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.66  BV=-2.55
    {70002,8192,1736, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.76  BV=-2.65
    {70002,8192,1856, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.86  BV=-2.75
    {70002,8192,1992, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.96  BV=-2.85
    {70002,8192,2136, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.06  BV=-2.95
    {70002,8192,2288, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.16  BV=-3.05
    {70002,8192,2464, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.27  BV=-3.16
    {70002,8192,2648, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.37  BV=-3.26
    {70002,8192,2832, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.47  BV=-3.36
    {70002,8192,3040, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.57  BV=-3.46
    {70002,8192,3256, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.67  BV=-3.56
    {70002,8192,3488, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.77  BV=-3.66
    {70002,8192,3736, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.87  BV=-3.76
    {70002,8192,4008, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.97  BV=-3.86
    {70002,8192,4096, 0, 0, 0},  /* TV = 3.84(6709 lines)  AV=2.28  SV=10.00  BV=-3.89 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_VideoNightTable =
{
    AETABLE_VIDEO_NIGHT, //eAETableID
    144, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -39, //i4MinBV
    90, //i4EffectiveMaxBV
    -10, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sVideoNightPLineTable_60Hz,
    sVideoNightPLineTable_50Hz,
    NULL,
};
static strEvPline sCaptureISO100PLineTable_60Hz =
{
{
    {94,1341,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.40  BV=10.25
    {105,1311,1032, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.37  BV=10.12
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {115,1362,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.41  BV=9.95
    {126,1362,1024, 0, 0, 0},  /* TV = 12.95(12 lines)  AV=2.28  SV=5.41  BV=9.82 */
    {136,1341,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.39  BV=9.73
    {147,1341,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.39  BV=9.62
    {157,1341,1032, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.40  BV=9.51
    {178,1280,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.32  BV=9.41
    {178,1331,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.38  BV=9.35 */
    {199,1280,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.32  BV=9.25
    {209,1311,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.36  BV=9.14
    {220,1331,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.38  BV=9.05
    {240,1311,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.36  BV=8.94
    {261,1280,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.32  BV=8.86
    {282,1270,1032, 0, 0, 0},  //TV = 11.79(27 lines)  AV=2.28  SV=5.32  BV=8.75
    {293,1311,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.36  BV=8.66
    {324,1270,1032, 0, 0, 0},  //TV = 11.59(31 lines)  AV=2.28  SV=5.32  BV=8.54
    {345,1280,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.32  BV=8.45
    {366,1300,1024, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.34  BV=8.35
    {397,1280,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.32  BV=8.25
    {428,1270,1032, 0, 0, 0},  //TV = 11.19(41 lines)  AV=2.28  SV=5.32  BV=8.14
    {449,1311,1024, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.36  BV=8.04
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {522,1280,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.32  BV=7.86
    {564,1270,1032, 0, 0, 0},  //TV = 10.79(54 lines)  AV=2.28  SV=5.32  BV=7.75
    {595,1280,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.33  BV=7.66
    {647,1270,1032, 0, 0, 0},  //TV = 10.59(62 lines)  AV=2.28  SV=5.32  BV=7.55
    {689,1280,1024, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.32  BV=7.46
    {741,1280,1024, 0, 0, 0},  //TV = 10.40(71 lines)  AV=2.28  SV=5.32  BV=7.35
    {793,1280,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.32  BV=7.25
    {846,1280,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.33  BV=7.15
    {908,1280,1024, 0, 0, 0},  //TV = 10.11(87 lines)  AV=2.28  SV=5.32  BV=7.06
    {981,1280,1024, 0, 0, 0},  //TV = 9.99(94 lines)  AV=2.28  SV=5.32  BV=6.95
    {1044,1280,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.32  BV=6.86
    {1127,1270,1032, 0, 0, 0},  //TV = 9.79(108 lines)  AV=2.28  SV=5.32  BV=6.75
    {1200,1280,1024, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.32  BV=6.66
    {1284,1280,1024, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.32  BV=6.56
    {1388,1270,1032, 0, 0, 0},  //TV = 9.49(133 lines)  AV=2.28  SV=5.32  BV=6.45
    {1493,1270,1032, 0, 0, 0},  //TV = 9.39(143 lines)  AV=2.28  SV=5.32  BV=6.34
    {1586,1280,1024, 0, 0, 0},  //TV = 9.30(152 lines)  AV=2.28  SV=5.32  BV=6.25
    {1712,1270,1032, 0, 0, 0},  //TV = 9.19(164 lines)  AV=2.28  SV=5.32  BV=6.14
    {1816,1280,1024, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.32  BV=6.06
    {1962,1270,1032, 0, 0, 0},  //TV = 8.99(188 lines)  AV=2.28  SV=5.32  BV=5.95
    {2098,1270,1032, 0, 0, 0},  //TV = 8.90(201 lines)  AV=2.28  SV=5.32  BV=5.85
    {2254,1270,1032, 0, 0, 0},  //TV = 8.79(216 lines)  AV=2.28  SV=5.32  BV=5.75
    {2411,1270,1032, 0, 0, 0},  //TV = 8.70(231 lines)  AV=2.28  SV=5.32  BV=5.65
    {2599,1270,1032, 0, 0, 0},  //TV = 8.59(249 lines)  AV=2.28  SV=5.32  BV=5.54
    {2776,1270,1032, 0, 0, 0},  //TV = 8.49(266 lines)  AV=2.28  SV=5.32  BV=5.45
    {2974,1270,1032, 0, 0, 0},  //TV = 8.39(285 lines)  AV=2.28  SV=5.32  BV=5.35
    {3183,1270,1032, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.32  BV=5.25
    {3423,1270,1032, 0, 0, 0},  //TV = 8.19(328 lines)  AV=2.28  SV=5.32  BV=5.14
    {3673,1270,1032, 0, 0, 0},  //TV = 8.09(352 lines)  AV=2.28  SV=5.32  BV=5.04
    {3924,1270,1032, 0, 0, 0},  //TV = 7.99(376 lines)  AV=2.28  SV=5.32  BV=4.95
    {4205,1270,1032, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.32  BV=4.85
    {4498,1270,1032, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.32  BV=4.75
    {4821,1270,1032, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.32  BV=4.65
    {5197,1270,1032, 0, 0, 0},  //TV = 7.59(498 lines)  AV=2.28  SV=5.32  BV=4.54
    {5562,1270,1032, 0, 0, 0},  //TV = 7.49(533 lines)  AV=2.28  SV=5.32  BV=4.44
    {5958,1270,1032, 0, 0, 0},  //TV = 7.39(571 lines)  AV=2.28  SV=5.32  BV=4.34
    {6376,1270,1032, 0, 0, 0},  //TV = 7.29(611 lines)  AV=2.28  SV=5.32  BV=4.25
    {6835,1270,1032, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.32  BV=4.15
    {7315,1270,1032, 0, 0, 0},  //TV = 7.09(701 lines)  AV=2.28  SV=5.32  BV=4.05
    {7836,1270,1032, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.32  BV=3.95
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.53  BV=3.65
    {8338,1587,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.64  BV=3.54
    {8338,1710,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.74  BV=3.44
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1956,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.93  BV=3.25
    {8338,2099,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.04  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {8338,2406,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.23  BV=2.95
    {16664,1280,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.33  BV=2.85
    {16664,1382,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.43  BV=2.75
    {16664,1475,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.54  BV=2.64
    {16664,1587,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.63  BV=2.55
    {16664,1700,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.73  BV=2.45
    {16664,1823,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.83  BV=2.35
    {25001,1300,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.34  BV=2.25
    {25001,1393,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.44  BV=2.15
    {25001,1495,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.55  BV=2.05
    {25001,1587,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.64  BV=1.95
    {33327,1300,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.34  BV=1.84
    {33327,1382,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.43  BV=1.75
    {33327,1495,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.55  BV=1.64
    {33327,1587,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.63  BV=1.55
    {41663,1362,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=5.41  BV=1.45
    {41663,1454,1032, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=5.52  BV=1.34
    {50001,1300,1024, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=5.34  BV=1.25
    {50001,1393,1024, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=5.44  BV=1.15
    {58327,1280,1032, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=5.33  BV=1.04
    {58327,1362,1032, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=5.42  BV=0.95
    {66663,1280,1032, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=5.33  BV=0.85
    {66663,1382,1024, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=5.43  BV=0.75
    {75001,1311,1024, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=5.36  BV=0.66
    {75001,1423,1024, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=5.47  BV=0.54
    {83326,1362,1024, 0, 0, 0},  //TV = 3.59(7986 lines)  AV=2.28  SV=5.41  BV=0.45
    {91663,1311,1032, 0, 0, 0},  //TV = 3.45(8785 lines)  AV=2.28  SV=5.37  BV=0.35
    {100001,1300,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=5.34  BV=0.25
    {108326,1280,1032, 0, 0, 0},  //TV = 3.21(10382 lines)  AV=2.28  SV=5.33  BV=0.15
    {116664,1280,1024, 0, 0, 0},  //TV = 3.10(11181 lines)  AV=2.28  SV=5.32  BV=0.05
    {125000,1280,1024, 0, 0, 0},  //TV = 3.00(11980 lines)  AV=2.28  SV=5.32  BV=-0.05
    {133326,1280,1032, 0, 0, 0},  //TV = 2.91(12778 lines)  AV=2.28  SV=5.33  BV=-0.15
    {141663,1300,1024, 0, 0, 0},  //TV = 2.82(13577 lines)  AV=2.28  SV=5.34  BV=-0.25
    {149989,1311,1024, 0, 0, 0},  //TV = 2.74(14375 lines)  AV=2.28  SV=5.36  BV=-0.34
    {158326,1341,1024, 0, 0, 0},  //TV = 2.66(15174 lines)  AV=2.28  SV=5.39  BV=-0.46
    {174989,1280,1032, 0, 0, 0},  //TV = 2.51(16771 lines)  AV=2.28  SV=5.33  BV=-0.54
    {183326,1311,1032, 0, 0, 0},  //TV = 2.45(17570 lines)  AV=2.28  SV=5.37  BV=-0.65
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO100PLineTable_50Hz =
{
{
    {94,1341,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.40  BV=10.25
    {105,1311,1032, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.37  BV=10.12
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {115,1362,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.41  BV=9.95
    {126,1362,1024, 0, 0, 0},  /* TV = 12.95(12 lines)  AV=2.28  SV=5.41  BV=9.82 */
    {136,1341,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.39  BV=9.73
    {147,1341,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.39  BV=9.62
    {157,1341,1032, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.40  BV=9.51
    {178,1280,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.32  BV=9.41
    {178,1331,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.38  BV=9.35 */
    {199,1280,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.32  BV=9.25
    {209,1311,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.36  BV=9.14
    {220,1331,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.38  BV=9.05
    {240,1311,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.36  BV=8.94
    {261,1280,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.32  BV=8.86
    {282,1270,1032, 0, 0, 0},  //TV = 11.79(27 lines)  AV=2.28  SV=5.32  BV=8.75
    {293,1311,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.36  BV=8.66
    {324,1270,1032, 0, 0, 0},  //TV = 11.59(31 lines)  AV=2.28  SV=5.32  BV=8.54
    {345,1280,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.32  BV=8.45
    {366,1300,1024, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.34  BV=8.35
    {397,1280,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.32  BV=8.25
    {428,1270,1032, 0, 0, 0},  //TV = 11.19(41 lines)  AV=2.28  SV=5.32  BV=8.14
    {449,1311,1024, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.36  BV=8.04
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {522,1280,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.32  BV=7.86
    {564,1270,1032, 0, 0, 0},  //TV = 10.79(54 lines)  AV=2.28  SV=5.32  BV=7.75
    {595,1280,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.33  BV=7.66
    {647,1270,1032, 0, 0, 0},  //TV = 10.59(62 lines)  AV=2.28  SV=5.32  BV=7.55
    {689,1280,1024, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.32  BV=7.46
    {741,1280,1024, 0, 0, 0},  //TV = 10.40(71 lines)  AV=2.28  SV=5.32  BV=7.35
    {793,1280,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.32  BV=7.25
    {846,1280,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.33  BV=7.15
    {908,1280,1024, 0, 0, 0},  //TV = 10.11(87 lines)  AV=2.28  SV=5.32  BV=7.06
    {981,1280,1024, 0, 0, 0},  //TV = 9.99(94 lines)  AV=2.28  SV=5.32  BV=6.95
    {1044,1280,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.32  BV=6.86
    {1127,1270,1032, 0, 0, 0},  //TV = 9.79(108 lines)  AV=2.28  SV=5.32  BV=6.75
    {1200,1280,1024, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.32  BV=6.66
    {1284,1280,1024, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.32  BV=6.56
    {1388,1270,1032, 0, 0, 0},  //TV = 9.49(133 lines)  AV=2.28  SV=5.32  BV=6.45
    {1493,1270,1032, 0, 0, 0},  //TV = 9.39(143 lines)  AV=2.28  SV=5.32  BV=6.34
    {1586,1280,1024, 0, 0, 0},  //TV = 9.30(152 lines)  AV=2.28  SV=5.32  BV=6.25
    {1712,1270,1032, 0, 0, 0},  //TV = 9.19(164 lines)  AV=2.28  SV=5.32  BV=6.14
    {1816,1280,1024, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.32  BV=6.06
    {1962,1270,1032, 0, 0, 0},  //TV = 8.99(188 lines)  AV=2.28  SV=5.32  BV=5.95
    {2098,1270,1032, 0, 0, 0},  //TV = 8.90(201 lines)  AV=2.28  SV=5.32  BV=5.85
    {2254,1270,1032, 0, 0, 0},  //TV = 8.79(216 lines)  AV=2.28  SV=5.32  BV=5.75
    {2411,1270,1032, 0, 0, 0},  //TV = 8.70(231 lines)  AV=2.28  SV=5.32  BV=5.65
    {2599,1270,1032, 0, 0, 0},  //TV = 8.59(249 lines)  AV=2.28  SV=5.32  BV=5.54
    {2776,1270,1032, 0, 0, 0},  //TV = 8.49(266 lines)  AV=2.28  SV=5.32  BV=5.45
    {2974,1270,1032, 0, 0, 0},  //TV = 8.39(285 lines)  AV=2.28  SV=5.32  BV=5.35
    {3183,1270,1032, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.32  BV=5.25
    {3423,1270,1032, 0, 0, 0},  //TV = 8.19(328 lines)  AV=2.28  SV=5.32  BV=5.14
    {3673,1270,1032, 0, 0, 0},  //TV = 8.09(352 lines)  AV=2.28  SV=5.32  BV=5.04
    {3924,1270,1032, 0, 0, 0},  //TV = 7.99(376 lines)  AV=2.28  SV=5.32  BV=4.95
    {4205,1270,1032, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.32  BV=4.85
    {4498,1270,1032, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.32  BV=4.75
    {4821,1270,1032, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.32  BV=4.65
    {5197,1270,1032, 0, 0, 0},  //TV = 7.59(498 lines)  AV=2.28  SV=5.32  BV=4.54
    {5562,1270,1032, 0, 0, 0},  //TV = 7.49(533 lines)  AV=2.28  SV=5.32  BV=4.44
    {5958,1270,1032, 0, 0, 0},  //TV = 7.39(571 lines)  AV=2.28  SV=5.32  BV=4.34
    {6376,1270,1032, 0, 0, 0},  //TV = 7.29(611 lines)  AV=2.28  SV=5.32  BV=4.25
    {6835,1270,1032, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.32  BV=4.15
    {7315,1270,1032, 0, 0, 0},  //TV = 7.09(701 lines)  AV=2.28  SV=5.32  BV=4.05
    {7836,1270,1032, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.32  BV=3.95
    {8400,1270,1032, 0, 0, 0},  //TV = 6.90(805 lines)  AV=2.28  SV=5.32  BV=3.85
    {8995,1270,1032, 0, 0, 0},  //TV = 6.80(862 lines)  AV=2.28  SV=5.32  BV=3.75
    {9704,1270,1032, 0, 0, 0},  //TV = 6.69(930 lines)  AV=2.28  SV=5.32  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1505,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.57  BV=3.35
    {9996,1638,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.68  BV=3.24
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1874,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.87  BV=3.05
    {9996,1997,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.97  BV=2.94
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {9996,2304,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.17  BV=2.75
    {9996,2447,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.27  BV=2.65
    {20003,1311,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.37  BV=2.55
    {20003,1423,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.47  BV=2.44
    {20003,1505,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.57  BV=2.35
    {20003,1618,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.67  BV=2.25
    {20003,1751,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.77  BV=2.14
    {20003,1864,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.86  BV=2.05
    {29998,1341,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.39  BV=1.94
    {29998,1444,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.50  BV=1.84
    {29998,1526,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.58  BV=1.76
    {29998,1638,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.68  BV=1.66
    {40005,1331,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=5.38  BV=1.54
    {40005,1423,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=5.47  BV=1.44
    {40005,1505,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=5.57  BV=1.35
    {50000,1300,1024, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=5.34  BV=1.25
    {50000,1393,1024, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=5.44  BV=1.15
    {50000,1495,1024, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=5.55  BV=1.05
    {59996,1341,1024, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=5.39  BV=0.94
    {59996,1423,1032, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=5.49  BV=0.85
    {70003,1311,1024, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=5.36  BV=0.75
    {70003,1423,1024, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=5.47  BV=0.64
    {79998,1331,1024, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=5.38  BV=0.54
    {79998,1423,1024, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=5.47  BV=0.44
    {90005,1341,1032, 0, 0, 0},  //TV = 3.47(8626 lines)  AV=2.28  SV=5.40  BV=0.35
    {100000,1300,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=5.34  BV=0.25
    {100000,1393,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=5.44  BV=0.15
    {109996,1362,1024, 0, 0, 0},  //TV = 3.18(10542 lines)  AV=2.28  SV=5.41  BV=0.05
    {120002,1341,1024, 0, 0, 0},  //TV = 3.06(11501 lines)  AV=2.28  SV=5.39  BV=-0.06
    {129998,1311,1032, 0, 0, 0},  //TV = 2.94(12459 lines)  AV=2.28  SV=5.37  BV=-0.15
    {140004,1311,1032, 0, 0, 0},  //TV = 2.84(13418 lines)  AV=2.28  SV=5.37  BV=-0.26
    {150000,1311,1032, 0, 0, 0},  //TV = 2.74(14376 lines)  AV=2.28  SV=5.37  BV=-0.36
    {159995,1311,1032, 0, 0, 0},  //TV = 2.64(15334 lines)  AV=2.28  SV=5.37  BV=-0.45
    {170002,1331,1024, 0, 0, 0},  //TV = 2.56(16293 lines)  AV=2.28  SV=5.38  BV=-0.55
    {179997,1341,1032, 0, 0, 0},  //TV = 2.47(17251 lines)  AV=2.28  SV=5.40  BV=-0.65
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO100Table =
{
    AETABLE_CAPTURE_ISO100, //eAETableID
    110, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    103, //i4MaxBV
    -7, //i4MinBV
    90, //i4EffectiveMaxBV
    0, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_100, //ISO
    sCaptureISO100PLineTable_60Hz,
    sCaptureISO100PLineTable_50Hz,
    NULL,
};
static strEvPline sCaptureISO200PLineTable_60Hz =
{
{
    {94,1341,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.40  BV=10.25
    {105,1311,1032, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.37  BV=10.12
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {115,1362,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.41  BV=9.95
    {126,1362,1024, 0, 0, 0},  /* TV = 12.95(12 lines)  AV=2.28  SV=5.41  BV=9.82 */
    {136,1341,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.39  BV=9.73
    {147,1341,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.39  BV=9.62
    {157,1341,1032, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.40  BV=9.51
    {178,1280,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.32  BV=9.41
    {178,1331,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.38  BV=9.35 */
    {199,1280,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.32  BV=9.25
    {209,1311,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.36  BV=9.14
    {220,1331,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.38  BV=9.05
    {240,1311,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.36  BV=8.94
    {261,1280,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.32  BV=8.86
    {282,1270,1032, 0, 0, 0},  //TV = 11.79(27 lines)  AV=2.28  SV=5.32  BV=8.75
    {293,1311,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.36  BV=8.66
    {324,1270,1032, 0, 0, 0},  //TV = 11.59(31 lines)  AV=2.28  SV=5.32  BV=8.54
    {345,1280,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.32  BV=8.45
    {366,1300,1024, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.34  BV=8.35
    {397,1280,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.32  BV=8.25
    {428,1270,1032, 0, 0, 0},  //TV = 11.19(41 lines)  AV=2.28  SV=5.32  BV=8.14
    {449,1311,1024, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.36  BV=8.04
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {491,1362,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.41  BV=7.86
    {491,1475,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.53  BV=7.74
    {491,1567,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.61  BV=7.65
    {491,1679,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.71  BV=7.55
    {491,1812,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.82  BV=7.44
    {491,1925,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.91  BV=7.36
    {491,2079,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.02  BV=7.25
    {491,2222,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.12  BV=7.15
    {491,2365,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.22  BV=7.05
    {512,2447,1024, 0, 0, 0},  //TV = 10.93(49 lines)  AV=2.28  SV=6.26  BV=6.95
    {554,2427,1024, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=6.24  BV=6.85
    {585,2447,1032, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=6.27  BV=6.75
    {627,2447,1024, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=6.26  BV=6.66
    {679,2447,1024, 0, 0, 0},  //TV = 10.52(65 lines)  AV=2.28  SV=6.26  BV=6.54
    {720,2447,1032, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=6.27  BV=6.45
    {773,2447,1024, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=6.26  BV=6.36
    {825,2447,1032, 0, 0, 0},  //TV = 10.24(79 lines)  AV=2.28  SV=6.27  BV=6.25
    {887,2447,1032, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=6.27  BV=6.15
    {950,2447,1024, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=6.26  BV=6.06
    {1023,2447,1032, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=6.27  BV=5.94
    {1096,2447,1024, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=6.26  BV=5.85
    {1180,2447,1024, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=6.26  BV=5.75
    {1253,2447,1024, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=6.26  BV=5.66
    {1346,2447,1032, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=6.27  BV=5.54
    {1440,2447,1024, 0, 0, 0},  //TV = 9.44(138 lines)  AV=2.28  SV=6.26  BV=5.46
    {1545,2447,1032, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=6.27  BV=5.35
    {1660,2447,1024, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=6.26  BV=5.25
    {1785,2447,1024, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=6.26  BV=5.15
    {1899,2447,1024, 0, 0, 0},  //TV = 9.04(182 lines)  AV=2.28  SV=6.26  BV=5.06
    {2035,2447,1024, 0, 0, 0},  //TV = 8.94(195 lines)  AV=2.28  SV=6.26  BV=4.96
    {2192,2447,1024, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=6.26  BV=4.85
    {2338,2447,1024, 0, 0, 0},  //TV = 8.74(224 lines)  AV=2.28  SV=6.26  BV=4.76
    {2505,2447,1024, 0, 0, 0},  //TV = 8.64(240 lines)  AV=2.28  SV=6.26  BV=4.66
    {2692,2447,1032, 0, 0, 0},  //TV = 8.54(258 lines)  AV=2.28  SV=6.27  BV=4.54
    {2880,2447,1032, 0, 0, 0},  //TV = 8.44(276 lines)  AV=2.28  SV=6.27  BV=4.45
    {3089,2447,1024, 0, 0, 0},  //TV = 8.34(296 lines)  AV=2.28  SV=6.26  BV=4.36
    {3308,2447,1024, 0, 0, 0},  //TV = 8.24(317 lines)  AV=2.28  SV=6.26  BV=4.26
    {3558,2447,1024, 0, 0, 0},  //TV = 8.13(341 lines)  AV=2.28  SV=6.26  BV=4.15
    {3809,2447,1024, 0, 0, 0},  //TV = 8.04(365 lines)  AV=2.28  SV=6.26  BV=4.05
    {4080,2447,1024, 0, 0, 0},  //TV = 7.94(391 lines)  AV=2.28  SV=6.26  BV=3.96
    {4362,2447,1024, 0, 0, 0},  //TV = 7.84(418 lines)  AV=2.28  SV=6.26  BV=3.86
    {4675,2447,1024, 0, 0, 0},  //TV = 7.74(448 lines)  AV=2.28  SV=6.26  BV=3.76
    {5040,2447,1024, 0, 0, 0},  //TV = 7.63(483 lines)  AV=2.28  SV=6.26  BV=3.65
    {5395,2447,1024, 0, 0, 0},  //TV = 7.53(517 lines)  AV=2.28  SV=6.26  BV=3.55
    {5781,2447,1024, 0, 0, 0},  //TV = 7.43(554 lines)  AV=2.28  SV=6.26  BV=3.45
    {6188,2447,1024, 0, 0, 0},  //TV = 7.34(593 lines)  AV=2.28  SV=6.26  BV=3.35
    {6626,2447,1024, 0, 0, 0},  //TV = 7.24(635 lines)  AV=2.28  SV=6.26  BV=3.26
    {7096,2447,1024, 0, 0, 0},  //TV = 7.14(680 lines)  AV=2.28  SV=6.26  BV=3.16
    {7607,2447,1024, 0, 0, 0},  //TV = 7.04(729 lines)  AV=2.28  SV=6.26  BV=3.06
    {8139,2447,1024, 0, 0, 0},  //TV = 6.94(780 lines)  AV=2.28  SV=6.26  BV=2.96
    {8337,2591,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.34  BV=2.84
    {8337,2755,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.44  BV=2.74
    {8337,2949,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.53  BV=2.66
    {8337,3154,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.63  BV=2.55
    {8337,3400,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.73  BV=2.45
    {8337,3645,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.83  BV=2.35
    {16664,1956,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.93  BV=2.25
    {16664,2099,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.04  BV=2.15
    {16664,2243,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.13  BV=2.05
    {16664,2406,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.23  BV=1.95
    {16664,2570,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.33  BV=1.85
    {16664,2755,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.43  BV=1.75
    {16664,2949,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.53  BV=1.66
    {25000,2109,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.04  BV=1.55
    {25000,2263,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.14  BV=1.45
    {25000,2427,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.24  BV=1.35
    {25000,2591,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.34  BV=1.26
    {25000,2785,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.44  BV=1.15
    {33337,2243,1024, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=6.13  BV=1.05
    {33337,2406,1024, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=6.23  BV=0.95
    {33337,2570,1024, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=6.33  BV=0.85
    {33337,2755,1024, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=6.43  BV=0.75
    {41663,2386,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=6.22  BV=0.64
    {41663,2519,1032, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=6.31  BV=0.55
    {50000,2263,1024, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=6.14  BV=0.45
    {50000,2427,1024, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=6.24  BV=0.35
    {50000,2591,1024, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=6.34  BV=0.26
    {58327,2406,1024, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=6.23  BV=0.14
    {58327,2550,1024, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=6.32  BV=0.06
    {66663,2406,1024, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=6.23  BV=-0.05
    {66663,2591,1024, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=6.34  BV=-0.16
    {75000,2447,1024, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=6.26  BV=-0.24
    {83326,2365,1032, 0, 0, 0},  //TV = 3.59(7986 lines)  AV=2.28  SV=6.22  BV=-0.36
    {83326,2550,1024, 0, 0, 0},  //TV = 3.59(7986 lines)  AV=2.28  SV=6.32  BV=-0.46
    {91663,2478,1024, 0, 0, 0},  //TV = 3.45(8785 lines)  AV=2.28  SV=6.27  BV=-0.55
    {100000,2427,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=6.24  BV=-0.65
    {108326,2406,1024, 0, 0, 0},  //TV = 3.21(10382 lines)  AV=2.28  SV=6.23  BV=-0.75
    {116663,2406,1024, 0, 0, 0},  //TV = 3.10(11181 lines)  AV=2.28  SV=6.23  BV=-0.86
    {125000,2406,1024, 0, 0, 0},  //TV = 3.00(11980 lines)  AV=2.28  SV=6.23  BV=-0.96
    {133326,2406,1024, 0, 0, 0},  //TV = 2.91(12778 lines)  AV=2.28  SV=6.23  BV=-1.05
    {141663,2427,1024, 0, 0, 0},  //TV = 2.82(13577 lines)  AV=2.28  SV=6.24  BV=-1.15
    {150000,2447,1024, 0, 0, 0},  //TV = 2.74(14376 lines)  AV=2.28  SV=6.26  BV=-1.24
    {158326,2478,1024, 0, 0, 0},  //TV = 2.66(15174 lines)  AV=2.28  SV=6.27  BV=-1.34
    {174989,2427,1024, 0, 0, 0},  //TV = 2.51(16771 lines)  AV=2.28  SV=6.24  BV=-1.46
    {183326,2478,1024, 0, 0, 0},  //TV = 2.45(17570 lines)  AV=2.28  SV=6.27  BV=-1.55
    {199989,2427,1024, 0, 0, 0},  //TV = 2.32(19167 lines)  AV=2.28  SV=6.24  BV=-1.65
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO200PLineTable_50Hz =
{
{
    {94,1341,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.40  BV=10.25
    {105,1311,1032, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.37  BV=10.12
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {115,1362,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.41  BV=9.95
    {126,1362,1024, 0, 0, 0},  /* TV = 12.95(12 lines)  AV=2.28  SV=5.41  BV=9.82 */
    {136,1341,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.39  BV=9.73
    {147,1341,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.39  BV=9.62
    {157,1341,1032, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.40  BV=9.51
    {178,1280,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.32  BV=9.41
    {178,1331,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.38  BV=9.35 */
    {199,1280,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.32  BV=9.25
    {209,1311,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.36  BV=9.14
    {220,1331,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.38  BV=9.05
    {240,1311,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.36  BV=8.94
    {261,1280,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.32  BV=8.86
    {282,1270,1032, 0, 0, 0},  //TV = 11.79(27 lines)  AV=2.28  SV=5.32  BV=8.75
    {293,1311,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.36  BV=8.66
    {324,1270,1032, 0, 0, 0},  //TV = 11.59(31 lines)  AV=2.28  SV=5.32  BV=8.54
    {345,1280,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.32  BV=8.45
    {366,1300,1024, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.34  BV=8.35
    {397,1280,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.32  BV=8.25
    {428,1270,1032, 0, 0, 0},  //TV = 11.19(41 lines)  AV=2.28  SV=5.32  BV=8.14
    {449,1311,1024, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.36  BV=8.04
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {491,1362,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.41  BV=7.86
    {491,1475,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.53  BV=7.74
    {491,1567,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.61  BV=7.65
    {491,1679,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.71  BV=7.55
    {491,1812,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.82  BV=7.44
    {491,1925,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.91  BV=7.36
    {491,2079,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.02  BV=7.25
    {491,2222,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.12  BV=7.15
    {491,2365,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.22  BV=7.05
    {512,2447,1024, 0, 0, 0},  //TV = 10.93(49 lines)  AV=2.28  SV=6.26  BV=6.95
    {554,2427,1024, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=6.24  BV=6.85
    {585,2447,1032, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=6.27  BV=6.75
    {627,2447,1024, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=6.26  BV=6.66
    {679,2447,1024, 0, 0, 0},  //TV = 10.52(65 lines)  AV=2.28  SV=6.26  BV=6.54
    {720,2447,1032, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=6.27  BV=6.45
    {773,2447,1024, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=6.26  BV=6.36
    {825,2447,1032, 0, 0, 0},  //TV = 10.24(79 lines)  AV=2.28  SV=6.27  BV=6.25
    {887,2447,1032, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=6.27  BV=6.15
    {950,2447,1024, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=6.26  BV=6.06
    {1023,2447,1032, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=6.27  BV=5.94
    {1096,2447,1024, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=6.26  BV=5.85
    {1180,2447,1024, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=6.26  BV=5.75
    {1253,2447,1024, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=6.26  BV=5.66
    {1346,2447,1032, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=6.27  BV=5.54
    {1440,2447,1024, 0, 0, 0},  //TV = 9.44(138 lines)  AV=2.28  SV=6.26  BV=5.46
    {1545,2447,1032, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=6.27  BV=5.35
    {1660,2447,1024, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=6.26  BV=5.25
    {1785,2447,1024, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=6.26  BV=5.15
    {1899,2447,1024, 0, 0, 0},  //TV = 9.04(182 lines)  AV=2.28  SV=6.26  BV=5.06
    {2035,2447,1024, 0, 0, 0},  //TV = 8.94(195 lines)  AV=2.28  SV=6.26  BV=4.96
    {2192,2447,1024, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=6.26  BV=4.85
    {2338,2447,1024, 0, 0, 0},  //TV = 8.74(224 lines)  AV=2.28  SV=6.26  BV=4.76
    {2505,2447,1024, 0, 0, 0},  //TV = 8.64(240 lines)  AV=2.28  SV=6.26  BV=4.66
    {2692,2447,1032, 0, 0, 0},  //TV = 8.54(258 lines)  AV=2.28  SV=6.27  BV=4.54
    {2880,2447,1032, 0, 0, 0},  //TV = 8.44(276 lines)  AV=2.28  SV=6.27  BV=4.45
    {3089,2447,1024, 0, 0, 0},  //TV = 8.34(296 lines)  AV=2.28  SV=6.26  BV=4.36
    {3308,2447,1024, 0, 0, 0},  //TV = 8.24(317 lines)  AV=2.28  SV=6.26  BV=4.26
    {3558,2447,1024, 0, 0, 0},  //TV = 8.13(341 lines)  AV=2.28  SV=6.26  BV=4.15
    {3809,2447,1024, 0, 0, 0},  //TV = 8.04(365 lines)  AV=2.28  SV=6.26  BV=4.05
    {4080,2447,1024, 0, 0, 0},  //TV = 7.94(391 lines)  AV=2.28  SV=6.26  BV=3.96
    {4362,2447,1024, 0, 0, 0},  //TV = 7.84(418 lines)  AV=2.28  SV=6.26  BV=3.86
    {4675,2447,1024, 0, 0, 0},  //TV = 7.74(448 lines)  AV=2.28  SV=6.26  BV=3.76
    {5040,2447,1024, 0, 0, 0},  //TV = 7.63(483 lines)  AV=2.28  SV=6.26  BV=3.65
    {5395,2447,1024, 0, 0, 0},  //TV = 7.53(517 lines)  AV=2.28  SV=6.26  BV=3.55
    {5781,2447,1024, 0, 0, 0},  //TV = 7.43(554 lines)  AV=2.28  SV=6.26  BV=3.45
    {6188,2447,1024, 0, 0, 0},  //TV = 7.34(593 lines)  AV=2.28  SV=6.26  BV=3.35
    {6626,2447,1024, 0, 0, 0},  //TV = 7.24(635 lines)  AV=2.28  SV=6.26  BV=3.26
    {7096,2447,1024, 0, 0, 0},  //TV = 7.14(680 lines)  AV=2.28  SV=6.26  BV=3.16
    {7607,2447,1024, 0, 0, 0},  //TV = 7.04(729 lines)  AV=2.28  SV=6.26  BV=3.06
    {8139,2447,1024, 0, 0, 0},  //TV = 6.94(780 lines)  AV=2.28  SV=6.26  BV=2.96
    {8723,2447,1024, 0, 0, 0},  //TV = 6.84(836 lines)  AV=2.28  SV=6.26  BV=2.86
    {9349,2447,1024, 0, 0, 0},  //TV = 6.74(896 lines)  AV=2.28  SV=6.26  BV=2.76
    {9996,2478,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.27  BV=2.64
    {9996,2652,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.37  BV=2.55
    {9996,2847,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.48  BV=2.44
    {9996,3052,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.58  BV=2.34
    {9996,3236,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.67  BV=2.25
    {9996,3492,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.77  BV=2.15
    {20002,1874,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.87  BV=2.05
    {20002,1997,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.96  BV=1.96
    {20002,2150,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.07  BV=1.85
    {20002,2304,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.17  BV=1.75
    {20002,2447,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.27  BV=1.65
    {20002,2621,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.37  BV=1.55
    {20002,2816,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.47  BV=1.45
    {20002,3011,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.57  BV=1.35
    {29998,2150,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.08  BV=1.25
    {29998,2324,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.18  BV=1.15
    {29998,2478,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.27  BV=1.06
    {29998,2673,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.38  BV=0.95
    {29998,2847,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.49  BV=0.85
    {40004,2284,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=6.17  BV=0.75
    {40004,2447,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=6.27  BV=0.65
    {40004,2621,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=6.37  BV=0.55
    {50000,2263,1024, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=6.14  BV=0.45
    {50000,2427,1024, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=6.24  BV=0.35
    {50000,2591,1024, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=6.34  BV=0.26
    {59996,2324,1024, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=6.18  BV=0.15
    {59996,2478,1024, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=6.27  BV=0.06
    {70002,2284,1032, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=6.17  BV=-0.06
    {70002,2447,1024, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=6.26  BV=-0.15
    {70002,2621,1024, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=6.36  BV=-0.24
    {79998,2478,1024, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=6.27  BV=-0.36
    {90004,2345,1024, 0, 0, 0},  //TV = 3.47(8626 lines)  AV=2.28  SV=6.20  BV=-0.45
    {90004,2519,1024, 0, 0, 0},  //TV = 3.47(8626 lines)  AV=2.28  SV=6.30  BV=-0.55
    {100000,2427,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=6.24  BV=-0.65
    {109996,2365,1032, 0, 0, 0},  //TV = 3.18(10542 lines)  AV=2.28  SV=6.22  BV=-0.76
    {109996,2550,1024, 0, 0, 0},  //TV = 3.18(10542 lines)  AV=2.28  SV=6.32  BV=-0.86
    {120002,2478,1024, 0, 0, 0},  //TV = 3.06(11501 lines)  AV=2.28  SV=6.27  BV=-0.94
    {129998,2478,1024, 0, 0, 0},  //TV = 2.94(12459 lines)  AV=2.28  SV=6.27  BV=-1.06
    {140004,2447,1024, 0, 0, 0},  //TV = 2.84(13418 lines)  AV=2.28  SV=6.26  BV=-1.15
    {150000,2447,1024, 0, 0, 0},  //TV = 2.74(14376 lines)  AV=2.28  SV=6.26  BV=-1.24
    {159995,2478,1024, 0, 0, 0},  //TV = 2.64(15334 lines)  AV=2.28  SV=6.27  BV=-1.36
    {170002,2499,1024, 0, 0, 0},  //TV = 2.56(16293 lines)  AV=2.28  SV=6.29  BV=-1.46
    {179997,2519,1024, 0, 0, 0},  //TV = 2.47(17251 lines)  AV=2.28  SV=6.30  BV=-1.55
    {199999,2427,1024, 0, 0, 0},  //TV = 2.32(19168 lines)  AV=2.28  SV=6.24  BV=-1.65
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO200Table =
{
    AETABLE_CAPTURE_ISO200, //eAETableID
    120, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    103, //i4MaxBV
    -17, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_200, //ISO
    sCaptureISO200PLineTable_60Hz,
    sCaptureISO200PLineTable_50Hz,
    NULL,
};
static strEvPline sCaptureISO400PLineTable_60Hz =
{
{
    {94,1341,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.40  BV=10.25
    {105,1311,1032, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.37  BV=10.12
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {115,1362,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.41  BV=9.95
    {126,1362,1024, 0, 0, 0},  /* TV = 12.95(12 lines)  AV=2.28  SV=5.41  BV=9.82 */
    {136,1341,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.39  BV=9.73
    {147,1341,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.39  BV=9.62
    {157,1341,1032, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.40  BV=9.51
    {178,1280,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.32  BV=9.41
    {178,1331,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.38  BV=9.35 */
    {199,1280,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.32  BV=9.25
    {209,1311,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.36  BV=9.14
    {220,1331,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.38  BV=9.05
    {240,1311,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.36  BV=8.94
    {261,1280,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.32  BV=8.86
    {282,1270,1032, 0, 0, 0},  //TV = 11.79(27 lines)  AV=2.28  SV=5.32  BV=8.75
    {293,1311,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.36  BV=8.66
    {324,1270,1032, 0, 0, 0},  //TV = 11.59(31 lines)  AV=2.28  SV=5.32  BV=8.54
    {345,1280,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.32  BV=8.45
    {366,1300,1024, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.34  BV=8.35
    {397,1280,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.32  BV=8.25
    {428,1270,1032, 0, 0, 0},  //TV = 11.19(41 lines)  AV=2.28  SV=5.32  BV=8.14
    {449,1311,1024, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.36  BV=8.04
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {491,1362,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.41  BV=7.86
    {491,1475,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.53  BV=7.74
    {491,1567,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.61  BV=7.65
    {491,1679,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.71  BV=7.55
    {491,1812,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.82  BV=7.44
    {491,1925,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.91  BV=7.36
    {491,2079,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.02  BV=7.25
    {491,2222,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.12  BV=7.15
    {491,2365,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.22  BV=7.05
    {491,2550,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.32  BV=6.95
    {491,2734,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.42  BV=6.85
    {491,2908,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.52  BV=6.75
    {491,3123,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.61  BV=6.66
    {491,3359,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.71  BV=6.55
    {491,3594,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.82  BV=6.44
    {491,3850,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.91  BV=6.36
    {491,4096,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.01  BV=6.26
    {491,4444,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.12  BV=6.15
    {491,4762,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.22  BV=6.05
    {512,4854,1032, 0, 0, 0},  //TV = 10.93(49 lines)  AV=2.28  SV=7.26  BV=5.95
    {554,4854,1024, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=7.24  BV=5.85
    {585,4854,1032, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=7.26  BV=5.76
    {627,4854,1040, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=7.27  BV=5.65
    {679,4854,1024, 0, 0, 0},  //TV = 10.52(65 lines)  AV=2.28  SV=7.24  BV=5.55
    {720,4854,1040, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=7.27  BV=5.45
    {773,4854,1040, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=7.27  BV=5.34
    {835,4854,1032, 0, 0, 0},  //TV = 10.23(80 lines)  AV=2.28  SV=7.26  BV=5.24
    {887,4854,1040, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=7.27  BV=5.15
    {950,4854,1032, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=7.26  BV=5.06
    {1023,4854,1032, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=7.26  BV=4.95
    {1096,4854,1032, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=7.26  BV=4.85
    {1180,4854,1032, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=7.26  BV=4.75
    {1253,4854,1032, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=7.26  BV=4.66
    {1346,4854,1032, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=7.26  BV=4.56
    {1451,4854,1032, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=7.26  BV=4.45
    {1545,4854,1040, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=7.27  BV=4.35
    {1660,4854,1032, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=7.26  BV=4.25
    {1785,4854,1032, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=7.26  BV=4.15
    {1899,4854,1032, 0, 0, 0},  //TV = 9.04(182 lines)  AV=2.28  SV=7.26  BV=4.06
    {2046,4854,1032, 0, 0, 0},  //TV = 8.93(196 lines)  AV=2.28  SV=7.26  BV=3.95
    {2192,4854,1032, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=7.26  BV=3.85
    {2338,4854,1032, 0, 0, 0},  //TV = 8.74(224 lines)  AV=2.28  SV=7.26  BV=3.76
    {2526,4854,1032, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=7.26  BV=3.65
    {2692,4854,1032, 0, 0, 0},  //TV = 8.54(258 lines)  AV=2.28  SV=7.26  BV=3.56
    {2880,4854,1032, 0, 0, 0},  //TV = 8.44(276 lines)  AV=2.28  SV=7.26  BV=3.46
    {3089,4854,1032, 0, 0, 0},  //TV = 8.34(296 lines)  AV=2.28  SV=7.26  BV=3.36
    {3329,4854,1032, 0, 0, 0},  //TV = 8.23(319 lines)  AV=2.28  SV=7.26  BV=3.25
    {3558,4854,1032, 0, 0, 0},  //TV = 8.13(341 lines)  AV=2.28  SV=7.26  BV=3.15
    {3809,4854,1032, 0, 0, 0},  //TV = 8.04(365 lines)  AV=2.28  SV=7.26  BV=3.06
    {4080,4854,1032, 0, 0, 0},  //TV = 7.94(391 lines)  AV=2.28  SV=7.26  BV=2.96
    {4393,4854,1032, 0, 0, 0},  //TV = 7.83(421 lines)  AV=2.28  SV=7.26  BV=2.85
    {4706,4854,1032, 0, 0, 0},  //TV = 7.73(451 lines)  AV=2.28  SV=7.26  BV=2.75
    {5040,4854,1032, 0, 0, 0},  //TV = 7.63(483 lines)  AV=2.28  SV=7.26  BV=2.65
    {5395,4854,1032, 0, 0, 0},  //TV = 7.53(517 lines)  AV=2.28  SV=7.26  BV=2.55
    {5781,4854,1032, 0, 0, 0},  //TV = 7.43(554 lines)  AV=2.28  SV=7.26  BV=2.45
    {6188,4854,1032, 0, 0, 0},  //TV = 7.34(593 lines)  AV=2.28  SV=7.26  BV=2.36
    {6626,4854,1032, 0, 0, 0},  //TV = 7.24(635 lines)  AV=2.28  SV=7.26  BV=2.26
    {7096,4854,1032, 0, 0, 0},  //TV = 7.14(680 lines)  AV=2.28  SV=7.26  BV=2.16
    {7607,4854,1032, 0, 0, 0},  //TV = 7.04(729 lines)  AV=2.28  SV=7.26  BV=2.06
    {8202,4854,1032, 0, 0, 0},  //TV = 6.93(786 lines)  AV=2.28  SV=7.26  BV=1.95
    {8337,5140,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=7.34  BV=1.84
    {8337,5458,1040, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=7.44  BV=1.74
    {8337,5827,1040, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=7.53  BV=1.65
    {8337,6246,1040, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=7.63  BV=1.55
    {8337,6717,1040, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=7.74  BV=1.45
    {8337,7281,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=7.83  BV=1.35
    {16664,3912,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.93  BV=1.25
    {16664,4157,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.03  BV=1.15
    {16664,4444,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.13  BV=1.05
    {16664,4762,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.23  BV=0.95
    {16664,5140,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.33  BV=0.85
    {16664,5458,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.43  BV=0.76
    {16664,5827,1040, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.53  BV=0.65
    {25000,4229,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.05  BV=0.55
    {25000,4516,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.14  BV=0.46
    {25000,4854,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.24  BV=0.35
    {25000,5243,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.36  BV=0.24
    {25000,5581,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.45  BV=0.15
    {33337,4444,1032, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.13  BV=0.05
    {33337,4762,1040, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.24  BV=-0.06
    {33337,5140,1032, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.34  BV=-0.16
    {41663,4444,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.12  BV=-0.26
    {41663,4762,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.22  BV=-0.36
    {41663,5038,1032, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.31  BV=-0.45
    {50000,4516,1032, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=7.15  BV=-0.56
    {50000,4854,1024, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=7.24  BV=-0.65
    {50000,5140,1040, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=7.35  BV=-0.75
    {58327,4762,1032, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=7.23  BV=-0.85
    {58327,5140,1024, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=7.33  BV=-0.95
    {66663,4762,1040, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=7.24  BV=-1.06
    {66663,5140,1032, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=7.34  BV=-1.16
    {75000,4854,1040, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=7.27  BV=-1.26
    {83326,4762,1024, 0, 0, 0},  //TV = 3.59(7986 lines)  AV=2.28  SV=7.22  BV=-1.36
    {83326,5038,1032, 0, 0, 0},  //TV = 3.59(7986 lines)  AV=2.28  SV=7.31  BV=-1.45
    {91663,4946,1024, 0, 0, 0},  //TV = 3.45(8785 lines)  AV=2.28  SV=7.27  BV=-1.55
    {100000,4854,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.24  BV=-1.65
    {108326,4762,1032, 0, 0, 0},  //TV = 3.21(10382 lines)  AV=2.28  SV=7.23  BV=-1.75
    {116663,4762,1032, 0, 0, 0},  //TV = 3.10(11181 lines)  AV=2.28  SV=7.23  BV=-1.85
    {125000,4762,1032, 0, 0, 0},  //TV = 3.00(11980 lines)  AV=2.28  SV=7.23  BV=-1.95
    {133326,4762,1032, 0, 0, 0},  //TV = 2.91(12778 lines)  AV=2.28  SV=7.23  BV=-2.05
    {141663,4854,1024, 0, 0, 0},  //TV = 2.82(13577 lines)  AV=2.28  SV=7.24  BV=-2.15
    {150000,4854,1040, 0, 0, 0},  //TV = 2.74(14376 lines)  AV=2.28  SV=7.27  BV=-2.26
    {158326,4946,1032, 0, 0, 0},  //TV = 2.66(15174 lines)  AV=2.28  SV=7.28  BV=-2.35
    {174989,4854,1024, 0, 0, 0},  //TV = 2.51(16771 lines)  AV=2.28  SV=7.24  BV=-2.46
    {183326,4946,1024, 0, 0, 0},  //TV = 2.45(17570 lines)  AV=2.28  SV=7.27  BV=-2.55
    {199989,4854,1024, 0, 0, 0},  //TV = 2.32(19167 lines)  AV=2.28  SV=7.24  BV=-2.65
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO400PLineTable_50Hz =
{
{
    {94,1341,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.40  BV=10.25
    {105,1311,1032, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.37  BV=10.12
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {115,1362,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.41  BV=9.95
    {126,1362,1024, 0, 0, 0},  /* TV = 12.95(12 lines)  AV=2.28  SV=5.41  BV=9.82 */
    {136,1341,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.39  BV=9.73
    {147,1341,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.39  BV=9.62
    {157,1341,1032, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.40  BV=9.51
    {178,1280,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.32  BV=9.41
    {178,1331,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.38  BV=9.35 */
    {199,1280,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.32  BV=9.25
    {209,1311,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.36  BV=9.14
    {220,1331,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.38  BV=9.05
    {240,1311,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.36  BV=8.94
    {261,1280,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.32  BV=8.86
    {282,1270,1032, 0, 0, 0},  //TV = 11.79(27 lines)  AV=2.28  SV=5.32  BV=8.75
    {293,1311,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.36  BV=8.66
    {324,1270,1032, 0, 0, 0},  //TV = 11.59(31 lines)  AV=2.28  SV=5.32  BV=8.54
    {345,1280,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.32  BV=8.45
    {366,1300,1024, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.34  BV=8.35
    {397,1280,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.32  BV=8.25
    {428,1270,1032, 0, 0, 0},  //TV = 11.19(41 lines)  AV=2.28  SV=5.32  BV=8.14
    {449,1311,1024, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.36  BV=8.04
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {491,1362,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.41  BV=7.86
    {491,1475,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.53  BV=7.74
    {491,1567,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.61  BV=7.65
    {491,1679,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.71  BV=7.55
    {491,1812,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.82  BV=7.44
    {491,1925,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.91  BV=7.36
    {491,2079,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.02  BV=7.25
    {491,2222,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.12  BV=7.15
    {491,2365,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.22  BV=7.05
    {491,2550,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.32  BV=6.95
    {491,2734,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.42  BV=6.85
    {491,2908,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.52  BV=6.75
    {491,3123,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.61  BV=6.66
    {491,3359,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.71  BV=6.55
    {491,3594,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.82  BV=6.44
    {491,3850,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.91  BV=6.36
    {491,4096,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.01  BV=6.26
    {491,4444,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.12  BV=6.15
    {491,4762,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.22  BV=6.05
    {512,4854,1032, 0, 0, 0},  //TV = 10.93(49 lines)  AV=2.28  SV=7.26  BV=5.95
    {554,4854,1024, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=7.24  BV=5.85
    {585,4854,1032, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=7.26  BV=5.76
    {627,4854,1040, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=7.27  BV=5.65
    {679,4854,1024, 0, 0, 0},  //TV = 10.52(65 lines)  AV=2.28  SV=7.24  BV=5.55
    {720,4854,1040, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=7.27  BV=5.45
    {773,4854,1040, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=7.27  BV=5.34
    {835,4854,1032, 0, 0, 0},  //TV = 10.23(80 lines)  AV=2.28  SV=7.26  BV=5.24
    {887,4854,1040, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=7.27  BV=5.15
    {950,4854,1032, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=7.26  BV=5.06
    {1023,4854,1032, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=7.26  BV=4.95
    {1096,4854,1032, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=7.26  BV=4.85
    {1180,4854,1032, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=7.26  BV=4.75
    {1253,4854,1032, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=7.26  BV=4.66
    {1346,4854,1032, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=7.26  BV=4.56
    {1451,4854,1032, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=7.26  BV=4.45
    {1545,4854,1040, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=7.27  BV=4.35
    {1660,4854,1032, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=7.26  BV=4.25
    {1785,4854,1032, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=7.26  BV=4.15
    {1899,4854,1032, 0, 0, 0},  //TV = 9.04(182 lines)  AV=2.28  SV=7.26  BV=4.06
    {2046,4854,1032, 0, 0, 0},  //TV = 8.93(196 lines)  AV=2.28  SV=7.26  BV=3.95
    {2192,4854,1032, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=7.26  BV=3.85
    {2338,4854,1032, 0, 0, 0},  //TV = 8.74(224 lines)  AV=2.28  SV=7.26  BV=3.76
    {2526,4854,1032, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=7.26  BV=3.65
    {2692,4854,1032, 0, 0, 0},  //TV = 8.54(258 lines)  AV=2.28  SV=7.26  BV=3.56
    {2880,4854,1032, 0, 0, 0},  //TV = 8.44(276 lines)  AV=2.28  SV=7.26  BV=3.46
    {3089,4854,1032, 0, 0, 0},  //TV = 8.34(296 lines)  AV=2.28  SV=7.26  BV=3.36
    {3329,4854,1032, 0, 0, 0},  //TV = 8.23(319 lines)  AV=2.28  SV=7.26  BV=3.25
    {3558,4854,1032, 0, 0, 0},  //TV = 8.13(341 lines)  AV=2.28  SV=7.26  BV=3.15
    {3809,4854,1032, 0, 0, 0},  //TV = 8.04(365 lines)  AV=2.28  SV=7.26  BV=3.06
    {4080,4854,1032, 0, 0, 0},  //TV = 7.94(391 lines)  AV=2.28  SV=7.26  BV=2.96
    {4393,4854,1032, 0, 0, 0},  //TV = 7.83(421 lines)  AV=2.28  SV=7.26  BV=2.85
    {4706,4854,1032, 0, 0, 0},  //TV = 7.73(451 lines)  AV=2.28  SV=7.26  BV=2.75
    {5040,4854,1032, 0, 0, 0},  //TV = 7.63(483 lines)  AV=2.28  SV=7.26  BV=2.65
    {5395,4854,1032, 0, 0, 0},  //TV = 7.53(517 lines)  AV=2.28  SV=7.26  BV=2.55
    {5781,4854,1032, 0, 0, 0},  //TV = 7.43(554 lines)  AV=2.28  SV=7.26  BV=2.45
    {6188,4854,1032, 0, 0, 0},  //TV = 7.34(593 lines)  AV=2.28  SV=7.26  BV=2.36
    {6626,4854,1032, 0, 0, 0},  //TV = 7.24(635 lines)  AV=2.28  SV=7.26  BV=2.26
    {7096,4854,1032, 0, 0, 0},  //TV = 7.14(680 lines)  AV=2.28  SV=7.26  BV=2.16
    {7607,4854,1032, 0, 0, 0},  //TV = 7.04(729 lines)  AV=2.28  SV=7.26  BV=2.06
    {8202,4854,1032, 0, 0, 0},  //TV = 6.93(786 lines)  AV=2.28  SV=7.26  BV=1.95
    {8786,4854,1032, 0, 0, 0},  //TV = 6.83(842 lines)  AV=2.28  SV=7.26  BV=1.85
    {9412,4854,1032, 0, 0, 0},  //TV = 6.73(902 lines)  AV=2.28  SV=7.26  BV=1.75
    {9996,4946,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.27  BV=1.65
    {9996,5243,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.37  BV=1.55
    {9996,5581,1040, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.47  BV=1.45
    {9996,6093,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.57  BV=1.35
    {9996,6390,1040, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.66  BV=1.26
    {9996,6902,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.76  BV=1.16
    {20002,3748,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.87  BV=1.05
    {20002,3973,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.97  BV=0.95
    {20002,4301,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.07  BV=0.85
    {20002,4598,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.17  BV=0.75
    {20002,4854,1040, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.27  BV=0.65
    {20002,5243,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.37  BV=0.55
    {20002,5581,1040, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.47  BV=0.45
    {20002,5960,1040, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.56  BV=0.36
    {29998,4301,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.08  BV=0.25
    {29998,4598,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.18  BV=0.16
    {29998,4946,1040, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.29  BV=0.04
    {29998,5345,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.38  BV=-0.05
    {40004,4301,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.07  BV=-0.15
    {40004,4598,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.17  BV=-0.25
    {40004,4854,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.27  BV=-0.35
    {40004,5243,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.37  BV=-0.45
    {50000,4516,1032, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=7.15  BV=-0.56
    {50000,4854,1024, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=7.24  BV=-0.65
    {50000,5140,1040, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=7.35  BV=-0.75
    {59996,4598,1040, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=7.19  BV=-0.86
    {59996,4946,1032, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=7.28  BV=-0.95
    {70002,4598,1024, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=7.17  BV=-1.06
    {70002,4854,1040, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=7.27  BV=-1.16
    {79998,4598,1024, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=7.17  BV=-1.25
    {79998,4946,1024, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=7.27  BV=-1.35
    {90004,4680,1032, 0, 0, 0},  //TV = 3.47(8626 lines)  AV=2.28  SV=7.20  BV=-1.45
    {90004,5038,1024, 0, 0, 0},  //TV = 3.47(8626 lines)  AV=2.28  SV=7.30  BV=-1.55
    {100000,4854,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.24  BV=-1.65
    {109996,4680,1040, 0, 0, 0},  //TV = 3.18(10542 lines)  AV=2.28  SV=7.21  BV=-1.76
    {109996,5038,1032, 0, 0, 0},  //TV = 3.18(10542 lines)  AV=2.28  SV=7.31  BV=-1.85
    {120002,4946,1032, 0, 0, 0},  //TV = 3.06(11501 lines)  AV=2.28  SV=7.28  BV=-1.95
    {129998,4946,1024, 0, 0, 0},  //TV = 2.94(12459 lines)  AV=2.28  SV=7.27  BV=-2.05
    {140004,4854,1040, 0, 0, 0},  //TV = 2.84(13418 lines)  AV=2.28  SV=7.27  BV=-2.16
    {150000,4854,1040, 0, 0, 0},  //TV = 2.74(14376 lines)  AV=2.28  SV=7.27  BV=-2.26
    {159995,4946,1024, 0, 0, 0},  //TV = 2.64(15334 lines)  AV=2.28  SV=7.27  BV=-2.35
    {170002,4946,1032, 0, 0, 0},  //TV = 2.56(16293 lines)  AV=2.28  SV=7.28  BV=-2.45
    {190004,4762,1032, 0, 0, 0},  //TV = 2.40(18210 lines)  AV=2.28  SV=7.23  BV=-2.56
    {199999,4854,1024, 0, 0, 0},  //TV = 2.32(19168 lines)  AV=2.28  SV=7.24  BV=-2.65
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO400Table =
{
    AETABLE_CAPTURE_ISO400, //eAETableID
    130, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    103, //i4MaxBV
    -27, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_400, //ISO
    sCaptureISO400PLineTable_60Hz,
    sCaptureISO400PLineTable_50Hz,
    NULL,
};
static strEvPline sCaptureISO800PLineTable_60Hz =
{
{
    {94,1341,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.40  BV=10.25
    {105,1311,1032, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.37  BV=10.12
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {115,1362,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.41  BV=9.95
    {126,1362,1024, 0, 0, 0},  /* TV = 12.95(12 lines)  AV=2.28  SV=5.41  BV=9.82 */
    {136,1341,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.39  BV=9.73
    {147,1341,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.39  BV=9.62
    {157,1341,1032, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.40  BV=9.51
    {178,1280,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.32  BV=9.41
    {178,1331,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.38  BV=9.35 */
    {199,1280,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.32  BV=9.25
    {209,1311,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.36  BV=9.14
    {220,1331,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.38  BV=9.05
    {240,1311,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.36  BV=8.94
    {261,1280,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.32  BV=8.86
    {282,1270,1032, 0, 0, 0},  //TV = 11.79(27 lines)  AV=2.28  SV=5.32  BV=8.75
    {293,1311,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.36  BV=8.66
    {324,1270,1032, 0, 0, 0},  //TV = 11.59(31 lines)  AV=2.28  SV=5.32  BV=8.54
    {345,1280,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.32  BV=8.45
    {366,1300,1024, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.34  BV=8.35
    {397,1280,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.32  BV=8.25
    {428,1270,1032, 0, 0, 0},  //TV = 11.19(41 lines)  AV=2.28  SV=5.32  BV=8.14
    {449,1311,1024, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.36  BV=8.04
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {491,1362,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.41  BV=7.86
    {491,1475,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.53  BV=7.74
    {491,1567,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.61  BV=7.65
    {491,1679,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.71  BV=7.55
    {491,1812,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.82  BV=7.44
    {491,1925,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.91  BV=7.36
    {491,2079,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.02  BV=7.25
    {491,2222,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.12  BV=7.15
    {491,2365,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.22  BV=7.05
    {491,2550,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.32  BV=6.95
    {491,2734,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.42  BV=6.85
    {491,2908,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.52  BV=6.75
    {491,3123,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.61  BV=6.66
    {491,3359,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.71  BV=6.55
    {491,3594,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.82  BV=6.44
    {491,3850,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.91  BV=6.36
    {491,4096,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.01  BV=6.26
    {491,4444,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.12  BV=6.15
    {491,4762,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.22  BV=6.05
    {491,5038,1040, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.32  BV=5.95
    {491,5458,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.41  BV=5.85
    {491,5827,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.52  BV=5.75
    {491,6246,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.62  BV=5.65
    {491,6717,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.71  BV=5.55
    {491,7086,1040, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.81  BV=5.45
    {491,7711,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.91  BV=5.35
    {491,8192,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.01  BV=5.26
    {491,8192,1112, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.12  BV=5.15
    {491,8192,1192, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.22  BV=5.05
    {512,8192,1224, 0, 0, 0},  //TV = 10.93(49 lines)  AV=2.28  SV=8.26  BV=4.95
    {554,8192,1216, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=8.25  BV=4.84
    {585,8192,1232, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=8.27  BV=4.75
    {627,8192,1232, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=8.27  BV=4.65
    {679,8192,1216, 0, 0, 0},  //TV = 10.52(65 lines)  AV=2.28  SV=8.25  BV=4.55
    {720,8192,1232, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=8.27  BV=4.45
    {773,8192,1232, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=8.27  BV=4.35
    {835,8192,1224, 0, 0, 0},  //TV = 10.23(80 lines)  AV=2.28  SV=8.26  BV=4.24
    {887,8192,1232, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=8.27  BV=4.15
    {950,8192,1224, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=8.26  BV=4.06
    {1023,8192,1232, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=8.27  BV=3.94
    {1096,8192,1224, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=8.26  BV=3.85
    {1180,8192,1224, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=8.26  BV=3.74
    {1253,8192,1232, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=8.27  BV=3.65
    {1346,8192,1232, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=8.27  BV=3.55
    {1451,8192,1224, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=8.26  BV=3.45
    {1545,8192,1232, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=8.27  BV=3.35
    {1660,8192,1224, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=8.26  BV=3.25
    {1785,8192,1224, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=8.26  BV=3.15
    {1899,8192,1232, 0, 0, 0},  //TV = 9.04(182 lines)  AV=2.28  SV=8.27  BV=3.05
    {2046,8192,1224, 0, 0, 0},  //TV = 8.93(196 lines)  AV=2.28  SV=8.26  BV=2.95
    {2192,8192,1224, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=8.26  BV=2.85
    {2338,8192,1232, 0, 0, 0},  //TV = 8.74(224 lines)  AV=2.28  SV=8.27  BV=2.75
    {2526,8192,1224, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=8.26  BV=2.65
    {2692,8192,1232, 0, 0, 0},  //TV = 8.54(258 lines)  AV=2.28  SV=8.27  BV=2.55
    {2880,8192,1232, 0, 0, 0},  //TV = 8.44(276 lines)  AV=2.28  SV=8.27  BV=2.45
    {3089,8192,1224, 0, 0, 0},  //TV = 8.34(296 lines)  AV=2.28  SV=8.26  BV=2.36
    {3329,8192,1224, 0, 0, 0},  //TV = 8.23(319 lines)  AV=2.28  SV=8.26  BV=2.25
    {3558,8192,1224, 0, 0, 0},  //TV = 8.13(341 lines)  AV=2.28  SV=8.26  BV=2.15
    {3809,8192,1224, 0, 0, 0},  //TV = 8.04(365 lines)  AV=2.28  SV=8.26  BV=2.05
    {4080,8192,1224, 0, 0, 0},  //TV = 7.94(391 lines)  AV=2.28  SV=8.26  BV=1.95
    {4393,8192,1224, 0, 0, 0},  //TV = 7.83(421 lines)  AV=2.28  SV=8.26  BV=1.85
    {4706,8192,1224, 0, 0, 0},  //TV = 7.73(451 lines)  AV=2.28  SV=8.26  BV=1.75
    {5040,8192,1224, 0, 0, 0},  //TV = 7.63(483 lines)  AV=2.28  SV=8.26  BV=1.65
    {5395,8192,1224, 0, 0, 0},  //TV = 7.53(517 lines)  AV=2.28  SV=8.26  BV=1.55
    {5781,8192,1224, 0, 0, 0},  //TV = 7.43(554 lines)  AV=2.28  SV=8.26  BV=1.45
    {6188,8192,1224, 0, 0, 0},  //TV = 7.34(593 lines)  AV=2.28  SV=8.26  BV=1.35
    {6626,8192,1224, 0, 0, 0},  //TV = 7.24(635 lines)  AV=2.28  SV=8.26  BV=1.26
    {7096,8192,1224, 0, 0, 0},  //TV = 7.14(680 lines)  AV=2.28  SV=8.26  BV=1.16
    {7659,8192,1224, 0, 0, 0},  //TV = 7.03(734 lines)  AV=2.28  SV=8.26  BV=1.05
    {8202,8192,1224, 0, 0, 0},  //TV = 6.93(786 lines)  AV=2.28  SV=8.26  BV=0.95
    {8337,8192,1296, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=8.34  BV=0.84
    {8337,8192,1384, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=8.43  BV=0.75
    {8337,8192,1480, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=8.53  BV=0.65
    {8337,8192,1592, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=8.64  BV=0.54
    {8337,8192,1704, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=8.73  BV=0.45
    {8337,8192,1824, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=8.83  BV=0.35
    {16664,7711,1040, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.94  BV=0.25
    {16664,8192,1048, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=8.03  BV=0.15
    {16664,8192,1120, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=8.13  BV=0.05
    {16664,8192,1200, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=8.23  BV=-0.05
    {16664,8192,1288, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=8.33  BV=-0.15
    {16664,8192,1384, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=8.43  BV=-0.25
    {16664,8192,1480, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=8.53  BV=-0.35
    {25000,8192,1056, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.04  BV=-0.45
    {25000,8192,1128, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.14  BV=-0.54
    {25000,8192,1216, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.25  BV=-0.65
    {25000,8192,1296, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.34  BV=-0.74
    {25000,8192,1392, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.44  BV=-0.85
    {33337,8192,1120, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33337,8192,1208, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.24  BV=-1.06
    {33337,8192,1296, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.34  BV=-1.16
    {41663,8192,1112, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.12  BV=-1.26
    {41663,8192,1192, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.22  BV=-1.36
    {41663,8192,1272, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.31  BV=-1.45
    {50000,8192,1136, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.15  BV=-1.55
    {50000,8192,1216, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.25  BV=-1.65
    {50000,8192,1304, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.35  BV=-1.75
    {58327,8192,1200, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=8.23  BV=-1.85
    {58327,8192,1288, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=8.33  BV=-1.96
    {66663,8192,1208, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.24  BV=-2.06
    {66663,8192,1296, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.34  BV=-2.16
    {75000,8192,1232, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=8.27  BV=-2.25
    {83326,8192,1184, 0, 0, 0},  //TV = 3.59(7986 lines)  AV=2.28  SV=8.21  BV=-2.35
    {83326,8192,1272, 0, 0, 0},  //TV = 3.59(7986 lines)  AV=2.28  SV=8.31  BV=-2.45
    {91663,8192,1240, 0, 0, 0},  //TV = 3.45(8785 lines)  AV=2.28  SV=8.28  BV=-2.55
    {100000,8192,1216, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=8.25  BV=-2.65
    {108326,8192,1208, 0, 0, 0},  //TV = 3.21(10382 lines)  AV=2.28  SV=8.24  BV=-2.76
    {116663,8192,1200, 0, 0, 0},  //TV = 3.10(11181 lines)  AV=2.28  SV=8.23  BV=-2.85
    {125000,8192,1200, 0, 0, 0},  //TV = 3.00(11980 lines)  AV=2.28  SV=8.23  BV=-2.95
    {133326,8192,1208, 0, 0, 0},  //TV = 2.91(12778 lines)  AV=2.28  SV=8.24  BV=-3.06
    {141663,8192,1216, 0, 0, 0},  //TV = 2.82(13577 lines)  AV=2.28  SV=8.25  BV=-3.15
    {150000,8192,1232, 0, 0, 0},  //TV = 2.74(14376 lines)  AV=2.28  SV=8.27  BV=-3.25
    {158326,8192,1248, 0, 0, 0},  //TV = 2.66(15174 lines)  AV=2.28  SV=8.29  BV=-3.35
    {174989,8192,1208, 0, 0, 0},  //TV = 2.51(16771 lines)  AV=2.28  SV=8.24  BV=-3.45
    {183326,8192,1240, 0, 0, 0},  //TV = 2.45(17570 lines)  AV=2.28  SV=8.28  BV=-3.55
    {199989,8192,1216, 0, 0, 0},  //TV = 2.32(19167 lines)  AV=2.28  SV=8.25  BV=-3.65
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO800PLineTable_50Hz =
{
{
    {94,1341,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.40  BV=10.25
    {105,1311,1032, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.37  BV=10.12
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {115,1362,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.41  BV=9.95
    {126,1362,1024, 0, 0, 0},  /* TV = 12.95(12 lines)  AV=2.28  SV=5.41  BV=9.82 */
    {136,1341,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.39  BV=9.73
    {147,1341,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.39  BV=9.62
    {157,1341,1032, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.40  BV=9.51
    {178,1280,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.32  BV=9.41
    {178,1331,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.38  BV=9.35 */
    {199,1280,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.32  BV=9.25
    {209,1311,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.36  BV=9.14
    {220,1331,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.38  BV=9.05
    {240,1311,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.36  BV=8.94
    {261,1280,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.32  BV=8.86
    {282,1270,1032, 0, 0, 0},  //TV = 11.79(27 lines)  AV=2.28  SV=5.32  BV=8.75
    {293,1311,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.36  BV=8.66
    {324,1270,1032, 0, 0, 0},  //TV = 11.59(31 lines)  AV=2.28  SV=5.32  BV=8.54
    {345,1280,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.32  BV=8.45
    {366,1300,1024, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.34  BV=8.35
    {397,1280,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.32  BV=8.25
    {428,1270,1032, 0, 0, 0},  //TV = 11.19(41 lines)  AV=2.28  SV=5.32  BV=8.14
    {449,1311,1024, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.36  BV=8.04
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {491,1362,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.41  BV=7.86
    {491,1475,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.53  BV=7.74
    {491,1567,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.61  BV=7.65
    {491,1679,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.71  BV=7.55
    {491,1812,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.82  BV=7.44
    {491,1925,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.91  BV=7.36
    {491,2079,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.02  BV=7.25
    {491,2222,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.12  BV=7.15
    {491,2365,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.22  BV=7.05
    {491,2550,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.32  BV=6.95
    {491,2734,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.42  BV=6.85
    {491,2908,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.52  BV=6.75
    {491,3123,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.61  BV=6.66
    {491,3359,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.71  BV=6.55
    {491,3594,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.82  BV=6.44
    {491,3850,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.91  BV=6.36
    {491,4096,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.01  BV=6.26
    {491,4444,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.12  BV=6.15
    {491,4762,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.22  BV=6.05
    {491,5038,1040, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.32  BV=5.95
    {491,5458,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.41  BV=5.85
    {491,5827,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.52  BV=5.75
    {491,6246,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.62  BV=5.65
    {491,6717,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.71  BV=5.55
    {491,7086,1040, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.81  BV=5.45
    {491,7711,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.91  BV=5.35
    {491,8192,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.01  BV=5.26
    {491,8192,1112, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.12  BV=5.15
    {491,8192,1192, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.22  BV=5.05
    {512,8192,1224, 0, 0, 0},  //TV = 10.93(49 lines)  AV=2.28  SV=8.26  BV=4.95
    {554,8192,1216, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=8.25  BV=4.84
    {585,8192,1232, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=8.27  BV=4.75
    {627,8192,1232, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=8.27  BV=4.65
    {679,8192,1216, 0, 0, 0},  //TV = 10.52(65 lines)  AV=2.28  SV=8.25  BV=4.55
    {720,8192,1232, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=8.27  BV=4.45
    {773,8192,1232, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=8.27  BV=4.35
    {835,8192,1224, 0, 0, 0},  //TV = 10.23(80 lines)  AV=2.28  SV=8.26  BV=4.24
    {887,8192,1232, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=8.27  BV=4.15
    {950,8192,1224, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=8.26  BV=4.06
    {1023,8192,1232, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=8.27  BV=3.94
    {1096,8192,1224, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=8.26  BV=3.85
    {1180,8192,1224, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=8.26  BV=3.74
    {1253,8192,1232, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=8.27  BV=3.65
    {1346,8192,1232, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=8.27  BV=3.55
    {1451,8192,1224, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=8.26  BV=3.45
    {1545,8192,1232, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=8.27  BV=3.35
    {1660,8192,1224, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=8.26  BV=3.25
    {1785,8192,1224, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=8.26  BV=3.15
    {1899,8192,1232, 0, 0, 0},  //TV = 9.04(182 lines)  AV=2.28  SV=8.27  BV=3.05
    {2046,8192,1224, 0, 0, 0},  //TV = 8.93(196 lines)  AV=2.28  SV=8.26  BV=2.95
    {2192,8192,1224, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=8.26  BV=2.85
    {2338,8192,1232, 0, 0, 0},  //TV = 8.74(224 lines)  AV=2.28  SV=8.27  BV=2.75
    {2526,8192,1224, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=8.26  BV=2.65
    {2692,8192,1232, 0, 0, 0},  //TV = 8.54(258 lines)  AV=2.28  SV=8.27  BV=2.55
    {2880,8192,1232, 0, 0, 0},  //TV = 8.44(276 lines)  AV=2.28  SV=8.27  BV=2.45
    {3089,8192,1224, 0, 0, 0},  //TV = 8.34(296 lines)  AV=2.28  SV=8.26  BV=2.36
    {3329,8192,1224, 0, 0, 0},  //TV = 8.23(319 lines)  AV=2.28  SV=8.26  BV=2.25
    {3558,8192,1224, 0, 0, 0},  //TV = 8.13(341 lines)  AV=2.28  SV=8.26  BV=2.15
    {3809,8192,1224, 0, 0, 0},  //TV = 8.04(365 lines)  AV=2.28  SV=8.26  BV=2.05
    {4080,8192,1224, 0, 0, 0},  //TV = 7.94(391 lines)  AV=2.28  SV=8.26  BV=1.95
    {4393,8192,1224, 0, 0, 0},  //TV = 7.83(421 lines)  AV=2.28  SV=8.26  BV=1.85
    {4706,8192,1224, 0, 0, 0},  //TV = 7.73(451 lines)  AV=2.28  SV=8.26  BV=1.75
    {5040,8192,1224, 0, 0, 0},  //TV = 7.63(483 lines)  AV=2.28  SV=8.26  BV=1.65
    {5395,8192,1224, 0, 0, 0},  //TV = 7.53(517 lines)  AV=2.28  SV=8.26  BV=1.55
    {5781,8192,1224, 0, 0, 0},  //TV = 7.43(554 lines)  AV=2.28  SV=8.26  BV=1.45
    {6188,8192,1224, 0, 0, 0},  //TV = 7.34(593 lines)  AV=2.28  SV=8.26  BV=1.35
    {6626,8192,1224, 0, 0, 0},  //TV = 7.24(635 lines)  AV=2.28  SV=8.26  BV=1.26
    {7096,8192,1224, 0, 0, 0},  //TV = 7.14(680 lines)  AV=2.28  SV=8.26  BV=1.16
    {7659,8192,1224, 0, 0, 0},  //TV = 7.03(734 lines)  AV=2.28  SV=8.26  BV=1.05
    {8202,8192,1224, 0, 0, 0},  //TV = 6.93(786 lines)  AV=2.28  SV=8.26  BV=0.95
    {8786,8192,1224, 0, 0, 0},  //TV = 6.83(842 lines)  AV=2.28  SV=8.26  BV=0.85
    {9412,8192,1224, 0, 0, 0},  //TV = 6.73(902 lines)  AV=2.28  SV=8.26  BV=0.75
    {9996,8192,1240, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=8.28  BV=0.64
    {9996,8192,1328, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=8.38  BV=0.54
    {9996,8192,1416, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=8.47  BV=0.45
    {9996,8192,1520, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=8.57  BV=0.35
    {9996,8192,1632, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=8.67  BV=0.25
    {9996,8192,1744, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=8.77  BV=0.15
    {20002,7485,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.87  BV=0.05
    {20002,7946,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.97  BV=-0.05
    {20002,8192,1072, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=8.07  BV=-0.15
    {20002,8192,1152, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=8.17  BV=-0.25
    {20002,8192,1232, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=8.27  BV=-0.35
    {20002,8192,1320, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=8.37  BV=-0.45
    {20002,8192,1416, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=8.47  BV=-0.55
    {20002,8192,1520, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=8.57  BV=-0.65
    {29998,8192,1080, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.08  BV=-0.74
    {29998,8192,1160, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29998,8192,1240, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.28  BV=-0.94
    {29998,8192,1344, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.39  BV=-1.06
    {40004,8192,1080, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.08  BV=-1.16
    {40004,8192,1152, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.17  BV=-1.25
    {40004,8192,1240, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.28  BV=-1.36
    {40004,8192,1328, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.38  BV=-1.46
    {50000,8192,1136, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.15  BV=-1.55
    {50000,8192,1216, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.25  BV=-1.65
    {50000,8192,1304, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.35  BV=-1.75
    {59996,8192,1168, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.19  BV=-1.86
    {59996,8192,1248, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.29  BV=-1.95
    {70002,8192,1152, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.17  BV=-2.06
    {70002,8192,1232, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.27  BV=-2.16
    {79998,8192,1152, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=8.17  BV=-2.25
    {79998,8192,1240, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=8.28  BV=-2.36
    {90004,8192,1176, 0, 0, 0},  //TV = 3.47(8626 lines)  AV=2.28  SV=8.20  BV=-2.45
    {90004,8192,1264, 0, 0, 0},  //TV = 3.47(8626 lines)  AV=2.28  SV=8.30  BV=-2.55
    {100000,8192,1216, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=8.25  BV=-2.65
    {109996,8192,1184, 0, 0, 0},  //TV = 3.18(10542 lines)  AV=2.28  SV=8.21  BV=-2.75
    {109996,8192,1272, 0, 0, 0},  //TV = 3.18(10542 lines)  AV=2.28  SV=8.31  BV=-2.85
    {120002,8192,1248, 0, 0, 0},  //TV = 3.06(11501 lines)  AV=2.28  SV=8.29  BV=-2.95
    {129998,8192,1240, 0, 0, 0},  //TV = 2.94(12459 lines)  AV=2.28  SV=8.28  BV=-3.06
    {140004,8192,1232, 0, 0, 0},  //TV = 2.84(13418 lines)  AV=2.28  SV=8.27  BV=-3.16
    {150000,8192,1232, 0, 0, 0},  //TV = 2.74(14376 lines)  AV=2.28  SV=8.27  BV=-3.25
    {159995,8192,1240, 0, 0, 0},  //TV = 2.64(15334 lines)  AV=2.28  SV=8.28  BV=-3.36
    {170002,8192,1248, 0, 0, 0},  //TV = 2.56(16293 lines)  AV=2.28  SV=8.29  BV=-3.45
    {190004,8192,1192, 0, 0, 0},  //TV = 2.40(18210 lines)  AV=2.28  SV=8.22  BV=-3.55
    {199999,8192,1216, 0, 0, 0},  //TV = 2.32(19168 lines)  AV=2.28  SV=8.25  BV=-3.65
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO800Table =
{
    AETABLE_CAPTURE_ISO800, //eAETableID
    140, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    103, //i4MaxBV
    -37, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_800, //ISO
    sCaptureISO800PLineTable_60Hz,
    sCaptureISO800PLineTable_50Hz,
    NULL,
};
static strEvPline sCaptureISO1600PLineTable_60Hz =
{
{
    {94,1341,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.40  BV=10.25
    {105,1311,1032, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.37  BV=10.12
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {115,1362,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.41  BV=9.95
    {126,1362,1024, 0, 0, 0},  /* TV = 12.95(12 lines)  AV=2.28  SV=5.41  BV=9.82 */
    {136,1341,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.39  BV=9.73
    {147,1341,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.39  BV=9.62
    {157,1341,1032, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.40  BV=9.51
    {178,1280,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.32  BV=9.41
    {178,1331,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.38  BV=9.35 */
    {199,1280,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.32  BV=9.25
    {209,1311,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.36  BV=9.14
    {220,1331,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.38  BV=9.05
    {240,1311,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.36  BV=8.94
    {261,1280,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.32  BV=8.86
    {282,1270,1032, 0, 0, 0},  //TV = 11.79(27 lines)  AV=2.28  SV=5.32  BV=8.75
    {293,1311,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.36  BV=8.66
    {324,1270,1032, 0, 0, 0},  //TV = 11.59(31 lines)  AV=2.28  SV=5.32  BV=8.54
    {345,1280,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.32  BV=8.45
    {366,1300,1024, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.34  BV=8.35
    {397,1280,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.32  BV=8.25
    {428,1270,1032, 0, 0, 0},  //TV = 11.19(41 lines)  AV=2.28  SV=5.32  BV=8.14
    {449,1311,1024, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.36  BV=8.04
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {491,1362,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.41  BV=7.86
    {491,1475,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.53  BV=7.74
    {491,1567,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.61  BV=7.65
    {491,1679,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.71  BV=7.55
    {491,1812,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.82  BV=7.44
    {491,1925,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.91  BV=7.36
    {491,2079,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.02  BV=7.25
    {491,2222,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.12  BV=7.15
    {491,2365,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.22  BV=7.05
    {491,2550,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.32  BV=6.95
    {491,2734,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.42  BV=6.85
    {491,2908,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.52  BV=6.75
    {491,3123,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.61  BV=6.66
    {491,3359,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.71  BV=6.55
    {491,3594,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.82  BV=6.44
    {491,3850,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.91  BV=6.36
    {491,4096,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.01  BV=6.26
    {491,4444,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.12  BV=6.15
    {491,4762,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.22  BV=6.05
    {491,5038,1040, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.32  BV=5.95
    {491,5458,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.41  BV=5.85
    {491,5827,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.52  BV=5.75
    {491,6246,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.62  BV=5.65
    {491,6717,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.71  BV=5.55
    {491,7086,1040, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.81  BV=5.45
    {491,7711,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.91  BV=5.35
    {491,8192,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.01  BV=5.26
    {491,8192,1112, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.12  BV=5.15
    {491,8192,1192, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.22  BV=5.05
    {491,8192,1280, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.32  BV=4.95
    {491,8192,1368, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.42  BV=4.85
    {491,8192,1472, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.52  BV=4.74
    {491,8192,1576, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.62  BV=4.64
    {491,8192,1688, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.72  BV=4.55
    {491,8192,1808, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.82  BV=4.45
    {491,8192,1936, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.92  BV=4.35
    {491,8192,2072, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.02  BV=4.25
    {491,8192,2224, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.12  BV=4.15
    {491,8192,2384, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.22  BV=4.05
    {512,8192,2456, 0, 0, 0},  //TV = 10.93(49 lines)  AV=2.28  SV=9.26  BV=3.94
    {554,8192,2432, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=9.25  BV=3.84
    {585,8192,2464, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=9.27  BV=3.75
    {627,8192,2472, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=9.27  BV=3.64
    {679,8192,2440, 0, 0, 0},  //TV = 10.52(65 lines)  AV=2.28  SV=9.25  BV=3.55
    {720,8192,2464, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=9.27  BV=3.45
    {773,8192,2456, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=9.26  BV=3.35
    {835,8192,2448, 0, 0, 0},  //TV = 10.23(80 lines)  AV=2.28  SV=9.26  BV=3.24
    {887,8192,2464, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=9.27  BV=3.15
    {950,8192,2456, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=9.26  BV=3.05
    {1023,8192,2464, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=9.27  BV=2.94
    {1096,8192,2456, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=9.26  BV=2.85
    {1180,8192,2448, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=9.26  BV=2.74
    {1253,8192,2464, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=9.27  BV=2.65
    {1346,8192,2464, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=9.27  BV=2.55
    {1451,8192,2456, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=9.26  BV=2.44
    {1545,8192,2464, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=9.27  BV=2.35
    {1660,8192,2448, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=9.26  BV=2.25
    {1785,8192,2448, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=9.26  BV=2.15
    {1899,8192,2464, 0, 0, 0},  //TV = 9.04(182 lines)  AV=2.28  SV=9.27  BV=2.05
    {2046,8192,2456, 0, 0, 0},  //TV = 8.93(196 lines)  AV=2.28  SV=9.26  BV=1.95
    {2192,8192,2456, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=9.26  BV=1.85
    {2338,8192,2456, 0, 0, 0},  //TV = 8.74(224 lines)  AV=2.28  SV=9.26  BV=1.75
    {2526,8192,2448, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=9.26  BV=1.65
    {2692,8192,2464, 0, 0, 0},  //TV = 8.54(258 lines)  AV=2.28  SV=9.27  BV=1.55
    {2880,8192,2464, 0, 0, 0},  //TV = 8.44(276 lines)  AV=2.28  SV=9.27  BV=1.45
    {3089,8192,2456, 0, 0, 0},  //TV = 8.34(296 lines)  AV=2.28  SV=9.26  BV=1.35
    {3329,8192,2456, 0, 0, 0},  //TV = 8.23(319 lines)  AV=2.28  SV=9.26  BV=1.24
    {3558,8192,2456, 0, 0, 0},  //TV = 8.13(341 lines)  AV=2.28  SV=9.26  BV=1.15
    {3809,8192,2456, 0, 0, 0},  //TV = 8.04(365 lines)  AV=2.28  SV=9.26  BV=1.05
    {4080,8192,2456, 0, 0, 0},  //TV = 7.94(391 lines)  AV=2.28  SV=9.26  BV=0.95
    {4393,8192,2456, 0, 0, 0},  //TV = 7.83(421 lines)  AV=2.28  SV=9.26  BV=0.84
    {4706,8192,2456, 0, 0, 0},  //TV = 7.73(451 lines)  AV=2.28  SV=9.26  BV=0.74
    {5040,8192,2456, 0, 0, 0},  //TV = 7.63(483 lines)  AV=2.28  SV=9.26  BV=0.65
    {5395,8192,2456, 0, 0, 0},  //TV = 7.53(517 lines)  AV=2.28  SV=9.26  BV=0.55
    {5781,8192,2456, 0, 0, 0},  //TV = 7.43(554 lines)  AV=2.28  SV=9.26  BV=0.45
    {6188,8192,2456, 0, 0, 0},  //TV = 7.34(593 lines)  AV=2.28  SV=9.26  BV=0.35
    {6626,8192,2456, 0, 0, 0},  //TV = 7.24(635 lines)  AV=2.28  SV=9.26  BV=0.25
    {7096,8192,2456, 0, 0, 0},  //TV = 7.14(680 lines)  AV=2.28  SV=9.26  BV=0.15
    {7607,8192,2456, 0, 0, 0},  //TV = 7.04(729 lines)  AV=2.28  SV=9.26  BV=0.05
    {8202,8192,2456, 0, 0, 0},  //TV = 6.93(786 lines)  AV=2.28  SV=9.26  BV=-0.06
    {8337,8192,2592, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=9.34  BV=-0.16
    {8337,8192,2776, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=9.44  BV=-0.26
    {8337,8192,2968, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=9.54  BV=-0.35
    {8337,8192,3184, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=9.64  BV=-0.46
    {8337,8192,3408, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=9.73  BV=-0.55
    {8337,8192,3656, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=9.84  BV=-0.65
    {16664,8192,1960, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=8.94  BV=-0.75
    {16664,8192,2096, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=9.03  BV=-0.85
    {16664,8192,2248, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=9.13  BV=-0.95
    {16664,8192,2408, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=9.23  BV=-1.05
    {16664,8192,2576, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=9.33  BV=-1.15
    {16664,8192,2768, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=9.43  BV=-1.25
    {16664,8192,2960, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=9.53  BV=-1.35
    {25000,8192,2112, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.04  BV=-1.45
    {25000,8192,2264, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.14  BV=-1.55
    {25000,8192,2432, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.25  BV=-1.65
    {25000,8192,2600, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.34  BV=-1.75
    {25000,8192,2792, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.45  BV=-1.85
    {33337,8192,2240, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=9.13  BV=-1.95
    {33337,8192,2400, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=9.23  BV=-2.05
    {33337,8192,2592, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=9.34  BV=-2.16
    {41663,8192,2224, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.12  BV=-2.26
    {41663,8192,2384, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.22  BV=-2.36
    {41663,8192,2552, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.32  BV=-2.46
    {50000,8192,2280, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.15  BV=-2.56
    {50000,8192,2440, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.25  BV=-2.66
    {50000,8192,2616, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.35  BV=-2.76
    {58327,8192,2400, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=9.23  BV=-2.85
    {58327,8192,2576, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=9.33  BV=-2.96
    {66663,8192,2416, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.24  BV=-3.06
    {66663,8192,2592, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.34  BV=-3.16
    {75000,8192,2464, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.27  BV=-3.25
    {83326,8192,2376, 0, 0, 0},  //TV = 3.59(7986 lines)  AV=2.28  SV=9.21  BV=-3.35
    {83326,8192,2552, 0, 0, 0},  //TV = 3.59(7986 lines)  AV=2.28  SV=9.32  BV=-3.46
    {91663,8192,2480, 0, 0, 0},  //TV = 3.45(8785 lines)  AV=2.28  SV=9.28  BV=-3.55
    {100000,8192,2440, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=9.25  BV=-3.66
    {108326,8192,2416, 0, 0, 0},  //TV = 3.21(10382 lines)  AV=2.28  SV=9.24  BV=-3.76
    {116663,8192,2400, 0, 0, 0},  //TV = 3.10(11181 lines)  AV=2.28  SV=9.23  BV=-3.85
    {125000,8192,2400, 0, 0, 0},  //TV = 3.00(11980 lines)  AV=2.28  SV=9.23  BV=-3.95
    {133326,8192,2416, 0, 0, 0},  //TV = 2.91(12778 lines)  AV=2.28  SV=9.24  BV=-4.06
    {141663,8192,2432, 0, 0, 0},  //TV = 2.82(13577 lines)  AV=2.28  SV=9.25  BV=-4.15
    {150000,8192,2464, 0, 0, 0},  //TV = 2.74(14376 lines)  AV=2.28  SV=9.27  BV=-4.25
    {158326,8192,2504, 0, 0, 0},  //TV = 2.66(15174 lines)  AV=2.28  SV=9.29  BV=-4.36
    {174989,8192,2424, 0, 0, 0},  //TV = 2.51(16771 lines)  AV=2.28  SV=9.24  BV=-4.45
    {183326,8192,2480, 0, 0, 0},  //TV = 2.45(17570 lines)  AV=2.28  SV=9.28  BV=-4.55
    {199989,8192,2440, 0, 0, 0},  //TV = 2.32(19167 lines)  AV=2.28  SV=9.25  BV=-4.66
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureISO1600PLineTable_50Hz =
{
{
    {94,1341,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.40  BV=10.25
    {105,1311,1032, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.37  BV=10.12
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {115,1362,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.41  BV=9.95
    {126,1362,1024, 0, 0, 0},  /* TV = 12.95(12 lines)  AV=2.28  SV=5.41  BV=9.82 */
    {136,1341,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.39  BV=9.73
    {147,1341,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.39  BV=9.62
    {157,1341,1032, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.40  BV=9.51
    {178,1280,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.32  BV=9.41
    {178,1331,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.38  BV=9.35 */
    {199,1280,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.32  BV=9.25
    {209,1311,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.36  BV=9.14
    {220,1331,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.38  BV=9.05
    {240,1311,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.36  BV=8.94
    {261,1280,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.32  BV=8.86
    {282,1270,1032, 0, 0, 0},  //TV = 11.79(27 lines)  AV=2.28  SV=5.32  BV=8.75
    {293,1311,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.36  BV=8.66
    {324,1270,1032, 0, 0, 0},  //TV = 11.59(31 lines)  AV=2.28  SV=5.32  BV=8.54
    {345,1280,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.32  BV=8.45
    {366,1300,1024, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.34  BV=8.35
    {397,1280,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.32  BV=8.25
    {428,1270,1032, 0, 0, 0},  //TV = 11.19(41 lines)  AV=2.28  SV=5.32  BV=8.14
    {449,1311,1024, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.36  BV=8.04
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {491,1362,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.41  BV=7.86
    {491,1475,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.53  BV=7.74
    {491,1567,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.61  BV=7.65
    {491,1679,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.71  BV=7.55
    {491,1812,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.82  BV=7.44
    {491,1925,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.91  BV=7.36
    {491,2079,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.02  BV=7.25
    {491,2222,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.12  BV=7.15
    {491,2365,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.22  BV=7.05
    {491,2550,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.32  BV=6.95
    {491,2734,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.42  BV=6.85
    {491,2908,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.52  BV=6.75
    {491,3123,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.61  BV=6.66
    {491,3359,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.71  BV=6.55
    {491,3594,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.82  BV=6.44
    {491,3850,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.91  BV=6.36
    {491,4096,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.01  BV=6.26
    {491,4444,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.12  BV=6.15
    {491,4762,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.22  BV=6.05
    {491,5038,1040, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.32  BV=5.95
    {491,5458,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.41  BV=5.85
    {491,5827,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.52  BV=5.75
    {491,6246,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.62  BV=5.65
    {491,6717,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.71  BV=5.55
    {491,7086,1040, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.81  BV=5.45
    {491,7711,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.91  BV=5.35
    {491,8192,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.01  BV=5.26
    {491,8192,1112, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.12  BV=5.15
    {491,8192,1192, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.22  BV=5.05
    {491,8192,1280, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.32  BV=4.95
    {491,8192,1368, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.42  BV=4.85
    {491,8192,1472, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.52  BV=4.74
    {491,8192,1576, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.62  BV=4.64
    {491,8192,1688, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.72  BV=4.55
    {491,8192,1808, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.82  BV=4.45
    {491,8192,1936, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.92  BV=4.35
    {491,8192,2072, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.02  BV=4.25
    {491,8192,2224, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.12  BV=4.15
    {491,8192,2384, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.22  BV=4.05
    {512,8192,2456, 0, 0, 0},  //TV = 10.93(49 lines)  AV=2.28  SV=9.26  BV=3.94
    {554,8192,2432, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=9.25  BV=3.84
    {585,8192,2464, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=9.27  BV=3.75
    {627,8192,2472, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=9.27  BV=3.64
    {679,8192,2440, 0, 0, 0},  //TV = 10.52(65 lines)  AV=2.28  SV=9.25  BV=3.55
    {720,8192,2464, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=9.27  BV=3.45
    {773,8192,2456, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=9.26  BV=3.35
    {835,8192,2448, 0, 0, 0},  //TV = 10.23(80 lines)  AV=2.28  SV=9.26  BV=3.24
    {887,8192,2464, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=9.27  BV=3.15
    {950,8192,2456, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=9.26  BV=3.05
    {1023,8192,2464, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=9.27  BV=2.94
    {1096,8192,2456, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=9.26  BV=2.85
    {1180,8192,2448, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=9.26  BV=2.74
    {1253,8192,2464, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=9.27  BV=2.65
    {1346,8192,2464, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=9.27  BV=2.55
    {1451,8192,2456, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=9.26  BV=2.44
    {1545,8192,2464, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=9.27  BV=2.35
    {1660,8192,2448, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=9.26  BV=2.25
    {1785,8192,2448, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=9.26  BV=2.15
    {1899,8192,2464, 0, 0, 0},  //TV = 9.04(182 lines)  AV=2.28  SV=9.27  BV=2.05
    {2046,8192,2456, 0, 0, 0},  //TV = 8.93(196 lines)  AV=2.28  SV=9.26  BV=1.95
    {2192,8192,2456, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=9.26  BV=1.85
    {2338,8192,2456, 0, 0, 0},  //TV = 8.74(224 lines)  AV=2.28  SV=9.26  BV=1.75
    {2526,8192,2448, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=9.26  BV=1.65
    {2692,8192,2464, 0, 0, 0},  //TV = 8.54(258 lines)  AV=2.28  SV=9.27  BV=1.55
    {2880,8192,2464, 0, 0, 0},  //TV = 8.44(276 lines)  AV=2.28  SV=9.27  BV=1.45
    {3089,8192,2456, 0, 0, 0},  //TV = 8.34(296 lines)  AV=2.28  SV=9.26  BV=1.35
    {3329,8192,2456, 0, 0, 0},  //TV = 8.23(319 lines)  AV=2.28  SV=9.26  BV=1.24
    {3558,8192,2456, 0, 0, 0},  //TV = 8.13(341 lines)  AV=2.28  SV=9.26  BV=1.15
    {3809,8192,2456, 0, 0, 0},  //TV = 8.04(365 lines)  AV=2.28  SV=9.26  BV=1.05
    {4080,8192,2456, 0, 0, 0},  //TV = 7.94(391 lines)  AV=2.28  SV=9.26  BV=0.95
    {4393,8192,2456, 0, 0, 0},  //TV = 7.83(421 lines)  AV=2.28  SV=9.26  BV=0.84
    {4706,8192,2456, 0, 0, 0},  //TV = 7.73(451 lines)  AV=2.28  SV=9.26  BV=0.74
    {5040,8192,2456, 0, 0, 0},  //TV = 7.63(483 lines)  AV=2.28  SV=9.26  BV=0.65
    {5395,8192,2456, 0, 0, 0},  //TV = 7.53(517 lines)  AV=2.28  SV=9.26  BV=0.55
    {5781,8192,2456, 0, 0, 0},  //TV = 7.43(554 lines)  AV=2.28  SV=9.26  BV=0.45
    {6188,8192,2456, 0, 0, 0},  //TV = 7.34(593 lines)  AV=2.28  SV=9.26  BV=0.35
    {6626,8192,2456, 0, 0, 0},  //TV = 7.24(635 lines)  AV=2.28  SV=9.26  BV=0.25
    {7096,8192,2456, 0, 0, 0},  //TV = 7.14(680 lines)  AV=2.28  SV=9.26  BV=0.15
    {7607,8192,2456, 0, 0, 0},  //TV = 7.04(729 lines)  AV=2.28  SV=9.26  BV=0.05
    {8202,8192,2456, 0, 0, 0},  //TV = 6.93(786 lines)  AV=2.28  SV=9.26  BV=-0.06
    {8786,8192,2456, 0, 0, 0},  //TV = 6.83(842 lines)  AV=2.28  SV=9.26  BV=-0.16
    {9412,8192,2456, 0, 0, 0},  //TV = 6.73(902 lines)  AV=2.28  SV=9.26  BV=-0.26
    {9996,8192,2480, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=9.28  BV=-0.36
    {9996,8192,2656, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=9.38  BV=-0.46
    {9996,8192,2840, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=9.47  BV=-0.55
    {9996,8192,3048, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=9.57  BV=-0.65
    {9996,8192,3264, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=9.67  BV=-0.75
    {9996,8192,3496, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=9.77  BV=-0.85
    {20002,8192,1872, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=8.87  BV=-0.95
    {20002,8192,2008, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=8.97  BV=-1.05
    {20002,8192,2152, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=9.07  BV=-1.15
    {20002,8192,2304, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=9.17  BV=-1.25
    {20002,8192,2464, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=9.27  BV=-1.35
    {20002,8192,2640, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=9.37  BV=-1.45
    {20002,8192,2832, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=9.47  BV=-1.55
    {20002,8192,3040, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=9.57  BV=-1.65
    {29998,8192,2168, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.08  BV=-1.75
    {29998,8192,2320, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.18  BV=-1.85
    {29998,8192,2488, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.28  BV=-1.95
    {29998,8192,2688, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.39  BV=-2.06
    {40004,8192,2160, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.08  BV=-2.16
    {40004,8192,2312, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.17  BV=-2.26
    {40004,8192,2480, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.28  BV=-2.36
    {40004,8192,2656, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.38  BV=-2.46
    {50000,8192,2280, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.15  BV=-2.56
    {50000,8192,2440, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.25  BV=-2.66
    {50000,8192,2616, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.35  BV=-2.76
    {59996,8192,2336, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.19  BV=-2.86
    {59996,8192,2504, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.29  BV=-2.96
    {70002,8192,2304, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.17  BV=-3.06
    {70002,8192,2464, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.27  BV=-3.16
    {79998,8192,2312, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=9.17  BV=-3.26
    {79998,8192,2480, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=9.28  BV=-3.36
    {90004,8192,2360, 0, 0, 0},  //TV = 3.47(8626 lines)  AV=2.28  SV=9.20  BV=-3.46
    {90004,8192,2528, 0, 0, 0},  //TV = 3.47(8626 lines)  AV=2.28  SV=9.30  BV=-3.55
    {100000,8192,2440, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=9.25  BV=-3.66
    {109996,8192,2376, 0, 0, 0},  //TV = 3.18(10542 lines)  AV=2.28  SV=9.21  BV=-3.75
    {109996,8192,2544, 0, 0, 0},  //TV = 3.18(10542 lines)  AV=2.28  SV=9.31  BV=-3.85
    {120002,8192,2504, 0, 0, 0},  //TV = 3.06(11501 lines)  AV=2.28  SV=9.29  BV=-3.96
    {129998,8192,2480, 0, 0, 0},  //TV = 2.94(12459 lines)  AV=2.28  SV=9.28  BV=-4.06
    {140004,8192,2464, 0, 0, 0},  //TV = 2.84(13418 lines)  AV=2.28  SV=9.27  BV=-4.16
    {150000,8192,2464, 0, 0, 0},  //TV = 2.74(14376 lines)  AV=2.28  SV=9.27  BV=-4.25
    {159995,8192,2480, 0, 0, 0},  //TV = 2.64(15334 lines)  AV=2.28  SV=9.28  BV=-4.36
    {170002,8192,2496, 0, 0, 0},  //TV = 2.56(16293 lines)  AV=2.28  SV=9.29  BV=-4.45
    {190004,8192,2392, 0, 0, 0},  //TV = 2.40(18210 lines)  AV=2.28  SV=9.22  BV=-4.55
    {199999,8192,2440, 0, 0, 0},  //TV = 2.32(19168 lines)  AV=2.28  SV=9.25  BV=-4.66
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_CaptureISO1600Table =
{
    AETABLE_CAPTURE_ISO1600, //eAETableID
    150, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    103, //i4MaxBV
    -47, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_1600, //ISO
    sCaptureISO1600PLineTable_60Hz,
    sCaptureISO1600PLineTable_50Hz,
    NULL,
};
static strEvPline sCaptureStrobePLineTable_60Hz =
{
{
    {94,1198,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.24  BV=10.41
    {105,1147,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.16  BV=10.33
    {105,1219,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.25  BV=10.24
    {115,1219,1024, 0, 0, 0},  /* TV = 13.09(11 lines)  AV=2.28  SV=5.25  BV=10.11 */
    {126,1188,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.21  BV=10.01
    {136,1167,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.19  BV=9.93
    {147,1147,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.16  BV=9.84
    {157,1167,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.19  BV=9.72
    {167,1167,1024, 0, 0, 0},  //TV = 12.55(16 lines)  AV=2.28  SV=5.19  BV=9.63
    {178,1188,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.21  BV=9.52
    {199,1147,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.16  BV=9.41
    {209,1144,1024, 0, 0, 0},  /* TV = 12.22(20 lines)  AV=2.28  SV=5.16  BV=9.34 */
    {220,1147,1032, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.17  BV=9.25
    {230,1188,1024, 0, 0, 0},  //TV = 12.09(22 lines)  AV=2.28  SV=5.21  BV=9.15
    {251,1167,1024, 0, 0, 0},  //TV = 11.96(24 lines)  AV=2.28  SV=5.19  BV=9.05
    {272,1147,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.16  BV=8.96
    {293,1147,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.16  BV=8.85
    {314,1147,1024, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.16  BV=8.75
    {334,1147,1032, 0, 0, 0},  //TV = 11.55(32 lines)  AV=2.28  SV=5.17  BV=8.65
    {355,1167,1024, 0, 0, 0},  //TV = 11.46(34 lines)  AV=2.28  SV=5.19  BV=8.55
    {387,1147,1024, 0, 0, 0},  //TV = 11.34(37 lines)  AV=2.28  SV=5.16  BV=8.45
    {407,1167,1024, 0, 0, 0},  //TV = 11.26(39 lines)  AV=2.28  SV=5.19  BV=8.35
    {439,1147,1032, 0, 0, 0},  //TV = 11.15(42 lines)  AV=2.28  SV=5.17  BV=8.25
    {480,1144,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.16  BV=8.14
    {501,1167,1024, 0, 0, 0},  //TV = 10.96(48 lines)  AV=2.28  SV=5.19  BV=8.05
    {543,1147,1032, 0, 0, 0},  //TV = 10.85(52 lines)  AV=2.28  SV=5.17  BV=7.95
    {585,1147,1024, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=5.16  BV=7.85
    {627,1147,1024, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=5.16  BV=7.75
    {668,1147,1032, 0, 0, 0},  //TV = 10.55(64 lines)  AV=2.28  SV=5.17  BV=7.65
    {720,1147,1024, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=5.16  BV=7.55
    {773,1147,1024, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=5.16  BV=7.45
    {825,1147,1024, 0, 0, 0},  //TV = 10.24(79 lines)  AV=2.28  SV=5.16  BV=7.35
    {887,1147,1024, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=5.16  BV=7.25
    {950,1147,1024, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=5.16  BV=7.15
    {1023,1144,1024, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=5.16  BV=7.05
    {1096,1147,1024, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=5.16  BV=6.94
    {1180,1144,1024, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=5.16  BV=6.84
    {1253,1147,1024, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=5.16  BV=6.75
    {1346,1147,1024, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=5.16  BV=6.65
    {1451,1144,1024, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=5.16  BV=6.54
    {1545,1147,1024, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=5.16  BV=6.45
    {1660,1144,1024, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=5.16  BV=6.35
    {1785,1144,1024, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=5.16  BV=6.24
    {1910,1144,1024, 0, 0, 0},  //TV = 9.03(183 lines)  AV=2.28  SV=5.16  BV=6.15
    {2056,1144,1024, 0, 0, 0},  //TV = 8.93(197 lines)  AV=2.28  SV=5.16  BV=6.04
    {2192,1144,1024, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=5.16  BV=5.95
    {2348,1144,1024, 0, 0, 0},  //TV = 8.73(225 lines)  AV=2.28  SV=5.16  BV=5.85
    {2526,1144,1024, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=5.16  BV=5.74
    {2703,1144,1024, 0, 0, 0},  //TV = 8.53(259 lines)  AV=2.28  SV=5.16  BV=5.65
    {2891,1144,1024, 0, 0, 0},  //TV = 8.43(277 lines)  AV=2.28  SV=5.16  BV=5.55
    {3099,1144,1024, 0, 0, 0},  //TV = 8.33(297 lines)  AV=2.28  SV=5.16  BV=5.45
    {3339,1144,1024, 0, 0, 0},  //TV = 8.23(320 lines)  AV=2.28  SV=5.16  BV=5.34
    {3569,1144,1024, 0, 0, 0},  //TV = 8.13(342 lines)  AV=2.28  SV=5.16  BV=5.25
    {3819,1144,1024, 0, 0, 0},  //TV = 8.03(366 lines)  AV=2.28  SV=5.16  BV=5.15
    {4091,1144,1024, 0, 0, 0},  //TV = 7.93(392 lines)  AV=2.28  SV=5.16  BV=5.05
    {4383,1144,1024, 0, 0, 0},  //TV = 7.83(420 lines)  AV=2.28  SV=5.16  BV=4.95
    {4717,1144,1024, 0, 0, 0},  //TV = 7.73(452 lines)  AV=2.28  SV=5.16  BV=4.84
    {5051,1144,1024, 0, 0, 0},  //TV = 7.63(484 lines)  AV=2.28  SV=5.16  BV=4.74
    {5416,1144,1024, 0, 0, 0},  //TV = 7.53(519 lines)  AV=2.28  SV=5.16  BV=4.64
    {5791,1144,1024, 0, 0, 0},  //TV = 7.43(555 lines)  AV=2.28  SV=5.16  BV=4.55
    {6209,1144,1024, 0, 0, 0},  //TV = 7.33(595 lines)  AV=2.28  SV=5.16  BV=4.45
    {6647,1144,1024, 0, 0, 0},  //TV = 7.23(637 lines)  AV=2.28  SV=5.16  BV=4.35
    {7116,1144,1024, 0, 0, 0},  //TV = 7.13(682 lines)  AV=2.28  SV=5.16  BV=4.25
    {7628,1144,1024, 0, 0, 0},  //TV = 7.03(731 lines)  AV=2.28  SV=5.16  BV=4.15
    {8222,1144,1024, 0, 0, 0},  //TV = 6.93(788 lines)  AV=2.28  SV=5.16  BV=4.04
    {8338,1198,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.24  BV=3.94
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.53  BV=3.65
    {8338,1587,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.63  BV=3.55
    {8338,1700,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.73  BV=3.45
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1956,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.93  BV=3.25
    {8338,2079,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.03  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {16664,1198,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.24  BV=2.94
    {16664,1300,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.34  BV=2.84
    {16664,1382,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.43  BV=2.75
    {16664,1495,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.55  BV=2.64
    {16664,1587,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.63  BV=2.55
    {16664,1700,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.73  BV=2.45
    {25001,1198,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.24  BV=2.36
    {25001,1300,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.34  BV=2.25
    {25001,1393,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.44  BV=2.15
    {25001,1495,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.55  BV=2.05
    {33327,1198,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.24  BV=1.94
    {33327,1280,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.33  BV=1.85
    {33327,1382,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.43  BV=1.75
    {33327,1475,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.54  BV=1.64
    {33327,1587,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.63  BV=1.55
    {33327,1710,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.74  BV=1.44
    {33327,1823,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.83  BV=1.35
    {33327,1966,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.94  BV=1.24
    {33327,2099,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.04  BV=1.15
    {33327,2243,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.13  BV=1.05
    {33327,2406,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.23  BV=0.95
    {33327,2591,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.34  BV=0.84
    {33327,2755,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.43  BV=0.75
    {33327,2949,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.53  BV=0.66
    {33327,3154,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.62  BV=0.56
    {33327,3400,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.73  BV=0.45
    {33327,3645,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.83  BV=0.35
    {33327,3850,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.93  BV=0.25
    {33337,4157,1032, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.03  BV=0.15
    {33337,4444,1032, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.13  BV=0.05
    {41663,3850,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=6.91  BV=-0.05
    {41663,4096,1032, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.01  BV=-0.15
    {41663,4444,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.12  BV=-0.26
    {41663,4680,1040, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.21  BV=-0.35
    {41663,5038,1032, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.31  BV=-0.45
    {41663,5345,1040, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.41  BV=-0.55
    {41663,5827,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.51  BV=-0.65
    {41663,6246,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.61  BV=-0.75
    {41663,6554,1040, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.70  BV=-0.84
    {41663,7086,1040, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.81  BV=-0.95
    {41663,7711,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.91  BV=-1.05
    {41663,8192,1032, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.01  BV=-1.15
    {41663,8192,1104, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.11  BV=-1.25
    {50000,7711,1048, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=7.95  BV=-1.35
    {50000,8192,1056, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.04  BV=-1.45
    {50000,8192,1128, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.14  BV=-1.54
    {50000,8192,1216, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.25  BV=-1.65
    {50000,8192,1296, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.34  BV=-1.74
    {50000,8192,1392, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.44  BV=-1.85
    {50000,8192,1504, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.55  BV=-1.96
    {50000,8192,1608, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.65  BV=-2.05
    {50000,8192,1728, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.75  BV=-2.16
    {50000,8192,1848, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.85  BV=-2.25
    {50000,8192,1984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.95  BV=-2.36
    {50000,8192,2120, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.05  BV=-2.45
    {58327,8192,1944, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=8.92  BV=-2.55
    {58327,8192,2080, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=9.02  BV=-2.65
    {66663,8192,1952, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.93  BV=-2.75
    {66663,8192,2096, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.03  BV=-2.85
    {75000,8192,2000, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=8.97  BV=-2.95
    {75000,8192,2144, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.07  BV=-3.05
    {75000,8192,2296, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.16  BV=-3.15
    {75000,8192,2464, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.27  BV=-3.25
    {75000,8192,2640, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.37  BV=-3.35
    {75000,8192,2832, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.47  BV=-3.46
    {75000,8192,3032, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.57  BV=-3.55
    {75000,8192,3248, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.67  BV=-3.65
    {75000,8192,3480, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.76  BV=-3.75
    {75000,8192,3728, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.86  BV=-3.85
    {75000,8192,4000, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.97  BV=-3.95
    {75000,8192,4288, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=10.07  BV=-4.05
    {75000,8192,4592, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=10.16  BV=-4.15
    {75000,8192,4920, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=10.26  BV=-4.25
    {75000,8192,5120, 0, 0, 0},  /* TV = 3.74(7188 lines)  AV=2.28  SV=10.32  BV=-4.31 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sCaptureStrobePLineTable_50Hz =
{
{
    {94,1198,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.24  BV=10.41
    {105,1147,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.16  BV=10.33
    {105,1219,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.25  BV=10.24
    {115,1219,1024, 0, 0, 0},  /* TV = 13.09(11 lines)  AV=2.28  SV=5.25  BV=10.11 */
    {126,1188,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.21  BV=10.01
    {136,1167,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.19  BV=9.93
    {147,1147,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.16  BV=9.84
    {157,1167,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.19  BV=9.72
    {167,1167,1024, 0, 0, 0},  //TV = 12.55(16 lines)  AV=2.28  SV=5.19  BV=9.63
    {178,1188,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.21  BV=9.52
    {199,1147,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.16  BV=9.41
    {209,1144,1024, 0, 0, 0},  /* TV = 12.22(20 lines)  AV=2.28  SV=5.16  BV=9.34 */
    {220,1147,1032, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.17  BV=9.25
    {230,1188,1024, 0, 0, 0},  //TV = 12.09(22 lines)  AV=2.28  SV=5.21  BV=9.15
    {251,1167,1024, 0, 0, 0},  //TV = 11.96(24 lines)  AV=2.28  SV=5.19  BV=9.05
    {272,1147,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.16  BV=8.96
    {293,1147,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.16  BV=8.85
    {314,1147,1024, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.16  BV=8.75
    {334,1147,1032, 0, 0, 0},  //TV = 11.55(32 lines)  AV=2.28  SV=5.17  BV=8.65
    {355,1167,1024, 0, 0, 0},  //TV = 11.46(34 lines)  AV=2.28  SV=5.19  BV=8.55
    {387,1147,1024, 0, 0, 0},  //TV = 11.34(37 lines)  AV=2.28  SV=5.16  BV=8.45
    {407,1167,1024, 0, 0, 0},  //TV = 11.26(39 lines)  AV=2.28  SV=5.19  BV=8.35
    {439,1147,1032, 0, 0, 0},  //TV = 11.15(42 lines)  AV=2.28  SV=5.17  BV=8.25
    {480,1144,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.16  BV=8.14
    {501,1167,1024, 0, 0, 0},  //TV = 10.96(48 lines)  AV=2.28  SV=5.19  BV=8.05
    {543,1147,1032, 0, 0, 0},  //TV = 10.85(52 lines)  AV=2.28  SV=5.17  BV=7.95
    {585,1147,1024, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=5.16  BV=7.85
    {627,1147,1024, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=5.16  BV=7.75
    {668,1147,1032, 0, 0, 0},  //TV = 10.55(64 lines)  AV=2.28  SV=5.17  BV=7.65
    {720,1147,1024, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=5.16  BV=7.55
    {773,1147,1024, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=5.16  BV=7.45
    {825,1147,1024, 0, 0, 0},  //TV = 10.24(79 lines)  AV=2.28  SV=5.16  BV=7.35
    {887,1147,1024, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=5.16  BV=7.25
    {950,1147,1024, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=5.16  BV=7.15
    {1023,1144,1024, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=5.16  BV=7.05
    {1096,1147,1024, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=5.16  BV=6.94
    {1180,1144,1024, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=5.16  BV=6.84
    {1253,1147,1024, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=5.16  BV=6.75
    {1346,1147,1024, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=5.16  BV=6.65
    {1451,1144,1024, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=5.16  BV=6.54
    {1545,1147,1024, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=5.16  BV=6.45
    {1660,1144,1024, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=5.16  BV=6.35
    {1785,1144,1024, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=5.16  BV=6.24
    {1910,1144,1024, 0, 0, 0},  //TV = 9.03(183 lines)  AV=2.28  SV=5.16  BV=6.15
    {2056,1144,1024, 0, 0, 0},  //TV = 8.93(197 lines)  AV=2.28  SV=5.16  BV=6.04
    {2192,1144,1024, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=5.16  BV=5.95
    {2348,1144,1024, 0, 0, 0},  //TV = 8.73(225 lines)  AV=2.28  SV=5.16  BV=5.85
    {2526,1144,1024, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=5.16  BV=5.74
    {2703,1144,1024, 0, 0, 0},  //TV = 8.53(259 lines)  AV=2.28  SV=5.16  BV=5.65
    {2891,1144,1024, 0, 0, 0},  //TV = 8.43(277 lines)  AV=2.28  SV=5.16  BV=5.55
    {3099,1144,1024, 0, 0, 0},  //TV = 8.33(297 lines)  AV=2.28  SV=5.16  BV=5.45
    {3339,1144,1024, 0, 0, 0},  //TV = 8.23(320 lines)  AV=2.28  SV=5.16  BV=5.34
    {3569,1144,1024, 0, 0, 0},  //TV = 8.13(342 lines)  AV=2.28  SV=5.16  BV=5.25
    {3819,1144,1024, 0, 0, 0},  //TV = 8.03(366 lines)  AV=2.28  SV=5.16  BV=5.15
    {4091,1144,1024, 0, 0, 0},  //TV = 7.93(392 lines)  AV=2.28  SV=5.16  BV=5.05
    {4383,1144,1024, 0, 0, 0},  //TV = 7.83(420 lines)  AV=2.28  SV=5.16  BV=4.95
    {4717,1144,1024, 0, 0, 0},  //TV = 7.73(452 lines)  AV=2.28  SV=5.16  BV=4.84
    {5051,1144,1024, 0, 0, 0},  //TV = 7.63(484 lines)  AV=2.28  SV=5.16  BV=4.74
    {5416,1144,1024, 0, 0, 0},  //TV = 7.53(519 lines)  AV=2.28  SV=5.16  BV=4.64
    {5791,1144,1024, 0, 0, 0},  //TV = 7.43(555 lines)  AV=2.28  SV=5.16  BV=4.55
    {6209,1144,1024, 0, 0, 0},  //TV = 7.33(595 lines)  AV=2.28  SV=5.16  BV=4.45
    {6647,1144,1024, 0, 0, 0},  //TV = 7.23(637 lines)  AV=2.28  SV=5.16  BV=4.35
    {7116,1144,1024, 0, 0, 0},  //TV = 7.13(682 lines)  AV=2.28  SV=5.16  BV=4.25
    {7628,1144,1024, 0, 0, 0},  //TV = 7.03(731 lines)  AV=2.28  SV=5.16  BV=4.15
    {8222,1144,1024, 0, 0, 0},  //TV = 6.93(788 lines)  AV=2.28  SV=5.16  BV=4.04
    {8807,1144,1024, 0, 0, 0},  //TV = 6.83(844 lines)  AV=2.28  SV=5.16  BV=3.94
    {9443,1144,1024, 0, 0, 0},  //TV = 6.73(905 lines)  AV=2.28  SV=5.16  BV=3.84
    {9996,1147,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.16  BV=3.76
    {9996,1239,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.27  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1526,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.58  BV=3.34
    {9996,1618,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.67  BV=3.25
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1864,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.86  BV=3.06
    {9996,1997,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.96  BV=2.96
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {20003,1147,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.16  BV=2.75
    {20003,1239,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.27  BV=2.64
    {20003,1331,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.38  BV=2.54
    {20003,1423,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.47  BV=2.44
    {20003,1505,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.57  BV=2.35
    {20003,1618,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.67  BV=2.25
    {29998,1167,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.19  BV=2.15
    {29998,1239,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.27  BV=2.06
    {29998,1341,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.39  BV=1.94
    {29998,1423,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.49  BV=1.85
    {29998,1526,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.58  BV=1.76
    {29998,1649,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.69  BV=1.65
    {29998,1761,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.78  BV=1.55
    {29998,1884,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.89  BV=1.44
    {29998,2028,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.99  BV=1.35
    {29998,2181,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.09  BV=1.24
    {29998,2324,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.18  BV=1.15
    {29998,2478,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.27  BV=1.06
    {29998,2673,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.38  BV=0.95
    {29998,2877,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.49  BV=0.84
    {29998,3052,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.59  BV=0.75
    {29998,3277,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.68  BV=0.66
    {29998,3492,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.78  BV=0.55
    {29998,3799,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.89  BV=0.44
    {29998,4035,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.98  BV=0.36
    {29998,4301,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.08  BV=0.25
    {29998,4598,1040, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.19  BV=0.14
    {40004,3748,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=6.87  BV=0.05
    {40004,3973,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=6.97  BV=-0.05
    {40004,4229,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.07  BV=-0.15
    {40004,4598,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.17  BV=-0.25
    {40004,4946,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.27  BV=-0.35
    {40004,5243,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.37  BV=-0.45
    {40004,5581,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.47  BV=-0.55
    {40004,5960,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.56  BV=-0.64
    {40004,6390,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.66  BV=-0.75
    {40004,6902,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.78  BV=-0.86
    {40004,7485,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.87  BV=-0.95
    {40004,7946,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.97  BV=-1.05
    {40004,8192,1072, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.07  BV=-1.15
    {40004,8192,1152, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.17  BV=-1.25
    {50000,7711,1048, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=7.95  BV=-1.35
    {50000,8192,1056, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.04  BV=-1.45
    {50000,8192,1128, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.14  BV=-1.54
    {50000,8192,1216, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.25  BV=-1.65
    {50000,8192,1296, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.34  BV=-1.74
    {50000,8192,1392, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.44  BV=-1.85
    {50000,8192,1504, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.55  BV=-1.96
    {50000,8192,1608, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.65  BV=-2.05
    {50000,8192,1728, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.75  BV=-2.16
    {50000,8192,1848, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.85  BV=-2.25
    {50000,8192,1984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.95  BV=-2.36
    {50000,8192,2120, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.05  BV=-2.45
    {59996,8192,1888, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.88  BV=-2.55
    {59996,8192,2024, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.98  BV=-2.65
    {59996,8192,2168, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.08  BV=-2.75
    {70002,8192,1992, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.96  BV=-2.85
    {70002,8192,2144, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.07  BV=-2.95
    {70002,8192,2296, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.16  BV=-3.05
    {70002,8192,2464, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.27  BV=-3.16
    {70002,8192,2640, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.37  BV=-3.25
    {70002,8192,2832, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.47  BV=-3.36
    {70002,8192,3032, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.57  BV=-3.45
    {70002,8192,3248, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.67  BV=-3.55
    {70002,8192,3480, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.76  BV=-3.65
    {70002,8192,3728, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.86  BV=-3.75
    {70002,8192,4000, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.97  BV=-3.85
    {70002,8192,4288, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.07  BV=-3.95
    {70002,8192,4592, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.16  BV=-4.05
    {70002,8192,4920, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.26  BV=-4.15
    {70002,8192,5120, 0, 0, 0},  /* TV = 3.84(6709 lines)  AV=2.28  SV=10.32  BV=-4.21 */
    {70002,8192,5120, 0, 0, 0},  /* TV = 3.84(6709 lines)  AV=2.28  SV=10.32  BV=-4.21 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_StrobeTable =
{
    AETABLE_STROBE, //eAETableID
    149, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    105, //i4MaxBV
    -43, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sCaptureStrobePLineTable_60Hz,
    sCaptureStrobePLineTable_50Hz,
    NULL,
};
static strEvPline sAEScene1PLineTable_60Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8338,1198,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.24  BV=3.94
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.54  BV=3.64
    {8338,1587,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.63  BV=3.55
    {8338,1700,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.73  BV=3.45
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1956,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.93  BV=3.25
    {8338,2079,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.03  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {16664,1198,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.24  BV=2.94
    {16664,1280,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.33  BV=2.85
    {16664,1382,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.43  BV=2.75
    {16664,1495,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.55  BV=2.64
    {16664,1587,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.64  BV=2.54
    {16664,1700,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.73  BV=2.45
    {25001,1198,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.24  BV=2.36
    {25001,1300,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.34  BV=2.25
    {25001,1393,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.46  BV=2.14
    {25001,1495,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.55  BV=2.05
    {33327,1198,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.24  BV=1.94
    {33327,1280,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.33  BV=1.85
    {33327,1382,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.43  BV=1.75
    {33327,1495,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.55  BV=1.64
    {33327,1587,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.63  BV=1.55
    {33327,1700,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.73  BV=1.45
    {33327,1823,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.83  BV=1.35
    {33327,1956,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.93  BV=1.25
    {33327,2079,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.03  BV=1.15
    {33327,2243,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.13  BV=1.05
    {33327,2406,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.23  BV=0.95
    {33327,2570,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.33  BV=0.85
    {33327,2755,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.44  BV=0.74
    {33327,2949,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.54  BV=0.64
    {33327,3154,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.63  BV=0.55
    {33327,3400,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.73  BV=0.45
    {33327,3645,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.83  BV=0.35
    {33327,3912,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.93  BV=0.25
    {33327,4157,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.03  BV=0.15
    {33327,4444,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.13  BV=0.05
    {33327,4762,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33327,5140,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.33  BV=-0.15
    {33327,5458,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.43  BV=-0.24
    {33327,5827,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33327,6246,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33327,6717,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33327,7281,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33327,7711,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33327,8192,1048, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33327,8192,1120, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33327,8192,1200, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.23  BV=-1.05
    {33327,8192,1288, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.33  BV=-1.15
    {33327,8192,1376, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.43  BV=-1.24
    {33327,8192,1480, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.53  BV=-1.35
    {33337,8192,1584, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.63  BV=-1.45
    {33337,8192,1704, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.73  BV=-1.55
    {41663,8192,1456, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.51  BV=-1.65
    {41663,8192,1560, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.61  BV=-1.75
    {41663,8192,1672, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.71  BV=-1.85
    {50000,8192,1496, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.55  BV=-1.95
    {50000,8192,1600, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.64  BV=-2.05
    {58327,8192,1472, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=8.52  BV=-2.15
    {58327,8192,1576, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=8.62  BV=-2.25
    {66663,8192,1480, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.53  BV=-2.35
    {66663,8192,1584, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.63  BV=-2.45
    {66663,8192,1696, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.73  BV=-2.55
    {66663,8192,1824, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.83  BV=-2.65
    {66663,8192,1952, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.93  BV=-2.75
    {66663,8192,2088, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.03  BV=-2.85
    {66663,8192,2240, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.13  BV=-2.95
    {66663,8192,2416, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.24  BV=-3.06
    {66663,8192,2592, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.34  BV=-3.16
    {66663,8192,2776, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.44  BV=-3.26
    {66663,8192,2976, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.54  BV=-3.36
    {66663,8192,3192, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.64  BV=-3.46
    {66663,8192,3416, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.74  BV=-3.56
    {66663,8192,3664, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.84  BV=-3.66
    {66663,8192,3928, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.94  BV=-3.76
    {66663,8192,4208, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=10.04  BV=-3.86
    {75000,8192,4008, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.97  BV=-3.96
    {75000,8192,4296, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=10.07  BV=-4.06
    {83326,8192,4144, 0, 0, 0},  //TV = 3.59(7986 lines)  AV=2.28  SV=10.02  BV=-4.16
    {91663,8192,4040, 0, 0, 0},  //TV = 3.45(8785 lines)  AV=2.28  SV=9.98  BV=-4.26
    {100000,8192,3968, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=9.95  BV=-4.36
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene1PLineTable_50Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8400,1198,1024, 0, 0, 0},  //TV = 6.90(805 lines)  AV=2.28  SV=5.23  BV=3.94
    {8995,1198,1024, 0, 0, 0},  //TV = 6.80(862 lines)  AV=2.28  SV=5.23  BV=3.85
    {9631,1198,1024, 0, 0, 0},  //TV = 6.70(923 lines)  AV=2.28  SV=5.23  BV=3.75
    {9996,1239,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.27  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1505,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.57  BV=3.35
    {9996,1618,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.67  BV=3.25
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1864,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.86  BV=3.06
    {9996,1997,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.96  BV=2.96
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {9996,2284,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.17  BV=2.75
    {20003,1239,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.27  BV=2.64
    {20003,1331,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.38  BV=2.54
    {20003,1423,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.47  BV=2.44
    {20003,1505,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.57  BV=2.35
    {20003,1638,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.68  BV=2.24
    {20003,1751,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.77  BV=2.14
    {29998,1239,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.27  BV=2.06
    {29998,1341,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.39  BV=1.94
    {29998,1423,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.49  BV=1.85
    {29998,1526,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.58  BV=1.76
    {29998,1638,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.68  BV=1.66
    {29998,1761,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.78  BV=1.55
    {29998,1884,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.88  BV=1.45
    {29998,2028,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.99  BV=1.35
    {29998,2150,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.08  BV=1.25
    {29998,2324,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.18  BV=1.15
    {29998,2499,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.29  BV=1.05
    {29998,2673,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.38  BV=0.95
    {29998,2847,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.49  BV=0.85
    {29998,3052,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.58  BV=0.76
    {29998,3277,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.69  BV=0.64
    {29998,3492,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.78  BV=0.55
    {29998,3748,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.88  BV=0.45
    {29998,4035,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.98  BV=0.36
    {29998,4301,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.08  BV=0.25
    {29998,4598,1040, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.19  BV=0.14
    {29998,4946,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.28  BV=0.05
    {29998,5345,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29998,5704,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.48  BV=-0.14
    {29998,6093,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29998,6554,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.69  BV=-0.36
    {29998,7086,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.79  BV=-0.46
    {29998,7485,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29998,7946,1048, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.99  BV=-0.66
    {29998,8192,1088, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.09  BV=-0.75
    {29998,8192,1160, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29998,8192,1248, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.29  BV=-0.95
    {29998,8192,1336, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.38  BV=-1.05
    {29998,8192,1432, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.48  BV=-1.15
    {29998,8192,1536, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.58  BV=-1.25
    {29998,8192,1656, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.69  BV=-1.36
    {29998,8192,1760, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.78  BV=-1.45
    {40004,8192,1416, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.47  BV=-1.55
    {40004,8192,1520, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.57  BV=-1.65
    {40004,8192,1624, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.67  BV=-1.75
    {50000,8192,1392, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.44  BV=-1.85
    {50000,8192,1496, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.55  BV=-1.95
    {50000,8192,1600, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.64  BV=-2.05
    {59996,8192,1432, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.48  BV=-2.15
    {59996,8192,1536, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.58  BV=-2.25
    {59996,8192,1640, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.68  BV=-2.35
    {70002,8192,1512, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.56  BV=-2.45
    {70002,8192,1616, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.66  BV=-2.55
    {70002,8192,1736, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.76  BV=-2.65
    {70002,8192,1856, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.86  BV=-2.75
    {70002,8192,1992, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.96  BV=-2.85
    {70002,8192,2136, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.06  BV=-2.95
    {70002,8192,2288, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.16  BV=-3.05
    {70002,8192,2464, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.27  BV=-3.16
    {70002,8192,2648, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.37  BV=-3.26
    {70002,8192,2832, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.47  BV=-3.36
    {70002,8192,3040, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.57  BV=-3.46
    {70002,8192,3256, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.67  BV=-3.56
    {70002,8192,3488, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.77  BV=-3.66
    {70002,8192,3736, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.87  BV=-3.76
    {70002,8192,4008, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.97  BV=-3.86
    {70002,8192,4296, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.07  BV=-3.96
    {79998,8192,4024, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=9.97  BV=-4.06
    {79998,8192,4312, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=10.07  BV=-4.16
    {90004,8192,4112, 0, 0, 0},  //TV = 3.47(8626 lines)  AV=2.28  SV=10.01  BV=-4.26
    {100000,8192,3968, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=9.95  BV=-4.36
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable1 =
{
    AETABLE_SCENE_INDEX1, //eAETableID
    148, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -44, //i4MinBV
    90, //i4EffectiveMaxBV
    -50, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sAEScene1PLineTable_60Hz,
    sAEScene1PLineTable_50Hz,
    NULL,
};
static strEvPline sAEScene2PLineTable_60Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8338,1198,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.24  BV=3.94
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.53  BV=3.65
    {8338,1587,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.63  BV=3.55
    {8338,1710,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.74  BV=3.44
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1966,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.94  BV=3.24
    {8338,2079,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.03  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {8338,2406,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.23  BV=2.95
    {8338,2570,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.33  BV=2.85
    {8338,2755,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.44  BV=2.74
    {8338,2949,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.54  BV=2.64
    {8338,3154,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.63  BV=2.55
    {8338,3359,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.73  BV=2.46
    {8338,3645,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.83  BV=2.35
    {8338,3912,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.93  BV=2.25
    {8338,4157,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=7.03  BV=2.15
    {8338,4444,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=7.13  BV=2.05
    {8338,4762,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=7.23  BV=1.95
    {8337,5140,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=7.34  BV=1.84
    {8337,5458,1040, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=7.44  BV=1.74
    {8337,5827,1040, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=7.53  BV=1.65
    {16664,3154,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.63  BV=1.55
    {16664,3400,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.73  BV=1.45
    {16664,3645,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.83  BV=1.35
    {16664,3912,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.93  BV=1.25
    {16664,4157,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.03  BV=1.15
    {16664,4444,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.13  BV=1.05
    {16664,4762,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.23  BV=0.95
    {25000,3400,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.74  BV=0.85
    {25000,3645,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.84  BV=0.75
    {25000,3912,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.94  BV=0.65
    {25000,4229,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.05  BV=0.55
    {25000,4516,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.15  BV=0.44
    {33337,3645,1024, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=6.83  BV=0.35
    {33337,3912,1024, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=6.93  BV=0.25
    {33337,4157,1032, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.03  BV=0.15
    {33337,4444,1032, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.13  BV=0.05
    {33337,4762,1032, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33337,5140,1024, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.33  BV=-0.15
    {33337,5458,1032, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.43  BV=-0.24
    {33337,5827,1040, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33337,6246,1040, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33337,6717,1040, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33337,7281,1024, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33337,7711,1040, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33337,8192,1048, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33337,8192,1120, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33337,8192,1200, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.23  BV=-1.05
    {33337,8192,1288, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.33  BV=-1.15
    {33337,8192,1376, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.43  BV=-1.24
    {33337,8192,1480, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.53  BV=-1.35
    {33337,8192,1584, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.63  BV=-1.45
    {33337,8192,1712, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.74  BV=-1.56
    {33337,8192,1832, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.84  BV=-1.66
    {33337,8192,1960, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.94  BV=-1.75
    {33337,8192,2048, 0, 0, 0},  /* TV = 4.91(3195 lines)  AV=2.28  SV=9.00  BV=-1.82 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene2PLineTable_50Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8400,1198,1024, 0, 0, 0},  //TV = 6.90(805 lines)  AV=2.28  SV=5.23  BV=3.94
    {8995,1198,1024, 0, 0, 0},  //TV = 6.80(862 lines)  AV=2.28  SV=5.23  BV=3.85
    {9631,1198,1024, 0, 0, 0},  //TV = 6.70(923 lines)  AV=2.28  SV=5.23  BV=3.75
    {9996,1239,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.27  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1505,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.57  BV=3.35
    {9996,1638,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.68  BV=3.24
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1864,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.86  BV=3.06
    {9996,1997,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.97  BV=2.94
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {9996,2284,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.17  BV=2.75
    {9996,2478,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.27  BV=2.64
    {9996,2652,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.37  BV=2.55
    {9996,2816,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.47  BV=2.45
    {9996,3011,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.57  BV=2.35
    {9996,3236,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.67  BV=2.25
    {9996,3492,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.77  BV=2.15
    {9996,3748,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.87  BV=2.05
    {9996,3973,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.97  BV=1.95
    {9996,4301,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.07  BV=1.85
    {9996,4598,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.17  BV=1.75
    {9996,4946,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.27  BV=1.65
    {9996,5243,1040, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.38  BV=1.54
    {9996,5581,1040, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.47  BV=1.45
    {9996,6093,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=7.57  BV=1.35
    {20002,3236,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.67  BV=1.25
    {20002,3492,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.77  BV=1.15
    {20002,3748,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.87  BV=1.05
    {20002,3973,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.97  BV=0.95
    {20002,4301,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.07  BV=0.85
    {20002,4598,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.17  BV=0.75
    {20002,4946,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.27  BV=0.65
    {29998,3492,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.78  BV=0.55
    {29998,3748,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.88  BV=0.45
    {29998,4035,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.98  BV=0.36
    {29998,4301,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.08  BV=0.25
    {29998,4598,1040, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.19  BV=0.14
    {29998,4946,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.28  BV=0.05
    {29998,5345,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29998,5704,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.48  BV=-0.14
    {29998,6093,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29998,6554,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.69  BV=-0.36
    {29998,7086,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.79  BV=-0.46
    {29998,7485,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29998,7946,1048, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.99  BV=-0.66
    {29998,8192,1088, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.09  BV=-0.75
    {29998,8192,1160, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29998,8192,1248, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.29  BV=-0.95
    {29998,8192,1336, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.38  BV=-1.05
    {29998,8192,1432, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.48  BV=-1.15
    {29998,8192,1536, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.58  BV=-1.25
    {29998,8192,1640, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.68  BV=-1.35
    {29998,8192,1768, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.79  BV=-1.45
    {29998,8192,1896, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.89  BV=-1.55
    {29998,8192,2032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.99  BV=-1.65
    {29998,8192,2048, 0, 0, 0},  /* TV = 5.06(2875 lines)  AV=2.28  SV=9.00  BV=-1.67 */
    {29998,8192,2048, 0, 0, 0},  /* TV = 5.06(2875 lines)  AV=2.28  SV=9.00  BV=-1.67 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable2 =
{
    AETABLE_SCENE_INDEX2, //eAETableID
    123, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -19, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sAEScene2PLineTable_60Hz,
    sAEScene2PLineTable_50Hz,
    NULL,
};
static strEvPline sAEScene3PLineTable_60Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8338,1198,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.24  BV=3.94
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.54  BV=3.64
    {8338,1587,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.63  BV=3.55
    {8338,1700,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.73  BV=3.45
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1956,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.93  BV=3.25
    {8338,2079,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.03  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {16664,1198,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.24  BV=2.94
    {16664,1280,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.33  BV=2.85
    {16664,1382,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.43  BV=2.75
    {16664,1495,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.55  BV=2.64
    {16664,1587,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.64  BV=2.54
    {16664,1700,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.73  BV=2.45
    {25001,1198,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.24  BV=2.36
    {25001,1300,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.34  BV=2.25
    {25001,1393,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.46  BV=2.14
    {25001,1495,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.55  BV=2.05
    {33327,1198,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.24  BV=1.94
    {33327,1280,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.33  BV=1.85
    {33327,1382,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.43  BV=1.75
    {33327,1495,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.55  BV=1.64
    {33327,1587,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.63  BV=1.55
    {33327,1700,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.73  BV=1.45
    {33327,1823,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.83  BV=1.35
    {33327,1956,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.93  BV=1.25
    {33337,2099,1024, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=6.04  BV=1.15
    {33337,2243,1024, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=6.13  BV=1.05
    {41663,1925,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=5.91  BV=0.95
    {41663,2068,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=6.01  BV=0.85
    {41663,2222,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=6.12  BV=0.74
    {50000,1966,1032, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=5.95  BV=0.64
    {50000,2109,1032, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=6.05  BV=0.54
    {58327,1925,1032, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=5.92  BV=0.45
    {58327,2079,1032, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=6.03  BV=0.34
    {66663,1956,1024, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=5.93  BV=0.25
    {66663,2099,1024, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=6.04  BV=0.15
    {66663,2243,1024, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=6.13  BV=0.05
    {66663,2406,1024, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=6.23  BV=-0.05
    {66663,2591,1024, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=6.34  BV=-0.16
    {66663,2755,1024, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=6.43  BV=-0.25
    {66663,2949,1024, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=6.53  BV=-0.34
    {66663,3154,1024, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=6.62  BV=-0.44
    {66663,3400,1024, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=6.73  BV=-0.55
    {66663,3645,1024, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=6.83  BV=-0.65
    {66663,3912,1024, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=6.93  BV=-0.75
    {66663,4157,1032, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=7.03  BV=-0.85
    {75000,3973,1032, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=6.97  BV=-0.96
    {75000,4229,1040, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=7.07  BV=-1.06
    {83326,4096,1032, 0, 0, 0},  //TV = 3.59(7986 lines)  AV=2.28  SV=7.01  BV=-1.15
    {91663,4035,1024, 0, 0, 0},  //TV = 3.45(8785 lines)  AV=2.28  SV=6.98  BV=-1.26
    {100000,3912,1032, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=6.94  BV=-1.35
    {100000,4229,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.05  BV=-1.45
    {100000,4516,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.14  BV=-1.54
    {100000,4854,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.24  BV=-1.65
    {100000,5140,1040, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.35  BV=-1.75
    {100000,5581,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.45  BV=-1.85
    {100000,5960,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.54  BV=-1.94
    {100000,6390,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.64  BV=-2.04
    {100000,6717,1048, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.75  BV=-2.15
    {100000,7281,1032, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.84  BV=-2.24
    {100000,7946,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.96  BV=-2.36
    {100000,8192,1064, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=8.06  BV=-2.46
    {100000,8192,1136, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=8.15  BV=-2.55
    {100000,8192,1216, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=8.25  BV=-2.65
    {100000,8192,1304, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=8.35  BV=-2.75
    {100000,8192,1400, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=8.45  BV=-2.85
    {100000,8192,1496, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=8.55  BV=-2.95
    {100000,8192,1536, 0, 0, 0},  /* TV = 3.32(9584 lines)  AV=2.28  SV=8.58  BV=-2.99 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene3PLineTable_50Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8400,1198,1024, 0, 0, 0},  //TV = 6.90(805 lines)  AV=2.28  SV=5.23  BV=3.94
    {8995,1198,1024, 0, 0, 0},  //TV = 6.80(862 lines)  AV=2.28  SV=5.23  BV=3.85
    {9631,1198,1024, 0, 0, 0},  //TV = 6.70(923 lines)  AV=2.28  SV=5.23  BV=3.75
    {9996,1239,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.27  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1505,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.57  BV=3.35
    {9996,1618,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.67  BV=3.25
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1864,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.86  BV=3.06
    {9996,1997,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.96  BV=2.96
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {9996,2284,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.17  BV=2.75
    {20003,1239,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.27  BV=2.64
    {20003,1331,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.38  BV=2.54
    {20003,1423,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.47  BV=2.44
    {20003,1505,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.57  BV=2.35
    {20003,1638,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.68  BV=2.24
    {20003,1751,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.77  BV=2.14
    {29998,1239,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.27  BV=2.06
    {29998,1341,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.39  BV=1.94
    {29998,1423,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.49  BV=1.85
    {29998,1526,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.58  BV=1.76
    {29998,1638,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.68  BV=1.66
    {29998,1761,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.78  BV=1.55
    {29998,1884,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.88  BV=1.45
    {29998,2028,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.99  BV=1.35
    {29998,2150,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.08  BV=1.25
    {29998,2324,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.18  BV=1.15
    {40004,1874,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=5.87  BV=1.05
    {40004,1997,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=5.97  BV=0.94
    {40004,2150,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=6.07  BV=0.85
    {50000,1843,1024, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=5.85  BV=0.75
    {50000,1966,1032, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=5.95  BV=0.64
    {50000,2109,1032, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=6.05  BV=0.54
    {59996,1884,1024, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=5.88  BV=0.45
    {59996,2028,1024, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=5.99  BV=0.35
    {59996,2181,1024, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=6.09  BV=0.24
    {70002,1997,1024, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=5.96  BV=0.15
    {70002,2130,1024, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=6.06  BV=0.05
    {70002,2284,1032, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=6.17  BV=-0.06
    {70002,2447,1024, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=6.26  BV=-0.15
    {70002,2621,1024, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=6.36  BV=-0.24
    {70002,2816,1024, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=6.46  BV=-0.35
    {70002,3011,1024, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=6.56  BV=-0.44
    {70002,3236,1024, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=6.66  BV=-0.55
    {70002,3451,1032, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=6.76  BV=-0.65
    {70002,3697,1032, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=6.86  BV=-0.75
    {70002,3973,1032, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=6.97  BV=-0.86
    {70002,4229,1040, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=7.07  BV=-0.96
    {79998,3973,1032, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=6.97  BV=-1.05
    {79998,4301,1024, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=7.07  BV=-1.15
    {90004,4096,1024, 0, 0, 0},  //TV = 3.47(8626 lines)  AV=2.28  SV=7.00  BV=-1.25
    {100000,3912,1032, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=6.94  BV=-1.35
    {100000,4229,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.05  BV=-1.45
    {100000,4516,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.14  BV=-1.54
    {100000,4854,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.24  BV=-1.65
    {100000,5140,1040, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.35  BV=-1.75
    {100000,5581,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.45  BV=-1.85
    {100000,5960,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.54  BV=-1.94
    {100000,6390,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.64  BV=-2.04
    {100000,6717,1048, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.75  BV=-2.15
    {100000,7281,1032, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.84  BV=-2.24
    {100000,7946,1024, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=7.96  BV=-2.36
    {100000,8192,1064, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=8.06  BV=-2.46
    {100000,8192,1136, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=8.15  BV=-2.55
    {100000,8192,1216, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=8.25  BV=-2.65
    {100000,8192,1304, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=8.35  BV=-2.75
    {100000,8192,1400, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=8.45  BV=-2.85
    {100000,8192,1496, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=8.55  BV=-2.95
    {100000,8192,1536, 0, 0, 0},  /* TV = 3.32(9584 lines)  AV=2.28  SV=8.58  BV=-2.99 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable3 =
{
    AETABLE_SCENE_INDEX3, //eAETableID
    135, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -30, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sAEScene3PLineTable_60Hz,
    sAEScene3PLineTable_50Hz,
    NULL,
};
static strEvPline sAEScene4PLineTable_60Hz =
{
{
    {199989,1710,1024, 0, 0, 0},  //TV = 2.32(19167 lines)  AV=2.28  SV=5.74  BV=-1.14
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene4PLineTable_50Hz =
{
{
    {199999,1710,1024, 0, 0, 0},  //TV = 2.32(19168 lines)  AV=2.28  SV=5.74  BV=-1.14
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable4 =
{
    AETABLE_SCENE_INDEX4, //eAETableID
    1, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    -11, //i4MaxBV
    -12, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sAEScene4PLineTable_60Hz,
    sAEScene4PLineTable_50Hz,
    NULL,
};
static strEvPline sAEScene5PLineTable_60Hz =
{
{
    {94,1198,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.24  BV=10.41
    {105,1147,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.16  BV=10.33
    {105,1219,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.25  BV=10.24
    {115,1219,1024, 0, 0, 0},  /* TV = 13.09(11 lines)  AV=2.28  SV=5.25  BV=10.11 */
    {126,1188,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.21  BV=10.01
    {136,1167,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.19  BV=9.93
    {147,1147,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.16  BV=9.84
    {157,1167,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.19  BV=9.72
    {167,1167,1024, 0, 0, 0},  //TV = 12.55(16 lines)  AV=2.28  SV=5.19  BV=9.63
    {178,1188,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.21  BV=9.52
    {199,1147,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.16  BV=9.41
    {209,1144,1024, 0, 0, 0},  /* TV = 12.22(20 lines)  AV=2.28  SV=5.16  BV=9.34 */
    {220,1147,1032, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.17  BV=9.25
    {230,1188,1024, 0, 0, 0},  //TV = 12.09(22 lines)  AV=2.28  SV=5.21  BV=9.15
    {251,1167,1024, 0, 0, 0},  //TV = 11.96(24 lines)  AV=2.28  SV=5.19  BV=9.05
    {272,1147,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.16  BV=8.96
    {293,1147,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.16  BV=8.85
    {314,1147,1024, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.16  BV=8.75
    {334,1147,1032, 0, 0, 0},  //TV = 11.55(32 lines)  AV=2.28  SV=5.17  BV=8.65
    {355,1167,1024, 0, 0, 0},  //TV = 11.46(34 lines)  AV=2.28  SV=5.19  BV=8.55
    {387,1147,1024, 0, 0, 0},  //TV = 11.34(37 lines)  AV=2.28  SV=5.16  BV=8.45
    {407,1167,1024, 0, 0, 0},  //TV = 11.26(39 lines)  AV=2.28  SV=5.19  BV=8.35
    {439,1147,1032, 0, 0, 0},  //TV = 11.15(42 lines)  AV=2.28  SV=5.17  BV=8.25
    {480,1144,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.16  BV=8.14
    {501,1167,1024, 0, 0, 0},  //TV = 10.96(48 lines)  AV=2.28  SV=5.19  BV=8.05
    {543,1147,1032, 0, 0, 0},  //TV = 10.85(52 lines)  AV=2.28  SV=5.17  BV=7.95
    {585,1147,1024, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=5.16  BV=7.85
    {627,1147,1024, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=5.16  BV=7.75
    {668,1147,1032, 0, 0, 0},  //TV = 10.55(64 lines)  AV=2.28  SV=5.17  BV=7.65
    {720,1147,1024, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=5.16  BV=7.55
    {773,1147,1024, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=5.16  BV=7.45
    {825,1147,1024, 0, 0, 0},  //TV = 10.24(79 lines)  AV=2.28  SV=5.16  BV=7.35
    {887,1147,1024, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=5.16  BV=7.25
    {950,1147,1024, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=5.16  BV=7.15
    {1023,1144,1024, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=5.16  BV=7.05
    {1096,1147,1024, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=5.16  BV=6.94
    {1180,1144,1024, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=5.16  BV=6.84
    {1253,1147,1024, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=5.16  BV=6.75
    {1346,1147,1024, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=5.16  BV=6.65
    {1451,1144,1024, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=5.16  BV=6.54
    {1545,1147,1024, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=5.16  BV=6.45
    {1660,1144,1024, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=5.16  BV=6.35
    {1785,1144,1024, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=5.16  BV=6.24
    {1910,1144,1024, 0, 0, 0},  //TV = 9.03(183 lines)  AV=2.28  SV=5.16  BV=6.15
    {2056,1144,1024, 0, 0, 0},  //TV = 8.93(197 lines)  AV=2.28  SV=5.16  BV=6.04
    {2192,1144,1024, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=5.16  BV=5.95
    {2348,1144,1024, 0, 0, 0},  //TV = 8.73(225 lines)  AV=2.28  SV=5.16  BV=5.85
    {2526,1144,1024, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=5.16  BV=5.74
    {2703,1144,1024, 0, 0, 0},  //TV = 8.53(259 lines)  AV=2.28  SV=5.16  BV=5.65
    {2891,1144,1024, 0, 0, 0},  //TV = 8.43(277 lines)  AV=2.28  SV=5.16  BV=5.55
    {3099,1144,1024, 0, 0, 0},  //TV = 8.33(297 lines)  AV=2.28  SV=5.16  BV=5.45
    {3339,1144,1024, 0, 0, 0},  //TV = 8.23(320 lines)  AV=2.28  SV=5.16  BV=5.34
    {3569,1144,1024, 0, 0, 0},  //TV = 8.13(342 lines)  AV=2.28  SV=5.16  BV=5.25
    {3819,1144,1024, 0, 0, 0},  //TV = 8.03(366 lines)  AV=2.28  SV=5.16  BV=5.15
    {4091,1144,1024, 0, 0, 0},  //TV = 7.93(392 lines)  AV=2.28  SV=5.16  BV=5.05
    {4383,1144,1024, 0, 0, 0},  //TV = 7.83(420 lines)  AV=2.28  SV=5.16  BV=4.95
    {4717,1144,1024, 0, 0, 0},  //TV = 7.73(452 lines)  AV=2.28  SV=5.16  BV=4.84
    {5051,1144,1024, 0, 0, 0},  //TV = 7.63(484 lines)  AV=2.28  SV=5.16  BV=4.74
    {5416,1144,1024, 0, 0, 0},  //TV = 7.53(519 lines)  AV=2.28  SV=5.16  BV=4.64
    {5791,1144,1024, 0, 0, 0},  //TV = 7.43(555 lines)  AV=2.28  SV=5.16  BV=4.55
    {6209,1144,1024, 0, 0, 0},  //TV = 7.33(595 lines)  AV=2.28  SV=5.16  BV=4.45
    {6647,1144,1024, 0, 0, 0},  //TV = 7.23(637 lines)  AV=2.28  SV=5.16  BV=4.35
    {7116,1144,1024, 0, 0, 0},  //TV = 7.13(682 lines)  AV=2.28  SV=5.16  BV=4.25
    {7628,1144,1024, 0, 0, 0},  //TV = 7.03(731 lines)  AV=2.28  SV=5.16  BV=4.15
    {8222,1144,1024, 0, 0, 0},  //TV = 6.93(788 lines)  AV=2.28  SV=5.16  BV=4.04
    {8338,1198,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.24  BV=3.94
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.53  BV=3.65
    {8338,1587,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.63  BV=3.55
    {8338,1700,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.73  BV=3.45
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1956,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.93  BV=3.25
    {8338,2079,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.03  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {16664,1198,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.24  BV=2.94
    {16664,1300,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.34  BV=2.84
    {16664,1382,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.43  BV=2.75
    {16664,1495,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.55  BV=2.64
    {16664,1587,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.63  BV=2.55
    {16664,1700,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.73  BV=2.45
    {25001,1198,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.24  BV=2.36
    {25001,1300,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.34  BV=2.25
    {25001,1393,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.44  BV=2.15
    {25001,1495,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.55  BV=2.05
    {33327,1198,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.24  BV=1.94
    {33327,1280,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.33  BV=1.85
    {33327,1382,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.43  BV=1.75
    {33327,1475,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.54  BV=1.64
    {33327,1587,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.63  BV=1.55
    {33327,1710,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.74  BV=1.44
    {33327,1823,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.83  BV=1.35
    {33327,1966,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.94  BV=1.24
    {33327,2099,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.04  BV=1.15
    {33327,2243,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.13  BV=1.05
    {33327,2406,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.23  BV=0.95
    {33327,2591,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.34  BV=0.84
    {33327,2755,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.43  BV=0.75
    {33327,2949,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.53  BV=0.66
    {33327,3154,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.62  BV=0.56
    {33327,3400,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.73  BV=0.45
    {33327,3645,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.83  BV=0.35
    {33327,3850,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.93  BV=0.25
    {33337,4157,1032, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.03  BV=0.15
    {33337,4444,1032, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.13  BV=0.05
    {41663,3850,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=6.91  BV=-0.05
    {41663,4096,1032, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.01  BV=-0.15
    {41663,4444,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.12  BV=-0.26
    {41663,4680,1040, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.21  BV=-0.35
    {41663,5038,1032, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.31  BV=-0.45
    {41663,5345,1040, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.41  BV=-0.55
    {41663,5827,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.51  BV=-0.65
    {41663,6246,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.61  BV=-0.75
    {41663,6554,1040, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.70  BV=-0.84
    {41663,7086,1040, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.81  BV=-0.95
    {41663,7711,1024, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=7.91  BV=-1.05
    {41663,8192,1032, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.01  BV=-1.15
    {41663,8192,1104, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.11  BV=-1.25
    {50000,7711,1048, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=7.95  BV=-1.35
    {50000,8192,1056, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.04  BV=-1.45
    {50000,8192,1128, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.14  BV=-1.54
    {50000,8192,1216, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.25  BV=-1.65
    {50000,8192,1296, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.34  BV=-1.74
    {50000,8192,1392, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.44  BV=-1.85
    {50000,8192,1504, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.55  BV=-1.96
    {50000,8192,1608, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.65  BV=-2.05
    {50000,8192,1728, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.75  BV=-2.16
    {50000,8192,1848, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.85  BV=-2.25
    {50000,8192,1984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.95  BV=-2.36
    {50000,8192,2120, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.05  BV=-2.45
    {58327,8192,1944, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=8.92  BV=-2.55
    {58327,8192,2080, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=9.02  BV=-2.65
    {66663,8192,1952, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=8.93  BV=-2.75
    {66663,8192,2096, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.03  BV=-2.85
    {75000,8192,2000, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=8.97  BV=-2.95
    {75000,8192,2144, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.07  BV=-3.05
    {75000,8192,2296, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.16  BV=-3.15
    {75000,8192,2464, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.27  BV=-3.25
    {75000,8192,2640, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.37  BV=-3.35
    {75000,8192,2832, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.47  BV=-3.46
    {75000,8192,3032, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.57  BV=-3.55
    {75000,8192,3248, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.67  BV=-3.65
    {75000,8192,3480, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.76  BV=-3.75
    {75000,8192,3728, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.86  BV=-3.85
    {75000,8192,4000, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.97  BV=-3.95
    {75000,8192,4288, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=10.07  BV=-4.05
    {75000,8192,4592, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=10.16  BV=-4.15
    {75000,8192,4920, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=10.26  BV=-4.25
    {75000,8192,5120, 0, 0, 0},  /* TV = 3.74(7188 lines)  AV=2.28  SV=10.32  BV=-4.31 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene5PLineTable_50Hz =
{
{
    {94,1198,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.24  BV=10.41
    {105,1147,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.16  BV=10.33
    {105,1219,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.25  BV=10.24
    {115,1219,1024, 0, 0, 0},  /* TV = 13.09(11 lines)  AV=2.28  SV=5.25  BV=10.11 */
    {126,1188,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.21  BV=10.01
    {136,1167,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.19  BV=9.93
    {147,1147,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.16  BV=9.84
    {157,1167,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.19  BV=9.72
    {167,1167,1024, 0, 0, 0},  //TV = 12.55(16 lines)  AV=2.28  SV=5.19  BV=9.63
    {178,1188,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.21  BV=9.52
    {199,1147,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.16  BV=9.41
    {209,1144,1024, 0, 0, 0},  /* TV = 12.22(20 lines)  AV=2.28  SV=5.16  BV=9.34 */
    {220,1147,1032, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.17  BV=9.25
    {230,1188,1024, 0, 0, 0},  //TV = 12.09(22 lines)  AV=2.28  SV=5.21  BV=9.15
    {251,1167,1024, 0, 0, 0},  //TV = 11.96(24 lines)  AV=2.28  SV=5.19  BV=9.05
    {272,1147,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.16  BV=8.96
    {293,1147,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.16  BV=8.85
    {314,1147,1024, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.16  BV=8.75
    {334,1147,1032, 0, 0, 0},  //TV = 11.55(32 lines)  AV=2.28  SV=5.17  BV=8.65
    {355,1167,1024, 0, 0, 0},  //TV = 11.46(34 lines)  AV=2.28  SV=5.19  BV=8.55
    {387,1147,1024, 0, 0, 0},  //TV = 11.34(37 lines)  AV=2.28  SV=5.16  BV=8.45
    {407,1167,1024, 0, 0, 0},  //TV = 11.26(39 lines)  AV=2.28  SV=5.19  BV=8.35
    {439,1147,1032, 0, 0, 0},  //TV = 11.15(42 lines)  AV=2.28  SV=5.17  BV=8.25
    {480,1144,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.16  BV=8.14
    {501,1167,1024, 0, 0, 0},  //TV = 10.96(48 lines)  AV=2.28  SV=5.19  BV=8.05
    {543,1147,1032, 0, 0, 0},  //TV = 10.85(52 lines)  AV=2.28  SV=5.17  BV=7.95
    {585,1147,1024, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=5.16  BV=7.85
    {627,1147,1024, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=5.16  BV=7.75
    {668,1147,1032, 0, 0, 0},  //TV = 10.55(64 lines)  AV=2.28  SV=5.17  BV=7.65
    {720,1147,1024, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=5.16  BV=7.55
    {773,1147,1024, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=5.16  BV=7.45
    {825,1147,1024, 0, 0, 0},  //TV = 10.24(79 lines)  AV=2.28  SV=5.16  BV=7.35
    {887,1147,1024, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=5.16  BV=7.25
    {950,1147,1024, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=5.16  BV=7.15
    {1023,1144,1024, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=5.16  BV=7.05
    {1096,1147,1024, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=5.16  BV=6.94
    {1180,1144,1024, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=5.16  BV=6.84
    {1253,1147,1024, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=5.16  BV=6.75
    {1346,1147,1024, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=5.16  BV=6.65
    {1451,1144,1024, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=5.16  BV=6.54
    {1545,1147,1024, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=5.16  BV=6.45
    {1660,1144,1024, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=5.16  BV=6.35
    {1785,1144,1024, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=5.16  BV=6.24
    {1910,1144,1024, 0, 0, 0},  //TV = 9.03(183 lines)  AV=2.28  SV=5.16  BV=6.15
    {2056,1144,1024, 0, 0, 0},  //TV = 8.93(197 lines)  AV=2.28  SV=5.16  BV=6.04
    {2192,1144,1024, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=5.16  BV=5.95
    {2348,1144,1024, 0, 0, 0},  //TV = 8.73(225 lines)  AV=2.28  SV=5.16  BV=5.85
    {2526,1144,1024, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=5.16  BV=5.74
    {2703,1144,1024, 0, 0, 0},  //TV = 8.53(259 lines)  AV=2.28  SV=5.16  BV=5.65
    {2891,1144,1024, 0, 0, 0},  //TV = 8.43(277 lines)  AV=2.28  SV=5.16  BV=5.55
    {3099,1144,1024, 0, 0, 0},  //TV = 8.33(297 lines)  AV=2.28  SV=5.16  BV=5.45
    {3339,1144,1024, 0, 0, 0},  //TV = 8.23(320 lines)  AV=2.28  SV=5.16  BV=5.34
    {3569,1144,1024, 0, 0, 0},  //TV = 8.13(342 lines)  AV=2.28  SV=5.16  BV=5.25
    {3819,1144,1024, 0, 0, 0},  //TV = 8.03(366 lines)  AV=2.28  SV=5.16  BV=5.15
    {4091,1144,1024, 0, 0, 0},  //TV = 7.93(392 lines)  AV=2.28  SV=5.16  BV=5.05
    {4383,1144,1024, 0, 0, 0},  //TV = 7.83(420 lines)  AV=2.28  SV=5.16  BV=4.95
    {4717,1144,1024, 0, 0, 0},  //TV = 7.73(452 lines)  AV=2.28  SV=5.16  BV=4.84
    {5051,1144,1024, 0, 0, 0},  //TV = 7.63(484 lines)  AV=2.28  SV=5.16  BV=4.74
    {5416,1144,1024, 0, 0, 0},  //TV = 7.53(519 lines)  AV=2.28  SV=5.16  BV=4.64
    {5791,1144,1024, 0, 0, 0},  //TV = 7.43(555 lines)  AV=2.28  SV=5.16  BV=4.55
    {6209,1144,1024, 0, 0, 0},  //TV = 7.33(595 lines)  AV=2.28  SV=5.16  BV=4.45
    {6647,1144,1024, 0, 0, 0},  //TV = 7.23(637 lines)  AV=2.28  SV=5.16  BV=4.35
    {7116,1144,1024, 0, 0, 0},  //TV = 7.13(682 lines)  AV=2.28  SV=5.16  BV=4.25
    {7628,1144,1024, 0, 0, 0},  //TV = 7.03(731 lines)  AV=2.28  SV=5.16  BV=4.15
    {8222,1144,1024, 0, 0, 0},  //TV = 6.93(788 lines)  AV=2.28  SV=5.16  BV=4.04
    {8807,1144,1024, 0, 0, 0},  //TV = 6.83(844 lines)  AV=2.28  SV=5.16  BV=3.94
    {9443,1144,1024, 0, 0, 0},  //TV = 6.73(905 lines)  AV=2.28  SV=5.16  BV=3.84
    {9996,1147,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.16  BV=3.76
    {9996,1239,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.27  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1526,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.58  BV=3.34
    {9996,1618,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.67  BV=3.25
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1864,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.86  BV=3.06
    {9996,1997,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.96  BV=2.96
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {20003,1147,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.16  BV=2.75
    {20003,1239,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.27  BV=2.64
    {20003,1331,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.38  BV=2.54
    {20003,1423,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.47  BV=2.44
    {20003,1505,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.57  BV=2.35
    {20003,1618,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.67  BV=2.25
    {29998,1167,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.19  BV=2.15
    {29998,1239,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.27  BV=2.06
    {29998,1341,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.39  BV=1.94
    {29998,1423,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.49  BV=1.85
    {29998,1526,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.58  BV=1.76
    {29998,1649,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.69  BV=1.65
    {29998,1761,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.78  BV=1.55
    {29998,1884,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.89  BV=1.44
    {29998,2028,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.99  BV=1.35
    {29998,2181,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.09  BV=1.24
    {29998,2324,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.18  BV=1.15
    {29998,2478,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.27  BV=1.06
    {29998,2673,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.38  BV=0.95
    {29998,2877,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.49  BV=0.84
    {29998,3052,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.59  BV=0.75
    {29998,3277,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.68  BV=0.66
    {29998,3492,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.78  BV=0.55
    {29998,3799,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.89  BV=0.44
    {29998,4035,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.98  BV=0.36
    {29998,4301,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.08  BV=0.25
    {29998,4598,1040, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.19  BV=0.14
    {40004,3748,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=6.87  BV=0.05
    {40004,3973,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=6.97  BV=-0.05
    {40004,4229,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.07  BV=-0.15
    {40004,4598,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.17  BV=-0.25
    {40004,4946,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.27  BV=-0.35
    {40004,5243,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.37  BV=-0.45
    {40004,5581,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.47  BV=-0.55
    {40004,5960,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.56  BV=-0.64
    {40004,6390,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.66  BV=-0.75
    {40004,6902,1040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.78  BV=-0.86
    {40004,7485,1024, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.87  BV=-0.95
    {40004,7946,1032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=7.97  BV=-1.05
    {40004,8192,1072, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.07  BV=-1.15
    {40004,8192,1152, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.17  BV=-1.25
    {50000,7711,1048, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=7.95  BV=-1.35
    {50000,8192,1056, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.04  BV=-1.45
    {50000,8192,1128, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.14  BV=-1.54
    {50000,8192,1216, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.25  BV=-1.65
    {50000,8192,1296, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.34  BV=-1.74
    {50000,8192,1392, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.44  BV=-1.85
    {50000,8192,1504, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.55  BV=-1.96
    {50000,8192,1608, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.65  BV=-2.05
    {50000,8192,1728, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.75  BV=-2.16
    {50000,8192,1848, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.85  BV=-2.25
    {50000,8192,1984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=8.95  BV=-2.36
    {50000,8192,2120, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.05  BV=-2.45
    {59996,8192,1888, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.88  BV=-2.55
    {59996,8192,2024, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=8.98  BV=-2.65
    {59996,8192,2168, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.08  BV=-2.75
    {70002,8192,1992, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=8.96  BV=-2.85
    {70002,8192,2144, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.07  BV=-2.95
    {70002,8192,2296, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.16  BV=-3.05
    {70002,8192,2464, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.27  BV=-3.16
    {70002,8192,2640, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.37  BV=-3.25
    {70002,8192,2832, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.47  BV=-3.36
    {70002,8192,3032, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.57  BV=-3.45
    {70002,8192,3248, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.67  BV=-3.55
    {70002,8192,3480, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.76  BV=-3.65
    {70002,8192,3728, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.86  BV=-3.75
    {70002,8192,4000, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.97  BV=-3.85
    {70002,8192,4288, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.07  BV=-3.95
    {70002,8192,4592, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.16  BV=-4.05
    {70002,8192,4920, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.26  BV=-4.15
    {70002,8192,5120, 0, 0, 0},  /* TV = 3.84(6709 lines)  AV=2.28  SV=10.32  BV=-4.21 */
    {70002,8192,5120, 0, 0, 0},  /* TV = 3.84(6709 lines)  AV=2.28  SV=10.32  BV=-4.21 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable5 =
{
    AETABLE_SCENE_INDEX5, //eAETableID
    149, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    105, //i4MaxBV
    -43, //i4MinBV
    90, //i4EffectiveMaxBV
    -30, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sAEScene5PLineTable_60Hz,
    sAEScene5PLineTable_50Hz,
    NULL,
};
static strEvPline sAEScene6PLineTable_60Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {491,1362,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.41  BV=7.86
    {491,1454,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.52  BV=7.75
    {491,1567,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.63  BV=7.64
    {491,1679,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.71  BV=7.55
    {491,1792,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.82  BV=7.45
    {491,1925,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.92  BV=7.35
    {491,2079,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.02  BV=7.25
    {491,2222,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.12  BV=7.15
    {491,2386,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.22  BV=7.05
    {491,2550,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.32  BV=6.95
    {491,2734,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.42  BV=6.85
    {491,2949,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.53  BV=6.74
    {491,3123,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.62  BV=6.65
    {491,3359,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.71  BV=6.55
    {491,3594,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.81  BV=6.46
    {491,3850,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.91  BV=6.36
    {491,4157,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.02  BV=6.25
    {491,4444,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.12  BV=6.15
    {491,4762,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.22  BV=6.05
    {491,5038,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.31  BV=5.96
    {491,5458,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.41  BV=5.85
    {491,5827,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.51  BV=5.76
    {491,6246,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.62  BV=5.65
    {491,6717,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.71  BV=5.55
    {491,7086,1048, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.82  BV=5.44
    {491,7711,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.91  BV=5.35
    {491,8192,1040, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.02  BV=5.24
    {491,8192,1112, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.12  BV=5.15
    {491,8192,1192, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.22  BV=5.05
    {491,8192,1272, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.31  BV=4.95
    {491,8192,1368, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.42  BV=4.85
    {491,8192,1464, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.52  BV=4.75
    {491,8192,1568, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.61  BV=4.65
    {491,8192,1680, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.71  BV=4.55
    {491,8192,1816, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.83  BV=4.44
    {491,8192,1944, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.92  BV=4.34
    {491,8192,2080, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.02  BV=4.24
    {491,8192,2232, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.12  BV=4.14
    {491,8192,2392, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.22  BV=4.04
    {491,8192,2560, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.32  BV=3.95
    {491,8192,2744, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.42  BV=3.84
    {491,8192,2944, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.52  BV=3.74
    {491,8192,3152, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.62  BV=3.64
    {491,8192,3376, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.72  BV=3.55
    {491,8192,3624, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.82  BV=3.44
    {491,8192,3880, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.92  BV=3.35
    {491,8192,4160, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.02  BV=3.24
    {533,8192,4096, 0, 0, 0},  //TV = 10.87(51 lines)  AV=2.28  SV=10.00  BV=3.15
    {574,8192,4080, 0, 0, 0},  //TV = 10.77(55 lines)  AV=2.28  SV=9.99  BV=3.05
    {616,8192,4080, 0, 0, 0},  //TV = 10.66(59 lines)  AV=2.28  SV=9.99  BV=2.95
    {658,8192,4096, 0, 0, 0},  //TV = 10.57(63 lines)  AV=2.28  SV=10.00  BV=2.84
    {710,8192,4072, 0, 0, 0},  //TV = 10.46(68 lines)  AV=2.28  SV=9.99  BV=2.74
    {762,8192,4064, 0, 0, 0},  //TV = 10.36(73 lines)  AV=2.28  SV=9.99  BV=2.64
    {814,8192,4080, 0, 0, 0},  //TV = 10.26(78 lines)  AV=2.28  SV=9.99  BV=2.54
    {867,8192,4096, 0, 0, 0},  //TV = 10.17(83 lines)  AV=2.28  SV=10.00  BV=2.45
    {929,8192,4112, 0, 0, 0},  //TV = 10.07(89 lines)  AV=2.28  SV=10.01  BV=2.34
    {1002,8192,4080, 0, 0, 0},  //TV = 9.96(96 lines)  AV=2.28  SV=9.99  BV=2.24
    {1065,8192,4104, 0, 0, 0},  //TV = 9.87(102 lines)  AV=2.28  SV=10.00  BV=2.15
    {1148,8192,4080, 0, 0, 0},  //TV = 9.77(110 lines)  AV=2.28  SV=9.99  BV=2.05
    {1232,8192,4088, 0, 0, 0},  //TV = 9.66(118 lines)  AV=2.28  SV=10.00  BV=1.94
    {1315,8192,4088, 0, 0, 0},  //TV = 9.57(126 lines)  AV=2.28  SV=10.00  BV=1.85
    {1409,8192,4104, 0, 0, 0},  //TV = 9.47(135 lines)  AV=2.28  SV=10.00  BV=1.74
    {1513,8192,4080, 0, 0, 0},  //TV = 9.37(145 lines)  AV=2.28  SV=9.99  BV=1.65
    {1618,8192,4104, 0, 0, 0},  //TV = 9.27(155 lines)  AV=2.28  SV=10.00  BV=1.54
    {1733,8192,4088, 0, 0, 0},  //TV = 9.17(166 lines)  AV=2.28  SV=10.00  BV=1.45
    {1868,8192,4080, 0, 0, 0},  //TV = 9.06(179 lines)  AV=2.28  SV=9.99  BV=1.34
    {1993,8192,4096, 0, 0, 0},  //TV = 8.97(191 lines)  AV=2.28  SV=10.00  BV=1.25
    {2129,8192,4096, 0, 0, 0},  //TV = 8.88(204 lines)  AV=2.28  SV=10.00  BV=1.15
    {2296,8192,4088, 0, 0, 0},  //TV = 8.77(220 lines)  AV=2.28  SV=10.00  BV=1.04
    {2452,8192,4096, 0, 0, 0},  //TV = 8.67(235 lines)  AV=2.28  SV=10.00  BV=0.95
    {2630,8192,4088, 0, 0, 0},  //TV = 8.57(252 lines)  AV=2.28  SV=10.00  BV=0.85
    {2828,8192,4096, 0, 0, 0},  //TV = 8.47(271 lines)  AV=2.28  SV=10.00  BV=0.74
    {3026,8192,4088, 0, 0, 0},  //TV = 8.37(290 lines)  AV=2.28  SV=10.00  BV=0.65
    {3235,8192,4096, 0, 0, 0},  //TV = 8.27(310 lines)  AV=2.28  SV=10.00  BV=0.55
    {3465,8192,4088, 0, 0, 0},  //TV = 8.17(332 lines)  AV=2.28  SV=10.00  BV=0.45
    {3736,8192,4088, 0, 0, 0},  //TV = 8.06(358 lines)  AV=2.28  SV=10.00  BV=0.34
    {3997,8192,4088, 0, 0, 0},  //TV = 7.97(383 lines)  AV=2.28  SV=10.00  BV=0.24
    {4278,8192,4088, 0, 0, 0},  //TV = 7.87(410 lines)  AV=2.28  SV=10.00  BV=0.15
    {4581,8192,4088, 0, 0, 0},  //TV = 7.77(439 lines)  AV=2.28  SV=10.00  BV=0.05
    {4904,8192,4088, 0, 0, 0},  //TV = 7.67(470 lines)  AV=2.28  SV=10.00  BV=-0.05
    {5249,8192,4096, 0, 0, 0},  //TV = 7.57(503 lines)  AV=2.28  SV=10.00  BV=-0.15
    {5624,8192,4088, 0, 0, 0},  //TV = 7.47(539 lines)  AV=2.28  SV=10.00  BV=-0.25
    {6063,8192,4088, 0, 0, 0},  //TV = 7.37(581 lines)  AV=2.28  SV=10.00  BV=-0.36
    {6490,8192,4096, 0, 0, 0},  //TV = 7.27(622 lines)  AV=2.28  SV=10.00  BV=-0.46
    {6950,8192,4096, 0, 0, 0},  //TV = 7.17(666 lines)  AV=2.28  SV=10.00  BV=-0.56
    {7450,8192,4088, 0, 0, 0},  //TV = 7.07(714 lines)  AV=2.28  SV=10.00  BV=-0.65
    {7983,8192,4088, 0, 0, 0},  //TV = 6.97(765 lines)  AV=2.28  SV=10.00  BV=-0.75
    {8337,8192,4192, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=10.03  BV=-0.85
    {8337,8192,4496, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=10.13  BV=-0.95
    {8337,8192,4816, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=10.23  BV=-1.05
    {8337,8192,5160, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=10.33  BV=-1.15
    {8337,8192,5528, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=10.43  BV=-1.25
    {8337,8192,5920, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=10.53  BV=-1.35
    {16664,8192,3168, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=9.63  BV=-1.45
    {16664,8192,3400, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=9.73  BV=-1.55
    {16664,8192,3664, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=9.84  BV=-1.66
    {16664,8192,3928, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=9.94  BV=-1.76
    {16664,8192,4208, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=10.04  BV=-1.86
    {16664,8192,4512, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=10.14  BV=-1.96
    {16664,8192,4832, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=10.24  BV=-2.06
    {25000,8192,3448, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.75  BV=-2.15
    {25000,8192,3696, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.85  BV=-2.25
    {25000,8192,3960, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.95  BV=-2.35
    {25000,8192,4248, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=10.05  BV=-2.46
    {25000,8192,4552, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=10.15  BV=-2.56
    {33337,8192,3656, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=9.84  BV=-2.65
    {33337,8192,3920, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=9.94  BV=-2.75
    {33337,8192,4200, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=10.04  BV=-2.85
    {33337,8192,4504, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=10.14  BV=-2.96
    {41663,8192,3856, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.91  BV=-3.05
    {41663,8192,4136, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.01  BV=-3.15
    {41663,8192,4432, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.11  BV=-3.25
    {50000,8192,3960, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.95  BV=-3.35
    {50000,8192,4240, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.05  BV=-3.45
    {58327,8192,3896, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=9.93  BV=-3.55
    {58327,8192,4176, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=10.03  BV=-3.65
    {66663,8192,3912, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=9.93  BV=-3.75
    {66663,8192,4192, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=10.03  BV=-3.85
    {75000,8192,3992, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=9.96  BV=-3.95
    {75000,8192,4280, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=10.06  BV=-4.05
    {83326,8192,4128, 0, 0, 0},  //TV = 3.59(7986 lines)  AV=2.28  SV=10.01  BV=-4.15
    {91663,8192,4024, 0, 0, 0},  //TV = 3.45(8785 lines)  AV=2.28  SV=9.97  BV=-4.25
    {100000,8192,3952, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=9.95  BV=-4.35
    {100000,8192,4240, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=10.05  BV=-4.45
    {108326,8192,4192, 0, 0, 0},  //TV = 3.21(10382 lines)  AV=2.28  SV=10.03  BV=-4.55
    {116663,8192,4168, 0, 0, 0},  //TV = 3.10(11181 lines)  AV=2.28  SV=10.03  BV=-4.65
    {125000,8192,4176, 0, 0, 0},  //TV = 3.00(11980 lines)  AV=2.28  SV=10.03  BV=-4.75
    {133326,8192,4192, 0, 0, 0},  //TV = 2.91(12778 lines)  AV=2.28  SV=10.03  BV=-4.85
    {150000,8192,3992, 0, 0, 0},  //TV = 2.74(14376 lines)  AV=2.28  SV=9.96  BV=-4.95
    {158326,8192,4056, 0, 0, 0},  //TV = 2.66(15174 lines)  AV=2.28  SV=9.99  BV=-5.05
    {166663,8192,4128, 0, 0, 0},  //TV = 2.58(15973 lines)  AV=2.28  SV=10.01  BV=-5.15
    {183326,8192,4024, 0, 0, 0},  //TV = 2.45(17570 lines)  AV=2.28  SV=9.97  BV=-5.25
    {191663,8192,4128, 0, 0, 0},  //TV = 2.38(18369 lines)  AV=2.28  SV=10.01  BV=-5.35
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene6PLineTable_50Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {491,1362,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.41  BV=7.86
    {491,1454,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.52  BV=7.75
    {491,1567,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.63  BV=7.64
    {491,1679,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.71  BV=7.55
    {491,1792,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.82  BV=7.45
    {491,1925,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.92  BV=7.35
    {491,2079,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.02  BV=7.25
    {491,2222,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.12  BV=7.15
    {491,2386,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.22  BV=7.05
    {491,2550,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.32  BV=6.95
    {491,2734,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.42  BV=6.85
    {491,2949,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.53  BV=6.74
    {491,3123,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.62  BV=6.65
    {491,3359,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.71  BV=6.55
    {491,3594,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.81  BV=6.46
    {491,3850,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.91  BV=6.36
    {491,4157,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.02  BV=6.25
    {491,4444,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.12  BV=6.15
    {491,4762,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.22  BV=6.05
    {491,5038,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.31  BV=5.96
    {491,5458,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.41  BV=5.85
    {491,5827,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.51  BV=5.76
    {491,6246,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.62  BV=5.65
    {491,6717,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.71  BV=5.55
    {491,7086,1048, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.82  BV=5.44
    {491,7711,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.91  BV=5.35
    {491,8192,1040, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.02  BV=5.24
    {491,8192,1112, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.12  BV=5.15
    {491,8192,1192, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.22  BV=5.05
    {491,8192,1272, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.31  BV=4.95
    {491,8192,1368, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.42  BV=4.85
    {491,8192,1464, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.52  BV=4.75
    {491,8192,1568, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.61  BV=4.65
    {491,8192,1680, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.71  BV=4.55
    {491,8192,1816, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.83  BV=4.44
    {491,8192,1944, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.92  BV=4.34
    {491,8192,2080, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.02  BV=4.24
    {491,8192,2232, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.12  BV=4.14
    {491,8192,2392, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.22  BV=4.04
    {491,8192,2560, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.32  BV=3.95
    {491,8192,2744, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.42  BV=3.84
    {491,8192,2944, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.52  BV=3.74
    {491,8192,3152, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.62  BV=3.64
    {491,8192,3376, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.72  BV=3.55
    {491,8192,3624, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.82  BV=3.44
    {491,8192,3880, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.92  BV=3.35
    {491,8192,4160, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.02  BV=3.24
    {533,8192,4096, 0, 0, 0},  //TV = 10.87(51 lines)  AV=2.28  SV=10.00  BV=3.15
    {574,8192,4080, 0, 0, 0},  //TV = 10.77(55 lines)  AV=2.28  SV=9.99  BV=3.05
    {616,8192,4080, 0, 0, 0},  //TV = 10.66(59 lines)  AV=2.28  SV=9.99  BV=2.95
    {658,8192,4096, 0, 0, 0},  //TV = 10.57(63 lines)  AV=2.28  SV=10.00  BV=2.84
    {710,8192,4072, 0, 0, 0},  //TV = 10.46(68 lines)  AV=2.28  SV=9.99  BV=2.74
    {762,8192,4064, 0, 0, 0},  //TV = 10.36(73 lines)  AV=2.28  SV=9.99  BV=2.64
    {814,8192,4080, 0, 0, 0},  //TV = 10.26(78 lines)  AV=2.28  SV=9.99  BV=2.54
    {867,8192,4096, 0, 0, 0},  //TV = 10.17(83 lines)  AV=2.28  SV=10.00  BV=2.45
    {929,8192,4112, 0, 0, 0},  //TV = 10.07(89 lines)  AV=2.28  SV=10.01  BV=2.34
    {1002,8192,4080, 0, 0, 0},  //TV = 9.96(96 lines)  AV=2.28  SV=9.99  BV=2.24
    {1065,8192,4104, 0, 0, 0},  //TV = 9.87(102 lines)  AV=2.28  SV=10.00  BV=2.15
    {1148,8192,4080, 0, 0, 0},  //TV = 9.77(110 lines)  AV=2.28  SV=9.99  BV=2.05
    {1232,8192,4088, 0, 0, 0},  //TV = 9.66(118 lines)  AV=2.28  SV=10.00  BV=1.94
    {1315,8192,4088, 0, 0, 0},  //TV = 9.57(126 lines)  AV=2.28  SV=10.00  BV=1.85
    {1409,8192,4104, 0, 0, 0},  //TV = 9.47(135 lines)  AV=2.28  SV=10.00  BV=1.74
    {1513,8192,4080, 0, 0, 0},  //TV = 9.37(145 lines)  AV=2.28  SV=9.99  BV=1.65
    {1618,8192,4104, 0, 0, 0},  //TV = 9.27(155 lines)  AV=2.28  SV=10.00  BV=1.54
    {1733,8192,4088, 0, 0, 0},  //TV = 9.17(166 lines)  AV=2.28  SV=10.00  BV=1.45
    {1868,8192,4080, 0, 0, 0},  //TV = 9.06(179 lines)  AV=2.28  SV=9.99  BV=1.34
    {1993,8192,4096, 0, 0, 0},  //TV = 8.97(191 lines)  AV=2.28  SV=10.00  BV=1.25
    {2129,8192,4096, 0, 0, 0},  //TV = 8.88(204 lines)  AV=2.28  SV=10.00  BV=1.15
    {2296,8192,4088, 0, 0, 0},  //TV = 8.77(220 lines)  AV=2.28  SV=10.00  BV=1.04
    {2452,8192,4096, 0, 0, 0},  //TV = 8.67(235 lines)  AV=2.28  SV=10.00  BV=0.95
    {2630,8192,4088, 0, 0, 0},  //TV = 8.57(252 lines)  AV=2.28  SV=10.00  BV=0.85
    {2828,8192,4096, 0, 0, 0},  //TV = 8.47(271 lines)  AV=2.28  SV=10.00  BV=0.74
    {3026,8192,4088, 0, 0, 0},  //TV = 8.37(290 lines)  AV=2.28  SV=10.00  BV=0.65
    {3235,8192,4096, 0, 0, 0},  //TV = 8.27(310 lines)  AV=2.28  SV=10.00  BV=0.55
    {3465,8192,4088, 0, 0, 0},  //TV = 8.17(332 lines)  AV=2.28  SV=10.00  BV=0.45
    {3736,8192,4088, 0, 0, 0},  //TV = 8.06(358 lines)  AV=2.28  SV=10.00  BV=0.34
    {3997,8192,4088, 0, 0, 0},  //TV = 7.97(383 lines)  AV=2.28  SV=10.00  BV=0.24
    {4278,8192,4088, 0, 0, 0},  //TV = 7.87(410 lines)  AV=2.28  SV=10.00  BV=0.15
    {4581,8192,4088, 0, 0, 0},  //TV = 7.77(439 lines)  AV=2.28  SV=10.00  BV=0.05
    {4904,8192,4088, 0, 0, 0},  //TV = 7.67(470 lines)  AV=2.28  SV=10.00  BV=-0.05
    {5249,8192,4096, 0, 0, 0},  //TV = 7.57(503 lines)  AV=2.28  SV=10.00  BV=-0.15
    {5624,8192,4088, 0, 0, 0},  //TV = 7.47(539 lines)  AV=2.28  SV=10.00  BV=-0.25
    {6063,8192,4088, 0, 0, 0},  //TV = 7.37(581 lines)  AV=2.28  SV=10.00  BV=-0.36
    {6490,8192,4096, 0, 0, 0},  //TV = 7.27(622 lines)  AV=2.28  SV=10.00  BV=-0.46
    {6950,8192,4096, 0, 0, 0},  //TV = 7.17(666 lines)  AV=2.28  SV=10.00  BV=-0.56
    {7450,8192,4088, 0, 0, 0},  //TV = 7.07(714 lines)  AV=2.28  SV=10.00  BV=-0.65
    {7983,8192,4088, 0, 0, 0},  //TV = 6.97(765 lines)  AV=2.28  SV=10.00  BV=-0.75
    {8546,8192,4096, 0, 0, 0},  //TV = 6.87(819 lines)  AV=2.28  SV=10.00  BV=-0.85
    {9151,8192,4096, 0, 0, 0},  //TV = 6.77(877 lines)  AV=2.28  SV=10.00  BV=-0.95
    {9808,8192,4088, 0, 0, 0},  //TV = 6.67(940 lines)  AV=2.28  SV=10.00  BV=-1.05
    {9996,8192,4304, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=10.07  BV=-1.15
    {9996,8192,4608, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=10.17  BV=-1.25
    {9996,8192,4936, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=10.27  BV=-1.35
    {9996,8192,5288, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=10.37  BV=-1.45
    {9996,8192,5704, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=10.48  BV=-1.56
    {9996,8192,6112, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=10.58  BV=-1.66
    {20002,8192,3272, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=9.68  BV=-1.76
    {20002,8192,3504, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=9.77  BV=-1.86
    {20002,8192,3760, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=9.88  BV=-1.96
    {20002,8192,4024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=9.97  BV=-2.06
    {20002,8192,4312, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=10.07  BV=-2.16
    {20002,8192,4624, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=10.17  BV=-2.26
    {20002,8192,4952, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=10.27  BV=-2.36
    {29998,8192,3536, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.79  BV=-2.45
    {29998,8192,3792, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.89  BV=-2.55
    {29998,8192,4064, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.99  BV=-2.65
    {29998,8192,4352, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=10.09  BV=-2.75
    {29998,8192,4664, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=10.19  BV=-2.85
    {40004,8192,3752, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.87  BV=-2.95
    {40004,8192,4016, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.97  BV=-3.05
    {40004,8192,4304, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.07  BV=-3.15
    {50000,8192,3688, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.85  BV=-3.25
    {50000,8192,3960, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.95  BV=-3.35
    {50000,8192,4240, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.05  BV=-3.45
    {59996,8192,3784, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.89  BV=-3.55
    {59996,8192,4056, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.99  BV=-3.65
    {59996,8192,4352, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.09  BV=-3.75
    {70002,8192,3992, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=9.96  BV=-3.85
    {70002,8192,4280, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.06  BV=-3.95
    {79998,8192,4016, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=9.97  BV=-4.05
    {79998,8192,4304, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=10.07  BV=-4.15
    {90004,8192,4096, 0, 0, 0},  //TV = 3.47(8626 lines)  AV=2.28  SV=10.00  BV=-4.25
    {100000,8192,3952, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=9.95  BV=-4.35
    {100000,8192,4240, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=10.05  BV=-4.45
    {109996,8192,4128, 0, 0, 0},  //TV = 3.18(10542 lines)  AV=2.28  SV=10.01  BV=-4.55
    {120002,8192,4056, 0, 0, 0},  //TV = 3.06(11501 lines)  AV=2.28  SV=9.99  BV=-4.65
    {129998,8192,4016, 0, 0, 0},  //TV = 2.94(12459 lines)  AV=2.28  SV=9.97  BV=-4.75
    {140004,8192,3992, 0, 0, 0},  //TV = 2.84(13418 lines)  AV=2.28  SV=9.96  BV=-4.85
    {150000,8192,3992, 0, 0, 0},  //TV = 2.74(14376 lines)  AV=2.28  SV=9.96  BV=-4.95
    {159995,8192,4016, 0, 0, 0},  //TV = 2.64(15334 lines)  AV=2.28  SV=9.97  BV=-5.05
    {170002,8192,4048, 0, 0, 0},  //TV = 2.56(16293 lines)  AV=2.28  SV=9.98  BV=-5.15
    {179997,8192,4096, 0, 0, 0},  //TV = 2.47(17251 lines)  AV=2.28  SV=10.00  BV=-5.25
    {190004,8192,4160, 0, 0, 0},  //TV = 2.40(18210 lines)  AV=2.28  SV=10.02  BV=-5.35
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable6 =
{
    AETABLE_SCENE_INDEX6, //eAETableID
    158, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -54, //i4MinBV
    90, //i4EffectiveMaxBV
    0, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sAEScene6PLineTable_60Hz,
    sAEScene6PLineTable_50Hz,
    NULL,
};
static strEvPline sAEScene7PLineTable_60Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {491,1362,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.41  BV=7.86
    {491,1454,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.52  BV=7.75
    {491,1567,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.63  BV=7.64
    {491,1679,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.71  BV=7.55
    {491,1792,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.82  BV=7.45
    {491,1925,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.92  BV=7.35
    {491,2079,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.02  BV=7.25
    {491,2222,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.12  BV=7.15
    {491,2386,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.22  BV=7.05
    {491,2550,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.32  BV=6.95
    {491,2734,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.42  BV=6.85
    {491,2949,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.53  BV=6.74
    {491,3123,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.62  BV=6.65
    {491,3359,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.71  BV=6.55
    {491,3594,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.81  BV=6.46
    {491,3850,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.91  BV=6.36
    {491,4157,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.02  BV=6.25
    {491,4444,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.12  BV=6.15
    {491,4762,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.22  BV=6.05
    {491,5038,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.31  BV=5.96
    {491,5458,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.41  BV=5.85
    {491,5827,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.51  BV=5.76
    {491,6246,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.62  BV=5.65
    {491,6717,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.71  BV=5.55
    {491,7086,1048, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.82  BV=5.44
    {491,7711,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.91  BV=5.35
    {491,8192,1040, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.02  BV=5.24
    {491,8192,1112, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.12  BV=5.15
    {491,8192,1192, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.22  BV=5.05
    {491,8192,1272, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.31  BV=4.95
    {491,8192,1368, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.42  BV=4.85
    {491,8192,1464, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.52  BV=4.75
    {491,8192,1568, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.61  BV=4.65
    {491,8192,1680, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.71  BV=4.55
    {491,8192,1816, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.83  BV=4.44
    {491,8192,1944, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.92  BV=4.34
    {491,8192,2080, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.02  BV=4.24
    {491,8192,2232, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.12  BV=4.14
    {491,8192,2392, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.22  BV=4.04
    {491,8192,2560, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.32  BV=3.95
    {491,8192,2744, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.42  BV=3.84
    {491,8192,2944, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.52  BV=3.74
    {491,8192,3152, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.62  BV=3.64
    {491,8192,3376, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.72  BV=3.55
    {491,8192,3624, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.82  BV=3.44
    {491,8192,3880, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.92  BV=3.35
    {491,8192,4160, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.02  BV=3.24
    {491,8192,4456, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.12  BV=3.15
    {491,8192,4776, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.22  BV=3.05
    {491,8192,5120, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.32  BV=2.95
    {491,8192,5488, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.42  BV=2.84
    {491,8192,5880, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.52  BV=2.75
    {491,8192,6304, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.62  BV=2.64
    {491,8192,6752, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.72  BV=2.55
    {491,8192,7240, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.82  BV=2.45
    {491,8192,7752, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.92  BV=2.35
    {491,8192,8312, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.02  BV=2.25
    {533,8192,8192, 0, 0, 0},  //TV = 10.87(51 lines)  AV=2.28  SV=11.00  BV=2.15
    {574,8192,8160, 0, 0, 0},  //TV = 10.77(55 lines)  AV=2.28  SV=10.99  BV=2.05
    {616,8192,8160, 0, 0, 0},  //TV = 10.66(59 lines)  AV=2.28  SV=10.99  BV=1.95
    {658,8192,8192, 0, 0, 0},  //TV = 10.57(63 lines)  AV=2.28  SV=11.00  BV=1.84
    {710,8192,8144, 0, 0, 0},  //TV = 10.46(68 lines)  AV=2.28  SV=10.99  BV=1.74
    {762,8192,8136, 0, 0, 0},  //TV = 10.36(73 lines)  AV=2.28  SV=10.99  BV=1.64
    {814,8192,8168, 0, 0, 0},  //TV = 10.26(78 lines)  AV=2.28  SV=11.00  BV=1.54
    {867,8192,8192, 0, 0, 0},  //TV = 10.17(83 lines)  AV=2.28  SV=11.00  BV=1.45
    {929,8192,8224, 0, 0, 0},  //TV = 10.07(89 lines)  AV=2.28  SV=11.01  BV=1.34
    {1002,8192,8160, 0, 0, 0},  //TV = 9.96(96 lines)  AV=2.28  SV=10.99  BV=1.24
    {1065,8192,8200, 0, 0, 0},  //TV = 9.87(102 lines)  AV=2.28  SV=11.00  BV=1.15
    {1148,8192,8160, 0, 0, 0},  //TV = 9.77(110 lines)  AV=2.28  SV=10.99  BV=1.05
    {1232,8192,8184, 0, 0, 0},  //TV = 9.66(118 lines)  AV=2.28  SV=11.00  BV=0.94
    {1315,8192,8176, 0, 0, 0},  //TV = 9.57(126 lines)  AV=2.28  SV=11.00  BV=0.85
    {1409,8192,8208, 0, 0, 0},  //TV = 9.47(135 lines)  AV=2.28  SV=11.00  BV=0.74
    {1513,8192,8168, 0, 0, 0},  //TV = 9.37(145 lines)  AV=2.28  SV=11.00  BV=0.65
    {1618,8192,8208, 0, 0, 0},  //TV = 9.27(155 lines)  AV=2.28  SV=11.00  BV=0.54
    {1733,8192,8184, 0, 0, 0},  //TV = 9.17(166 lines)  AV=2.28  SV=11.00  BV=0.45
    {1868,8192,8168, 0, 0, 0},  //TV = 9.06(179 lines)  AV=2.28  SV=11.00  BV=0.34
    {1993,8192,8192, 0, 0, 0},  //TV = 8.97(191 lines)  AV=2.28  SV=11.00  BV=0.25
    {2129,8192,8200, 0, 0, 0},  //TV = 8.88(204 lines)  AV=2.28  SV=11.00  BV=0.15
    {2296,8192,8184, 0, 0, 0},  //TV = 8.77(220 lines)  AV=2.28  SV=11.00  BV=0.04
    {2452,8192,8192, 0, 0, 0},  //TV = 8.67(235 lines)  AV=2.28  SV=11.00  BV=-0.05
    {2630,8192,8176, 0, 0, 0},  //TV = 8.57(252 lines)  AV=2.28  SV=11.00  BV=-0.15
    {2828,8192,8192, 0, 0, 0},  //TV = 8.47(271 lines)  AV=2.28  SV=11.00  BV=-0.26
    {3026,8192,8184, 0, 0, 0},  //TV = 8.37(290 lines)  AV=2.28  SV=11.00  BV=-0.36
    {3235,8192,8200, 0, 0, 0},  //TV = 8.27(310 lines)  AV=2.28  SV=11.00  BV=-0.45
    {3465,8192,8184, 0, 0, 0},  //TV = 8.17(332 lines)  AV=2.28  SV=11.00  BV=-0.55
    {3736,8192,8184, 0, 0, 0},  //TV = 8.06(358 lines)  AV=2.28  SV=11.00  BV=-0.66
    {3997,8192,8184, 0, 0, 0},  //TV = 7.97(383 lines)  AV=2.28  SV=11.00  BV=-0.76
    {4278,8192,8184, 0, 0, 0},  //TV = 7.87(410 lines)  AV=2.28  SV=11.00  BV=-0.85
    {4581,8192,8184, 0, 0, 0},  //TV = 7.77(439 lines)  AV=2.28  SV=11.00  BV=-0.95
    {4904,8192,8184, 0, 0, 0},  //TV = 7.67(470 lines)  AV=2.28  SV=11.00  BV=-1.05
    {5249,8192,8192, 0, 0, 0},  //TV = 7.57(503 lines)  AV=2.28  SV=11.00  BV=-1.15
    {5624,8192,8184, 0, 0, 0},  //TV = 7.47(539 lines)  AV=2.28  SV=11.00  BV=-1.25
    {6063,8192,8184, 0, 0, 0},  //TV = 7.37(581 lines)  AV=2.28  SV=11.00  BV=-1.36
    {6490,8192,8192, 0, 0, 0},  //TV = 7.27(622 lines)  AV=2.28  SV=11.00  BV=-1.46
    {6950,8192,8192, 0, 0, 0},  //TV = 7.17(666 lines)  AV=2.28  SV=11.00  BV=-1.56
    {7450,8192,8184, 0, 0, 0},  //TV = 7.07(714 lines)  AV=2.28  SV=11.00  BV=-1.66
    {7983,8192,8184, 0, 0, 0},  //TV = 6.97(765 lines)  AV=2.28  SV=11.00  BV=-1.75
    {8337,8192,8392, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=11.03  BV=-1.85
    {8337,8192,8992, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=11.13  BV=-1.95
    {8337,8192,9632, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=11.23  BV=-2.05
    {8337,8192,10320, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=11.33  BV=-2.15
    {8337,8192,11056, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=11.43  BV=-2.25
    {8337,8192,11840, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=11.53  BV=-2.35
    {16664,8192,6344, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=10.63  BV=-2.45
    {16664,8192,6800, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=10.73  BV=-2.55
    {16664,8192,7336, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=10.84  BV=-2.66
    {16664,8192,7864, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=10.94  BV=-2.76
    {16664,8192,8424, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=11.04  BV=-2.86
    {16664,8192,9024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=11.14  BV=-2.96
    {16664,8192,9672, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=11.24  BV=-3.06
    {25000,8192,6904, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=10.75  BV=-3.16
    {25000,8192,7400, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=10.85  BV=-3.26
    {25000,8192,7928, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=10.95  BV=-3.36
    {25000,8192,8496, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=11.05  BV=-3.46
    {25000,8192,9104, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=11.15  BV=-3.56
    {33337,8192,7312, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=10.84  BV=-3.65
    {33337,8192,7840, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=10.94  BV=-3.75
    {33337,8192,8400, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=11.04  BV=-3.85
    {33337,8192,9000, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=11.14  BV=-3.95
    {41663,8192,7720, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.91  BV=-4.05
    {41663,8192,8272, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=11.01  BV=-4.15
    {41663,8192,8864, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=11.11  BV=-4.25
    {50000,8192,7920, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.95  BV=-4.35
    {50000,8192,8480, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=11.05  BV=-4.45
    {58327,8192,7792, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=10.93  BV=-4.55
    {58327,8192,8352, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=11.03  BV=-4.65
    {66663,8192,7832, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=10.94  BV=-4.75
    {66663,8192,8392, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=11.03  BV=-4.85
    {75000,8192,7992, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=10.96  BV=-4.95
    {75000,8192,8568, 0, 0, 0},  //TV = 3.74(7188 lines)  AV=2.28  SV=11.06  BV=-5.05
    {83326,8192,8264, 0, 0, 0},  //TV = 3.59(7986 lines)  AV=2.28  SV=11.01  BV=-5.15
    {91663,8192,8056, 0, 0, 0},  //TV = 3.45(8785 lines)  AV=2.28  SV=10.98  BV=-5.25
    {100000,8192,7912, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=10.95  BV=-5.35
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene7PLineTable_50Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {491,1362,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.41  BV=7.86
    {491,1454,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.52  BV=7.75
    {491,1567,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.63  BV=7.64
    {491,1679,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.71  BV=7.55
    {491,1792,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.82  BV=7.45
    {491,1925,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.92  BV=7.35
    {491,2079,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.02  BV=7.25
    {491,2222,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.12  BV=7.15
    {491,2386,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.22  BV=7.05
    {491,2550,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.32  BV=6.95
    {491,2734,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.42  BV=6.85
    {491,2949,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.53  BV=6.74
    {491,3123,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.62  BV=6.65
    {491,3359,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.71  BV=6.55
    {491,3594,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.81  BV=6.46
    {491,3850,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.91  BV=6.36
    {491,4157,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.02  BV=6.25
    {491,4444,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.12  BV=6.15
    {491,4762,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.22  BV=6.05
    {491,5038,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.31  BV=5.96
    {491,5458,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.41  BV=5.85
    {491,5827,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.51  BV=5.76
    {491,6246,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.62  BV=5.65
    {491,6717,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.71  BV=5.55
    {491,7086,1048, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.82  BV=5.44
    {491,7711,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.91  BV=5.35
    {491,8192,1040, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.02  BV=5.24
    {491,8192,1112, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.12  BV=5.15
    {491,8192,1192, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.22  BV=5.05
    {491,8192,1272, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.31  BV=4.95
    {491,8192,1368, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.42  BV=4.85
    {491,8192,1464, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.52  BV=4.75
    {491,8192,1568, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.61  BV=4.65
    {491,8192,1680, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.71  BV=4.55
    {491,8192,1816, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.83  BV=4.44
    {491,8192,1944, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.92  BV=4.34
    {491,8192,2080, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.02  BV=4.24
    {491,8192,2232, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.12  BV=4.14
    {491,8192,2392, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.22  BV=4.04
    {491,8192,2560, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.32  BV=3.95
    {491,8192,2744, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.42  BV=3.84
    {491,8192,2944, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.52  BV=3.74
    {491,8192,3152, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.62  BV=3.64
    {491,8192,3376, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.72  BV=3.55
    {491,8192,3624, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.82  BV=3.44
    {491,8192,3880, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.92  BV=3.35
    {491,8192,4160, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.02  BV=3.24
    {491,8192,4456, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.12  BV=3.15
    {491,8192,4776, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.22  BV=3.05
    {491,8192,5120, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.32  BV=2.95
    {491,8192,5488, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.42  BV=2.84
    {491,8192,5880, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.52  BV=2.75
    {491,8192,6304, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.62  BV=2.64
    {491,8192,6752, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.72  BV=2.55
    {491,8192,7240, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.82  BV=2.45
    {491,8192,7752, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.92  BV=2.35
    {491,8192,8312, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.02  BV=2.25
    {533,8192,8192, 0, 0, 0},  //TV = 10.87(51 lines)  AV=2.28  SV=11.00  BV=2.15
    {574,8192,8160, 0, 0, 0},  //TV = 10.77(55 lines)  AV=2.28  SV=10.99  BV=2.05
    {616,8192,8160, 0, 0, 0},  //TV = 10.66(59 lines)  AV=2.28  SV=10.99  BV=1.95
    {658,8192,8192, 0, 0, 0},  //TV = 10.57(63 lines)  AV=2.28  SV=11.00  BV=1.84
    {710,8192,8144, 0, 0, 0},  //TV = 10.46(68 lines)  AV=2.28  SV=10.99  BV=1.74
    {762,8192,8136, 0, 0, 0},  //TV = 10.36(73 lines)  AV=2.28  SV=10.99  BV=1.64
    {814,8192,8168, 0, 0, 0},  //TV = 10.26(78 lines)  AV=2.28  SV=11.00  BV=1.54
    {867,8192,8192, 0, 0, 0},  //TV = 10.17(83 lines)  AV=2.28  SV=11.00  BV=1.45
    {929,8192,8224, 0, 0, 0},  //TV = 10.07(89 lines)  AV=2.28  SV=11.01  BV=1.34
    {1002,8192,8160, 0, 0, 0},  //TV = 9.96(96 lines)  AV=2.28  SV=10.99  BV=1.24
    {1065,8192,8200, 0, 0, 0},  //TV = 9.87(102 lines)  AV=2.28  SV=11.00  BV=1.15
    {1148,8192,8160, 0, 0, 0},  //TV = 9.77(110 lines)  AV=2.28  SV=10.99  BV=1.05
    {1232,8192,8184, 0, 0, 0},  //TV = 9.66(118 lines)  AV=2.28  SV=11.00  BV=0.94
    {1315,8192,8176, 0, 0, 0},  //TV = 9.57(126 lines)  AV=2.28  SV=11.00  BV=0.85
    {1409,8192,8208, 0, 0, 0},  //TV = 9.47(135 lines)  AV=2.28  SV=11.00  BV=0.74
    {1513,8192,8168, 0, 0, 0},  //TV = 9.37(145 lines)  AV=2.28  SV=11.00  BV=0.65
    {1618,8192,8208, 0, 0, 0},  //TV = 9.27(155 lines)  AV=2.28  SV=11.00  BV=0.54
    {1733,8192,8184, 0, 0, 0},  //TV = 9.17(166 lines)  AV=2.28  SV=11.00  BV=0.45
    {1868,8192,8168, 0, 0, 0},  //TV = 9.06(179 lines)  AV=2.28  SV=11.00  BV=0.34
    {1993,8192,8192, 0, 0, 0},  //TV = 8.97(191 lines)  AV=2.28  SV=11.00  BV=0.25
    {2129,8192,8200, 0, 0, 0},  //TV = 8.88(204 lines)  AV=2.28  SV=11.00  BV=0.15
    {2296,8192,8184, 0, 0, 0},  //TV = 8.77(220 lines)  AV=2.28  SV=11.00  BV=0.04
    {2452,8192,8192, 0, 0, 0},  //TV = 8.67(235 lines)  AV=2.28  SV=11.00  BV=-0.05
    {2630,8192,8176, 0, 0, 0},  //TV = 8.57(252 lines)  AV=2.28  SV=11.00  BV=-0.15
    {2828,8192,8192, 0, 0, 0},  //TV = 8.47(271 lines)  AV=2.28  SV=11.00  BV=-0.26
    {3026,8192,8184, 0, 0, 0},  //TV = 8.37(290 lines)  AV=2.28  SV=11.00  BV=-0.36
    {3235,8192,8200, 0, 0, 0},  //TV = 8.27(310 lines)  AV=2.28  SV=11.00  BV=-0.45
    {3465,8192,8184, 0, 0, 0},  //TV = 8.17(332 lines)  AV=2.28  SV=11.00  BV=-0.55
    {3736,8192,8184, 0, 0, 0},  //TV = 8.06(358 lines)  AV=2.28  SV=11.00  BV=-0.66
    {3997,8192,8184, 0, 0, 0},  //TV = 7.97(383 lines)  AV=2.28  SV=11.00  BV=-0.76
    {4278,8192,8184, 0, 0, 0},  //TV = 7.87(410 lines)  AV=2.28  SV=11.00  BV=-0.85
    {4581,8192,8184, 0, 0, 0},  //TV = 7.77(439 lines)  AV=2.28  SV=11.00  BV=-0.95
    {4904,8192,8184, 0, 0, 0},  //TV = 7.67(470 lines)  AV=2.28  SV=11.00  BV=-1.05
    {5249,8192,8192, 0, 0, 0},  //TV = 7.57(503 lines)  AV=2.28  SV=11.00  BV=-1.15
    {5624,8192,8184, 0, 0, 0},  //TV = 7.47(539 lines)  AV=2.28  SV=11.00  BV=-1.25
    {6063,8192,8184, 0, 0, 0},  //TV = 7.37(581 lines)  AV=2.28  SV=11.00  BV=-1.36
    {6490,8192,8192, 0, 0, 0},  //TV = 7.27(622 lines)  AV=2.28  SV=11.00  BV=-1.46
    {6950,8192,8192, 0, 0, 0},  //TV = 7.17(666 lines)  AV=2.28  SV=11.00  BV=-1.56
    {7450,8192,8184, 0, 0, 0},  //TV = 7.07(714 lines)  AV=2.28  SV=11.00  BV=-1.66
    {7983,8192,8184, 0, 0, 0},  //TV = 6.97(765 lines)  AV=2.28  SV=11.00  BV=-1.75
    {8546,8192,8184, 0, 0, 0},  //TV = 6.87(819 lines)  AV=2.28  SV=11.00  BV=-1.85
    {9151,8192,8192, 0, 0, 0},  //TV = 6.77(877 lines)  AV=2.28  SV=11.00  BV=-1.95
    {9808,8192,8184, 0, 0, 0},  //TV = 6.67(940 lines)  AV=2.28  SV=11.00  BV=-2.05
    {9996,8192,8608, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=11.07  BV=-2.15
    {9996,8192,9216, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=11.17  BV=-2.25
    {9996,8192,9880, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=11.27  BV=-2.35
    {9996,8192,10584, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=11.37  BV=-2.45
    {9996,8192,11416, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=11.48  BV=-2.56
    {9996,8192,12232, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=11.58  BV=-2.66
    {20002,8192,6552, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=10.68  BV=-2.76
    {20002,8192,7016, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=10.78  BV=-2.86
    {20002,8192,7520, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=10.88  BV=-2.96
    {20002,8192,8056, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=10.98  BV=-3.06
    {20002,8192,8632, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=11.08  BV=-3.16
    {20002,8192,9248, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=11.17  BV=-3.26
    {20002,8192,9912, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=11.27  BV=-3.36
    {29998,8192,7080, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=10.79  BV=-3.46
    {29998,8192,7584, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=10.89  BV=-3.55
    {29998,8192,8128, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=10.99  BV=-3.65
    {29998,8192,8712, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=11.09  BV=-3.75
    {29998,8192,9336, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=11.19  BV=-3.85
    {40004,8192,7504, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.87  BV=-3.95
    {40004,8192,8040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.97  BV=-4.05
    {40004,8192,8616, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=11.07  BV=-4.15
    {50000,8192,7384, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.85  BV=-4.25
    {50000,8192,7920, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.95  BV=-4.35
    {50000,8192,8480, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=11.05  BV=-4.45
    {59996,8192,7576, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.89  BV=-4.55
    {59996,8192,8120, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.99  BV=-4.65
    {59996,8192,8704, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=11.09  BV=-4.75
    {70002,8192,7992, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=10.96  BV=-4.85
    {70002,8192,8568, 0, 0, 0},  //TV = 3.84(6709 lines)  AV=2.28  SV=11.06  BV=-4.95
    {79998,8192,8032, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=10.97  BV=-5.05
    {79998,8192,8608, 0, 0, 0},  //TV = 3.64(7667 lines)  AV=2.28  SV=11.07  BV=-5.15
    {90004,8192,8200, 0, 0, 0},  //TV = 3.47(8626 lines)  AV=2.28  SV=11.00  BV=-5.25
    {100000,8192,7912, 0, 0, 0},  //TV = 3.32(9584 lines)  AV=2.28  SV=10.95  BV=-5.35
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable7 =
{
    AETABLE_SCENE_INDEX7, //eAETableID
    158, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -54, //i4MinBV
    90, //i4EffectiveMaxBV
    0, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sAEScene7PLineTable_60Hz,
    sAEScene7PLineTable_50Hz,
    NULL,
};
static strEvPline sAEScene8PLineTable_60Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {491,1362,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.41  BV=7.86
    {491,1454,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.52  BV=7.75
    {491,1567,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.63  BV=7.64
    {491,1679,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.71  BV=7.55
    {491,1792,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.82  BV=7.45
    {491,1925,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.92  BV=7.35
    {491,2079,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.02  BV=7.25
    {491,2222,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.12  BV=7.15
    {491,2386,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.22  BV=7.05
    {491,2550,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.32  BV=6.95
    {491,2734,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.42  BV=6.85
    {491,2949,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.53  BV=6.74
    {491,3123,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.62  BV=6.65
    {491,3359,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.71  BV=6.55
    {491,3594,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.81  BV=6.46
    {491,3850,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.91  BV=6.36
    {491,4157,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.02  BV=6.25
    {491,4444,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.12  BV=6.15
    {491,4762,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.22  BV=6.05
    {491,5038,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.31  BV=5.96
    {491,5458,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.41  BV=5.85
    {491,5827,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.51  BV=5.76
    {491,6246,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.62  BV=5.65
    {491,6717,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.71  BV=5.55
    {491,7086,1048, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.82  BV=5.44
    {491,7711,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.91  BV=5.35
    {491,8192,1040, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.02  BV=5.24
    {491,8192,1112, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.12  BV=5.15
    {491,8192,1192, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.22  BV=5.05
    {491,8192,1272, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.31  BV=4.95
    {491,8192,1368, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.42  BV=4.85
    {491,8192,1464, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.52  BV=4.75
    {491,8192,1568, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.61  BV=4.65
    {491,8192,1680, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.71  BV=4.55
    {491,8192,1816, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.83  BV=4.44
    {491,8192,1944, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.92  BV=4.34
    {491,8192,2080, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.02  BV=4.24
    {491,8192,2232, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.12  BV=4.14
    {491,8192,2392, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.22  BV=4.04
    {491,8192,2560, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.32  BV=3.95
    {491,8192,2744, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.42  BV=3.84
    {491,8192,2944, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.52  BV=3.74
    {491,8192,3152, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.62  BV=3.64
    {491,8192,3376, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.72  BV=3.55
    {491,8192,3624, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.82  BV=3.44
    {491,8192,3880, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.92  BV=3.35
    {491,8192,4160, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.02  BV=3.24
    {491,8192,4456, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.12  BV=3.15
    {491,8192,4776, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.22  BV=3.05
    {491,8192,5120, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.32  BV=2.95
    {491,8192,5488, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.42  BV=2.84
    {491,8192,5880, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.52  BV=2.75
    {491,8192,6304, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.62  BV=2.64
    {491,8192,6752, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.72  BV=2.55
    {491,8192,7240, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.82  BV=2.45
    {491,8192,7752, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.92  BV=2.35
    {491,8192,8312, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.02  BV=2.25
    {491,8192,8904, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.12  BV=2.15
    {491,8192,9544, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.22  BV=2.05
    {491,8192,10232, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.32  BV=1.95
    {491,8192,10968, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.42  BV=1.85
    {491,8192,11752, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.52  BV=1.75
    {491,8192,12592, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.62  BV=1.65
    {491,8192,13496, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.72  BV=1.55
    {491,8192,14464, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.82  BV=1.45
    {491,8192,15504, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.92  BV=1.35
    {491,8192,16616, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=12.02  BV=1.25
    {533,8192,16384, 0, 0, 0},  //TV = 10.87(51 lines)  AV=2.28  SV=12.00  BV=1.15
    {574,8192,16320, 0, 0, 0},  //TV = 10.77(55 lines)  AV=2.28  SV=11.99  BV=1.05
    {616,8192,16328, 0, 0, 0},  //TV = 10.66(59 lines)  AV=2.28  SV=12.00  BV=0.94
    {658,8192,16384, 0, 0, 0},  //TV = 10.57(63 lines)  AV=2.28  SV=12.00  BV=0.84
    {710,8192,16288, 0, 0, 0},  //TV = 10.46(68 lines)  AV=2.28  SV=11.99  BV=0.74
    {762,8192,16272, 0, 0, 0},  //TV = 10.36(73 lines)  AV=2.28  SV=11.99  BV=0.64
    {814,8192,16344, 0, 0, 0},  //TV = 10.26(78 lines)  AV=2.28  SV=12.00  BV=0.54
    {867,8192,16384, 0, 0, 0},  //TV = 10.17(83 lines)  AV=2.28  SV=12.00  BV=0.45
    {929,8192,16448, 0, 0, 0},  //TV = 10.07(89 lines)  AV=2.28  SV=12.01  BV=0.34
    {1002,8192,16328, 0, 0, 0},  //TV = 9.96(96 lines)  AV=2.28  SV=12.00  BV=0.24
    {1065,8192,16408, 0, 0, 0},  //TV = 9.87(102 lines)  AV=2.28  SV=12.00  BV=0.15
    {1148,8192,16320, 0, 0, 0},  //TV = 9.77(110 lines)  AV=2.28  SV=11.99  BV=0.05
    {1232,8192,16368, 0, 0, 0},  //TV = 9.66(118 lines)  AV=2.28  SV=12.00  BV=-0.06
    {1315,8192,16352, 0, 0, 0},  //TV = 9.57(126 lines)  AV=2.28  SV=12.00  BV=-0.15
    {1409,8192,16416, 0, 0, 0},  //TV = 9.47(135 lines)  AV=2.28  SV=12.00  BV=-0.26
    {1513,8192,16336, 0, 0, 0},  //TV = 9.37(145 lines)  AV=2.28  SV=12.00  BV=-0.35
    {1618,8192,16424, 0, 0, 0},  //TV = 9.27(155 lines)  AV=2.28  SV=12.00  BV=-0.46
    {1733,8192,16368, 0, 0, 0},  //TV = 9.17(166 lines)  AV=2.28  SV=12.00  BV=-0.55
    {1868,8192,16344, 0, 0, 0},  //TV = 9.06(179 lines)  AV=2.28  SV=12.00  BV=-0.66
    {1993,8192,16384, 0, 0, 0},  //TV = 8.97(191 lines)  AV=2.28  SV=12.00  BV=-0.75
    {2129,8192,16392, 0, 0, 0},  //TV = 8.88(204 lines)  AV=2.28  SV=12.00  BV=-0.85
    {2296,8192,16368, 0, 0, 0},  //TV = 8.77(220 lines)  AV=2.28  SV=12.00  BV=-0.96
    {2452,8192,16384, 0, 0, 0},  //TV = 8.67(235 lines)  AV=2.28  SV=12.00  BV=-1.05
    {2630,8192,16352, 0, 0, 0},  //TV = 8.57(252 lines)  AV=2.28  SV=12.00  BV=-1.15
    {2828,8192,16384, 0, 0, 0},  //TV = 8.47(271 lines)  AV=2.28  SV=12.00  BV=-1.26
    {3026,8192,16376, 0, 0, 0},  //TV = 8.37(290 lines)  AV=2.28  SV=12.00  BV=-1.36
    {3235,8192,16392, 0, 0, 0},  //TV = 8.27(310 lines)  AV=2.28  SV=12.00  BV=-1.45
    {3465,8192,16376, 0, 0, 0},  //TV = 8.17(332 lines)  AV=2.28  SV=12.00  BV=-1.55
    {3736,8192,16368, 0, 0, 0},  //TV = 8.06(358 lines)  AV=2.28  SV=12.00  BV=-1.66
    {3997,8192,16376, 0, 0, 0},  //TV = 7.97(383 lines)  AV=2.28  SV=12.00  BV=-1.76
    {4278,8192,16376, 0, 0, 0},  //TV = 7.87(410 lines)  AV=2.28  SV=12.00  BV=-1.86
    {4581,8192,16368, 0, 0, 0},  //TV = 7.77(439 lines)  AV=2.28  SV=12.00  BV=-1.95
    {4904,8192,16368, 0, 0, 0},  //TV = 7.67(470 lines)  AV=2.28  SV=12.00  BV=-2.05
    {5249,8192,16384, 0, 0, 0},  //TV = 7.57(503 lines)  AV=2.28  SV=12.00  BV=-2.15
    {5624,8192,16368, 0, 0, 0},  //TV = 7.47(539 lines)  AV=2.28  SV=12.00  BV=-2.25
    {6063,8192,16376, 0, 0, 0},  //TV = 7.37(581 lines)  AV=2.28  SV=12.00  BV=-2.36
    {6490,8192,16384, 0, 0, 0},  //TV = 7.27(622 lines)  AV=2.28  SV=12.00  BV=-2.46
    {6950,8192,16384, 0, 0, 0},  //TV = 7.17(666 lines)  AV=2.28  SV=12.00  BV=-2.56
    {7450,8192,16376, 0, 0, 0},  //TV = 7.07(714 lines)  AV=2.28  SV=12.00  BV=-2.66
    {7983,8192,16368, 0, 0, 0},  //TV = 6.97(765 lines)  AV=2.28  SV=12.00  BV=-2.75
    {8337,8192,16792, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=12.04  BV=-2.85
    {8337,8192,17984, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=12.13  BV=-2.95
    {8337,8192,19264, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=12.23  BV=-3.05
    {8337,8192,20640, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=12.33  BV=-3.15
    {8337,8192,22112, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=12.43  BV=-3.25
    {8337,8192,23688, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=12.53  BV=-3.35
    {16664,8192,12696, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=11.63  BV=-3.45
    {16664,8192,13696, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=11.74  BV=-3.56
    {16664,8192,14680, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=11.84  BV=-3.66
    {16664,8192,15728, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=11.94  BV=-3.76
    {16664,8192,16848, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=12.04  BV=-3.86
    {16664,8192,18056, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=12.14  BV=-3.96
    {16664,8192,19344, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=12.24  BV=-4.06
    {25000,8192,13816, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=11.75  BV=-4.16
    {25000,8192,14800, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=11.85  BV=-4.26
    {25000,8192,15864, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=11.95  BV=-4.36
    {25000,8192,16992, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=12.05  BV=-4.46
    {25000,8192,18216, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=12.15  BV=-4.56
    {33337,8192,14632, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=11.84  BV=-4.66
    {33337,8192,15680, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=11.94  BV=-4.75
    {33337,8192,16808, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=12.04  BV=-4.86
    {33337,8192,18008, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=12.14  BV=-4.95
    {41663,8192,15440, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=11.91  BV=-5.05
    {41663,8192,16552, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=12.01  BV=-5.15
    {41663,8192,17736, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=12.11  BV=-5.25
    {50000,8192,15840, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=11.95  BV=-5.35
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene8PLineTable_50Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {491,1270,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.32  BV=7.95
    {491,1362,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.41  BV=7.86
    {491,1454,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.52  BV=7.75
    {491,1567,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.63  BV=7.64
    {491,1679,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.71  BV=7.55
    {491,1792,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.82  BV=7.45
    {491,1925,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=5.92  BV=7.35
    {491,2079,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.02  BV=7.25
    {491,2222,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.12  BV=7.15
    {491,2386,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.22  BV=7.05
    {491,2550,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.32  BV=6.95
    {491,2734,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.42  BV=6.85
    {491,2949,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.53  BV=6.74
    {491,3123,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.62  BV=6.65
    {491,3359,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.71  BV=6.55
    {491,3594,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.81  BV=6.46
    {491,3850,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=6.91  BV=6.36
    {491,4157,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.02  BV=6.25
    {491,4444,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.12  BV=6.15
    {491,4762,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.22  BV=6.05
    {491,5038,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.31  BV=5.96
    {491,5458,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.41  BV=5.85
    {491,5827,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.51  BV=5.76
    {491,6246,1032, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.62  BV=5.65
    {491,6717,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.71  BV=5.55
    {491,7086,1048, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.82  BV=5.44
    {491,7711,1024, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=7.91  BV=5.35
    {491,8192,1040, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.02  BV=5.24
    {491,8192,1112, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.12  BV=5.15
    {491,8192,1192, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.22  BV=5.05
    {491,8192,1272, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.31  BV=4.95
    {491,8192,1368, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.42  BV=4.85
    {491,8192,1464, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.52  BV=4.75
    {491,8192,1568, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.61  BV=4.65
    {491,8192,1680, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.71  BV=4.55
    {491,8192,1816, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.83  BV=4.44
    {491,8192,1944, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=8.92  BV=4.34
    {491,8192,2080, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.02  BV=4.24
    {491,8192,2232, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.12  BV=4.14
    {491,8192,2392, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.22  BV=4.04
    {491,8192,2560, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.32  BV=3.95
    {491,8192,2744, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.42  BV=3.84
    {491,8192,2944, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.52  BV=3.74
    {491,8192,3152, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.62  BV=3.64
    {491,8192,3376, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.72  BV=3.55
    {491,8192,3624, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.82  BV=3.44
    {491,8192,3880, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=9.92  BV=3.35
    {491,8192,4160, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.02  BV=3.24
    {491,8192,4456, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.12  BV=3.15
    {491,8192,4776, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.22  BV=3.05
    {491,8192,5120, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.32  BV=2.95
    {491,8192,5488, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.42  BV=2.84
    {491,8192,5880, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.52  BV=2.75
    {491,8192,6304, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.62  BV=2.64
    {491,8192,6752, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.72  BV=2.55
    {491,8192,7240, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.82  BV=2.45
    {491,8192,7752, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=10.92  BV=2.35
    {491,8192,8312, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.02  BV=2.25
    {491,8192,8904, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.12  BV=2.15
    {491,8192,9544, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.22  BV=2.05
    {491,8192,10232, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.32  BV=1.95
    {491,8192,10968, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.42  BV=1.85
    {491,8192,11752, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.52  BV=1.75
    {491,8192,12592, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.62  BV=1.65
    {491,8192,13496, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.72  BV=1.55
    {491,8192,14464, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.82  BV=1.45
    {491,8192,15504, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=11.92  BV=1.35
    {491,8192,16616, 0, 0, 0},  //TV = 10.99(47 lines)  AV=2.28  SV=12.02  BV=1.25
    {533,8192,16384, 0, 0, 0},  //TV = 10.87(51 lines)  AV=2.28  SV=12.00  BV=1.15
    {574,8192,16320, 0, 0, 0},  //TV = 10.77(55 lines)  AV=2.28  SV=11.99  BV=1.05
    {616,8192,16328, 0, 0, 0},  //TV = 10.66(59 lines)  AV=2.28  SV=12.00  BV=0.94
    {658,8192,16384, 0, 0, 0},  //TV = 10.57(63 lines)  AV=2.28  SV=12.00  BV=0.84
    {710,8192,16288, 0, 0, 0},  //TV = 10.46(68 lines)  AV=2.28  SV=11.99  BV=0.74
    {762,8192,16272, 0, 0, 0},  //TV = 10.36(73 lines)  AV=2.28  SV=11.99  BV=0.64
    {814,8192,16344, 0, 0, 0},  //TV = 10.26(78 lines)  AV=2.28  SV=12.00  BV=0.54
    {867,8192,16384, 0, 0, 0},  //TV = 10.17(83 lines)  AV=2.28  SV=12.00  BV=0.45
    {929,8192,16448, 0, 0, 0},  //TV = 10.07(89 lines)  AV=2.28  SV=12.01  BV=0.34
    {1002,8192,16328, 0, 0, 0},  //TV = 9.96(96 lines)  AV=2.28  SV=12.00  BV=0.24
    {1065,8192,16408, 0, 0, 0},  //TV = 9.87(102 lines)  AV=2.28  SV=12.00  BV=0.15
    {1148,8192,16320, 0, 0, 0},  //TV = 9.77(110 lines)  AV=2.28  SV=11.99  BV=0.05
    {1232,8192,16368, 0, 0, 0},  //TV = 9.66(118 lines)  AV=2.28  SV=12.00  BV=-0.06
    {1315,8192,16352, 0, 0, 0},  //TV = 9.57(126 lines)  AV=2.28  SV=12.00  BV=-0.15
    {1409,8192,16416, 0, 0, 0},  //TV = 9.47(135 lines)  AV=2.28  SV=12.00  BV=-0.26
    {1513,8192,16336, 0, 0, 0},  //TV = 9.37(145 lines)  AV=2.28  SV=12.00  BV=-0.35
    {1618,8192,16424, 0, 0, 0},  //TV = 9.27(155 lines)  AV=2.28  SV=12.00  BV=-0.46
    {1733,8192,16368, 0, 0, 0},  //TV = 9.17(166 lines)  AV=2.28  SV=12.00  BV=-0.55
    {1868,8192,16344, 0, 0, 0},  //TV = 9.06(179 lines)  AV=2.28  SV=12.00  BV=-0.66
    {1993,8192,16384, 0, 0, 0},  //TV = 8.97(191 lines)  AV=2.28  SV=12.00  BV=-0.75
    {2129,8192,16392, 0, 0, 0},  //TV = 8.88(204 lines)  AV=2.28  SV=12.00  BV=-0.85
    {2296,8192,16368, 0, 0, 0},  //TV = 8.77(220 lines)  AV=2.28  SV=12.00  BV=-0.96
    {2452,8192,16384, 0, 0, 0},  //TV = 8.67(235 lines)  AV=2.28  SV=12.00  BV=-1.05
    {2630,8192,16352, 0, 0, 0},  //TV = 8.57(252 lines)  AV=2.28  SV=12.00  BV=-1.15
    {2828,8192,16384, 0, 0, 0},  //TV = 8.47(271 lines)  AV=2.28  SV=12.00  BV=-1.26
    {3026,8192,16376, 0, 0, 0},  //TV = 8.37(290 lines)  AV=2.28  SV=12.00  BV=-1.36
    {3235,8192,16392, 0, 0, 0},  //TV = 8.27(310 lines)  AV=2.28  SV=12.00  BV=-1.45
    {3465,8192,16376, 0, 0, 0},  //TV = 8.17(332 lines)  AV=2.28  SV=12.00  BV=-1.55
    {3736,8192,16368, 0, 0, 0},  //TV = 8.06(358 lines)  AV=2.28  SV=12.00  BV=-1.66
    {3997,8192,16376, 0, 0, 0},  //TV = 7.97(383 lines)  AV=2.28  SV=12.00  BV=-1.76
    {4278,8192,16376, 0, 0, 0},  //TV = 7.87(410 lines)  AV=2.28  SV=12.00  BV=-1.86
    {4581,8192,16368, 0, 0, 0},  //TV = 7.77(439 lines)  AV=2.28  SV=12.00  BV=-1.95
    {4904,8192,16368, 0, 0, 0},  //TV = 7.67(470 lines)  AV=2.28  SV=12.00  BV=-2.05
    {5249,8192,16384, 0, 0, 0},  //TV = 7.57(503 lines)  AV=2.28  SV=12.00  BV=-2.15
    {5624,8192,16368, 0, 0, 0},  //TV = 7.47(539 lines)  AV=2.28  SV=12.00  BV=-2.25
    {6063,8192,16376, 0, 0, 0},  //TV = 7.37(581 lines)  AV=2.28  SV=12.00  BV=-2.36
    {6490,8192,16384, 0, 0, 0},  //TV = 7.27(622 lines)  AV=2.28  SV=12.00  BV=-2.46
    {6950,8192,16384, 0, 0, 0},  //TV = 7.17(666 lines)  AV=2.28  SV=12.00  BV=-2.56
    {7450,8192,16376, 0, 0, 0},  //TV = 7.07(714 lines)  AV=2.28  SV=12.00  BV=-2.66
    {7983,8192,16368, 0, 0, 0},  //TV = 6.97(765 lines)  AV=2.28  SV=12.00  BV=-2.75
    {8546,8192,16376, 0, 0, 0},  //TV = 6.87(819 lines)  AV=2.28  SV=12.00  BV=-2.85
    {9151,8192,16384, 0, 0, 0},  //TV = 6.77(877 lines)  AV=2.28  SV=12.00  BV=-2.95
    {9808,8192,16376, 0, 0, 0},  //TV = 6.67(940 lines)  AV=2.28  SV=12.00  BV=-3.05
    {9996,8192,17216, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=12.07  BV=-3.15
    {9996,8192,18440, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=12.17  BV=-3.25
    {9996,8192,19760, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=12.27  BV=-3.35
    {9996,8192,21168, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=12.37  BV=-3.45
    {9996,8192,22680, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=12.47  BV=-3.55
    {9996,8192,24472, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=12.58  BV=-3.66
    {20002,8192,13096, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=11.68  BV=-3.76
    {20002,8192,14040, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=11.78  BV=-3.86
    {20002,8192,15040, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=11.88  BV=-3.96
    {20002,8192,16112, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=11.98  BV=-4.06
    {20002,8192,17264, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=12.08  BV=-4.16
    {20002,8192,18504, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=12.18  BV=-4.26
    {20002,8192,19824, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=12.27  BV=-4.36
    {29998,8192,14160, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=11.79  BV=-4.46
    {29998,8192,15176, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=11.89  BV=-4.56
    {29998,8192,16264, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=11.99  BV=-4.66
    {29998,8192,17432, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=12.09  BV=-4.76
    {29998,8192,18680, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=12.19  BV=-4.86
    {40004,8192,15008, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=11.87  BV=-4.95
    {40004,8192,16080, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=11.97  BV=-5.05
    {40004,8192,17232, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=12.07  BV=-5.15
    {50000,8192,14776, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=11.85  BV=-5.25
    {50000,8192,15840, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=11.95  BV=-5.35
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable8 =
{
    AETABLE_SCENE_INDEX8, //eAETableID
    158, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -54, //i4MinBV
    90, //i4EffectiveMaxBV
    0, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sAEScene8PLineTable_60Hz,
    sAEScene8PLineTable_50Hz,
    NULL,
};
static strEvPline sAEScene9PLineTable_60Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8338,1198,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.24  BV=3.94
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.54  BV=3.64
    {8338,1587,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.63  BV=3.55
    {8338,1700,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.73  BV=3.45
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1956,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.93  BV=3.25
    {8338,2079,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.03  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {16664,1198,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.24  BV=2.94
    {16664,1280,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.33  BV=2.85
    {16664,1382,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.43  BV=2.75
    {16664,1495,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.55  BV=2.64
    {16664,1587,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.63  BV=2.55
    {16664,1700,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.73  BV=2.45
    {16664,1823,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.83  BV=2.35
    {16664,1956,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.93  BV=2.25
    {16664,2099,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.04  BV=2.15
    {16664,2243,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.13  BV=2.05
    {16664,2406,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.23  BV=1.95
    {25000,1720,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.75  BV=1.85
    {25000,1843,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.85  BV=1.75
    {25000,1966,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.95  BV=1.64
    {25000,2109,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.04  BV=1.55
    {25000,2263,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.14  BV=1.45
    {25000,2427,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.24  BV=1.35
    {25000,2591,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.34  BV=1.26
    {25000,2785,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.44  BV=1.15
    {25000,2980,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.55  BV=1.04
    {25000,3195,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.64  BV=0.96
    {25000,3400,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.74  BV=0.85
    {25000,3645,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.84  BV=0.75
    {25000,3912,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=6.94  BV=0.65
    {25000,4229,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.05  BV=0.55
    {25000,4516,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.15  BV=0.44
    {25000,4854,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.24  BV=0.35
    {25000,5140,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.34  BV=0.26
    {25000,5581,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.45  BV=0.15
    {25000,5960,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.55  BV=0.04
    {25000,6390,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.65  BV=-0.06
    {25000,6902,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.75  BV=-0.16
    {25000,7281,1040, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.85  BV=-0.26
    {25000,7711,1048, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.95  BV=-0.35
    {25000,8192,1056, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.04  BV=-0.45
    {25000,8192,1136, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.15  BV=-0.55
    {25000,8192,1216, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.25  BV=-0.65
    {25000,8192,1304, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.35  BV=-0.75
    {25000,8192,1392, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.44  BV=-0.85
    {25000,8192,1496, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.55  BV=-0.95
    {25000,8192,1600, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.64  BV=-1.05
    {25000,8192,1728, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.75  BV=-1.16
    {25000,8192,1848, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.85  BV=-1.25
    {25000,8192,1984, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=8.95  BV=-1.36
    {25000,8192,2128, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.06  BV=-1.46
    {25000,8192,2280, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.15  BV=-1.56
    {25000,8192,2440, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.25  BV=-1.66
    {25000,8192,2616, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.35  BV=-1.76
    {25000,8192,2800, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.45  BV=-1.85
    {25000,8192,3000, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.55  BV=-1.95
    {25000,8192,3216, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.65  BV=-2.05
    {25000,8192,3448, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.75  BV=-2.15
    {25000,8192,3696, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.85  BV=-2.25
    {25000,8192,3960, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=9.95  BV=-2.35
    {25000,8192,4240, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=10.05  BV=-2.45
    {25000,8192,4544, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=10.15  BV=-2.55
    {25000,8192,4872, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=10.25  BV=-2.65
    {25000,8192,5224, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=10.35  BV=-2.75
    {25000,8192,5600, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=10.45  BV=-2.85
    {25000,8192,5760, 0, 0, 0},  /* TV = 5.32(2396 lines)  AV=2.28  SV=10.49  BV=-2.89 */
    {25000,8192,5760, 0, 0, 0},  /* TV = 5.32(2396 lines)  AV=2.28  SV=10.49  BV=-2.89 */
    {25000,8192,5760, 0, 0, 0},  /* TV = 5.32(2396 lines)  AV=2.28  SV=10.49  BV=-2.89 */
    {25000,8192,5760, 0, 0, 0},  /* TV = 5.32(2396 lines)  AV=2.28  SV=10.49  BV=-2.89 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene9PLineTable_50Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8400,1198,1024, 0, 0, 0},  //TV = 6.90(805 lines)  AV=2.28  SV=5.23  BV=3.94
    {8995,1198,1024, 0, 0, 0},  //TV = 6.80(862 lines)  AV=2.28  SV=5.23  BV=3.85
    {9631,1198,1024, 0, 0, 0},  //TV = 6.70(923 lines)  AV=2.28  SV=5.23  BV=3.75
    {9996,1239,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.27  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1505,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.57  BV=3.35
    {9996,1618,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.67  BV=3.25
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1864,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.86  BV=3.06
    {9996,1997,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.96  BV=2.96
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {9996,2284,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.17  BV=2.75
    {9996,2447,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.27  BV=2.65
    {9996,2652,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.37  BV=2.55
    {9996,2816,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.47  BV=2.45
    {9996,3011,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.57  BV=2.35
    {9996,3236,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.67  BV=2.25
    {20002,1751,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.77  BV=2.14
    {20002,1874,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.87  BV=2.05
    {20002,1997,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.97  BV=1.94
    {20002,2150,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.07  BV=1.85
    {20002,2304,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.17  BV=1.75
    {20002,2478,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.27  BV=1.64
    {29998,1761,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.78  BV=1.55
    {29998,1884,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.89  BV=1.44
    {29998,2028,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.99  BV=1.35
    {29998,2150,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.08  BV=1.25
    {29998,2324,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.18  BV=1.15
    {29998,2499,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.29  BV=1.05
    {29998,2673,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.38  BV=0.95
    {29998,2847,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.49  BV=0.85
    {29998,3052,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.58  BV=0.76
    {29998,3277,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.69  BV=0.64
    {29998,3543,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.79  BV=0.54
    {29998,3748,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.88  BV=0.45
    {29998,4035,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.98  BV=0.36
    {29998,4301,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.08  BV=0.25
    {29998,4598,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.18  BV=0.16
    {29998,4946,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.28  BV=0.05
    {29998,5345,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29998,5704,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.49  BV=-0.15
    {29998,6093,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29998,6554,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.68  BV=-0.34
    {29998,6902,1048, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.79  BV=-0.45
    {29998,7485,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29998,7946,1040, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.98  BV=-0.64
    {29998,8192,1080, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.08  BV=-0.74
    {29998,8192,1160, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29998,8192,1240, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.28  BV=-0.94
    {29998,8192,1336, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.38  BV=-1.05
    {29998,8192,1440, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.49  BV=-1.16
    {29998,8192,1544, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.59  BV=-1.26
    {29998,8192,1648, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.69  BV=-1.35
    {29998,8192,1768, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.79  BV=-1.45
    {29998,8192,1896, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.89  BV=-1.55
    {29998,8192,2032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.99  BV=-1.65
    {29998,8192,2176, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.09  BV=-1.75
    {29998,8192,2336, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.19  BV=-1.86
    {29998,8192,2504, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.29  BV=-1.96
    {29998,8192,2680, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.39  BV=-2.05
    {29998,8192,2872, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.49  BV=-2.15
    {29998,8192,3080, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.59  BV=-2.25
    {29998,8192,3296, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.69  BV=-2.35
    {29998,8192,3536, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.79  BV=-2.45
    {29998,8192,3792, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.89  BV=-2.55
    {29998,8192,4064, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.99  BV=-2.65
    {29998,8192,4352, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=10.09  BV=-2.75
    {29998,8192,4664, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=10.19  BV=-2.85
    {29998,8192,5000, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=10.29  BV=-2.95
    {29998,8192,5360, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=10.39  BV=-3.05
    {29998,8192,5744, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=10.49  BV=-3.15
    {29998,8192,5760, 0, 0, 0},  /* TV = 5.06(2875 lines)  AV=2.28  SV=10.49  BV=-3.16 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable9 =
{
    AETABLE_SCENE_INDEX9, //eAETableID
    137, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -32, //i4MinBV
    90, //i4EffectiveMaxBV
    0, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sAEScene9PLineTable_60Hz,
    sAEScene9PLineTable_50Hz,
    NULL,
};
static strEvPline sAEScene14PLineTable_60Hz =
{
{
    {94,1198,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.24  BV=10.41
    {105,1147,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.16  BV=10.33
    {105,1219,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.25  BV=10.24
    {115,1219,1024, 0, 0, 0},  /* TV = 13.09(11 lines)  AV=2.28  SV=5.25  BV=10.11 */
    {126,1188,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.21  BV=10.01
    {136,1167,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.19  BV=9.93
    {147,1147,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.16  BV=9.84
    {157,1167,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.19  BV=9.72
    {167,1167,1024, 0, 0, 0},  //TV = 12.55(16 lines)  AV=2.28  SV=5.19  BV=9.63
    {178,1188,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.21  BV=9.52
    {199,1147,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.16  BV=9.41
    {209,1144,1024, 0, 0, 0},  /* TV = 12.22(20 lines)  AV=2.28  SV=5.16  BV=9.34 */
    {220,1147,1032, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.17  BV=9.25
    {230,1188,1024, 0, 0, 0},  //TV = 12.09(22 lines)  AV=2.28  SV=5.21  BV=9.15
    {251,1167,1024, 0, 0, 0},  //TV = 11.96(24 lines)  AV=2.28  SV=5.19  BV=9.05
    {272,1147,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.16  BV=8.96
    {293,1147,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.16  BV=8.85
    {314,1147,1024, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.16  BV=8.75
    {334,1147,1032, 0, 0, 0},  //TV = 11.55(32 lines)  AV=2.28  SV=5.17  BV=8.65
    {355,1167,1024, 0, 0, 0},  //TV = 11.46(34 lines)  AV=2.28  SV=5.19  BV=8.55
    {387,1147,1024, 0, 0, 0},  //TV = 11.34(37 lines)  AV=2.28  SV=5.16  BV=8.45
    {407,1167,1024, 0, 0, 0},  //TV = 11.26(39 lines)  AV=2.28  SV=5.19  BV=8.35
    {439,1147,1032, 0, 0, 0},  //TV = 11.15(42 lines)  AV=2.28  SV=5.17  BV=8.25
    {480,1144,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.16  BV=8.14
    {501,1167,1024, 0, 0, 0},  //TV = 10.96(48 lines)  AV=2.28  SV=5.19  BV=8.05
    {543,1147,1032, 0, 0, 0},  //TV = 10.85(52 lines)  AV=2.28  SV=5.17  BV=7.95
    {585,1147,1024, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=5.16  BV=7.85
    {627,1147,1024, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=5.16  BV=7.75
    {668,1147,1032, 0, 0, 0},  //TV = 10.55(64 lines)  AV=2.28  SV=5.17  BV=7.65
    {720,1147,1024, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=5.16  BV=7.55
    {773,1147,1024, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=5.16  BV=7.45
    {825,1147,1024, 0, 0, 0},  //TV = 10.24(79 lines)  AV=2.28  SV=5.16  BV=7.35
    {887,1147,1024, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=5.16  BV=7.25
    {950,1147,1024, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=5.16  BV=7.15
    {1023,1144,1024, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=5.16  BV=7.05
    {1096,1147,1024, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=5.16  BV=6.94
    {1180,1144,1024, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=5.16  BV=6.84
    {1253,1147,1024, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=5.16  BV=6.75
    {1346,1147,1024, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=5.16  BV=6.65
    {1451,1144,1024, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=5.16  BV=6.54
    {1545,1147,1024, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=5.16  BV=6.45
    {1660,1144,1024, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=5.16  BV=6.35
    {1785,1144,1024, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=5.16  BV=6.24
    {1910,1144,1024, 0, 0, 0},  //TV = 9.03(183 lines)  AV=2.28  SV=5.16  BV=6.15
    {2056,1144,1024, 0, 0, 0},  //TV = 8.93(197 lines)  AV=2.28  SV=5.16  BV=6.04
    {2192,1144,1024, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=5.16  BV=5.95
    {2348,1144,1024, 0, 0, 0},  //TV = 8.73(225 lines)  AV=2.28  SV=5.16  BV=5.85
    {2526,1144,1024, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=5.16  BV=5.74
    {2703,1144,1024, 0, 0, 0},  //TV = 8.53(259 lines)  AV=2.28  SV=5.16  BV=5.65
    {2891,1144,1024, 0, 0, 0},  //TV = 8.43(277 lines)  AV=2.28  SV=5.16  BV=5.55
    {3099,1144,1024, 0, 0, 0},  //TV = 8.33(297 lines)  AV=2.28  SV=5.16  BV=5.45
    {3339,1144,1024, 0, 0, 0},  //TV = 8.23(320 lines)  AV=2.28  SV=5.16  BV=5.34
    {3569,1144,1024, 0, 0, 0},  //TV = 8.13(342 lines)  AV=2.28  SV=5.16  BV=5.25
    {3819,1144,1024, 0, 0, 0},  //TV = 8.03(366 lines)  AV=2.28  SV=5.16  BV=5.15
    {4091,1144,1024, 0, 0, 0},  //TV = 7.93(392 lines)  AV=2.28  SV=5.16  BV=5.05
    {4383,1144,1024, 0, 0, 0},  //TV = 7.83(420 lines)  AV=2.28  SV=5.16  BV=4.95
    {4717,1144,1024, 0, 0, 0},  //TV = 7.73(452 lines)  AV=2.28  SV=5.16  BV=4.84
    {5051,1144,1024, 0, 0, 0},  //TV = 7.63(484 lines)  AV=2.28  SV=5.16  BV=4.74
    {5416,1144,1024, 0, 0, 0},  //TV = 7.53(519 lines)  AV=2.28  SV=5.16  BV=4.64
    {5791,1144,1024, 0, 0, 0},  //TV = 7.43(555 lines)  AV=2.28  SV=5.16  BV=4.55
    {6209,1144,1024, 0, 0, 0},  //TV = 7.33(595 lines)  AV=2.28  SV=5.16  BV=4.45
    {6647,1144,1024, 0, 0, 0},  //TV = 7.23(637 lines)  AV=2.28  SV=5.16  BV=4.35
    {7116,1144,1024, 0, 0, 0},  //TV = 7.13(682 lines)  AV=2.28  SV=5.16  BV=4.25
    {7628,1144,1024, 0, 0, 0},  //TV = 7.03(731 lines)  AV=2.28  SV=5.16  BV=4.15
    {8222,1144,1024, 0, 0, 0},  //TV = 6.93(788 lines)  AV=2.28  SV=5.16  BV=4.04
    {8338,1198,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.24  BV=3.94
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.53  BV=3.65
    {8338,1587,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.63  BV=3.55
    {8338,1700,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.73  BV=3.45
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1956,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.93  BV=3.25
    {8338,2079,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.03  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {16664,1198,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.24  BV=2.94
    {16664,1280,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.33  BV=2.85
    {16664,1382,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.43  BV=2.75
    {16664,1475,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.54  BV=2.64
    {16664,1587,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.63  BV=2.55
    {16664,1710,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.74  BV=2.44
    {16664,1823,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.83  BV=2.35
    {16664,1966,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.94  BV=2.24
    {16664,2099,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.04  BV=2.15
    {16664,2243,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.13  BV=2.05
    {16664,2406,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.23  BV=1.95
    {16664,2591,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.34  BV=1.84
    {16664,2755,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.43  BV=1.75
    {16664,2949,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.53  BV=1.66
    {16664,3154,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.62  BV=1.56
    {16664,3400,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.73  BV=1.45
    {16664,3645,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.83  BV=1.35
    {16664,3850,1040, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=6.93  BV=1.25
    {16664,4157,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.03  BV=1.15
    {16664,4444,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.13  BV=1.05
    {16664,4762,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.23  BV=0.95
    {16664,5140,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.33  BV=0.85
    {16664,5458,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.43  BV=0.76
    {16664,5827,1040, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.53  BV=0.65
    {16664,6246,1040, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=7.63  BV=0.55
    {25000,4516,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.14  BV=0.46
    {25000,4854,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.24  BV=0.35
    {25000,5140,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.34  BV=0.26
    {25000,5581,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=7.45  BV=0.15
    {33337,4444,1032, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.13  BV=0.05
    {33337,4762,1032, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33337,5140,1024, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.33  BV=-0.15
    {33337,5458,1040, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.44  BV=-0.25
    {33337,5827,1040, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33337,6246,1040, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33337,6717,1040, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33337,7281,1024, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33337,7711,1040, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33337,8192,1048, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33337,8192,1120, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33337,8192,1200, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.23  BV=-1.05
    {33337,8192,1288, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.33  BV=-1.15
    {33337,8192,1376, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.43  BV=-1.24
    {33337,8192,1488, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.54  BV=-1.36
    {33337,8192,1592, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.64  BV=-1.45
    {33337,8192,1704, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.73  BV=-1.55
    {33337,8192,1832, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.84  BV=-1.66
    {33337,8192,1952, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.93  BV=-1.75
    {33337,8192,2088, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=9.03  BV=-1.85
    {33337,8192,2240, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=9.13  BV=-1.95
    {41663,8192,1936, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.92  BV=-2.06
    {41663,8192,2056, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.01  BV=-2.15
    {41663,8192,2208, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.11  BV=-2.25
    {41663,8192,2384, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.22  BV=-2.36
    {41663,8192,2552, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.32  BV=-2.46
    {41663,8192,2720, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.41  BV=-2.55
    {41663,8192,2912, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.51  BV=-2.65
    {50000,8192,2600, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.34  BV=-2.75
    {50000,8192,2792, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.45  BV=-2.85
    {50000,8192,3008, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.55  BV=-2.96
    {58327,8192,2768, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=9.43  BV=-3.06
    {58327,8192,2960, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=9.53  BV=-3.16
    {58327,8192,3168, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=9.63  BV=-3.25
    {58327,8192,3392, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=9.73  BV=-3.35
    {58327,8192,3640, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=9.83  BV=-3.46
    {58327,8192,3896, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=9.93  BV=-3.55
    {58327,8192,4096, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=10.00  BV=-3.63
    {58327,8192,4096, 0, 0, 0},  /* TV = 4.10(5590 lines)  AV=2.28  SV=10.00  BV=-3.63 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene14PLineTable_50Hz =
{
{
    {94,1198,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.24  BV=10.41
    {105,1147,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.16  BV=10.33
    {105,1219,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.25  BV=10.24
    {115,1219,1024, 0, 0, 0},  /* TV = 13.09(11 lines)  AV=2.28  SV=5.25  BV=10.11 */
    {126,1188,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.21  BV=10.01
    {136,1167,1024, 0, 0, 0},  //TV = 12.84(13 lines)  AV=2.28  SV=5.19  BV=9.93
    {147,1147,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.16  BV=9.84
    {157,1167,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.19  BV=9.72
    {167,1167,1024, 0, 0, 0},  //TV = 12.55(16 lines)  AV=2.28  SV=5.19  BV=9.63
    {178,1188,1024, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.21  BV=9.52
    {199,1147,1024, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.16  BV=9.41
    {209,1144,1024, 0, 0, 0},  /* TV = 12.22(20 lines)  AV=2.28  SV=5.16  BV=9.34 */
    {220,1147,1032, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.17  BV=9.25
    {230,1188,1024, 0, 0, 0},  //TV = 12.09(22 lines)  AV=2.28  SV=5.21  BV=9.15
    {251,1167,1024, 0, 0, 0},  //TV = 11.96(24 lines)  AV=2.28  SV=5.19  BV=9.05
    {272,1147,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.16  BV=8.96
    {293,1147,1024, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.16  BV=8.85
    {314,1147,1024, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.16  BV=8.75
    {334,1147,1032, 0, 0, 0},  //TV = 11.55(32 lines)  AV=2.28  SV=5.17  BV=8.65
    {355,1167,1024, 0, 0, 0},  //TV = 11.46(34 lines)  AV=2.28  SV=5.19  BV=8.55
    {387,1147,1024, 0, 0, 0},  //TV = 11.34(37 lines)  AV=2.28  SV=5.16  BV=8.45
    {407,1167,1024, 0, 0, 0},  //TV = 11.26(39 lines)  AV=2.28  SV=5.19  BV=8.35
    {439,1147,1032, 0, 0, 0},  //TV = 11.15(42 lines)  AV=2.28  SV=5.17  BV=8.25
    {480,1144,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.16  BV=8.14
    {501,1167,1024, 0, 0, 0},  //TV = 10.96(48 lines)  AV=2.28  SV=5.19  BV=8.05
    {543,1147,1032, 0, 0, 0},  //TV = 10.85(52 lines)  AV=2.28  SV=5.17  BV=7.95
    {585,1147,1024, 0, 0, 0},  //TV = 10.74(56 lines)  AV=2.28  SV=5.16  BV=7.85
    {627,1147,1024, 0, 0, 0},  //TV = 10.64(60 lines)  AV=2.28  SV=5.16  BV=7.75
    {668,1147,1032, 0, 0, 0},  //TV = 10.55(64 lines)  AV=2.28  SV=5.17  BV=7.65
    {720,1147,1024, 0, 0, 0},  //TV = 10.44(69 lines)  AV=2.28  SV=5.16  BV=7.55
    {773,1147,1024, 0, 0, 0},  //TV = 10.34(74 lines)  AV=2.28  SV=5.16  BV=7.45
    {825,1147,1024, 0, 0, 0},  //TV = 10.24(79 lines)  AV=2.28  SV=5.16  BV=7.35
    {887,1147,1024, 0, 0, 0},  //TV = 10.14(85 lines)  AV=2.28  SV=5.16  BV=7.25
    {950,1147,1024, 0, 0, 0},  //TV = 10.04(91 lines)  AV=2.28  SV=5.16  BV=7.15
    {1023,1144,1024, 0, 0, 0},  //TV = 9.93(98 lines)  AV=2.28  SV=5.16  BV=7.05
    {1096,1147,1024, 0, 0, 0},  //TV = 9.83(105 lines)  AV=2.28  SV=5.16  BV=6.94
    {1180,1144,1024, 0, 0, 0},  //TV = 9.73(113 lines)  AV=2.28  SV=5.16  BV=6.84
    {1253,1147,1024, 0, 0, 0},  //TV = 9.64(120 lines)  AV=2.28  SV=5.16  BV=6.75
    {1346,1147,1024, 0, 0, 0},  //TV = 9.54(129 lines)  AV=2.28  SV=5.16  BV=6.65
    {1451,1144,1024, 0, 0, 0},  //TV = 9.43(139 lines)  AV=2.28  SV=5.16  BV=6.54
    {1545,1147,1024, 0, 0, 0},  //TV = 9.34(148 lines)  AV=2.28  SV=5.16  BV=6.45
    {1660,1144,1024, 0, 0, 0},  //TV = 9.23(159 lines)  AV=2.28  SV=5.16  BV=6.35
    {1785,1144,1024, 0, 0, 0},  //TV = 9.13(171 lines)  AV=2.28  SV=5.16  BV=6.24
    {1910,1144,1024, 0, 0, 0},  //TV = 9.03(183 lines)  AV=2.28  SV=5.16  BV=6.15
    {2056,1144,1024, 0, 0, 0},  //TV = 8.93(197 lines)  AV=2.28  SV=5.16  BV=6.04
    {2192,1144,1024, 0, 0, 0},  //TV = 8.83(210 lines)  AV=2.28  SV=5.16  BV=5.95
    {2348,1144,1024, 0, 0, 0},  //TV = 8.73(225 lines)  AV=2.28  SV=5.16  BV=5.85
    {2526,1144,1024, 0, 0, 0},  //TV = 8.63(242 lines)  AV=2.28  SV=5.16  BV=5.74
    {2703,1144,1024, 0, 0, 0},  //TV = 8.53(259 lines)  AV=2.28  SV=5.16  BV=5.65
    {2891,1144,1024, 0, 0, 0},  //TV = 8.43(277 lines)  AV=2.28  SV=5.16  BV=5.55
    {3099,1144,1024, 0, 0, 0},  //TV = 8.33(297 lines)  AV=2.28  SV=5.16  BV=5.45
    {3339,1144,1024, 0, 0, 0},  //TV = 8.23(320 lines)  AV=2.28  SV=5.16  BV=5.34
    {3569,1144,1024, 0, 0, 0},  //TV = 8.13(342 lines)  AV=2.28  SV=5.16  BV=5.25
    {3819,1144,1024, 0, 0, 0},  //TV = 8.03(366 lines)  AV=2.28  SV=5.16  BV=5.15
    {4091,1144,1024, 0, 0, 0},  //TV = 7.93(392 lines)  AV=2.28  SV=5.16  BV=5.05
    {4383,1144,1024, 0, 0, 0},  //TV = 7.83(420 lines)  AV=2.28  SV=5.16  BV=4.95
    {4717,1144,1024, 0, 0, 0},  //TV = 7.73(452 lines)  AV=2.28  SV=5.16  BV=4.84
    {5051,1144,1024, 0, 0, 0},  //TV = 7.63(484 lines)  AV=2.28  SV=5.16  BV=4.74
    {5416,1144,1024, 0, 0, 0},  //TV = 7.53(519 lines)  AV=2.28  SV=5.16  BV=4.64
    {5791,1144,1024, 0, 0, 0},  //TV = 7.43(555 lines)  AV=2.28  SV=5.16  BV=4.55
    {6209,1144,1024, 0, 0, 0},  //TV = 7.33(595 lines)  AV=2.28  SV=5.16  BV=4.45
    {6647,1144,1024, 0, 0, 0},  //TV = 7.23(637 lines)  AV=2.28  SV=5.16  BV=4.35
    {7116,1144,1024, 0, 0, 0},  //TV = 7.13(682 lines)  AV=2.28  SV=5.16  BV=4.25
    {7628,1144,1024, 0, 0, 0},  //TV = 7.03(731 lines)  AV=2.28  SV=5.16  BV=4.15
    {8222,1144,1024, 0, 0, 0},  //TV = 6.93(788 lines)  AV=2.28  SV=5.16  BV=4.04
    {8807,1144,1024, 0, 0, 0},  //TV = 6.83(844 lines)  AV=2.28  SV=5.16  BV=3.94
    {9443,1144,1024, 0, 0, 0},  //TV = 6.73(905 lines)  AV=2.28  SV=5.16  BV=3.84
    {9996,1147,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.16  BV=3.76
    {9996,1239,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.27  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1526,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.58  BV=3.34
    {9996,1618,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.67  BV=3.25
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1864,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.86  BV=3.06
    {9996,1997,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.97  BV=2.94
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {9996,2304,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.17  BV=2.75
    {9996,2478,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.27  BV=2.64
    {9996,2621,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.37  BV=2.55
    {9996,2847,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.48  BV=2.44
    {9996,3011,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.57  BV=2.35
    {9996,3277,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.68  BV=2.24
    {20002,1751,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.77  BV=2.14
    {20002,1874,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.87  BV=2.05
    {20002,1997,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.97  BV=1.94
    {20002,2150,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.07  BV=1.85
    {20002,2304,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.17  BV=1.75
    {20002,2447,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.27  BV=1.65
    {20002,2652,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.37  BV=1.55
    {20002,2847,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.48  BV=1.44
    {20002,3011,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.57  BV=1.35
    {20002,3236,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.67  BV=1.25
    {20002,3492,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.77  BV=1.15
    {20002,3748,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.87  BV=1.05
    {20002,3973,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=6.97  BV=0.95
    {20002,4301,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.07  BV=0.85
    {20002,4598,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.17  BV=0.75
    {20002,4854,1040, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.27  BV=0.65
    {20002,5243,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.37  BV=0.55
    {20002,5581,1040, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.47  BV=0.45
    {20002,5960,1040, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=7.56  BV=0.36
    {29998,4301,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.08  BV=0.25
    {29998,4598,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.18  BV=0.16
    {29998,4946,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.28  BV=0.05
    {29998,5345,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29998,5704,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.49  BV=-0.15
    {29998,6093,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29998,6554,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.69  BV=-0.36
    {29998,7086,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.79  BV=-0.46
    {29998,7485,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29998,7946,1040, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.98  BV=-0.64
    {29998,8192,1088, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.09  BV=-0.75
    {29998,8192,1160, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29998,8192,1248, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.29  BV=-0.95
    {29998,8192,1336, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.38  BV=-1.05
    {29998,8192,1432, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.48  BV=-1.15
    {29998,8192,1536, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.58  BV=-1.25
    {29998,8192,1656, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.69  BV=-1.36
    {29998,8192,1768, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.79  BV=-1.45
    {29998,8192,1896, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.89  BV=-1.55
    {29998,8192,2032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.99  BV=-1.65
    {29998,8192,2168, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.08  BV=-1.75
    {29998,8192,2320, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=9.18  BV=-1.85
    {40004,8192,1864, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.86  BV=-1.95
    {40004,8192,2016, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.98  BV=-2.06
    {40004,8192,2144, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.07  BV=-2.15
    {40004,8192,2296, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.16  BV=-2.25
    {40004,8192,2480, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.28  BV=-2.36
    {40004,8192,2656, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.38  BV=-2.46
    {40004,8192,2832, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.47  BV=-2.55
    {40004,8192,3032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.57  BV=-2.65
    {50000,8192,2600, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.34  BV=-2.75
    {50000,8192,2792, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.45  BV=-2.85
    {50000,8192,3008, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=9.55  BV=-2.96
    {59996,8192,2688, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.39  BV=-3.06
    {59996,8192,2872, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.49  BV=-3.15
    {59996,8192,3080, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.59  BV=-3.25
    {59996,8192,3304, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.69  BV=-3.36
    {59996,8192,3536, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.79  BV=-3.45
    {59996,8192,3792, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.89  BV=-3.55
    {59996,8192,4064, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=9.99  BV=-3.65
    {59996,8192,4096, 0, 0, 0},  /* TV = 4.06(5750 lines)  AV=2.28  SV=10.00  BV=-3.67 */
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable14 =
{
    AETABLE_SCENE_INDEX14, //eAETableID
    143, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    105, //i4MaxBV
    -37, //i4MinBV
    0, //i4EffectiveMaxBV
    0, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sAEScene14PLineTable_60Hz,
    sAEScene14PLineTable_50Hz,
    NULL,
};
static strEvPline sAEScene15PLineTable_60Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8338,1198,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.24  BV=3.94
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.54  BV=3.64
    {8338,1587,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.63  BV=3.55
    {8338,1700,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.73  BV=3.45
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1956,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.93  BV=3.25
    {8338,2079,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.03  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {16664,1198,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.24  BV=2.94
    {16664,1280,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.33  BV=2.85
    {16664,1382,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.43  BV=2.75
    {16664,1495,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.55  BV=2.64
    {16664,1587,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.64  BV=2.54
    {16664,1700,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.73  BV=2.45
    {25001,1198,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.24  BV=2.36
    {25001,1300,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.34  BV=2.25
    {25001,1393,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.46  BV=2.14
    {25001,1495,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.55  BV=2.05
    {33327,1198,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.24  BV=1.94
    {33327,1280,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.33  BV=1.85
    {33327,1382,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.43  BV=1.75
    {33327,1495,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.55  BV=1.64
    {33327,1587,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.63  BV=1.55
    {33327,1700,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.73  BV=1.45
    {33327,1823,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.83  BV=1.35
    {33327,1956,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.93  BV=1.25
    {33327,2079,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.03  BV=1.15
    {33327,2243,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.13  BV=1.05
    {33327,2406,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.23  BV=0.95
    {33327,2570,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.33  BV=0.85
    {33327,2755,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.44  BV=0.74
    {33327,2949,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.54  BV=0.64
    {33327,3154,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.63  BV=0.55
    {33327,3400,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.73  BV=0.45
    {33327,3645,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.83  BV=0.35
    {33327,3912,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.93  BV=0.25
    {33327,4157,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.03  BV=0.15
    {33327,4444,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.13  BV=0.05
    {33327,4762,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33327,5140,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.33  BV=-0.15
    {33327,5458,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.43  BV=-0.24
    {33327,5827,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33327,6246,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33327,6717,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33327,7281,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33327,7711,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33327,8192,1048, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33327,8192,1120, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33327,8192,1200, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.23  BV=-1.05
    {33327,8192,1288, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.33  BV=-1.15
    {33327,8192,1376, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.43  BV=-1.24
    {33327,8192,1480, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.53  BV=-1.35
    {33337,8192,1584, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.63  BV=-1.45
    {33337,8192,1704, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.73  BV=-1.55
    {41663,8192,1456, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.51  BV=-1.65
    {41663,8192,1568, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.61  BV=-1.75
    {41663,8192,1680, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.71  BV=-1.85
    {41663,8192,1800, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.81  BV=-1.95
    {41663,8192,1928, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.91  BV=-2.05
    {41663,8192,2064, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.01  BV=-2.15
    {41663,8192,2208, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.11  BV=-2.25
    {41663,8192,2368, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.21  BV=-2.35
    {41663,8192,2536, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.31  BV=-2.45
    {41663,8192,2720, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.41  BV=-2.55
    {41663,8192,2912, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.51  BV=-2.65
    {41663,8192,3120, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.61  BV=-2.75
    {41663,8192,3344, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.71  BV=-2.85
    {41663,8192,3584, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.81  BV=-2.95
    {41663,8192,3848, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.91  BV=-3.05
    {41663,8192,4152, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.02  BV=-3.16
    {41663,8192,4448, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.12  BV=-3.26
    {41663,8192,4768, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.22  BV=-3.36
    {41663,8192,5104, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.32  BV=-3.46
    {41663,8192,5472, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.42  BV=-3.56
    {41663,8192,5840, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.51  BV=-3.65
    {41663,8192,6256, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.61  BV=-3.75
    {50000,8192,5584, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.45  BV=-3.85
    {50000,8192,5984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.55  BV=-3.95
    {58327,8192,5496, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=10.42  BV=-4.05
    {58327,8192,5896, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=10.53  BV=-4.15
    {66663,8192,5528, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=10.43  BV=-4.25
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene15PLineTable_50Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8400,1198,1024, 0, 0, 0},  //TV = 6.90(805 lines)  AV=2.28  SV=5.23  BV=3.94
    {8995,1198,1024, 0, 0, 0},  //TV = 6.80(862 lines)  AV=2.28  SV=5.23  BV=3.85
    {9631,1198,1024, 0, 0, 0},  //TV = 6.70(923 lines)  AV=2.28  SV=5.23  BV=3.75
    {9996,1239,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.27  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1505,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.57  BV=3.35
    {9996,1618,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.67  BV=3.25
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1864,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.86  BV=3.06
    {9996,1997,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.96  BV=2.96
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {9996,2284,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.17  BV=2.75
    {20003,1239,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.27  BV=2.64
    {20003,1331,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.38  BV=2.54
    {20003,1423,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.47  BV=2.44
    {20003,1505,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.57  BV=2.35
    {20003,1638,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.68  BV=2.24
    {20003,1751,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.77  BV=2.14
    {29998,1239,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.27  BV=2.06
    {29998,1341,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.39  BV=1.94
    {29998,1423,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.49  BV=1.85
    {29998,1526,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.58  BV=1.76
    {29998,1638,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.68  BV=1.66
    {29998,1761,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.78  BV=1.55
    {29998,1884,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.88  BV=1.45
    {29998,2028,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.99  BV=1.35
    {29998,2150,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.08  BV=1.25
    {29998,2324,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.18  BV=1.15
    {29998,2499,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.29  BV=1.05
    {29998,2673,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.38  BV=0.95
    {29998,2847,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.49  BV=0.85
    {29998,3052,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.58  BV=0.76
    {29998,3277,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.69  BV=0.64
    {29998,3492,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.78  BV=0.55
    {29998,3748,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.88  BV=0.45
    {29998,4035,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.98  BV=0.36
    {29998,4301,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.08  BV=0.25
    {29998,4598,1040, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.19  BV=0.14
    {29998,4946,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.28  BV=0.05
    {29998,5345,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29998,5704,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.48  BV=-0.14
    {29998,6093,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29998,6554,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.69  BV=-0.36
    {29998,7086,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.79  BV=-0.46
    {29998,7485,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29998,7946,1048, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.99  BV=-0.66
    {29998,8192,1088, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.09  BV=-0.75
    {29998,8192,1160, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29998,8192,1248, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.29  BV=-0.95
    {29998,8192,1336, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.38  BV=-1.05
    {29998,8192,1432, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.48  BV=-1.15
    {29998,8192,1536, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.58  BV=-1.25
    {29998,8192,1656, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.69  BV=-1.36
    {29998,8192,1760, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.78  BV=-1.45
    {40004,8192,1416, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.47  BV=-1.55
    {40004,8192,1520, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.57  BV=-1.65
    {40004,8192,1632, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.67  BV=-1.75
    {40004,8192,1744, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.77  BV=-1.85
    {40004,8192,1872, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.87  BV=-1.95
    {40004,8192,2008, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.97  BV=-2.05
    {40004,8192,2152, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.07  BV=-2.15
    {40004,8192,2304, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.17  BV=-2.25
    {40004,8192,2464, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.27  BV=-2.35
    {40004,8192,2640, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.37  BV=-2.45
    {40004,8192,2832, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.47  BV=-2.55
    {40004,8192,3040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.57  BV=-2.65
    {40004,8192,3256, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.67  BV=-2.75
    {40004,8192,3488, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.77  BV=-2.85
    {40004,8192,3736, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.87  BV=-2.95
    {40004,8192,4032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.98  BV=-3.06
    {40004,8192,4320, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.08  BV=-3.16
    {40004,8192,4632, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.18  BV=-3.26
    {40004,8192,4960, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.28  BV=-3.36
    {40004,8192,5320, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.38  BV=-3.46
    {40004,8192,5704, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.48  BV=-3.56
    {40004,8192,6080, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.57  BV=-3.65
    {50000,8192,5208, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.35  BV=-3.75
    {50000,8192,5584, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.45  BV=-3.85
    {50000,8192,5984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.55  BV=-3.95
    {59996,8192,5344, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.38  BV=-4.05
    {59996,8192,5728, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.48  BV=-4.15
    {59996,8192,6144, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.58  BV=-4.25
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable15 =
{
    AETABLE_SCENE_INDEX15, //eAETableID
    147, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -43, //i4MinBV
    90, //i4EffectiveMaxBV
    -50, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sAEScene15PLineTable_60Hz,
    sAEScene15PLineTable_50Hz,
    NULL,
};
static strEvPline sAEScene16PLineTable_60Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8338,1198,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.24  BV=3.94
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.54  BV=3.64
    {8338,1587,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.63  BV=3.55
    {8338,1700,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.73  BV=3.45
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1956,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.93  BV=3.25
    {8338,2079,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.03  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {16664,1198,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.24  BV=2.94
    {16664,1280,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.33  BV=2.85
    {16664,1382,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.43  BV=2.75
    {16664,1495,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.55  BV=2.64
    {16664,1587,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.64  BV=2.54
    {16664,1700,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.73  BV=2.45
    {25001,1198,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.24  BV=2.36
    {25001,1300,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.34  BV=2.25
    {25001,1393,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.46  BV=2.14
    {25001,1495,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.55  BV=2.05
    {33327,1198,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.24  BV=1.94
    {33327,1280,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.33  BV=1.85
    {33327,1382,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.43  BV=1.75
    {33327,1495,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.55  BV=1.64
    {33327,1587,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.63  BV=1.55
    {33327,1700,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.73  BV=1.45
    {33327,1823,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.83  BV=1.35
    {33327,1956,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.93  BV=1.25
    {33327,2079,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.03  BV=1.15
    {33327,2243,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.13  BV=1.05
    {33327,2406,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.23  BV=0.95
    {33327,2570,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.33  BV=0.85
    {33327,2755,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.44  BV=0.74
    {33327,2949,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.54  BV=0.64
    {33327,3154,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.63  BV=0.55
    {33327,3400,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.73  BV=0.45
    {33327,3645,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.83  BV=0.35
    {33327,3912,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.93  BV=0.25
    {33327,4157,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.03  BV=0.15
    {33327,4444,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.13  BV=0.05
    {33327,4762,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33327,5140,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.33  BV=-0.15
    {33327,5458,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.43  BV=-0.24
    {33327,5827,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33327,6246,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33327,6717,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33327,7281,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33327,7711,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33327,8192,1048, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33327,8192,1120, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33327,8192,1200, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.23  BV=-1.05
    {33327,8192,1288, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.33  BV=-1.15
    {33327,8192,1376, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.43  BV=-1.24
    {33327,8192,1480, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.53  BV=-1.35
    {33337,8192,1584, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.63  BV=-1.45
    {33337,8192,1704, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.73  BV=-1.55
    {41663,8192,1456, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.51  BV=-1.65
    {41663,8192,1568, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.61  BV=-1.75
    {41663,8192,1680, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.71  BV=-1.85
    {41663,8192,1800, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.81  BV=-1.95
    {41663,8192,1928, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.91  BV=-2.05
    {41663,8192,2064, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.01  BV=-2.15
    {41663,8192,2208, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.11  BV=-2.25
    {41663,8192,2368, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.21  BV=-2.35
    {41663,8192,2536, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.31  BV=-2.45
    {41663,8192,2720, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.41  BV=-2.55
    {41663,8192,2912, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.51  BV=-2.65
    {41663,8192,3120, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.61  BV=-2.75
    {41663,8192,3344, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.71  BV=-2.85
    {41663,8192,3584, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.81  BV=-2.95
    {41663,8192,3848, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.91  BV=-3.05
    {41663,8192,4152, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.02  BV=-3.16
    {41663,8192,4448, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.12  BV=-3.26
    {41663,8192,4768, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.22  BV=-3.36
    {41663,8192,5104, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.32  BV=-3.46
    {41663,8192,5472, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.42  BV=-3.56
    {41663,8192,5840, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.51  BV=-3.65
    {41663,8192,6256, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.61  BV=-3.75
    {50000,8192,5584, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.45  BV=-3.85
    {50000,8192,5984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.55  BV=-3.95
    {58327,8192,5496, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=10.42  BV=-4.05
    {58327,8192,5896, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=10.53  BV=-4.15
    {66663,8192,5528, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=10.43  BV=-4.25
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene16PLineTable_50Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8400,1198,1024, 0, 0, 0},  //TV = 6.90(805 lines)  AV=2.28  SV=5.23  BV=3.94
    {8995,1198,1024, 0, 0, 0},  //TV = 6.80(862 lines)  AV=2.28  SV=5.23  BV=3.85
    {9631,1198,1024, 0, 0, 0},  //TV = 6.70(923 lines)  AV=2.28  SV=5.23  BV=3.75
    {9996,1239,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.27  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1505,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.57  BV=3.35
    {9996,1618,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.67  BV=3.25
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1864,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.86  BV=3.06
    {9996,1997,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.96  BV=2.96
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {9996,2284,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.17  BV=2.75
    {20003,1239,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.27  BV=2.64
    {20003,1331,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.38  BV=2.54
    {20003,1423,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.47  BV=2.44
    {20003,1505,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.57  BV=2.35
    {20003,1638,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.68  BV=2.24
    {20003,1751,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.77  BV=2.14
    {29998,1239,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.27  BV=2.06
    {29998,1341,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.39  BV=1.94
    {29998,1423,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.49  BV=1.85
    {29998,1526,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.58  BV=1.76
    {29998,1638,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.68  BV=1.66
    {29998,1761,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.78  BV=1.55
    {29998,1884,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.88  BV=1.45
    {29998,2028,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.99  BV=1.35
    {29998,2150,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.08  BV=1.25
    {29998,2324,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.18  BV=1.15
    {29998,2499,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.29  BV=1.05
    {29998,2673,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.38  BV=0.95
    {29998,2847,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.49  BV=0.85
    {29998,3052,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.58  BV=0.76
    {29998,3277,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.69  BV=0.64
    {29998,3492,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.78  BV=0.55
    {29998,3748,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.88  BV=0.45
    {29998,4035,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.98  BV=0.36
    {29998,4301,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.08  BV=0.25
    {29998,4598,1040, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.19  BV=0.14
    {29998,4946,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.28  BV=0.05
    {29998,5345,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29998,5704,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.48  BV=-0.14
    {29998,6093,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29998,6554,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.69  BV=-0.36
    {29998,7086,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.79  BV=-0.46
    {29998,7485,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29998,7946,1048, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.99  BV=-0.66
    {29998,8192,1088, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.09  BV=-0.75
    {29998,8192,1160, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29998,8192,1248, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.29  BV=-0.95
    {29998,8192,1336, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.38  BV=-1.05
    {29998,8192,1432, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.48  BV=-1.15
    {29998,8192,1536, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.58  BV=-1.25
    {29998,8192,1656, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.69  BV=-1.36
    {29998,8192,1760, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.78  BV=-1.45
    {40004,8192,1416, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.47  BV=-1.55
    {40004,8192,1520, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.57  BV=-1.65
    {40004,8192,1632, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.67  BV=-1.75
    {40004,8192,1744, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.77  BV=-1.85
    {40004,8192,1872, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.87  BV=-1.95
    {40004,8192,2008, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.97  BV=-2.05
    {40004,8192,2152, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.07  BV=-2.15
    {40004,8192,2304, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.17  BV=-2.25
    {40004,8192,2464, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.27  BV=-2.35
    {40004,8192,2640, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.37  BV=-2.45
    {40004,8192,2832, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.47  BV=-2.55
    {40004,8192,3040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.57  BV=-2.65
    {40004,8192,3256, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.67  BV=-2.75
    {40004,8192,3488, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.77  BV=-2.85
    {40004,8192,3736, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.87  BV=-2.95
    {40004,8192,4032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.98  BV=-3.06
    {40004,8192,4320, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.08  BV=-3.16
    {40004,8192,4632, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.18  BV=-3.26
    {40004,8192,4960, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.28  BV=-3.36
    {40004,8192,5320, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.38  BV=-3.46
    {40004,8192,5704, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.48  BV=-3.56
    {40004,8192,6080, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.57  BV=-3.65
    {50000,8192,5208, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.35  BV=-3.75
    {50000,8192,5584, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.45  BV=-3.85
    {50000,8192,5984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.55  BV=-3.95
    {59996,8192,5344, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.38  BV=-4.05
    {59996,8192,5728, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.48  BV=-4.15
    {59996,8192,6144, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.58  BV=-4.25
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable16 =
{
    AETABLE_SCENE_INDEX16, //eAETableID
    147, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -43, //i4MinBV
    90, //i4EffectiveMaxBV
    -50, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sAEScene16PLineTable_60Hz,
    sAEScene16PLineTable_50Hz,
    NULL,
};
static strEvPline sAEScene17PLineTable_60Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8338,1198,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.24  BV=3.94
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.54  BV=3.64
    {8338,1587,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.63  BV=3.55
    {8338,1700,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.73  BV=3.45
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1956,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.93  BV=3.25
    {8338,2079,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.03  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {16664,1198,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.24  BV=2.94
    {16664,1280,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.33  BV=2.85
    {16664,1382,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.43  BV=2.75
    {16664,1495,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.55  BV=2.64
    {16664,1587,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.64  BV=2.54
    {16664,1700,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.73  BV=2.45
    {25001,1198,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.24  BV=2.36
    {25001,1300,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.34  BV=2.25
    {25001,1393,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.46  BV=2.14
    {25001,1495,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.55  BV=2.05
    {33327,1198,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.24  BV=1.94
    {33327,1280,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.33  BV=1.85
    {33327,1382,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.43  BV=1.75
    {33327,1495,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.55  BV=1.64
    {33327,1587,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.63  BV=1.55
    {33327,1700,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.73  BV=1.45
    {33327,1823,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.83  BV=1.35
    {33327,1956,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.93  BV=1.25
    {33327,2079,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.03  BV=1.15
    {33327,2243,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.13  BV=1.05
    {33327,2406,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.23  BV=0.95
    {33327,2570,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.33  BV=0.85
    {33327,2755,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.44  BV=0.74
    {33327,2949,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.54  BV=0.64
    {33327,3154,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.63  BV=0.55
    {33327,3400,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.73  BV=0.45
    {33327,3645,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.83  BV=0.35
    {33327,3912,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.93  BV=0.25
    {33327,4157,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.03  BV=0.15
    {33327,4444,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.13  BV=0.05
    {33327,4762,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33327,5140,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.33  BV=-0.15
    {33327,5458,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.43  BV=-0.24
    {33327,5827,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33327,6246,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33327,6717,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33327,7281,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33327,7711,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33327,8192,1048, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33327,8192,1120, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33327,8192,1200, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.23  BV=-1.05
    {33327,8192,1288, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.33  BV=-1.15
    {33327,8192,1376, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.43  BV=-1.24
    {33327,8192,1480, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.53  BV=-1.35
    {33337,8192,1584, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.63  BV=-1.45
    {33337,8192,1704, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.73  BV=-1.55
    {41663,8192,1456, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.51  BV=-1.65
    {41663,8192,1568, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.61  BV=-1.75
    {41663,8192,1680, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.71  BV=-1.85
    {41663,8192,1800, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.81  BV=-1.95
    {41663,8192,1928, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.91  BV=-2.05
    {41663,8192,2064, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.01  BV=-2.15
    {41663,8192,2208, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.11  BV=-2.25
    {41663,8192,2368, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.21  BV=-2.35
    {41663,8192,2536, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.31  BV=-2.45
    {41663,8192,2720, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.41  BV=-2.55
    {41663,8192,2912, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.51  BV=-2.65
    {41663,8192,3120, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.61  BV=-2.75
    {41663,8192,3344, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.71  BV=-2.85
    {41663,8192,3584, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.81  BV=-2.95
    {41663,8192,3848, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.91  BV=-3.05
    {41663,8192,4152, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.02  BV=-3.16
    {41663,8192,4448, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.12  BV=-3.26
    {41663,8192,4768, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.22  BV=-3.36
    {41663,8192,5104, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.32  BV=-3.46
    {41663,8192,5472, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.42  BV=-3.56
    {41663,8192,5840, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.51  BV=-3.65
    {41663,8192,6256, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.61  BV=-3.75
    {50000,8192,5584, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.45  BV=-3.85
    {50000,8192,5984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.55  BV=-3.95
    {58327,8192,5496, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=10.42  BV=-4.05
    {58327,8192,5896, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=10.53  BV=-4.15
    {66663,8192,5528, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=10.43  BV=-4.25
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene17PLineTable_50Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8400,1198,1024, 0, 0, 0},  //TV = 6.90(805 lines)  AV=2.28  SV=5.23  BV=3.94
    {8995,1198,1024, 0, 0, 0},  //TV = 6.80(862 lines)  AV=2.28  SV=5.23  BV=3.85
    {9631,1198,1024, 0, 0, 0},  //TV = 6.70(923 lines)  AV=2.28  SV=5.23  BV=3.75
    {9996,1239,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.27  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1505,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.57  BV=3.35
    {9996,1618,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.67  BV=3.25
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1864,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.86  BV=3.06
    {9996,1997,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.96  BV=2.96
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {9996,2284,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.17  BV=2.75
    {20003,1239,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.27  BV=2.64
    {20003,1331,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.38  BV=2.54
    {20003,1423,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.47  BV=2.44
    {20003,1505,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.57  BV=2.35
    {20003,1638,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.68  BV=2.24
    {20003,1751,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.77  BV=2.14
    {29998,1239,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.27  BV=2.06
    {29998,1341,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.39  BV=1.94
    {29998,1423,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.49  BV=1.85
    {29998,1526,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.58  BV=1.76
    {29998,1638,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.68  BV=1.66
    {29998,1761,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.78  BV=1.55
    {29998,1884,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.88  BV=1.45
    {29998,2028,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.99  BV=1.35
    {29998,2150,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.08  BV=1.25
    {29998,2324,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.18  BV=1.15
    {29998,2499,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.29  BV=1.05
    {29998,2673,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.38  BV=0.95
    {29998,2847,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.49  BV=0.85
    {29998,3052,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.58  BV=0.76
    {29998,3277,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.69  BV=0.64
    {29998,3492,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.78  BV=0.55
    {29998,3748,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.88  BV=0.45
    {29998,4035,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.98  BV=0.36
    {29998,4301,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.08  BV=0.25
    {29998,4598,1040, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.19  BV=0.14
    {29998,4946,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.28  BV=0.05
    {29998,5345,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29998,5704,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.48  BV=-0.14
    {29998,6093,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29998,6554,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.69  BV=-0.36
    {29998,7086,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.79  BV=-0.46
    {29998,7485,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29998,7946,1048, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.99  BV=-0.66
    {29998,8192,1088, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.09  BV=-0.75
    {29998,8192,1160, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29998,8192,1248, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.29  BV=-0.95
    {29998,8192,1336, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.38  BV=-1.05
    {29998,8192,1432, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.48  BV=-1.15
    {29998,8192,1536, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.58  BV=-1.25
    {29998,8192,1656, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.69  BV=-1.36
    {29998,8192,1760, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.78  BV=-1.45
    {40004,8192,1416, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.47  BV=-1.55
    {40004,8192,1520, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.57  BV=-1.65
    {40004,8192,1632, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.67  BV=-1.75
    {40004,8192,1744, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.77  BV=-1.85
    {40004,8192,1872, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.87  BV=-1.95
    {40004,8192,2008, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.97  BV=-2.05
    {40004,8192,2152, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.07  BV=-2.15
    {40004,8192,2304, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.17  BV=-2.25
    {40004,8192,2464, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.27  BV=-2.35
    {40004,8192,2640, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.37  BV=-2.45
    {40004,8192,2832, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.47  BV=-2.55
    {40004,8192,3040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.57  BV=-2.65
    {40004,8192,3256, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.67  BV=-2.75
    {40004,8192,3488, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.77  BV=-2.85
    {40004,8192,3736, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.87  BV=-2.95
    {40004,8192,4032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.98  BV=-3.06
    {40004,8192,4320, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.08  BV=-3.16
    {40004,8192,4632, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.18  BV=-3.26
    {40004,8192,4960, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.28  BV=-3.36
    {40004,8192,5320, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.38  BV=-3.46
    {40004,8192,5704, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.48  BV=-3.56
    {40004,8192,6080, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.57  BV=-3.65
    {50000,8192,5208, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.35  BV=-3.75
    {50000,8192,5584, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.45  BV=-3.85
    {50000,8192,5984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.55  BV=-3.95
    {59996,8192,5344, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.38  BV=-4.05
    {59996,8192,5728, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.48  BV=-4.15
    {59996,8192,6144, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.58  BV=-4.25
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable17 =
{
    AETABLE_SCENE_INDEX17, //eAETableID
    147, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -43, //i4MinBV
    90, //i4EffectiveMaxBV
    -50, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sAEScene17PLineTable_60Hz,
    sAEScene17PLineTable_50Hz,
    NULL,
};
static strEvPline sAEScene18PLineTable_60Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8338,1198,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.24  BV=3.94
    {8338,1280,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.33  BV=3.85
    {8338,1382,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.43  BV=3.75
    {8338,1475,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.54  BV=3.64
    {8338,1587,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.63  BV=3.55
    {8338,1700,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.73  BV=3.45
    {8338,1823,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.83  BV=3.35
    {8338,1956,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=5.93  BV=3.25
    {8338,2079,1032, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.03  BV=3.15
    {8338,2243,1024, 0, 0, 0},  //TV = 6.91(799 lines)  AV=2.28  SV=6.13  BV=3.05
    {16664,1198,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.24  BV=2.94
    {16664,1280,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.33  BV=2.85
    {16664,1382,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.43  BV=2.75
    {16664,1495,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.55  BV=2.64
    {16664,1587,1032, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.64  BV=2.54
    {16664,1700,1024, 0, 0, 0},  //TV = 5.91(1597 lines)  AV=2.28  SV=5.73  BV=2.45
    {25001,1198,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.24  BV=2.36
    {25001,1300,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.34  BV=2.25
    {25001,1393,1032, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.46  BV=2.14
    {25001,1495,1024, 0, 0, 0},  //TV = 5.32(2396 lines)  AV=2.28  SV=5.55  BV=2.05
    {33327,1198,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.24  BV=1.94
    {33327,1280,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.33  BV=1.85
    {33327,1382,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.43  BV=1.75
    {33327,1495,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.55  BV=1.64
    {33327,1587,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.63  BV=1.55
    {33327,1700,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.73  BV=1.45
    {33327,1823,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.83  BV=1.35
    {33327,1956,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=5.93  BV=1.25
    {33327,2079,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.03  BV=1.15
    {33327,2243,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.13  BV=1.05
    {33327,2406,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.23  BV=0.95
    {33327,2570,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.33  BV=0.85
    {33327,2755,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.44  BV=0.74
    {33327,2949,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.54  BV=0.64
    {33327,3154,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.63  BV=0.55
    {33327,3400,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.73  BV=0.45
    {33327,3645,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.83  BV=0.35
    {33327,3912,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=6.93  BV=0.25
    {33327,4157,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.03  BV=0.15
    {33327,4444,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.13  BV=0.05
    {33327,4762,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.23  BV=-0.05
    {33327,5140,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.33  BV=-0.15
    {33327,5458,1032, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.43  BV=-0.24
    {33327,5827,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.53  BV=-0.35
    {33327,6246,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.63  BV=-0.45
    {33327,6717,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.74  BV=-0.55
    {33327,7281,1024, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.83  BV=-0.65
    {33327,7711,1040, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=7.94  BV=-0.75
    {33327,8192,1048, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.03  BV=-0.85
    {33327,8192,1120, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.13  BV=-0.95
    {33327,8192,1200, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.23  BV=-1.05
    {33327,8192,1288, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.33  BV=-1.15
    {33327,8192,1376, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.43  BV=-1.24
    {33327,8192,1480, 0, 0, 0},  //TV = 4.91(3194 lines)  AV=2.28  SV=8.53  BV=-1.35
    {33337,8192,1584, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.63  BV=-1.45
    {33337,8192,1704, 0, 0, 0},  //TV = 4.91(3195 lines)  AV=2.28  SV=8.73  BV=-1.55
    {41663,8192,1456, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.51  BV=-1.65
    {41663,8192,1568, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.61  BV=-1.75
    {41663,8192,1680, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.71  BV=-1.85
    {41663,8192,1800, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.81  BV=-1.95
    {41663,8192,1928, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=8.91  BV=-2.05
    {41663,8192,2064, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.01  BV=-2.15
    {41663,8192,2208, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.11  BV=-2.25
    {41663,8192,2368, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.21  BV=-2.35
    {41663,8192,2536, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.31  BV=-2.45
    {41663,8192,2720, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.41  BV=-2.55
    {41663,8192,2912, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.51  BV=-2.65
    {41663,8192,3120, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.61  BV=-2.75
    {41663,8192,3344, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.71  BV=-2.85
    {41663,8192,3584, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.81  BV=-2.95
    {41663,8192,3848, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=9.91  BV=-3.05
    {41663,8192,4152, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.02  BV=-3.16
    {41663,8192,4448, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.12  BV=-3.26
    {41663,8192,4768, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.22  BV=-3.36
    {41663,8192,5104, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.32  BV=-3.46
    {41663,8192,5472, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.42  BV=-3.56
    {41663,8192,5840, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.51  BV=-3.65
    {41663,8192,6256, 0, 0, 0},  //TV = 4.59(3993 lines)  AV=2.28  SV=10.61  BV=-3.75
    {50000,8192,5584, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.45  BV=-3.85
    {50000,8192,5984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.55  BV=-3.95
    {58327,8192,5496, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=10.42  BV=-4.05
    {58327,8192,5896, 0, 0, 0},  //TV = 4.10(5590 lines)  AV=2.28  SV=10.53  BV=-4.15
    {66663,8192,5528, 0, 0, 0},  //TV = 3.91(6389 lines)  AV=2.28  SV=10.43  BV=-4.25
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strEvPline sAEScene18PLineTable_50Hz =
{
{
    {94,1270,1032, 0, 0, 0},  //TV = 13.38(9 lines)  AV=2.28  SV=5.32  BV=10.33
    {105,1239,1024, 0, 0, 0},  //TV = 13.22(10 lines)  AV=2.28  SV=5.27  BV=10.22
    {115,1198,1024, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.23  BV=10.13
    {115,1270,1032, 0, 0, 0},  //TV = 13.09(11 lines)  AV=2.28  SV=5.32  BV=10.04
    {126,1239,1024, 0, 0, 0},  //TV = 12.95(12 lines)  AV=2.28  SV=5.27  BV=9.95
    {136,1249,1032, 0, 0, 0},  /* TV = 12.84(13 lines)  AV=2.28  SV=5.30  BV=9.82 */
    {147,1249,1024, 0, 0, 0},  //TV = 12.73(14 lines)  AV=2.28  SV=5.29  BV=9.72
    {157,1270,1024, 0, 0, 0},  //TV = 12.64(15 lines)  AV=2.28  SV=5.31  BV=9.60
    {178,1198,1032, 0, 0, 0},  //TV = 12.46(17 lines)  AV=2.28  SV=5.24  BV=9.49
    {178,1249,1024, 0, 0, 0},  /* TV = 12.46(17 lines)  AV=2.28  SV=5.29  BV=9.44 */
    {199,1198,1032, 0, 0, 0},  //TV = 12.29(19 lines)  AV=2.28  SV=5.24  BV=9.33
    {209,1219,1024, 0, 0, 0},  //TV = 12.22(20 lines)  AV=2.28  SV=5.25  BV=9.25
    {220,1239,1024, 0, 0, 0},  //TV = 12.15(21 lines)  AV=2.28  SV=5.27  BV=9.15
    {240,1219,1024, 0, 0, 0},  //TV = 12.02(23 lines)  AV=2.28  SV=5.25  BV=9.05
    {261,1198,1024, 0, 0, 0},  //TV = 11.90(25 lines)  AV=2.28  SV=5.23  BV=8.95
    {272,1239,1024, 0, 0, 0},  //TV = 11.84(26 lines)  AV=2.28  SV=5.27  BV=8.84
    {293,1219,1032, 0, 0, 0},  //TV = 11.74(28 lines)  AV=2.28  SV=5.26  BV=8.75
    {314,1219,1032, 0, 0, 0},  //TV = 11.64(30 lines)  AV=2.28  SV=5.26  BV=8.65
    {345,1198,1024, 0, 0, 0},  //TV = 11.50(33 lines)  AV=2.28  SV=5.23  BV=8.55
    {366,1198,1032, 0, 0, 0},  //TV = 11.42(35 lines)  AV=2.28  SV=5.24  BV=8.45
    {397,1198,1024, 0, 0, 0},  //TV = 11.30(38 lines)  AV=2.28  SV=5.23  BV=8.35
    {418,1219,1024, 0, 0, 0},  //TV = 11.22(40 lines)  AV=2.28  SV=5.25  BV=8.25
    {449,1198,1032, 0, 0, 0},  //TV = 11.12(43 lines)  AV=2.28  SV=5.24  BV=8.16
    {480,1219,1024, 0, 0, 0},  //TV = 11.02(46 lines)  AV=2.28  SV=5.25  BV=8.05
    {522,1198,1024, 0, 0, 0},  //TV = 10.90(50 lines)  AV=2.28  SV=5.23  BV=7.95
    {554,1198,1032, 0, 0, 0},  //TV = 10.82(53 lines)  AV=2.28  SV=5.24  BV=7.86
    {595,1198,1032, 0, 0, 0},  //TV = 10.71(57 lines)  AV=2.28  SV=5.24  BV=7.75
    {637,1198,1032, 0, 0, 0},  //TV = 10.62(61 lines)  AV=2.28  SV=5.24  BV=7.65
    {689,1198,1032, 0, 0, 0},  //TV = 10.50(66 lines)  AV=2.28  SV=5.24  BV=7.54
    {731,1198,1032, 0, 0, 0},  //TV = 10.42(70 lines)  AV=2.28  SV=5.24  BV=7.46
    {793,1198,1024, 0, 0, 0},  //TV = 10.30(76 lines)  AV=2.28  SV=5.23  BV=7.35
    {846,1198,1032, 0, 0, 0},  //TV = 10.21(81 lines)  AV=2.28  SV=5.24  BV=7.24
    {898,1198,1032, 0, 0, 0},  //TV = 10.12(86 lines)  AV=2.28  SV=5.24  BV=7.16
    {971,1198,1032, 0, 0, 0},  //TV = 10.01(93 lines)  AV=2.28  SV=5.24  BV=7.05
    {1044,1198,1024, 0, 0, 0},  //TV = 9.90(100 lines)  AV=2.28  SV=5.23  BV=6.95
    {1117,1198,1032, 0, 0, 0},  //TV = 9.81(107 lines)  AV=2.28  SV=5.24  BV=6.84
    {1200,1198,1032, 0, 0, 0},  //TV = 9.70(115 lines)  AV=2.28  SV=5.24  BV=6.74
    {1284,1198,1032, 0, 0, 0},  //TV = 9.61(123 lines)  AV=2.28  SV=5.24  BV=6.64
    {1378,1198,1024, 0, 0, 0},  //TV = 9.50(132 lines)  AV=2.28  SV=5.23  BV=6.55
    {1482,1198,1024, 0, 0, 0},  //TV = 9.40(142 lines)  AV=2.28  SV=5.23  BV=6.45
    {1576,1198,1032, 0, 0, 0},  //TV = 9.31(151 lines)  AV=2.28  SV=5.24  BV=6.35
    {1701,1198,1024, 0, 0, 0},  //TV = 9.20(163 lines)  AV=2.28  SV=5.23  BV=6.25
    {1816,1198,1032, 0, 0, 0},  //TV = 9.11(174 lines)  AV=2.28  SV=5.24  BV=6.14
    {1941,1198,1032, 0, 0, 0},  //TV = 9.01(186 lines)  AV=2.28  SV=5.24  BV=6.05
    {2077,1198,1032, 0, 0, 0},  //TV = 8.91(199 lines)  AV=2.28  SV=5.24  BV=5.95
    {2233,1198,1032, 0, 0, 0},  //TV = 8.81(214 lines)  AV=2.28  SV=5.24  BV=5.84
    {2390,1198,1032, 0, 0, 0},  //TV = 8.71(229 lines)  AV=2.28  SV=5.24  BV=5.75
    {2557,1198,1032, 0, 0, 0},  //TV = 8.61(245 lines)  AV=2.28  SV=5.24  BV=5.65
    {2755,1198,1024, 0, 0, 0},  //TV = 8.50(264 lines)  AV=2.28  SV=5.23  BV=5.55
    {2953,1198,1024, 0, 0, 0},  //TV = 8.40(283 lines)  AV=2.28  SV=5.23  BV=5.45
    {3183,1198,1024, 0, 0, 0},  //TV = 8.30(305 lines)  AV=2.28  SV=5.23  BV=5.34
    {3402,1198,1024, 0, 0, 0},  //TV = 8.20(326 lines)  AV=2.28  SV=5.23  BV=5.25
    {3642,1198,1024, 0, 0, 0},  //TV = 8.10(349 lines)  AV=2.28  SV=5.23  BV=5.15
    {3903,1198,1024, 0, 0, 0},  //TV = 8.00(374 lines)  AV=2.28  SV=5.23  BV=5.05
    {4205,1198,1024, 0, 0, 0},  //TV = 7.89(403 lines)  AV=2.28  SV=5.23  BV=4.94
    {4498,1198,1024, 0, 0, 0},  //TV = 7.80(431 lines)  AV=2.28  SV=5.23  BV=4.85
    {4821,1198,1024, 0, 0, 0},  //TV = 7.70(462 lines)  AV=2.28  SV=5.23  BV=4.75
    {5165,1198,1024, 0, 0, 0},  //TV = 7.60(495 lines)  AV=2.28  SV=5.23  BV=4.65
    {5520,1198,1024, 0, 0, 0},  //TV = 7.50(529 lines)  AV=2.28  SV=5.23  BV=4.55
    {5917,1198,1024, 0, 0, 0},  //TV = 7.40(567 lines)  AV=2.28  SV=5.23  BV=4.45
    {6334,1198,1024, 0, 0, 0},  //TV = 7.30(607 lines)  AV=2.28  SV=5.23  BV=4.35
    {6835,1198,1024, 0, 0, 0},  //TV = 7.19(655 lines)  AV=2.28  SV=5.23  BV=4.24
    {7273,1198,1024, 0, 0, 0},  //TV = 7.10(697 lines)  AV=2.28  SV=5.23  BV=4.15
    {7836,1198,1024, 0, 0, 0},  //TV = 7.00(751 lines)  AV=2.28  SV=5.23  BV=4.04
    {8400,1198,1024, 0, 0, 0},  //TV = 6.90(805 lines)  AV=2.28  SV=5.23  BV=3.94
    {8995,1198,1024, 0, 0, 0},  //TV = 6.80(862 lines)  AV=2.28  SV=5.23  BV=3.85
    {9631,1198,1024, 0, 0, 0},  //TV = 6.70(923 lines)  AV=2.28  SV=5.23  BV=3.75
    {9996,1239,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.27  BV=3.64
    {9996,1311,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.37  BV=3.55
    {9996,1423,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.47  BV=3.44
    {9996,1505,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.57  BV=3.35
    {9996,1618,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.67  BV=3.25
    {9996,1751,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.77  BV=3.15
    {9996,1864,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.86  BV=3.06
    {9996,1997,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=5.96  BV=2.96
    {9996,2150,1024, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.07  BV=2.85
    {9996,2284,1032, 0, 0, 0},  //TV = 6.64(958 lines)  AV=2.28  SV=6.17  BV=2.75
    {20003,1239,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.27  BV=2.64
    {20003,1331,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.38  BV=2.54
    {20003,1423,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.47  BV=2.44
    {20003,1505,1032, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.57  BV=2.35
    {20003,1638,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.68  BV=2.24
    {20003,1751,1024, 0, 0, 0},  //TV = 5.64(1917 lines)  AV=2.28  SV=5.77  BV=2.14
    {29998,1239,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.27  BV=2.06
    {29998,1341,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.39  BV=1.94
    {29998,1423,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.49  BV=1.85
    {29998,1526,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.58  BV=1.76
    {29998,1638,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.68  BV=1.66
    {29998,1761,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.78  BV=1.55
    {29998,1884,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.88  BV=1.45
    {29998,2028,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=5.99  BV=1.35
    {29998,2150,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.08  BV=1.25
    {29998,2324,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.18  BV=1.15
    {29998,2499,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.29  BV=1.05
    {29998,2673,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.38  BV=0.95
    {29998,2847,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.49  BV=0.85
    {29998,3052,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.58  BV=0.76
    {29998,3277,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.69  BV=0.64
    {29998,3492,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.78  BV=0.55
    {29998,3748,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.88  BV=0.45
    {29998,4035,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=6.98  BV=0.36
    {29998,4301,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.08  BV=0.25
    {29998,4598,1040, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.19  BV=0.14
    {29998,4946,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.28  BV=0.05
    {29998,5345,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.38  BV=-0.05
    {29998,5704,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.48  BV=-0.14
    {29998,6093,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.58  BV=-0.25
    {29998,6554,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.69  BV=-0.36
    {29998,7086,1024, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.79  BV=-0.46
    {29998,7485,1032, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.88  BV=-0.55
    {29998,7946,1048, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=7.99  BV=-0.66
    {29998,8192,1088, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.09  BV=-0.75
    {29998,8192,1160, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.18  BV=-0.85
    {29998,8192,1248, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.29  BV=-0.95
    {29998,8192,1336, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.38  BV=-1.05
    {29998,8192,1432, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.48  BV=-1.15
    {29998,8192,1536, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.58  BV=-1.25
    {29998,8192,1656, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.69  BV=-1.36
    {29998,8192,1760, 0, 0, 0},  //TV = 5.06(2875 lines)  AV=2.28  SV=8.78  BV=-1.45
    {40004,8192,1416, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.47  BV=-1.55
    {40004,8192,1520, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.57  BV=-1.65
    {40004,8192,1632, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.67  BV=-1.75
    {40004,8192,1744, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.77  BV=-1.85
    {40004,8192,1872, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.87  BV=-1.95
    {40004,8192,2008, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=8.97  BV=-2.05
    {40004,8192,2152, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.07  BV=-2.15
    {40004,8192,2304, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.17  BV=-2.25
    {40004,8192,2464, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.27  BV=-2.35
    {40004,8192,2640, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.37  BV=-2.45
    {40004,8192,2832, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.47  BV=-2.55
    {40004,8192,3040, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.57  BV=-2.65
    {40004,8192,3256, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.67  BV=-2.75
    {40004,8192,3488, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.77  BV=-2.85
    {40004,8192,3736, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.87  BV=-2.95
    {40004,8192,4032, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=9.98  BV=-3.06
    {40004,8192,4320, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.08  BV=-3.16
    {40004,8192,4632, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.18  BV=-3.26
    {40004,8192,4960, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.28  BV=-3.36
    {40004,8192,5320, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.38  BV=-3.46
    {40004,8192,5704, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.48  BV=-3.56
    {40004,8192,6080, 0, 0, 0},  //TV = 4.64(3834 lines)  AV=2.28  SV=10.57  BV=-3.65
    {50000,8192,5208, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.35  BV=-3.75
    {50000,8192,5584, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.45  BV=-3.85
    {50000,8192,5984, 0, 0, 0},  //TV = 4.32(4792 lines)  AV=2.28  SV=10.55  BV=-3.95
    {59996,8192,5344, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.38  BV=-4.05
    {59996,8192,5728, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.48  BV=-4.15
    {59996,8192,6144, 0, 0, 0},  //TV = 4.06(5750 lines)  AV=2.28  SV=10.58  BV=-4.25
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};

static strAETable g_AE_SceneTable18 =
{
    AETABLE_SCENE_INDEX18, //eAETableID
    147, //u4TotalIndex
    -20, //i4StrobeTrigerBV
    104, //i4MaxBV
    -43, //i4MinBV
    90, //i4EffectiveMaxBV
    -50, //i4EffectiveMinBV
    LIB3A_AE_ISO_SPEED_AUTO, //ISO
    sAEScene18PLineTable_60Hz,
    sAEScene18PLineTable_50Hz,
    NULL,
};
static strEvPline sAESceneReservePLineTable =
{
{
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
    {0, 0, 0, 0, 0, 0},  //reserved no used
},
};
static strAETable g_AE_ReserveSceneTable =
{
	AETABLE_SCENE_MAX,    //eAETableID
	0,    //u4TotalIndex
	20,    //u4StrobeTrigerBV
	0,    //i4MaxBV
	0,    //i4MinBV
	90,    //i4EffectiveMaxBV
	0,      //i4EffectiveMinBV
	LIB3A_AE_ISO_SPEED_AUTO, //ISO SPEED
	sAESceneReservePLineTable,
	sAESceneReservePLineTable,
	NULL,
};

static strAESceneMapping g_AEScenePLineMapping = 
{
{
    {LIB3A_AE_SCENE_AUTO, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX5}},
    {LIB3A_AE_SCENE_NIGHT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ACTION, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_BEACH, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_CANDLELIGHT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_FIREWORKS, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX4, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX4}},
    {LIB3A_AE_SCENE_LANDSCAPE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_PORTRAIT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_NIGHT_PORTRAIT, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_PARTY, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_SNOW, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_SPORTS, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_STEADYPHOTO, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_SUNSET, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3}},
    {LIB3A_AE_SCENE_THEATRE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1}},
    {LIB3A_AE_SCENE_ISO_ANTI_SHAKE, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2}},
    {LIB3A_AE_SCENE_ISO100, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO100, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO100}},
    {LIB3A_AE_SCENE_ISO200, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO200, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO200}},
    {LIB3A_AE_SCENE_ISO400, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO400, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO400}},
    {LIB3A_AE_SCENE_ISO800, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO800, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO800}},
    {LIB3A_AE_SCENE_ISO1600, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO1600, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_SCENE_INDEX6, AETABLE_SCENE_INDEX7, AETABLE_SCENE_INDEX8, AETABLE_SCENE_INDEX9, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO1600}},
    {LIB3A_AE_SCENE_ISO3200, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX6, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX6}},
    {LIB3A_AE_SCENE_ISO6400, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX7, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX7}},
    {LIB3A_AE_SCENE_ISO12800, {AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX8, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX8}},
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},
    {LIB3A_AE_SCENE_UNSUPPORTED, {AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_AUTO}},
},
};

static strAEPLineTable g_strAEPlineTable =
{
{
// PLINE Table
    g_AE_PreviewAutoTable,
    g_AE_CaptureAutoTable,
    g_AE_VideoAutoTable,
    g_AE_Video1AutoTable,
    g_AE_Video2AutoTable,
    g_AE_Custom1AutoTable,
    g_AE_Custom2AutoTable,
    g_AE_Custom3AutoTable,
    g_AE_Custom4AutoTable,
    g_AE_Custom5AutoTable,
    g_AE_VideoNightTable,
    g_AE_CaptureISO100Table,
    g_AE_CaptureISO200Table,
    g_AE_CaptureISO400Table,
    g_AE_CaptureISO800Table,
    g_AE_CaptureISO1600Table,
    g_AE_StrobeTable,
    g_AE_SceneTable1,
    g_AE_SceneTable2,
    g_AE_SceneTable3,
    g_AE_SceneTable4,
    g_AE_SceneTable5,
    g_AE_SceneTable6,
    g_AE_SceneTable7,
    g_AE_SceneTable8,
    g_AE_SceneTable9,
    g_AE_SceneTable14,
    g_AE_SceneTable15,
    g_AE_SceneTable16,
    g_AE_SceneTable17,
    g_AE_SceneTable18,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
    g_AE_ReserveSceneTable,
},
};

static strAEPLineNumInfo g_strAEPreviewAutoPLineInfo =
{
    AETABLE_RPEVIEW_AUTO,
    90,
    -50,
    {
        {1,10000,120,1144,1144},
        {2,120,120,1144,2048},
        {3,120,60,2048,2048},
        {4,60,60,2048,4096},
        {5,60,30,4096,4096},
        {6,30,30,4096,8192},
        {7,30,20,8192,8192},
        {8,20,20,8192,16384},
        {9,20,14,16384,16384},
        {10,14,14,16384,40960},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureAutoPLineInfo =
{
    AETABLE_CAPTURE_AUTO,
    90,
    -30,
    {
        {1,10000,30,1144,1144},
        {2,30,30,1144,4096},
        {3,30,25,4096,4096},
        {4,25,25,4096,8192},
        {5,25,20,8192,8192},
        {6,20,20,8192,16384},
        {7,20,14,16384,16384},
        {8,14,14,16384,40960},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideoAutoPLineInfo =
{
    AETABLE_VIDEO_AUTO,
    90,
    -30,
    {
        {1,10000,60,1144,1144},
        {2,60,60,1144,4096},
        {3,60,30,4096,4096},
        {4,30,30,4096,16384},
        {5,30,15,16384,16384},
        {6,15,15,16384,40960},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideo1AutoPLineInfo =
{
    AETABLE_VIDEO1_AUTO,
    90,
    0,
    {
        {1,10000,121,1195,1195},
        {2,121,121,1195,20480},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideo2AutoPLineInfo =
{
    AETABLE_VIDEO2_AUTO,
    90,
    -30,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom1AutoPLineInfo =
{
    AETABLE_CUSTOM1_AUTO,
    90,
    -30,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom2AutoPLineInfo =
{
    AETABLE_CUSTOM2_AUTO,
    90,
    -30,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom3AutoPLineInfo =
{
    AETABLE_CUSTOM3_AUTO,
    90,
    -30,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom4AutoPLineInfo =
{
    AETABLE_CUSTOM4_AUTO,
    90,
    -30,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECustom5AutoPLineInfo =
{
    AETABLE_CUSTOM5_AUTO,
    90,
    -30,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,3072},
        {3,60,30,3072,3072},
        {4,30,30,3072,10240},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEVideoNightPLineInfo =
{
    AETABLE_VIDEO_NIGHT,
    90,
    -10,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,12288},
        {3,30,15,12288,12288},
        {4,15,15,12288,32768},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO100PLineInfo =
{
    AETABLE_CAPTURE_ISO100,
    90,
    0,
    {
        {1,10000,5,1280,1280},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO200PLineInfo =
{
    AETABLE_CAPTURE_ISO200,
    90,
    -30,
    {
        {1,10000,2000,1280,1280},
        {2,2000,2000,1280,2460},
        {3,2000,5,2460,2460},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO400PLineInfo =
{
    AETABLE_CAPTURE_ISO400,
    90,
    -30,
    {
        {1,10000,2000,1280,1280},
        {2,2000,2000,1280,4920},
        {3,2000,5,4920,4920},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO800PLineInfo =
{
    AETABLE_CAPTURE_ISO800,
    90,
    -30,
    {
        {1,10000,2000,1280,1280},
        {2,2000,2000,1280,9840},
        {3,2000,5,9840,9840},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAECaptureISO1600PLineInfo =
{
    AETABLE_CAPTURE_ISO1600,
    90,
    -30,
    {
        {1,10000,2000,1280,1280},
        {2,2000,2000,1280,19680},
        {3,2000,5,19680,19680},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEStrobePLineInfo =
{
    AETABLE_STROBE,
    90,
    -30,
    {
        {1,10000,30,1144,1144},
        {2,30,30,1144,4096},
        {3,30,25,4096,4096},
        {4,25,25,4096,8192},
        {5,25,20,8192,8192},
        {6,20,20,8192,16384},
        {7,20,14,16384,16384},
        {8,14,14,16384,40960},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene1PLineInfo =
{
    AETABLE_SCENE_INDEX1,
    90,
    -50,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,12288},
        {3,30,15,12288,12288},
        {4,15,15,12288,32768},
        {5,15,10,32768,32768},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene2PLineInfo =
{
    AETABLE_SCENE_INDEX2,
    90,
    -30,
    {
        {1,10000,100,1195,1195},
        {2,100,100,1195,4096},
        {3,100,30,4096,4096},
        {4,30,30,4096,16384},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene3PLineInfo =
{
    AETABLE_SCENE_INDEX3,
    90,
    -30,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,2048},
        {3,30,15,2048,2048},
        {4,15,15,2048,4096},
        {5,15,10,4096,4096},
        {6,10,10,4096,12288},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene4PLineInfo =
{
    AETABLE_SCENE_INDEX4,
    90,
    -30,
    {
        {1,5,5,1706,1706},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene5PLineInfo =
{
    AETABLE_SCENE_INDEX5,
    90,
    -30,
    {
        {1,10000,30,1144,1144},
        {2,30,30,1144,4096},
        {3,30,25,4096,4096},
        {4,25,25,4096,8192},
        {5,25,20,8192,8192},
        {6,20,20,8192,16384},
        {7,20,14,16384,16384},
        {8,14,14,16384,40960},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene6PLineInfo =
{
    AETABLE_SCENE_INDEX6,
    90,
    0,
    {
        {1,10000,2000,1195,1195},
        {2,2000,2000,1195,32768},
        {3,2000,5,32768,32768},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene7PLineInfo =
{
    AETABLE_SCENE_INDEX7,
    90,
    0,
    {
        {1,10000,2000,1195,1195},
        {2,2000,2000,1195,65536},
        {3,2000,10,65536,65536},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene8PLineInfo =
{
    AETABLE_SCENE_INDEX8,
    90,
    0,
    {
        {1,10000,2000,1195,1195},
        {2,2000,2000,1195,131072},
        {3,2000,20,131072,131072},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene9PLineInfo =
{
    AETABLE_SCENE_INDEX9,
    90,
    0,
    {
        {1,10000,60,1195,1195},
        {2,60,60,1195,2048},
        {3,60,40,2048,2048},
        {4,40,40,2048,46080},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene14PLineInfo =
{
    AETABLE_SCENE_INDEX14,
    0,
    0,
    {
        {1,10000,60,1136,1136},
        {2,60,60,1136,2048},
        {3,60,50,2048,2048},
        {4,50,50,2048,5120},
        {5,50,33,5120,5120},
        {6,33,33,5120,16384},
        {7,33,25,16384,16384},
        {8,25,25,16384,22528},
        {9,25,17,22528,22528},
        {10,17,17,22528,32768},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene15PLineInfo =
{
    AETABLE_SCENE_INDEX15,
    90,
    -50,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,12288},
        {3,30,24,12288,12288},
        {4,24,24,12288,46080},
        {5,24,15,46080,46080},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene16PLineInfo =
{
    AETABLE_SCENE_INDEX16,
    90,
    -50,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,12288},
        {3,30,24,12288,12288},
        {4,24,24,12288,46080},
        {5,24,15,46080,46080},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene17PLineInfo =
{
    AETABLE_SCENE_INDEX17,
    90,
    -50,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,12288},
        {3,30,24,12288,12288},
        {4,24,24,12288,46080},
        {5,24,15,46080,46080},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAEScene18PLineInfo =
{
    AETABLE_SCENE_INDEX18,
    90,
    -50,
    {
        {1,10000,30,1195,1195},
        {2,30,30,1195,12288},
        {3,30,24,12288,12288},
        {4,24,24,12288,46080},
        {5,24,15,46080,46080},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};

static strAEPLineNumInfo g_strAENoScenePLineInfo =
{
    AETABLE_SCENE_MAX,
    90,
    0,
    {
        {1,0,0,0,0},
        {2,0,0,0,0},
        {3,0,0,0,0},
        {4,0,0,0,0},
        {5,0,0,0,0},
        {6,0,0,0,0},
        {7,0,0,0,0},
        {8,0,0,0,0},
        {9,0,0,0,0},
        {10,0,0,0,0},
        {11,0,0,0,0},
        {12,0,0,0,0},
        {13,0,0,0,0},
        {14,0,0,0,0},
        {15,0,0,0,0},
    }
};
static strAEPLineInfomation g_strAEPlineInfo =
{
    MTRUE,   // FALSE mean the sampling
    {
    // PLINE Info
        g_strAEPreviewAutoPLineInfo,
        g_strAECaptureAutoPLineInfo,
        g_strAEVideoAutoPLineInfo,
        g_strAEVideo1AutoPLineInfo,
        g_strAEVideo2AutoPLineInfo,
        g_strAECustom1AutoPLineInfo,
        g_strAECustom2AutoPLineInfo,
        g_strAECustom3AutoPLineInfo,
        g_strAECustom4AutoPLineInfo,
        g_strAECustom5AutoPLineInfo,
        g_strAEVideoNightPLineInfo,
        g_strAECaptureISO100PLineInfo,
        g_strAECaptureISO200PLineInfo,
        g_strAECaptureISO400PLineInfo,
        g_strAECaptureISO800PLineInfo,
        g_strAECaptureISO1600PLineInfo,
        g_strAEStrobePLineInfo,
        g_strAEScene1PLineInfo,
        g_strAEScene2PLineInfo,
        g_strAEScene3PLineInfo,
        g_strAEScene4PLineInfo,
        g_strAEScene5PLineInfo,
        g_strAEScene6PLineInfo,
        g_strAEScene7PLineInfo,
        g_strAEScene8PLineInfo,
        g_strAEScene9PLineInfo,
        g_strAEScene14PLineInfo,
        g_strAEScene15PLineInfo,
        g_strAEScene16PLineInfo,
        g_strAEScene17PLineInfo,
        g_strAEScene18PLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
        g_strAENoScenePLineInfo,
},
};

static strAEPLineGainList g_strAEGainList =
{
    159,
    {
        {1024,0},
        {1044,0},
        {1055,0},
        {1075,0},
        {1085,0},
        {1106,0},
        {1116,0},
        {1137,0},
        {1147,0},
        {1167,0},
        {1188,0},
        {1198,0},
        {1219,0},
        {1239,0},
        {1249,0},
        {1270,0},
        {1280,0},
        {1300,0},
        {1311,0},
        {1331,0},
        {1341,0},
        {1362,0},
        {1382,0},
        {1393,0},
        {1413,0},
        {1423,0},
        {1444,0},
        {1454,0},
        {1475,0},
        {1495,0},
        {1505,0},
        {1526,0},
        {1536,0},
        {1556,0},
        {1567,0},
        {1587,0},
        {1608,0},
        {1618,0},
        {1638,0},
        {1649,0},
        {1669,0},
        {1679,0},
        {1700,0},
        {1710,0},
        {1720,0},
        {1751,0},
        {1761,0},
        {1782,0},
        {1792,0},
        {1812,0},
        {1823,0},
        {1843,0},
        {1864,0},
        {1874,0},
        {1884,0},
        {1905,0},
        {1925,0},
        {1956,0},
        {1966,0},
        {1987,0},
        {1997,0},
        {2017,0},
        {2028,0},
        {2048,0},
        {2068,0},
        {2079,0},
        {2099,0},
        {2109,0},
        {2130,0},
        {2150,0},
        {2181,0},
        {2202,0},
        {2222,0},
        {2243,0},
        {2263,0},
        {2284,0},
        {2304,0},
        {2324,0},
        {2345,0},
        {2365,0},
        {2386,0},
        {2406,0},
        {2427,0},
        {2447,0},
        {2478,0},
        {2499,0},
        {2519,0},
        {2550,0},
        {2570,0},
        {2591,0},
        {2621,0},
        {2652,0},
        {2673,0},
        {2703,0},
        {2734,0},
        {2755,0},
        {2785,0},
        {2816,0},
        {2847,0},
        {2877,0},
        {2908,0},
        {2949,0},
        {2980,0},
        {3011,0},
        {3052,0},
        {3082,0},
        {3123,0},
        {3154,0},
        {3195,0},
        {3236,0},
        {3277,0},
        {3318,0},
        {3359,0},
        {3400,0},
        {3451,0},
        {3492,0},
        {3543,0},
        {3594,0},
        {3645,0},
        {3697,0},
        {3748,0},
        {3799,0},
        {3850,0},
        {3912,0},
        {3973,0},
        {4035,0},
        {4096,0},
        {4157,0},
        {4229,0},
        {4301,0},
        {4372,0},
        {4444,0},
        {4516,0},
        {4598,0},
        {4680,0},
        {4762,0},
        {4854,0},
        {4946,0},
        {5038,0},
        {5140,0},
        {5243,0},
        {5345,0},
        {5458,0},
        {5581,0},
        {5704,0},
        {5827,0},
        {5960,0},
        {6093,0},
        {6246,0},
        {6390,0},
        {6554,0},
        {6717,0},
        {6902,0},
        {7086,0},
        {7281,0},
        {7485,0},
        {7711,0},
        {7946,0},
        {8192,0},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
        {0,100},
    }
};

static AE_PLINETABLE_T g_PlineTableMapping =
{
    g_AEScenePLineMapping,
    g_strAEPlineTable,
    g_strAEPlineInfo,
    g_strAEGainList
};
#endif

#if 0 //Save the P-line info to file for debug
MinGain,1144
MaxGain,16384
MiniISOGain,100
GainStepUnitInTotalRange,128
PreviewExposureLineUnit,15651
PreviewMaxFrameRate,30
VideoExposureLineUnit,10434
VideoMaxFrameRate,30
VideoToPreviewSensitivityRatio,1024
CaptureExposureLineUnit,10434
CaptureMaxFrameRate,30
CaptureToPreviewSensitivityRatio,1024
Video1ExposureLineUnit,10434
Video1MaxFrameRate,120
Video1ToPreviewSensitivityRatio,1024
Video2ExposureLineUnit,15651
Video2MaxFrameRate,30
Video2ToPreviewSensitivityRatio,1024
Custom1ExposureLineUnit,19770
Custom1MaxFrameRate,30
Custom1ToPreviewSensitivityRatio,1024
Custom2ExposureLineUnit,19770
Custom2MaxFrameRate,30
Custom2ToPreviewSensitivityRatio,1024
Custom3ExposureLineUnit,19770
Custom3MaxFrameRate,30
Custom3ToPreviewSensitivityRatio,1024
Custom4ExposureLineUnit,19770
Custom4MaxFrameRate,30
Custom4ToPreviewSensitivityRatio,1024
Custom5ExposureLineUnit,19770
Custom5MaxFrameRate,30
Custom5ToPreviewSensitivityRatio,1024
FocusLength,350
Fno,22

// Preview table -- Use preview sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_RPEVIEW_AUTO
90,-50
1,10000,120,1144,1144
2,120,120,1144,2048
3,120,60,2048,2048
4,60,60,2048,4096
5,60,30,4096,4096
6,30,30,4096,8192
7,30,20,8192,8192
8,20,20,8192,16384
9,20,14,16384,16384
10,14,14,16384,40960
AETABLE_END

// Capture table -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_AUTO
90,-30
1,10000,30,1144,1144
2,30,30,1144,4096
3,30,25,4096,4096
4,25,25,4096,8192
5,25,20,8192,8192
6,20,20,8192,16384
7,20,14,16384,16384
8,14,14,16384,40960
AETABLE_END

// Video table -- Use video sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_AUTO
90,-30
1,10000,60,1144,1144
2,60,60,1144,4096
3,60,30,4096,4096
4,30,30,4096,16384
5,30,15,16384,16384
6,15,15,16384,40960
AETABLE_END

// Video1 table -- Use video1 sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO1_AUTO
90,0
1,10000,121,1195,1195
2,121,121,1195,20480
AETABLE_END

// Video2 table -- Use video2 sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO2_AUTO
90,-30
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom1 table -- Use custom1 sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM1_AUTO
90,-30
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom2 table -- Use custom2 sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM2_AUTO
90,-30
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom3 table -- Use custom3 sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM3_AUTO
90,-30
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom4 table -- Use custom4 sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM4_AUTO
90,-30
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Custom5 table -- Use custom5 sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CUSTOM5_AUTO
90,-30
1,10000,60,1195,1195
2,60,60,1195,3072
3,60,30,3072,3072
4,30,30,3072,10240
AETABLE_END

// Video Night table -- Use video sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_VIDEO_NIGHT
90,-10
1,10000,30,1195,1195
2,30,30,1195,12288
3,30,15,12288,12288
4,15,15,12288,32768
AETABLE_END

// Capture ISO100 -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO100
90,0
1,10000,5,1280,1280
AETABLE_END

// Capture ISO200 -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO200
90,-30
1,10000,2000,1280,1280
2,2000,2000,1280,2460
3,2000,5,2460,2460
AETABLE_END

// Capture ISO400 -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO400
90,-30
1,10000,2000,1280,1280
2,2000,2000,1280,4920
3,2000,5,4920,4920
AETABLE_END

// Capture ISO800 -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO800
90,-30
1,10000,2000,1280,1280
2,2000,2000,1280,9840
3,2000,5,9840,9840
AETABLE_END

// Capture ISO1600 -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_CAPTURE_ISO1600
90,-30
1,10000,2000,1280,1280
2,2000,2000,1280,19680
3,2000,5,19680,19680
AETABLE_END

// Strobe -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_STROBE
90,-30
1,10000,30,1144,1144
2,30,30,1144,4096
3,30,25,4096,4096
4,25,25,4096,8192
5,25,20,8192,8192
6,20,20,8192,16384
7,20,14,16384,16384
8,14,14,16384,40960
AETABLE_END

// Table1 PLine -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX1
90,-50
1,10000,30,1195,1195
2,30,30,1195,12288
3,30,15,12288,12288
4,15,15,12288,32768
5,15,10,32768,32768
AETABLE_END

// Table2 PLine -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX2
90,-30
1,10000,100,1195,1195
2,100,100,1195,4096
3,100,30,4096,4096
4,30,30,4096,16384
AETABLE_END

// Table3 PLine -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX3
90,-30
1,10000,30,1195,1195
2,30,30,1195,2048
3,30,15,2048,2048
4,15,15,2048,4096
5,15,10,4096,4096
6,10,10,4096,12288
AETABLE_END

// Table4 PLine -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX4
90,-30
1,5,5,1706,1706
AETABLE_END

// Table5 PLine -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX5
90,-30
1,10000,30,1144,1144
2,30,30,1144,4096
3,30,25,4096,4096
4,25,25,4096,8192
5,25,20,8192,8192
6,20,20,8192,16384
7,20,14,16384,16384
8,14,14,16384,40960
AETABLE_END

// Table6 PLine -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX6
90,0
1,10000,2000,1195,1195
2,2000,2000,1195,32768
3,2000,5,32768,32768
AETABLE_END

// Table7 PLine -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX7
90,0
1,10000,2000,1195,1195
2,2000,2000,1195,65536
3,2000,10,65536,65536
AETABLE_END

// Table8 PLine -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX8
90,0
1,10000,2000,1195,1195
2,2000,2000,1195,131072
3,2000,20,131072,131072
AETABLE_END

// Table9 PLine -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX9
90,0
1,10000,60,1195,1195
2,60,60,1195,2048
3,60,40,2048,2048
4,40,40,2048,46080
AETABLE_END

// Table14 PLine -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX14
0,0
1,10000,60,1136,1136
2,60,60,1136,2048
3,60,50,2048,2048
4,50,50,2048,5120
5,50,33,5120,5120
6,33,33,5120,16384
7,33,25,16384,16384
8,25,25,16384,22528
9,25,17,22528,22528
10,17,17,22528,32768
AETABLE_END

// Table15 PLine -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX15
90,-50
1,10000,30,1195,1195
2,30,30,1195,12288
3,30,24,12288,12288
4,24,24,12288,46080
5,24,15,46080,46080
AETABLE_END

// Table16 PLine -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX16
90,-50
1,10000,30,1195,1195
2,30,30,1195,12288
3,30,24,12288,12288
4,24,24,12288,46080
5,24,15,46080,46080
AETABLE_END

// Table17 PLine -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX17
90,-50
1,10000,30,1195,1195
2,30,30,1195,12288
3,30,24,12288,12288
4,24,24,12288,46080
5,24,15,46080,46080
AETABLE_END

// Table18 PLine -- Use capture sensor setting
// Index MiniExp1/T MaxExp1/T MinGain MaxGain
AETABLE_SCENE_INDEX18
90,-50
1,10000,30,1195,1195
2,30,30,1195,12288
3,30,24,12288,12288
4,24,24,12288,46080
5,24,15,46080,46080
AETABLE_END

AE_SCENE_AUTO, AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_AUTO, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX5
AE_SCENE_NIGHT, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1
AE_SCENE_ACTION, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2
AE_SCENE_BEACH, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3
AE_SCENE_CANDLELIGHT, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1
AE_SCENE_FIREWORKS, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX4, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX4
AE_SCENE_LANDSCAPE, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3
AE_SCENE_PORTRAIT, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2
AE_SCENE_NIGHT_PORTRAIT, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_NIGHT, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1
AE_SCENE_PARTY, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1
AE_SCENE_SNOW, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3
AE_SCENE_SPORTS, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2
AE_SCENE_STEADYPHOTO, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2
AE_SCENE_SUNSET, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX3, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX3
AE_SCENE_THEATRE, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX1, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX1
AE_SCENE_ISO_ANTI_SHAKE, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX2, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX2
AE_SCENE_ISO100, AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO100, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO100
AE_SCENE_ISO200, AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO200, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO200
AE_SCENE_ISO400, AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO400, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO400
AE_SCENE_ISO800, AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO800, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO800
AE_SCENE_ISO1600, AETABLE_RPEVIEW_AUTO, AETABLE_CAPTURE_ISO1600, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_SCENE_INDEX6, AETABLE_SCENE_INDEX7, AETABLE_SCENE_INDEX8, AETABLE_SCENE_INDEX9, AETABLE_CUSTOM5_AUTO, AETABLE_CAPTURE_ISO1600
AE_SCENE_ISO3200, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX6, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX6
AE_SCENE_ISO6400, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX7, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX7
AE_SCENE_ISO12800, AETABLE_RPEVIEW_AUTO, AETABLE_SCENE_INDEX8, AETABLE_VIDEO_AUTO, AETABLE_VIDEO1_AUTO, AETABLE_VIDEO2_AUTO, AETABLE_CUSTOM1_AUTO, AETABLE_CUSTOM2_AUTO, AETABLE_CUSTOM3_AUTO, AETABLE_CUSTOM4_AUTO, AETABLE_CUSTOM5_AUTO, AETABLE_SCENE_INDEX8
#endif
