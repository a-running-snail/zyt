/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <seos.h>
#include <util.h>
#include <sensors.h>
#include <plat/inc/rtc.h>
#include <contexthub_core.h>
#include <mt_gpt.h>
#include <timer.h>
#include "eint.h"
#include "stk3321.h"
#include "alsps.h"

enum stk3321State {
    STATE_SAMPLE_ALS = CHIP_SAMPLING_ALS,
    STATE_SAMPLE_ALS_DONE = CHIP_SAMPLING_ALS_DONE,
    STATE_SAMPLE_PS = CHIP_SAMPLING_PS,
    STATE_SAMPLE_PS_DONE = CHIP_SAMPLING_PS_DONE,
    STATE_ALS_ENABLE = CHIP_ALS_ENABLE,
    STATE_ALS_ENABLE_DONE = CHIP_ALS_ENABLE_DONE,
    STATE_ALS_DISABLE = CHIP_ALS_DISABLE,
    STATE_ALS_DISABLE_DONE = CHIP_ALS_DISABLE_DONE,
    STATE_ALS_RATECHG = CHIP_ALS_RATECHG,
    STATE_ALS_RATECHG_DONE = CHIP_ALS_RATECHG_DONE,
    STATE_ALS_CALI = CHIP_ALS_CALI,
    STATE_ALS_CALI_DONE = CHIP_ALS_CALI_DONE,
    STATE_ALS_CFG = CHIP_ALS_CFG,
    STATE_ALS_CFG_DONE = CHIP_ALS_CFG_DONE,
    STATE_PS_ENABLE = CHIP_PS_ENABLE,
    STATE_PS_ENABLE_DONE = CHIP_PS_ENABLE_DONE,
    STATE_PS_DISABLE = CHIP_PS_DISABLE,
    STATE_PS_DISABLE_DONE = CHIP_PS_DISABLE_DONE,
    STATE_PS_RATECHG = CHIP_PS_RATECHG,
    STATE_PS_RATECHG_DONE = CHIP_PS_RATECHG_DONE,
    STATE_PS_CALI = CHIP_PS_CALI,
    STATE_PS_CALI_DONE = CHIP_PS_CALI_DONE,
    STATE_PS_CFG = CHIP_PS_CFG,
    STATE_PS_CFG_DONE = CHIP_PS_CFG_DONE,
    STATE_PS_TUNE_FAE,
    STATE_PS_TUNE_FAE_DONE,
    STATE_INIT_DONE = CHIP_INIT_DONE,
    STATE_IDEL = CHIP_IDLE,
    STATE_RESET = CHIP_RESET,
    /* Alsps sample */
    STATE_GET_ALS_DATA,
    STATE_ALS_SET_DEBOUNCE,
    STATE_GET_PS_FLG,
    STATE_GET_PS_RAW_DATA,
    STATE_PS_SET_DEBOUNCE,
    /* Power on & off */
    STATE_GET_ALSPS_STATE,
    STATE_ALS_POWER_ON,
    STATE_ALS_POWER_OFF,
    STATE_PS_POWER_ON,
    STATE_PS_POWER_OFF,
    STATE_PS_UNMASK_EINT,
    STATE_CLR_INT,
    STATE_EN_EINT,
    /* Init state */
    STATE_SET_SW_RST,
    STATE_SET_ALSPS_CTRL,
    STATE_SET_WAIT,
    STATE_SET_PS_THDH,
    STATE_SET_PS_THDL,
    STATE_SET_ALSCTRL2,
	STATE_SET_INTELLI_WAIT,
	STATE_SET_BGIR,
	STATE_SET_PD,
	STATE_SET_AGAIN,
	STATE_SET_SPEC1,
    STATE_SETUP_EINT,
    STATE_CORE,
	STATE_PS_POWER_ON_SET_PS_THD,
	STATE_PS_POWER_ON_SET_INT,
	STATE_PS_POWER_OFF_CLR_INT,
	STATE_GET_PS_FLG_RAW,
	STATE_GET_STATE_REG,
	STATE_PS_POWER_ON_PREPARE,
	STATE_PS_TUNE_FAE_STEP1,
	STATE_PS_TUNE_FAE_STEP2,
	STATE_PS_TUNE_FAE_STEP3,
	STATE_PS_TUNE_FAE_STEP4,
	STATE_PS_TUNE_FAE_STEP5,
	STATE_PS_TUNE_FAE_STEP6,
	STATE_PS_TUNE_FAE_STEP7,
	STATE_PS_TUNE_FAE_STEP8,
	STATE_PS_TUNE_FAE_STEP9,	
	STATE_PS_TUNE_FAE_STEP10,
	STATE_PS_TUNE_FAE_STEP11,
	STATE_PS_TUNE_FAE_STEP12,
	STATE_PS_TUNE_FAE_STEP13,

    
    STATE_GET_ALS_DATA02_PRE,
    STATE_GET_ALS_DATA02,    
    STATE_GET_ALS_DATA03_PRE,
    STATE_GET_ALS_DATA03,      
    STATE_GET_ALS_ALLREG_PRE,
    STATE_GET_ALS_ALLREG,

    STATE_GET_ALS_CONFIG_PRE,
    STATE_SET_ALS_CONFIG01, 
    STATE_SET_ALS_CONFIG02,
    STATE_SET_ALS_CONFIG03,
    STATE_SET_ALS_CONFIG04
};

#define I2C_SPEED                       400000
#define MAX_I2C_PER_PACKET          8
#define ICM20645_DATA_LEN           6
#define MAX_RXBUF                   512
#define MAX_TXBUF (MAX_RXBUF / MAX_I2C_PER_PACKET)

//PS Auto Cali Config
#define STK_H_HAND  1000
#define STK_H_HT    550
#define STK_H_LT    500

#define STK_HT_N_CT 250
#define STK_LT_N_CT 230
#define STK_PS_DIFF	100

#define STK_ALS_CONVERSION  600

static struct stk3321Task {
    /* txBuf for i2c operation, fill register and fill value */
    bool alsPowerOn;
    bool psPowerOn;
    unsigned int    als_debounce_time;
    unsigned int    als_debounce_on;    /*indicates if the debounce is on*/
    portTickType    als_debounce_end;
    unsigned int    ps_debounce_time;
    unsigned int    ps_debounce_on;     /*indicates if the debounce is on*/
    portTickType    ps_debounce_end;
    unsigned int    ps_suspend;
    uint8_t txBuf[MAX_TXBUF];
    /* rxBuf for i2c operation, receive rawdata */
    uint8_t rxBuf[MAX_RXBUF];
    uint8_t deviceId;
    /* data for factory */
    struct alsps_hw *hw;
    uint8_t i2c_addr;
    uint8_t slave_i2c_addr;
    struct transferDataInfo dataInfo;
    struct AlsPsData data[2];
    int32_t psCali;
    int32_t alsCali;
    uint32_t    als_raw_data;
    uint32_t    prox_raw_data;
    uint32_t    ps_threshold_high;
    uint32_t    ps_threshold_low;
    uint32_t    als_threshold_high;
    uint32_t    als_threshold_low;
    uint8_t     ledctrl_val;
    uint8_t     state_val;
    uint8_t     als_ctrl_val;
    uint8_t     ps_ctrl_val;
    uint16_t    ir_code;
    uint16_t    last_ir_code;

	uint32_t	psoff_data;
	uint32_t	psi;
	uint32_t	psa;
	uint8_t		flag_reg;
	uint32_t	psi_set;
	uint16_t    prox_state;
	bool		ps_thd_update;
	
	uint32_t 	debug_count;
	bool		start_tune;
	bool 		first_int_after_en;
	bool 		first_int_reset_thd;
    bool        ps_int_flag;
/* begin, prize-lifenfen-20181126, add for sensorhub hardware info */
#ifdef CFG_SENSORHUB_PRIZE_HARDWARE_INFO
	struct sensor_hardware_info_t dev_hardware_info;
#endif
/* end, prize-lifenfen-20181126, add for sensorhub hardware info */
/* start, prize-pengguangyi-20190307, modify for light sensor */
    uint32_t 	als_debug_count;
    bool        is_als_init;
} mTask;

static struct stk3321Task *stk3321DebugPoint;
static int getLuxFromAlsData(void);

/*static int check_timeout(portTickType *end_tick) 
{
    return xTaskGetTickCount() > *end_tick ? 1 : 0;
}*/

static void cal_end_time(unsigned int ms, portTickType *end_tick) {
    *end_tick = xTaskGetTickCount() +
                (portTickType)(ms / (1000 / portTICK_RATE_MS));
}

static int stk3321_read_als_data(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    if (rxTransferDataInfo(&mTask.dataInfo, inBuf, inSize, elemInSize, outBuf, outSize, elemOutSize)) {
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, ERROR_EVT);
        osLog(LOG_ERROR, "als rx error\n");
        return -1;
    }
    mTask.als_debug_count++;
	if(mTask.als_debug_count > 50000){
		mTask.als_debug_count = 0;
	}
	//osLog(LOG_ERROR, "stk3321_read_als_data...");  
    mTask.txBuf[0] = STK_DATA1_ALS_REG;
    return i2cMasterTxRx(mTask.hw->i2c_num, mTask.slave_i2c_addr, mTask.txBuf, 1,
                         mTask.rxBuf, 4, i2cCallBack,
                         next_state);
}

static int stk3321_get_als_value(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    uint16_t r_data;                                
    mTask.als_raw_data = ((mTask.rxBuf[0] << 8) | mTask.rxBuf[1]);
    r_data = ((mTask.rxBuf[2] << 8) | mTask.rxBuf[3]);

    mTask.data[0].als_data = getLuxFromAlsData();
    mTask.data[0].sensType = SENS_TYPE_ALS;
    
	if((mTask.als_debug_count%10)==3){
		osLog(LOG_INFO, "v2000_get_als_value: als=%d, lux=%d, r=%d\n", mTask.als_raw_data, mTask.data[0].als_data, r_data); 
	}        

    txTransferDataInfo(&mTask.dataInfo, 1, &mTask.data[0]);
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}


static int v2000_get_als02_pre(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) 
{
    //APS_ALOGF(); 
    mTask.txBuf[0] = 0x17;
    return i2cMasterTxRx(mTask.hw->i2c_num, mTask.slave_i2c_addr, mTask.txBuf, 1,
                         mTask.rxBuf, 4, i2cCallBack,
                         next_state);
}

static int v2000_get_als02(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    uint16_t g_data, b_data; 

    g_data = ((mTask.rxBuf[0] << 8) | mTask.rxBuf[1]);
	b_data = ((mTask.rxBuf[2] << 8) | mTask.rxBuf[3]);
    if((mTask.als_debug_count%10)==3){
        osLog(LOG_ERROR, "v2000_get_als02: g=%d, b=%d\n", g_data, b_data); 
    }
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int v2000_get_als03_pre(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) 
{
    //APS_ALOGF(); 
    mTask.txBuf[0] = 0x1B;
    return i2cMasterTxRx(mTask.hw->i2c_num, mTask.slave_i2c_addr, mTask.txBuf, 1,
                         mTask.rxBuf, 2, i2cCallBack,
                         next_state);
}

static int v2000_get_als03(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    uint16_t c_data; 

    c_data = ((mTask.rxBuf[0] << 8) | mTask.rxBuf[1]);
    if((mTask.als_debug_count%10)==3){
        osLog(LOG_ERROR, "v2000_get_als02: c=%d\n", c_data); 
    }
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int v2000_get_allreg_pre(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) 
{
    //APS_ALOGF(); 

    if((mTask.als_debug_count%50) == 7){
		mTask.txBuf[0] = STK_STATE_REG;
		
	    return i2cMasterTxRx(mTask.hw->i2c_num, mTask.slave_i2c_addr, mTask.txBuf, 1,
	                         mTask.rxBuf, 6, i2cCallBack,
	                         next_state);
    }else{
    	sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    	return 0;    
    }

}

static int v2000_get_allreg(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
	if((mTask.als_debug_count%50) == 7){
		osLog(LOG_ERROR,"v2000 1: 0x%x, 0x%x, 0x%x\n", mTask.rxBuf[0], mTask.rxBuf[1], mTask.rxBuf[2]);	
		osLog(LOG_ERROR,"v2000 2: 0x%x, 0x%x, 0x%x\n", mTask.rxBuf[3], mTask.rxBuf[4], mTask.rxBuf[5]);	
	}
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}
/* end, prize-pengguangyi-20190307, modify for light sensor */
static int getLuxFromAlsData(void) {
#if 1
	return (int)((mTask.als_raw_data * STK_ALS_CONVERSION) / 1000);
#else
    int idx;
    int invalid = 0;
    int als_level_num, als_value_num;

    als_level_num = sizeof(mTask.hw->als_level) / sizeof(mTask.hw->als_level[0]);
    als_value_num = sizeof(mTask.hw->als_value) / sizeof(mTask.hw->als_value[0]);

    for (idx = 0; idx < als_level_num; idx++) {
        if (mTask.als_raw_data < mTask.hw->als_level[idx]) {
            break;
        }
    }

    if (idx >= als_value_num) {
        idx = als_value_num - 1;
    }

    if (1 == mTask.als_debounce_on) {
        if (check_timeout(&mTask.als_debounce_end)) {
            mTask.als_debounce_on = 0;
        }

        if (1 == mTask.als_debounce_on) {
            invalid = 1;
        }
    }

    if (!invalid) {
        int level_high = mTask.hw->als_level[idx];
        int level_low = (idx > 0) ? mTask.hw->als_level[idx - 1] : 0;
        int level_diff = level_high - level_low;
        int value_high = mTask.hw->als_value[idx];
        int value_low = (idx > 0) ? mTask.hw->als_value[idx - 1] : 0;
        int value_diff = value_high - value_low;
        int value = 0;

        if ((level_low >= level_high) || (value_low >= value_high))
            value = value_low;
        else
            value = (level_diff * value_low + (mTask.als_raw_data - level_low) * value_diff + ((
                         level_diff + 1) >> 1)) / level_diff;

        return value;
    }

    return -1;
#endif
}


static void alsGetData(void *sample) {
    struct SingleAxisDataPoint *singleSample = (struct SingleAxisDataPoint *)sample;
    singleSample->idata = getLuxFromAlsData();
}

static int stk3321_read_ps(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                          void *inBuf, uint8_t inSize, uint8_t elemInSize,
                          void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    if(mTask.psPowerOn == false){
        osLog(LOG_ERROR, "stk3321_read_ps power off"); 
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }
    if (rxTransferDataInfo(&mTask.dataInfo, inBuf, inSize, elemInSize, outBuf, outSize, elemOutSize)) {
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, ERROR_EVT);
        osLog(LOG_ERROR, "stk3321 ps, rx dataInfo error\n");
        return -1;
    }
	osLog(LOG_ERROR, "stk3321_read_ps..."); 

    mTask.txBuf[0] = STK_DATA1_PS_REG;

    return i2cMasterTxRx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 1,
                         mTask.rxBuf, 2, i2cCallBack,
                         next_state);	
}


static int stk3321_read_ps_flag(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                          void *inBuf, uint8_t inSize, uint8_t elemInSize,
                          void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }
	mTask.prox_raw_data = (mTask.rxBuf[0] << 8) | mTask.rxBuf[1];
	osLog(LOG_INFO, "stk read: ps=%d\n", mTask.prox_raw_data);
	
    mTask.txBuf[0] = STK_FLAG_REG;
    return i2cMasterTxRx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 1,
                         mTask.rxBuf, 1, i2cCallBack,
                         next_state);
}

static int stk3321_get_ps_status(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    uint32_t    ps_threshold_high;
    uint32_t    ps_threshold_low;

    int ps_flag = mTask.rxBuf[0] & 0x01;
	
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }
    mTask.ps_int_flag = (mTask.rxBuf[0] & STK_FLG_PSINT_MASK) ? true:false;

    if(mTask.ps_int_flag == true){
	if(mTask.first_int_after_en == true){
		ps_threshold_high = (mTask.ps_threshold_high - STK_HT_N_CT) + STK_H_HT;
		ps_threshold_low = (mTask.ps_threshold_low - STK_HT_N_CT) + STK_H_LT;	
		if(mTask.prox_raw_data > ps_threshold_high){
			mTask.data[0].prox_state = PROX_STATE_NEAR; /* far */
			mTask.prox_state = PROX_STATE_NEAR;
			mTask.data[0].prox_data = 0; /* near state distance is 0cm */

			osLog(LOG_ERROR, "stk first int near ht=%d, lt=%d, raw=%d\n", ps_threshold_high, ps_threshold_low, mTask.prox_raw_data);
		}else if(mTask.prox_raw_data < ps_threshold_low){
			mTask.data[0].prox_state = PROX_STATE_FAR; /* far */
			mTask.prox_state = PROX_STATE_FAR;
			mTask.data[0].prox_data = 1; /* far state distance is 1cm */
			
			osLog(LOG_ERROR, "stk first int far ht=%d, lt=%d, raw=%d\n", ps_threshold_high, ps_threshold_low, mTask.prox_raw_data);

		}else{
			mTask.data[0].prox_state = PROX_STATE_FAR; /* far */
			mTask.prox_state = PROX_STATE_FAR;
			mTask.data[0].prox_data = 1; /* far state distance is 1cm */

			osLog(LOG_ERROR, "stk first int default far ht=%d, lt=%d, raw=%d\n", ps_threshold_high, ps_threshold_low, mTask.prox_raw_data);
		}
		
		mTask.first_int_after_en = false;
		mTask.first_int_reset_thd = true;
		
	}else{
	    if (ps_flag == 1) { /* 1 is far */
	        mTask.data[0].prox_state = PROX_STATE_FAR; /* far */
			mTask.prox_state = PROX_STATE_FAR;
	        mTask.data[0].prox_data = 1; /* far state distance is 1cm */
	    } else if (ps_flag == 0) {
	        mTask.data[0].prox_state = PROX_STATE_NEAR; /* near */
			mTask.prox_state = PROX_STATE_NEAR;
	        mTask.data[0].prox_data = 0; /* near state distance is 0cm */
	    } else{
            osLog(LOG_ERROR, "stk get_ps_status error status: %d\n", mTask.rxBuf[1]);
            sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
	        return -1;
            }
        }
	}
    mTask.txBuf[0] = STK_DATA1_PS_REG;

	osLog(LOG_INFO, "stk get flag=0x%x, dis=%d, int flag=%d\n", mTask.rxBuf[0], mTask.data[0].prox_state, mTask.ps_int_flag);
	
    return i2cMasterTxRx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 1,
                         mTask.rxBuf, 2, i2cCallBack,
                         next_state);
}

static int stk3321_get_ps_raw_data(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                  void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                  void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }
    mTask.prox_raw_data = (mTask.rxBuf[0] << 8) | mTask.rxBuf[1];
	osLog(LOG_ERROR, "stk get ps=%d, cali=%d\n", mTask.prox_raw_data, mTask.psCali);
    if (mTask.prox_raw_data < mTask.psCali)
        mTask.prox_raw_data = 0;
    mTask.prox_raw_data -= mTask.psCali;

    mTask.txBuf[0] = STK_FLAG_REG;
    return i2cMasterTxRx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 1,
                       mTask.rxBuf, 1, i2cCallBack,
                       next_state);
}

static int stk3321_clr_int(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                  void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                  void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }
    if(mTask.ps_int_flag == true){                                
    osLog(LOG_ERROR, "stk3321_clr_int...");                              
    mTask.txBuf[0] = STK_FLAG_REG;
    mTask.txBuf[1] = mTask.rxBuf[0] & ~(STK_FLG_PSINT_MASK | STK_FLG_ALSINT_MASK);
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
    }
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int stk3321_enable_eint(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                  void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                  void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    /* prize modified by lifenfen, add debug info, 20190326 begin */
    osLog(LOG_INFO, "stk3321_enable_eint psPowerOn = %d ps_int_flag=%d mTask.data[0].prox_state=%d\n", mTask.psPowerOn, mTask.ps_int_flag, mTask.data[0].prox_state);
    /* prize modified by lifenfen, add debug info, 20190326 end */
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }
    if(mTask.ps_int_flag == true){                                   
	 osLog(LOG_ERROR, "stk3321_enable_eint...\n");
         mt_eint_unmask(mTask.hw->eint_num);
         mTask.data[0].sensType = SENS_TYPE_PROX;
         mTask.ps_int_flag = false;
         txTransferDataInfo(&mTask.dataInfo, 1, &mTask.data[0]);
    }
         sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
         return 0;
}

static void psGetData(void *sample) {
    char txBuf[1];
    static char rxBuf[2];
    struct TripleAxisDataPoint *tripleSample = (struct TripleAxisDataPoint *)sample;
    tripleSample->ix = mTask.prox_raw_data;
    tripleSample->iy = (mTask.data[0].prox_state == PROX_STATE_NEAR ? 0 : 1);

    void get_ps_data(void *cookie, size_t tx, size_t rx, int err) {
        char *rxBuf = cookie;
        if (err == 0) {
            mTask.prox_raw_data = (rxBuf[0] << 8) | rxBuf[1];
            if (mTask.prox_raw_data < mTask.psCali)
                mTask.prox_raw_data = 0;
            mTask.prox_raw_data -= mTask.psCali;
        } else
            osLog(LOG_INFO, "stk3321: read ps data i2c error (%d)\n", err);
    }
    txBuf[0] = STK_DATA1_PS_REG;
    i2cMasterTxRx(mTask.hw->i2c_num, mTask.i2c_addr, txBuf, 1,
                  rxBuf, 2, get_ps_data, rxBuf);
}

static int stk3321_ps_set_threshold(uint32_t threshold_high, uint32_t threshold_low) {
    char txBuf[6];

    /* when user don't do ps cali, AP will set 0 to here,
     * so filter it and still use alsps cust setting */
    //if (threshold_high == 0 && threshold_low == 0)
    //    return -1;
    txBuf[0] = STK_THDH1_PS_REG;
    txBuf[1] = (uint8_t)((threshold_high & 0xFF00) >> 8);
    txBuf[2] = (uint8_t)(threshold_high & 0xFF);
    txBuf[3] = (uint8_t)((threshold_low & 0xFF00) >> 8);
    txBuf[4] = (uint8_t)(threshold_low & 0xFF);
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, &txBuf[0], 5, NULL, 0);
}

static void psGetCalibration(int32_t *cali, int32_t size) {
    cali[0] = mTask.psCali;
}

static void psSetCalibration(int32_t *cali, int32_t size) {
    mTask.psCali = cali[0];
    stk3321_ps_set_threshold(mTask.ps_threshold_high + mTask.psCali,
                            mTask.ps_threshold_low + mTask.psCali);
}

static void psGetThreshold(uint32_t *threshold_high, uint32_t *threshold_low) {
    *threshold_high = mTask.ps_threshold_high;
    *threshold_low = mTask.ps_threshold_low;
    osLog(LOG_INFO, "stk get ==>threshold_high:%ld threshold_low:%ld \n",  *threshold_high, *threshold_low);
}

static void psSetThreshold(uint32_t threshold_high, uint32_t threshold_low) {
    osLog(LOG_INFO, "stk set==>threshold_high:%ld threshold_low:%ld \n", threshold_high, threshold_low);
    mTask.ps_threshold_high = threshold_high;
    mTask.ps_threshold_low = threshold_low;
    stk3321_ps_set_threshold(mTask.ps_threshold_high, mTask.ps_threshold_low);
}

static void psGetSensorInfo(struct sensorInfo_t *data)
{
    strncpy(data->name, "stk3321_p", sizeof(data->name));
}

static void alsGetSensorInfo(struct sensorInfo_t *data)
{
    strncpy(data->name, "stk3321_l", sizeof(data->name));
}

/* begin, prize-lifenfen-20181126, add for sensorhub hardware info */
#ifdef CFG_SENSORHUB_PRIZE_HARDWARE_INFO
static void psGetSensorHardwareInfo(struct sensor_hardware_info_t *data)
{
	memcpy(data, &mTask.dev_hardware_info, sizeof(struct sensor_hardware_info_t));
	osLog(LOG_ERROR, "psGetSensorHardwareInfo chip:%s id:%s more:%s vendor:%s \n", data->chip, data->id, data->more, data->vendor);
}

static void alsGetSensorHardwareInfo(struct sensor_hardware_info_t *data)
{
	memcpy(data, &mTask.dev_hardware_info, sizeof(struct sensor_hardware_info_t));
	osLog(LOG_ERROR, "alsGetSensorHardwareInfo chip:%s id:%s more:%s vendor:%s \n", data->chip, data->id, data->more, data->vendor);
}
#endif
/* end, prize-lifenfen-20181126, add for sensorhub hardware info */

static int stk3321_mask_eint(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                         void *inBuf, uint8_t inSize, uint8_t elemInSize,
                         void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    mt_eint_mask(mTask.hw->eint_num);
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int stk3321_unmask_eint(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                         void *inBuf, uint8_t inSize, uint8_t elemInSize,
                         void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    mt_eint_unmask(mTask.hw->eint_num);
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int stk3321_set_als_debounce_on(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                      void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                      void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk3321_set_als_debounce_on\n");
    mTask.als_debounce_on = 1;
    cal_end_time(mTask.als_debounce_time, &mTask.als_debounce_end);
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int stk3321_set_ps_debounce_on(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                     void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                     void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk3321_set_ps_debounce_on\n");
    mTask.ps_debounce_on = 1;
    cal_end_time(mTask.ps_debounce_time, &mTask.ps_debounce_end);
    mTask.data[0].prox_state = PROX_STATE_INIT;
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int stk3321_set_als_power_on(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                   void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                   void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk als power on state=0x%x\n", mTask.rxBuf[0]);         
	mTask.alsPowerOn = true;
    mTask.als_debug_count = 0;
    mTask.is_als_init = true;
    mTask.txBuf[0] = STK_STATE_REG;
	mTask.txBuf[1] = STK_STATE_EN_ALS_MASK;
	
    return i2cMasterTx(mTask.hw->i2c_num, mTask.slave_i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}

static int stk3321_set_als_power_off(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                    void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                    void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
	osLog(LOG_INFO, "stk als power off state=0x%x\n", mTask.rxBuf[0]);     
    mTask.als_debounce_on = 0;
    mTask.txBuf[0] = STK_STATE_REG;
	mTask.txBuf[1] = 0x00;
	mTask.alsPowerOn = false;
    return i2cMasterTx(mTask.hw->i2c_num, mTask.slave_i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}

static int stk3321_als_ratechg(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                              void *inBuf, uint8_t inSize, uint8_t elemInSize,
                              void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk als retechg\n");
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int stk3321_als_cali(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                              void *inBuf, uint8_t inSize, uint8_t elemInSize,
                              void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    //int32_t alsCali[2];
    //float   alsCali_mi;

    //alsCali_mi = 0.345;
    //alsCali[0] = alsCali_mi * ALS_INCREASE_NUM_AP;
    //alsCali[1] = 0;

    //sendAlsPsCalibrationResult(SENS_TYPE_ALS, alsCali);
    osLog(LOG_INFO, "set als cali");  
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int stk3321_als_cfg(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                              void *inBuf, uint8_t inSize, uint8_t elemInSize,
                              void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    int ret = 0;
    struct alspsCaliCfgPacket caliCfgPacket;
    //double  alsCali_mi;

    ret = rxCaliCfgInfo(&caliCfgPacket, inBuf, inSize, elemInSize, outBuf, outSize, elemOutSize);

    if (ret < 0) {
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, ERROR_EVT);
        osLog(LOG_ERROR, "stk3321_als_cfg, rx inSize and elemSize error\n");
        return -1;
    }
    //alsCali_mi = (double)((float)caliCfgPacket.caliCfgData[0] / ALS_INCREASE_NUM_AP);
    //APS_ALOGD("stk3321_als_cfg: [%f]\n", alsCali_mi);
    mTask.alsCali = caliCfgPacket.caliCfgData[0];
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int stk3321_set_ps_power_on_prepare(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                  void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                  void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk ps power prestate=0x%x\n", mTask.rxBuf[0]);                                 

    mTask.txBuf[0] = STK_STATE_REG;
    mTask.txBuf[1] = mTask.rxBuf[0] | STK_STATE_EN_ALS_MASK ;
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}


static int stk3321_set_ps_power_on(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                  void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                  void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk ps power on state=0x%x\n", mTask.rxBuf[0]);                                 
	mTask.psPowerOn = true;
	mTask.ps_thd_update = false;
	mTask.psi_set = 0;
	mTask.psi = 0xffff;
	mTask.psa = 0;
	mTask.ps_thd_update = 0;/* Standby */
	mTask.debug_count = 0;
	mTask.start_tune = false;	
	mTask.prox_state = PROX_STATE_INIT;
	mTask.data[0].prox_state = PROX_STATE_INIT;
    mTask.txBuf[0] = STK_STATE_REG;
    mTask.ps_int_flag = false;
	mTask.txBuf[1] = STK_STATE_EN_PS_MASK | STK_STATE_EN_INTELL_PRST_MASK | STK_STATE_EN_WAIT_MASK;
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}

static int stk3321_set_ps_power_on_set_int(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                   void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                   void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk ps power on set int\n");
	
    mTask.txBuf[0] = STK_INTCTRL1_REG;
    mTask.txBuf[1] = 0x01;
	
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}


static int stk3321_power_on_set_ps_thd(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                  void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                  void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    
    //int ret;
    char txBuf[6];
    uint32_t    ps_threshold_high;
    uint32_t    ps_threshold_low;

	//ps_threshold_high = (mTask.ps_threshold_high - STK_HT_N_CT) + STK_H_HT;
	//ps_threshold_low = (mTask.ps_threshold_low - STK_HT_N_CT) + STK_H_LT;
	ps_threshold_high = 0x03;
	ps_threshold_low = 0x01;
	
	mTask.first_int_after_en = true;
	mTask.first_int_reset_thd = false;
	osLog(LOG_INFO, "stk ps power on set HT=%d, LT=%d\n", ps_threshold_high, ps_threshold_low);

    txBuf[0] = STK_THDH1_PS_REG;
    txBuf[1] = (uint8_t)((ps_threshold_high & 0xFF00) >> 8);
    txBuf[2] = (uint8_t)(ps_threshold_high & 0xFF);
    txBuf[3] = (uint8_t)((ps_threshold_low & 0xFF00) >> 8);
    txBuf[4] = (uint8_t)(ps_threshold_low & 0xFF);
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, &txBuf[0], 5,
                i2cCallBack, next_state);
}
								  

#define STK_VAL_THD	200

static int stk3321_compare_sun_level()
{
	int32_t lii = STK_VAL_THD;

	if((mTask.debug_count%24)==9){
		osLog(LOG_INFO, "stk psoff_data=%d, lii=%d\n", mTask.psoff_data, lii);
	}
	
	if(mTask.psoff_data > lii)	{
		return 0xFFFF;
	}
	return 0;
}


static int stk3321_get_flag_pre(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) 
{
    //APS_ALOGF(); 
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    } 

    if(mTask.ps_int_flag == true){  
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0;
    }      
    mTask.txBuf[0] = STK_FLAG_REG;
    return i2cMasterTxRx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 1,
                         mTask.rxBuf, 1, i2cCallBack,
                         next_state);
}

static int stk3321_get_flag(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
	int ps_flag;
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }
    if(mTask.ps_int_flag == true){  
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0;
    }  	

	if(mTask.prox_state == PROX_STATE_INIT){
		ps_flag = mTask.rxBuf[0] & 0x01;
	    if (ps_flag == 1) { /* 1 is far */
	        mTask.data[0].prox_state = PROX_STATE_FAR; /* far */
	        mTask.prox_state = PROX_STATE_FAR; /* far */
	    } else if (ps_flag == 0) {
	        mTask.data[0].prox_state = PROX_STATE_NEAR; /* near */
	        mTask.prox_state = PROX_STATE_NEAR; /* near */
	    } 
	}
	if((mTask.debug_count%12) == 1){
		osLog(LOG_INFO, "stk get flag=0x%x\n", mTask.rxBuf[0]);
	}
	
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}


static int stk3321_get_ps_rawdata_pre(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) 
{
    //APS_ALOGF(); 
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }

    if(mTask.ps_int_flag == true){  
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0;
    }  

    mTask.txBuf[0] = STK_DATA1_PS_REG;
    return i2cMasterTxRx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 1,
                         mTask.rxBuf, 2, i2cCallBack,
                         next_state);
}

static int stk3321_get_ps_rawdata(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }

    if(mTask.ps_int_flag == true){  
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0;
    }  
	mTask.prox_raw_data = (mTask.rxBuf[0] << 8) | mTask.rxBuf[1];
	mTask.start_tune	= true;
	//APS_ALOGD("%d", mTask.data[0].prox_data);

    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int stk3321_get_psoff_pre(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) 
{
    //APS_ALOGF(); 
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }

    if(mTask.ps_int_flag == true){  
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0;
    }      
    mTask.txBuf[0] = 0x24;
    return i2cMasterTxRx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 1,
                         mTask.rxBuf, 4, i2cCallBack,
                         next_state);
}

static int stk3321_get_psoff(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }

    if(mTask.ps_int_flag == true){  
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0;
    }  

	mTask.psoff_data = 0;
	
	mTask.psoff_data = ((mTask.rxBuf[0] << 8) | mTask.rxBuf[1]);
	mTask.psoff_data += ((mTask.rxBuf[2] << 8) | mTask.rxBuf[3]);	

	//APS_ALOGD("1: 0x%x, 0x%x, 0x%x\n", mTask.rxBuf[0], mTask.rxBuf[1], mTask.rxBuf[2]);
	//APS_ALOGD("2: 0x%x, %d\n", mTask.rxBuf[3], mTask.psoff_data);

    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}


static int stk3321_get_threshold_pre(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) 
{
    //APS_ALOGF(); 
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }

    if(mTask.ps_int_flag == true){  
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0;
    }  
    if((mTask.debug_count%24) == 3){
		mTask.txBuf[0] = STK_THDH1_PS_REG;
		return i2cMasterTxRx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 1,
							 mTask.rxBuf, 4, i2cCallBack,
							 next_state);
    }else{
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0; 

    }
}

static int stk3321_get_threshold(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {

	uint16_t thdh, thdl;
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }

    if(mTask.ps_int_flag == true){  
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0;
    }  

	if((mTask.debug_count%24) == 3){
		thdh = ((mTask.rxBuf[0] << 8) | mTask.rxBuf[1]);
		thdl = ((mTask.rxBuf[2] << 8) | mTask.rxBuf[3]);	

		//APS_ALOGD("1: 0x%x, 0x%x, 0x%x\n", mTask.rxBuf[0], mTask.rxBuf[1], mTask.rxBuf[2]);
		//APS_ALOGD("2: 0x%x, %d, %d\n", mTask.rxBuf[3], thdh, thdl);
		osLog(LOG_INFO, "stk get3: ht:%d, lt:%d\n", thdh, thdl);
	}
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}



static int stk3321_get_allreg_pre(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) 
{
    //APS_ALOGF(); 
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }

    if(mTask.ps_int_flag == true){  
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0;
    }  

    if((mTask.debug_count%12) == 6){
		mTask.txBuf[0] = STK_STATE_REG;
		
	    return i2cMasterTxRx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 1,
	                         mTask.rxBuf, 6, i2cCallBack,
	                         next_state);
    }else{
    	sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    	return 0;    
    }

}

static int stk3321_get_allreg(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    if(mTask.psPowerOn == false){
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;        
    }
        
    if(mTask.ps_int_flag == true){  
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0;
    }  

	if((mTask.debug_count%12) == 6){
		osLog(LOG_INFO, "stk all1: 0x%x, 0x%x, 0x%x\n", mTask.rxBuf[0], mTask.rxBuf[1], mTask.rxBuf[2]);	
		osLog(LOG_INFO, "stk all2: 0x%x, 0x%x, 0x%x\n", mTask.rxBuf[3], mTask.rxBuf[4], mTask.rxBuf[5]);	
	}
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int stk3321_ps_tune_start(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) 
{
    uint32_t    ps_threshold_high;
    uint32_t    ps_threshold_low;

    //APS_ALOGF();
	mTask.debug_count++;
	if(mTask.debug_count > 50000){
		mTask.debug_count = 0;
	}


	//APS_ALOGE("power=%d, first int=%d, int rest=%d", mTask.psPowerOn, mTask.first_int_after_en, mTask.first_int_reset_thd);		
	if (!mTask.psPowerOn)
	{
        osLog(LOG_INFO, "stk first int power off\n");
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0;
	}	

    if(mTask.ps_int_flag == true){  
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0;
    }   

	if(mTask.first_int_reset_thd == true){
		osLog(LOG_INFO, "stk first int");
		mTask.first_int_reset_thd = false;
		ps_threshold_high = (mTask.ps_threshold_high - STK_HT_N_CT) + STK_H_HT;
		ps_threshold_low = (mTask.ps_threshold_low - STK_HT_N_CT) + STK_H_LT;	
		stk3321_ps_set_threshold(ps_threshold_high, ps_threshold_low);
		osLog(LOG_INFO, "stk first reset thdh=%d, thdl=%d",
								ps_threshold_high, ps_threshold_low);	
		
	}
	
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;    
}    


static int stk3321_ps_tune_fae(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) 
{
    //APS_ALOGF();
    if(mTask.ps_int_flag == true){  
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0;
    }  

	if(stk3321_compare_sun_level() != 0){
		osLog(LOG_INFO, "stk fae:At sun, psoff_data=%d\n", mTask.psoff_data);
		sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
		return 0;
	}

	if((mTask.debug_count%12)==9){
		osLog(LOG_INFO, "stk fae:ps=%d, dis=%d\n", mTask.prox_raw_data, mTask.prox_state);
	}
	if (mTask.psi_set != 0)
	{
		if (mTask.prox_state == PROX_STATE_NEAR)
		{
			if ((mTask.prox_raw_data - mTask.psi) > STK_H_HAND)
			{
				if(mTask.ps_threshold_high != (mTask.psi + STK_H_HT)){
					mTask.ps_threshold_high = mTask.psi + STK_H_HT;
					mTask.ps_threshold_low = mTask.psi + STK_H_LT;
					//mTask.psi_set = mTask.psi;
					
					stk3321_ps_set_threshold(mTask.ps_threshold_high, mTask.ps_threshold_low);
					
					mTask.ps_thd_update = true;

					osLog(LOG_INFO, "stk fae: near update ht=%d, lt=%d",
						mTask.ps_threshold_high, mTask.ps_threshold_low);
				}
			}
		}
		else
		{
			if (mTask.ps_thd_update)//reset thd
			{
				mTask.ps_thd_update = false;
				if((mTask.prox_raw_data + STK_HT_N_CT) < mTask.ps_threshold_high){
					mTask.psi = mTask.prox_raw_data;
					mTask.ps_threshold_high = mTask.psi + STK_HT_N_CT;
					mTask.ps_threshold_low = mTask.psi + STK_LT_N_CT;
										
                    stk3321_ps_set_threshold(mTask.ps_threshold_high, mTask.ps_threshold_low);
                    
                    osLog(LOG_INFO, "stk fae:far update1 ht=%d, lt=%d",
                        mTask.ps_threshold_high, mTask.ps_threshold_low);
				}else{
					osLog(LOG_INFO, "far update = 1 reset"); 
				}

			}
			else//Tracking
			{
				if ((mTask.prox_raw_data > 0) && (mTask.prox_raw_data < (mTask.ps_threshold_high - STK_HT_N_CT - 5)))
				{
					mTask.psi = mTask.prox_raw_data;
					mTask.ps_threshold_high = mTask.psi + STK_HT_N_CT;
					mTask.ps_threshold_low = mTask.psi + STK_LT_N_CT;
					
					stk3321_ps_set_threshold(mTask.ps_threshold_high, mTask.ps_threshold_low);

					osLog(LOG_INFO, "stk fae:far update2 ht=%d, lt=%d\n",
						mTask.ps_threshold_high, mTask.ps_threshold_low);

				}
			}
		}
	}
	else
	{
		if (mTask.prox_raw_data != 0)
		{
			if (mTask.prox_raw_data > mTask.psa)
			{
				mTask.psa = mTask.prox_raw_data;
				osLog(LOG_INFO, "stk fae:update psa, psa=%d,psi=%d\n", mTask.psa, mTask.psi);
			}
			if (mTask.prox_raw_data < mTask.psi)
			{
				mTask.psi = mTask.prox_raw_data; 
				osLog(LOG_INFO, "stk fae:update psi, psa=%d,psi=%d\n", mTask.psa, mTask.psi);
			}
		}

		if (mTask.psa > mTask.psi){
			if (mTask.psa - mTask.psi > STK_PS_DIFF)
			{
				mTask.ps_threshold_high = mTask.psi + STK_HT_N_CT;
				mTask.ps_threshold_low = mTask.psi + STK_LT_N_CT;
				mTask.psi_set = mTask.psi;

				stk3321_ps_set_threshold(mTask.ps_threshold_high, mTask.ps_threshold_low);

				osLog(LOG_INFO, "stk fae:set HT=%d, LT=%d\n", mTask.ps_threshold_high, mTask.ps_threshold_low);
			}
		}
	}
	
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;    
}


#if 0
uint32_t timerHandle;  // fate psensor interrupt( using timer )
void psTimerCallback(uint32_t timerId, void *cookie) {
    //alsPsInterruptOccur();
	stk3321_prx_tune_zero_func_fae();
}
#endif
static int stk3321_set_ps_power_off(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                   void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                   void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk set power off state=0x%x\n", mTask.rxBuf[0]);                                
    mTask.ps_debounce_on = 0;
    mTask.data[0].prox_state = PROX_STATE_FAR;
    mTask.txBuf[0] = STK_STATE_REG;
	
	mTask.txBuf[1] = 0x00;
#if 0	
    //mTask.txBuf[1] = mTask.rxBuf[0] & ~STK_STATE_EN_PS_MASK;
    if (timerHandle)
        timTimerCancel(timerHandle);
#endif	
	mTask.psPowerOn = false;
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}

static int stk3321_set_ps_power_off_clr_int(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                   void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                   void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk set power off clr int\n"); 
	
    mTask.txBuf[0] = STK_INTCTRL1_REG;
    mTask.txBuf[1] = 0x00;
	
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}

static int stk3321_ps_ratechg(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                             void *inBuf, uint8_t inSize, uint8_t elemInSize,
                             void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk ps ratechg\n");                        
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int stk3321_ps_cali(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                              void *inBuf, uint8_t inSize, uint8_t elemInSize,
                              void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
//    int32_t threshold[2];
    //threshold[0] = 2;  // high simulation data
    //threshold[1] = 3;  // low simulation data
    //sendAlsPsCalibrationResult(SENS_TYPE_PROX, threshold);
    osLog(LOG_INFO, "stk ps cali\n");
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int stk3321_ps_cfg(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                              void *inBuf, uint8_t inSize, uint8_t elemInSize,
                              void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    int ret = 0;
    struct alspsCaliCfgPacket caliCfgPacket;
	osLog(LOG_INFO, "stk ps cfg\n");  
	
    ret = rxCaliCfgInfo(&caliCfgPacket, inBuf, inSize, elemInSize, outBuf, outSize, elemOutSize);

    if (ret < 0) {
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, ERROR_EVT);
        osLog(LOG_ERROR, "stk3321_ps_cfg, rx inSize and elemSize error\n");
        return -1;
    }
    osLog(LOG_INFO, "stk [high, low]: [%d, %d]\n",
        caliCfgPacket.caliCfgData[0], caliCfgPacket.caliCfgData[1]);
	if(caliCfgPacket.caliCfgData[0] != 0){
    	stk3321_ps_set_threshold(caliCfgPacket.caliCfgData[0], caliCfgPacket.caliCfgData[1]);
	}
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int stk3321_get_alsps_state(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                               void *inBuf, uint8_t inSize, uint8_t elemInSize,
                               void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk get alsps state\n");                             
    mTask.txBuf[0] = STK_STATE_REG;
    return i2cMasterTxRx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 1,
                         mTask.rxBuf, 1, i2cCallBack,
                         next_state);
}

static int stk3321_set_wait_time(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk set wait time\n");
    mTask.txBuf[0] = STK_WAIT_REG;
    mTask.txBuf[1] = STK_WAIT_RST;
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}

static int stk3321_set_sw_reset(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                             void *inBuf, uint8_t inSize, uint8_t elemInSize,
                             void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk set sw reset\n");                          
    mTask.txBuf[0] = STK_SW_RESET_REG;
    mTask.txBuf[1] = 0;
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}

static int stk3321_set_alsps_ctrl(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {

	osLog(LOG_INFO, "stk set alsps ctrl");							
    mTask.txBuf[0] = STK_STATE_REG;
    mTask.txBuf[1] = mTask.state_val;
    mTask.txBuf[2] = mTask.ps_ctrl_val;
    mTask.txBuf[3] = mTask.als_ctrl_val;
    mTask.txBuf[4] = mTask.ledctrl_val;
    mTask.txBuf[5] = STK_INT_CTRL;

    if (0 == mTask.hw->polling_mode_als)
        mTask.txBuf[5] |= 1 << STK_INT_ALS_SHIFT;

    mTask.txBuf[6] = STK_WAIT_50MS;
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 7,
                       i2cCallBack, next_state);
}

static int stk3321_set_alsctrl2(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                             void *inBuf, uint8_t inSize, uint8_t elemInSize,
                             void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_ERROR, "stk3321_set_alsctrl2...");                          
    mTask.txBuf[0] = STK_ALSCTRL2_REG;
    mTask.txBuf[1] = 0x20; //GAIN16
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}

static int stk3321_set_intelli_wait(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                             void *inBuf, uint8_t inSize, uint8_t elemInSize,
                             void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_ERROR, "stk3321_set_intelli_wait...");                          
    mTask.txBuf[0] = STK_INTELLI_WAIT_PS_REG;
    mTask.txBuf[1] = 0x3F; //25ms
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}

static int stk3321_set_bgir(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                             void *inBuf, uint8_t inSize, uint8_t elemInSize,
                             void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_ERROR, "stk3321_set_bgir...");                          
    mTask.txBuf[0] = STK_BGIR_REG;
    mTask.txBuf[1] = 0x10;
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}

static int stk3321_set_pd(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                             void *inBuf, uint8_t inSize, uint8_t elemInSize,
                             void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_ERROR, "stk3321_set_pd...");                          
    mTask.txBuf[0] = STK_PD_REG;
    mTask.txBuf[1] = 0x0F; //ps0123
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}

static int stk3321_set_again(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                             void *inBuf, uint8_t inSize, uint8_t elemInSize,
                             void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_ERROR, "stk3321_set_again...");                          
    mTask.txBuf[0] = STK_AGAIN_REG;
    mTask.txBuf[1] = 0x15; //AGain*1
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}

static int stk3321_set_spec1(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                             void *inBuf, uint8_t inSize, uint8_t elemInSize,
                             void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_ERROR, "stk3321_set_spec1...");                          
    mTask.txBuf[0] = STK_SPEC1_REG;
    mTask.txBuf[1] = STK_SPEC1_VAL;
    return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
}
static int stk3321_set_ps_thdl(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
	osLog(LOG_INFO, "stk set ps:thdl=%d, cali=%d, polling=%d\n", mTask.ps_threshold_low, mTask.psCali, mTask.hw->polling_mode_ps);  
    if (mTask.hw->polling_mode_ps == 0) {
        mTask.txBuf[0] = STK_THDL1_PS_REG;
        mTask.txBuf[1] = (uint8_t)(((mTask.ps_threshold_low + mTask.psCali) & 0xFF00) >> 8);
        mTask.txBuf[2] = (uint8_t)((mTask.ps_threshold_low + mTask.psCali) & 0x00FF);

        return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 3,
                           i2cCallBack, next_state);
    } else {
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;
    }
}

static int stk3321_set_ps_thdh(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk set ps:thdh=%d, cali=%d, polling=%d\n", mTask.ps_threshold_high, mTask.psCali, mTask.hw->polling_mode_ps);                              
    if (mTask.hw->polling_mode_ps == 0) {
        mTask.txBuf[0] = STK_THDH1_PS_REG;
        mTask.txBuf[1] = (uint8_t)(((mTask.ps_threshold_high + mTask.psCali) & 0xFF00) >> 8);
        mTask.txBuf[2] = (uint8_t)((mTask.ps_threshold_high + mTask.psCali) & 0x00FF);

        return i2cMasterTx(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 3,
                           i2cCallBack, next_state);
    } else {
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;
    }
}

static int v2000_get_als_config(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                               void *inBuf, uint8_t inSize, uint8_t elemInSize,
                               void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "v2000_get_als_config...");                             
    mTask.txBuf[0] = STK_ALSCTRL_REG;
    return i2cMasterTxRx(mTask.hw->i2c_num, mTask.slave_i2c_addr, mTask.txBuf, 1,
                         mTask.rxBuf, 1, i2cCallBack,
                         next_state);
}

static int v2000_set_als_config01(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                   void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                   void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_ERROR, "v2000_set_als_config cur[0x02]=0x%x\n", mTask.rxBuf[0]); 
    if(mTask.rxBuf[0] != mTask.als_ctrl_val){
        mTask.is_als_init = false;
        mTask.txBuf[0] = STK_ALSCTRL_REG;
        mTask.txBuf[1] = mTask.als_ctrl_val;
        osLog(LOG_ERROR, "v2000_set_als_config01 [0x02]=0x%x\n", mTask.txBuf[1]); 
        return i2cMasterTx(mTask.hw->i2c_num, mTask.slave_i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
    }else{
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;
    }
}

static int v2000_set_als_config02(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                   void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                   void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    if(mTask.is_als_init == false){
        mTask.txBuf[0] = STK_PSCTRL_REG;
        mTask.txBuf[1] = mTask.ps_ctrl_val;
        osLog(LOG_ERROR, "v2000_set_als_config02 [0x01]=0x%x\n", mTask.txBuf[1]); 
        return i2cMasterTx(mTask.hw->i2c_num, mTask.slave_i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
    }else{
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;
    }
}

static int v2000_set_als_config03(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                   void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                   void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    if(mTask.is_als_init == false){
        mTask.txBuf[0] = STK_LEDCTRL_REG;
        mTask.txBuf[1] = mTask.ledctrl_val;
        osLog(LOG_ERROR, "v2000_set_als_config03 [0x03]=0x%x\n", mTask.txBuf[1]); 
        return i2cMasterTx(mTask.hw->i2c_num, mTask.slave_i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
    }else{
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;
    }
}

static int v2000_set_als_config04(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                   void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                   void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    if(mTask.is_als_init == false){
        mTask.txBuf[0] = STK_WAIT_REG;
        mTask.txBuf[1] = STK_WAIT_50MS;
        mTask.is_als_init = true;
        osLog(LOG_ERROR, "v2000_set_als_config04 [0x05]=0x%x\n", mTask.txBuf[1]); 
        return i2cMasterTx(mTask.hw->i2c_num, mTask.slave_i2c_addr, mTask.txBuf, 2,
                       i2cCallBack, next_state);
    }else{
        sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
        return 0;
    }
}

static void stk3321_eint_handler(int arg) {
    osLog(LOG_INFO, "stk eint handler\n");
    alsPsInterruptOccur();
}

static int stk3321_setup_eint(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                             void *inBuf, uint8_t inSize, uint8_t elemInSize,
                             void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    osLog(LOG_INFO, "stk setup eint\n");                           
    mt_eint_dis_hw_debounce(mTask.hw->eint_num);
    mt_eint_registration(mTask.hw->eint_num, LEVEL_SENSITIVE, LOW_LEVEL_TRIGGER, stk3321_eint_handler, EINT_INT_UNMASK,
                         EINT_INT_AUTO_UNMASK_OFF);
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static int stk3321_register_core(I2cCallbackF i2cCallBack, SpiCbkF spiCallBack, void *next_state,
                                void *inBuf, uint8_t inSize, uint8_t elemInSize,
                                void *outBuf, uint8_t *outSize, uint8_t *elemOutSize) {
    struct sensorCoreInfo mInfo;
    osLog(LOG_INFO, "stk register core\n");
    memset(&mInfo, 0x00, sizeof(struct sensorCoreInfo));
    /* Register sensor Core */
    mInfo.sensType = SENS_TYPE_ALS;
    mInfo.getData = alsGetData;
    mInfo.getSensorInfo = alsGetSensorInfo;
	/* begin, prize-lifenfen-20181126, add for sensorhub hardware info */
#ifdef CFG_SENSORHUB_PRIZE_HARDWARE_INFO
    mInfo.getSensorHardwareInfo = alsGetSensorHardwareInfo;
#endif
	/* end, prize-lifenfen-20181126, add for sensorhub hardware info */
    sensorCoreRegister(&mInfo);

    memset(&mInfo, 0x00, sizeof(struct sensorCoreInfo));
    mInfo.sensType = SENS_TYPE_PROX,
    mInfo.gain = 1;
    mInfo.sensitivity = 1;
    sensorDriverGetConvert(0, &mInfo.cvt);
    mInfo.getCalibration = psGetCalibration;
    mInfo.setCalibration = psSetCalibration;
    mInfo.getThreshold = psGetThreshold;
    mInfo.setThreshold = psSetThreshold;
    mInfo.getData = psGetData;
    mInfo.getSensorInfo = psGetSensorInfo;
	/* begin, prize-lifenfen-20181126, add for sensorhub hardware info */
#ifdef CFG_SENSORHUB_PRIZE_HARDWARE_INFO
    mInfo.getSensorHardwareInfo = psGetSensorHardwareInfo;
#endif
	/* end, prize-lifenfen-20181126, add for sensorhub hardware info */
    sensorCoreRegister(&mInfo);
    sensorFsmEnqueueFakeI2cEvt(i2cCallBack, next_state, SUCCESS_EVT);
    return 0;
}

static struct sensorFsm stk3321Fsm[] = {
    /* sample als */
    sensorFsmCmd(STATE_SAMPLE_ALS, STATE_GET_ALS_DATA, stk3321_read_als_data),
    sensorFsmCmd(STATE_GET_ALS_DATA, STATE_GET_ALS_DATA02_PRE, stk3321_get_als_value),
    sensorFsmCmd(STATE_GET_ALS_DATA02_PRE, STATE_GET_ALS_DATA02, v2000_get_als02_pre),
    sensorFsmCmd(STATE_GET_ALS_DATA02, STATE_GET_ALS_DATA03_PRE, v2000_get_als02),
    sensorFsmCmd(STATE_GET_ALS_DATA03_PRE, STATE_GET_ALS_DATA03, v2000_get_als03_pre),
    sensorFsmCmd(STATE_GET_ALS_DATA03, STATE_GET_ALS_ALLREG_PRE, v2000_get_als03),
    sensorFsmCmd(STATE_GET_ALS_ALLREG_PRE, STATE_GET_ALS_ALLREG, v2000_get_allreg_pre),
    sensorFsmCmd(STATE_GET_ALS_ALLREG, STATE_SAMPLE_ALS_DONE, v2000_get_allreg),	
	

    /* sample ps */
	sensorFsmCmd(STATE_SAMPLE_PS, STATE_GET_PS_FLG_RAW, stk3321_read_ps),
    sensorFsmCmd(STATE_GET_PS_FLG_RAW, STATE_GET_PS_FLG, stk3321_read_ps_flag),
    sensorFsmCmd(STATE_GET_PS_FLG, STATE_GET_PS_RAW_DATA, stk3321_get_ps_status),
    sensorFsmCmd(STATE_GET_PS_RAW_DATA, STATE_PS_TUNE_FAE, stk3321_get_ps_raw_data),

    /*ps tune state*/
    sensorFsmCmd(STATE_PS_TUNE_FAE, STATE_PS_TUNE_FAE_STEP1, stk3321_ps_tune_start),  
    sensorFsmCmd(STATE_PS_TUNE_FAE_STEP1, STATE_PS_TUNE_FAE_STEP2, stk3321_get_psoff_pre),
    sensorFsmCmd(STATE_PS_TUNE_FAE_STEP2, STATE_PS_TUNE_FAE_STEP3, stk3321_get_psoff),
    sensorFsmCmd(STATE_PS_TUNE_FAE_STEP3, STATE_PS_TUNE_FAE_STEP4, stk3321_get_ps_rawdata_pre),
    sensorFsmCmd(STATE_PS_TUNE_FAE_STEP4, STATE_PS_TUNE_FAE_STEP5, stk3321_get_ps_rawdata),
    sensorFsmCmd(STATE_PS_TUNE_FAE_STEP5, STATE_PS_TUNE_FAE_STEP6, stk3321_get_threshold_pre),
    sensorFsmCmd(STATE_PS_TUNE_FAE_STEP6, STATE_PS_TUNE_FAE_STEP7, stk3321_get_threshold),  
    sensorFsmCmd(STATE_PS_TUNE_FAE_STEP7, STATE_PS_TUNE_FAE_STEP8, stk3321_get_flag_pre),
    sensorFsmCmd(STATE_PS_TUNE_FAE_STEP8, STATE_PS_TUNE_FAE_STEP9, stk3321_get_flag),  
    sensorFsmCmd(STATE_PS_TUNE_FAE_STEP9, STATE_PS_TUNE_FAE_STEP10, stk3321_get_allreg_pre),
    sensorFsmCmd(STATE_PS_TUNE_FAE_STEP10, STATE_PS_TUNE_FAE_STEP11, stk3321_get_allreg),  
    sensorFsmCmd(STATE_PS_TUNE_FAE_STEP11, STATE_PS_TUNE_FAE_STEP12, stk3321_get_threshold_pre),
    sensorFsmCmd(STATE_PS_TUNE_FAE_STEP12, STATE_PS_TUNE_FAE_STEP13, stk3321_get_threshold),   
    sensorFsmCmd(STATE_PS_TUNE_FAE_STEP13, STATE_CLR_INT, stk3321_ps_tune_fae),

    sensorFsmCmd(STATE_CLR_INT, STATE_EN_EINT, stk3321_clr_int),
    sensorFsmCmd(STATE_EN_EINT, STATE_SAMPLE_PS_DONE, stk3321_enable_eint),

    /* als enable state */
    sensorFsmCmd(STATE_ALS_ENABLE, STATE_GET_ALS_CONFIG_PRE, v2000_get_als_config),
    sensorFsmCmd(STATE_GET_ALS_CONFIG_PRE, STATE_SET_ALS_CONFIG01, v2000_set_als_config01),
    sensorFsmCmd(STATE_SET_ALS_CONFIG01, STATE_SET_ALS_CONFIG02, v2000_set_als_config02),
    sensorFsmCmd(STATE_SET_ALS_CONFIG02, STATE_SET_ALS_CONFIG03, v2000_set_als_config03),
    sensorFsmCmd(STATE_SET_ALS_CONFIG03, STATE_SET_ALS_CONFIG04, v2000_set_als_config04),

    sensorFsmCmd(STATE_SET_ALS_CONFIG04, STATE_ALS_POWER_ON, stk3321_get_alsps_state),
    sensorFsmCmd(STATE_ALS_POWER_ON, STATE_ALS_SET_DEBOUNCE, stk3321_set_als_power_on),
    sensorFsmCmd(STATE_ALS_SET_DEBOUNCE, STATE_ALS_ENABLE_DONE, stk3321_set_als_debounce_on),

    /* als disable state */
    sensorFsmCmd(STATE_ALS_DISABLE, STATE_ALS_POWER_OFF, stk3321_get_alsps_state),
    sensorFsmCmd(STATE_ALS_POWER_OFF, STATE_ALS_DISABLE_DONE, stk3321_set_als_power_off),
    /* als cali state */
    sensorFsmCmd(STATE_ALS_CALI, CHIP_ALS_CALI_DONE, stk3321_als_cali),
    /* als cfg state */
    sensorFsmCmd(STATE_ALS_CFG, CHIP_ALS_CFG_DONE, stk3321_als_cfg),

    /* ps enable state */
    sensorFsmCmd(STATE_PS_ENABLE, STATE_PS_POWER_ON, stk3321_get_alsps_state),
	sensorFsmCmd(STATE_PS_POWER_ON, STATE_PS_POWER_ON_PREPARE, stk3321_set_ps_power_on_prepare),
	sensorFsmCmd(STATE_PS_POWER_ON_PREPARE, STATE_GET_STATE_REG, stk3321_get_alsps_state),
    sensorFsmCmd(STATE_GET_STATE_REG, STATE_PS_POWER_ON_SET_INT, stk3321_set_ps_power_on),
    sensorFsmCmd(STATE_PS_POWER_ON_SET_INT, STATE_PS_POWER_ON_SET_PS_THD, stk3321_set_ps_power_on_set_int),
    sensorFsmCmd(STATE_PS_POWER_ON_SET_PS_THD, STATE_PS_SET_DEBOUNCE, stk3321_power_on_set_ps_thd),
    sensorFsmCmd(STATE_PS_SET_DEBOUNCE, STATE_PS_UNMASK_EINT, stk3321_set_ps_debounce_on),
    sensorFsmCmd(STATE_PS_UNMASK_EINT, STATE_PS_ENABLE_DONE, stk3321_unmask_eint),
    /* ps disable state */
    sensorFsmCmd(STATE_PS_DISABLE, STATE_GET_ALSPS_STATE, stk3321_mask_eint),
    sensorFsmCmd(STATE_GET_ALSPS_STATE, STATE_PS_POWER_OFF, stk3321_get_alsps_state),
    sensorFsmCmd(STATE_PS_POWER_OFF, STATE_PS_POWER_OFF_CLR_INT, stk3321_set_ps_power_off),
	sensorFsmCmd(STATE_PS_POWER_OFF_CLR_INT, STATE_PS_DISABLE_DONE, stk3321_set_ps_power_off_clr_int),
    /* als rate change */
    sensorFsmCmd(STATE_ALS_RATECHG, STATE_ALS_RATECHG_DONE, stk3321_als_ratechg),
    /* ps rate change */
    sensorFsmCmd(STATE_PS_RATECHG, STATE_PS_RATECHG_DONE, stk3321_ps_ratechg),

    /* ps cali state */
    sensorFsmCmd(STATE_PS_CALI, CHIP_PS_CALI_DONE, stk3321_ps_cali),
    /* ps cfg state */
    sensorFsmCmd(STATE_PS_CFG, CHIP_PS_CFG_DONE, stk3321_ps_cfg),

    /* init state */
    sensorFsmCmd(STATE_RESET, STATE_SET_SW_RST, stk3321_set_wait_time),
    sensorFsmCmd(STATE_SET_SW_RST, STATE_SET_ALSPS_CTRL, stk3321_set_sw_reset),
    sensorFsmCmd(STATE_SET_ALSPS_CTRL, STATE_SET_ALSCTRL2, stk3321_set_alsps_ctrl),
    sensorFsmCmd(STATE_SET_ALSCTRL2, STATE_SET_INTELLI_WAIT, stk3321_set_alsctrl2),
    sensorFsmCmd(STATE_SET_INTELLI_WAIT, STATE_SET_BGIR, stk3321_set_intelli_wait),
    sensorFsmCmd(STATE_SET_BGIR, STATE_SET_PD, stk3321_set_bgir),
    sensorFsmCmd(STATE_SET_PD, STATE_SET_AGAIN, stk3321_set_pd),
    sensorFsmCmd(STATE_SET_AGAIN, STATE_SET_SPEC1, stk3321_set_again),
    sensorFsmCmd(STATE_SET_SPEC1, STATE_SET_PS_THDH, stk3321_set_spec1),
    sensorFsmCmd(STATE_SET_PS_THDH, STATE_SET_PS_THDL, stk3321_set_ps_thdh),
    sensorFsmCmd(STATE_SET_PS_THDL, STATE_SETUP_EINT, stk3321_set_ps_thdl),
    sensorFsmCmd(STATE_SETUP_EINT, STATE_CORE, stk3321_setup_eint),
    sensorFsmCmd(STATE_CORE, STATE_INIT_DONE, stk3321_register_core),
};

static int stk3321Init(void) {
    int ret = 0;
    osLog(LOG_INFO, "stk init\n");
    stk3321DebugPoint = &mTask;

    mTask.hw = get_cust_alsps("stk3321");
    if (NULL == mTask.hw) {
        osLog(LOG_ERROR, "get_cust_acc_hw fail\n");
        return -1;
    }
    mTask.i2c_addr = mTask.hw->i2c_addr[0]; // Proximity Sensor STK3332
    mTask.slave_i2c_addr = 0x57; //Light Sensor STK3210
    mTask.als_debounce_time = 200;
    mTask.als_debounce_on = 0;
    mTask.ps_debounce_time = 10;
    mTask.ps_debounce_on = 0;
    mTask.psCali = 0;
    mTask.als_threshold_high = mTask.hw->als_threshold_high;
    mTask.als_threshold_low = mTask.hw->als_threshold_low;
    mTask.ps_threshold_high = mTask.hw->ps_threshold_high;
    mTask.ps_threshold_low = mTask.hw->ps_threshold_low;
    mTask.als_ctrl_val = STK_ALSCTRL_VAL;
    mTask.ps_ctrl_val = STK_PSCTRL_VAL;
    mTask.state_val = 0; /* Standby */
	mTask.psi_set = 0;
	mTask.psi = 0xffff;
	mTask.psa = 0;
	mTask.ps_thd_update = 0;/* Standby */
	mTask.debug_count = 0;
	mTask.start_tune = false;
    i2cMasterRequest(mTask.hw->i2c_num, I2C_SPEED);
    osLog(LOG_INFO, "stk3321 i2c_num=%d, i2d_addr=%02x\n", mTask.hw->i2c_num, mTask.i2c_addr);
    mTask.txBuf[0] = STK_PDT_ID_REG;

    for (uint8_t i = 0; i < 3; i++) {
        ret = i2cMasterTxRxSync(mTask.hw->i2c_num, mTask.i2c_addr, mTask.txBuf, 1,
            &mTask.deviceId, 1, NULL, NULL);
        if (ret >= 0)
            break;
    }
    if (ret < 0) {
        osLog(LOG_ERROR, "stk3321 i2cMasterTxRxSync fail!!!\n");
        ret = -1;
        i2cMasterRelease(mTask.hw->i2c_num);
        goto err_out;
    }

    osLog(LOG_INFO, "stk3321 deviceId: 0x%x\n", mTask.deviceId);
    

    mTask.ledctrl_val = 0xA0;   //100mA
		
    alsSensorRegister();
    psSensorRegister();
    registerAlsPsDriverFsm(stk3321Fsm, ARRAY_SIZE(stk3321Fsm));

/* begin, prize-lifenfen-20181126, add for sensorhub hardware info */
#ifdef CFG_SENSORHUB_PRIZE_HARDWARE_INFO
	strncpy(mTask.dev_hardware_info.chip, "stk3321", sizeof(mTask.dev_hardware_info.chip) - 1);
	strncpy(mTask.dev_hardware_info.vendor, "Sensortek", sizeof(mTask.dev_hardware_info.vendor) - 1);
	snprintf(mTask.dev_hardware_info.id,  sizeof(mTask.dev_hardware_info.id) - 1, "%d-%04x ", mTask.hw->i2c_num, mTask.i2c_addr);
	strncpy(mTask.dev_hardware_info.more, "alsps", sizeof(mTask.dev_hardware_info.more) - 1);
#endif
/* end, prize-lifenfen-20181126, add for sensorhub hardware info */

err_out:
    return ret;
}

#ifndef CFG_OVERLAY_INIT_SUPPORT
MODULE_DECLARE(stk3321, SENS_TYPE_ALS, stk3321Init);
#else
#include "mtk_overlay_init.h"
OVERLAY_DECLARE(stk3321, OVERLAY_ID_ALSPS, stk3321Init);
#endif
