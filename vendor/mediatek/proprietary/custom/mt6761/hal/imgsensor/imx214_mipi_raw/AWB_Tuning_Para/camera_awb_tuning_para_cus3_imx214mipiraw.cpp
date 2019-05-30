#include "camera_custom_nvram.h"
#include "camera_awb_tuning_para_imx214mipiraw.h"

#define NVRAM_TUNING_PARAM_NUM  6511001

template <>
AWB_NVRAM_T const&
getAWBNVRAM_imx214mipiraw<CAM_SCENARIO_CUSTOM3>() // VT
{
    static AWB_NVRAM_T  g_rAWBNVRAM =
    AWB_NVRAM_START
    {
        {
            // AWB calibration data
            {
    /******************************************************************************/
    //Feature name:
    //AWB unit and golden module calibration gain for high(DNP), middle(TL84) and color
    //low(ALight) color temperature
    //variable name: rUnitGain
    //default value: {512, 512, 512}
    //unit: 512 = 1x
    //data range : 0 ~ 4095
    //note: rGain = {0, 0 ,0} means this unit not doing calibration for DNP
    /******************************************************************************/
                // rUnitGain for High color temperature (DNP)
                {
                       0, // UnitGain_R
                       0, // UnitGain_G
                       0  // UnitGain_B
                },
                // rGoldenGain for High color temperature (DNP)
                {
                       0, // GoldenGain_R
                       0, // GoldenGain_G
                       0  // GoldenGain_B
                },
                // rUnitGain for middle color temperature (TL84)
                {
                       0, // UnitGain_R
                       0, // UnitGain_G
                       0  // UnitGain_B
                },
                // rGoldenGain for middle color temperature (TL84)
                {
                       0, // GoldenGain_R
                       0, // GoldenGain_G
                       0  // GoldenGain_B
                },
                // rUnitGain for low color temperature (ALight)
                {
                       0, // UnitGain_R
                       0, // UnitGain_G
                       0  // UnitGain_B
                },
                // rGoldenGain for low color temperature (ALight)
                {
                       0, // GoldenGain_R
                       0, // GoldenGain_G
                       0  // GoldenGain_B
                },
    /******************************************************************************/
    //Feature name:
    //AWB unit gain for tuning sample only for debug use
    //variable name: rTuningUnitGain
    //default value: {512, 512, 512}
    //unit: 512 = 1x
    //data range : 0 ~ 4095
    //note: rGain = {0, 0 ,0} means no tuning sample unit gain
    /******************************************************************************/
                // rTuningUnitGain (Tuning sample unit gain: 1.0 = 512)
                {
                       0, // TuningUnitGain_R
                       0, // TuningUnitGain_G
                       0  // TuningUnitGain_B
                },
    /******************************************************************************/
    //Feature name:
    //AWB golden sample calibration gain for D65
    //variable name: rD65Gain
    //default value: {512, 512, 512}
    //unit: 512 = 1x
    //data range : 0 ~ 4095
    /******************************************************************************/
                // rD65Gain (D65 WB gain: 1.0 = 512)
                {
                    1099, // D65Gain_R
                     512, // D65Gain_G
                     698  // D65Gain_B
                }
            },
    /******************************************************************************/
    //Feature name:
    //AWB average white point distribution in X-Y domin under different light sources as
    //strobe, horizon, A (tungsten), TL84, CWF, DNP, D65 and DF (daylight fluorescnet)
    //variable name: OriX_Strobe, OriY_Strobe, OriX_Hor, OriY_Hor, OriX_A, OriY_A, OriX_TL84,
    //OriY_TL84, OriX_CWF, OriY_CWF, OriX_DNP, OriY_DNP, OriX_D65, OriY_D65, OriX_DF, OriY_DF
    //default value: N/A
    //note: These settings are calibrated result, please do not need to modify them
    /******************************************************************************/
            // Original XY coordinate of AWB light source
            {
                // Strobe
                {
                       0, // OriX_Strobe
                       0  // OriY_Strobe
                },
                // Horizon
                {
                    -408, // OriX_Hor
                    -431  // OriY_Hor
                },
                // A
                {
                    -288, // OriX_A
                    -431  // OriY_A
                },
                // TL84
                {
                     -93, // OriX_TL84
                    -437  // OriY_TL84
                },
                // CWF
                {
                     -78, // OriX_CWF
                    -475  // OriY_CWF
                },
                // DNP
                {
                      30, // OriX_DNP
                    -425  // OriY_DNP
                },
                // D65
                {
                     168, // OriX_D65
                    -396  // OriY_D65
                },
                // DF
                {
                      52, // OriX_DF
                    -176  // OriY_DF
                }
            },
    /******************************************************************************/
    //Feature name:
    //AWB average white point distribution in rotated X-Y domain from original X-Y domain
    //in order to let the light source distribution in x-axis parallel direction
    //variable name: RotX_Strobe, RotY_Strobe, RotX_Hor, RotY_Hor, RotX_A, RotY_A, RotX_TL84,
    //RotY_TL84, RotX_CWF, RotY_CWF, RotX_DNP, RotY_DNP, RotX_D65, RotY_D65, RotX_DF, RotY_DF
    //default value: N/A
    //note: These settings are calibrated result, please do not need to modify them
    /******************************************************************************/
            // Rotated XY coordinate of AWB light source		
            {
                // Strobe
                {
                       0, // RotX_Strobe
                       0  // RotY_Strobe
                },
                // Horizon
                {
                    -437, // RotX_Hor
                    -401  // RotY_Hor
                },
                // A
                {
                    -317, // RotX_A
                    -409  // RotY_A
                },
                // TL84
                {
                    -123, // RotX_TL84
                    -429  // RotY_TL84
                },
                // CWF
                {
                    -111, // RotX_CWF
                    -468  // RotY_CWF
                },
                // DNP
                {
                       0, // RotX_DNP
                    -425  // RotY_DNP
                },
                // D65
                {
                     140, // RotX_D65
                    -406  // RotY_D65
                },
                // DF
                {
                      39, // RotX_DF
                    -179  // RotY_DF
                }
            },
    /******************************************************************************/
    //Feature name:
    //AWB pre-calibrated gain based on the calibrated average white point distribution
    //for different light sources. It is treated as a default gain for corresponding light source
    //variable name: Gain_Strobe, Gain_Hor, Gain_A, Gain_TL84, Gain_CWF, Gain_DNP, Gain_D65, Gain_DF
    //default value: N/A
    //note: These settings are calibrated result, please do not need to modify them
    /******************************************************************************/
            // AWB gain of AWB light source
            {
                // Strobe	
                {
                     512, // AWBGAIN_STROBE_R
                     512, // AWBGAIN_STROBE_G
                     512  // AWBGAIN_STROBE_B
                },
                // Horizon
                {
                     528, // AWBGAIN_HOR_R
                     512, // AWBGAIN_HOR_G
                    1596  // AWBGAIN_HOR_B
                },
                // A
                {
                     621, // AWBGAIN_A_R
                     512, // AWBGAIN_A_G
                    1354  // AWBGAIN_A_B
                },
                // TL84
                {
                     816, // AWBGAIN_TL84_R
                     512, // AWBGAIN_TL84_G
                    1050  // AWBGAIN_TL84_B
                },
                // CWF
                {
                     877, // AWBGAIN_CWF_R
                     512, // AWBGAIN_CWF_G
                    1081  // AWBGAIN_CWF_B
                },
                // DNP
                {
                     948, // AWBGAIN_DNP_R
                     512, // AWBGAIN_DNP_G
                     874  // AWBGAIN_DNP_B
                },
                // D65
                {
                    1099, // AWBGAIN_D65_R
                     512, // AWBGAIN_D65_G
                     698  // AWBGAIN_D65_B
                },
                // DF
                {
                     697, // AWBGAIN_DF_R
                     512, // AWBGAIN_DF_G
                     606  // AWBGAIN_DF_B
                }
            },
    /******************************************************************************/
    //Feature name:
    //Rotation angle information for the rotated X-Y domain from original X-Y domain
    //variable name: RotationAngle
    //degree of rotation from original X-Y domain to rotated X-Y domain
    //data range: -180 ~ 180 (degree)
    //default value: N/A
    //variable name: Cos
    //value of cosine (RotationAngle) normalized by 256
    //data range: -256 ~ 256
    //default value: N/A
    //variable name: Sin
    //value of sine (RotationAngle) normalized by 255
    //data range: -256 ~ 256
    //defatul value: N/A
    //note: These settings are calibrated result, please do not need to modify them
    /******************************************************************************/
            // Rotation matrix parameter
            {
                  4, // RotationAngle
                255,    // Cos
                 18  // Sin
            },
    /******************************************************************************/
    //Feature name:
    //Linear regression of distrubution of D65, TL84 and A(after compensated with D65 white balance gain)
    //on log(R/G)-log(B/G) domain into a linear line pass through the origin.
    //The mathematical equation can be represented by y = (SlopeNumerator) / (SlopeDenominator) * x,
    //where x is log(R/G) and y is log(B/G)
    //variable name: SlopeNumerator
    //numerator value of the slope of above equation
    //data range: N/A
    //default value: N/A
    //variable name: SlopeDenominator
    //denominator value for the slope of above equation
    //data range: N/A
    //default value: N/A
    //note: These settings are based on calibration, please do not need to modify them
    /******************************************************************************/
            // Daylight locus parameter	
            {
                -149, // SlopeNumerator
                 128  // SlopeDenominator
            },
    /******************************************************************************/
    //Feature name:
    //Predefined white balance gain for different LV condition.
    //rSpatial_L gain is used for low LV condition.
    //rSpatial_H gain is used for high LV condition.
    //rTemporal gain is used for extra low LV or nonreliable condition.
    //variable name: i4R, i4G, i4B
    //default value: {512, 512, 512}
    /******************************************************************************/
            // Predictor gain
            {
                101, // i4PrefRatio100
                // DaylightLocus_L
                {
                    1069,    // i4R
                    530,    // i4G
                    718    // i4B
                },
                // DaylightLocus_H
                {
                    837,    // i4R
                    512,    // i4G
                    953    // i4B
                },
                // Temporal General
                {
                    1099,    // i4R
                    512,    // i4G
                    698    // i4B
                },
                // AWB LSC Gain
                {
                    899,        // i4R
                    512,        // i4G
                    878        // i4B
                }
            },
            // AWB light area
            {
                // Strobe
                {
                       0, // StrobeRightBound
                       0, // StrobeLeftBound
                       0, // StrobeUpperBound
                       0  // StrobeLowerBound
                },
                // Tungsten
                {
                    -201, // TungRightBound
                    -837, // TungLeftBound
                    -240, // TungUpperBound
                    -372  // TungLowerBound
                },
                // Warm fluorescent
                {
                    -201, // WFluoRightBound
                    -837, // WFluoLeftBound
                    -372, // WFluoUpperBound
                    -558  // WFluoLowerBound
                },
                // Fluorescent
                {
                     -40, // FluoRightBound
                    -201, // FluoLeftBound
                    -200, // FluoUpperBound
                    -459  // FluoLowerBound
                },
                // CWF
                {
                     -40, // CWFRightBound
                    -201, // CWFLeftBound
                    -459, // CWFUpperBound
                    -558  // CWFLowerBound
                },
                // Daylight
                {
                     170, // DayRightBound
                     -40, // DayLeftBound
                    -200, // DayUpperBound
                    -459  // DayLowerBound
                },
                // Shade
                {
                     500, // ShadeRightBound
                     170, // ShadeLeftBound
                    -246, // ShadeUpperBound
                    -481  // ShadeLowerBound
                },
                // Daylight Fluorescent	
                {
                     170, // DFRightBound
                     -40, // DFLeftBound
                    -459, // DFUpperBound
                    -558  // DFLowerBound
                }
            },
    /******************************************************************************/
    //Feature name:
    //A quadrangular window used to define the point collection reference area used in
    //preset white blance for reference area, daylight, cloudy daylight, shade, twilight,
    //fluorescent, warm fluorescent, incandescent and gray world. The white point inside will
    //be calculated as white point.
    //variable name: i4RightBound, i4LeftBound, i4UpperBound, i4LowerBound
    //defines the right boundary in x-axis, left boundary in x-axis, upper boundary in
    //y-axis and lower boundary in y-axis
    //default value: N/A
    /******************************************************************************/
            // PWB light area
            {
                // Reference area
                {
                     500, // PRefRightBound
                    -837, // PRefLeftBound
                       0, // PRefUpperBound
                    -588  // PRefLowerBound
                },
                // Daylight
                {
                     195, // PDayRightBound
                     -40, // PDayLeftBound
                    -200, // PDayUpperBound
                    -459  // PDayLowerBound
                },
                // Cloudy daylight
                {
                     295, // PCloudyRightBound
                     120, // PCloudyLeftBound
                    -200, // PCloudyUpperBound
                    -459  // PCloudyLowerBound
                },
                // Shade
                {
                     395, // PShadeRightBound
                     120, // PShadeLeftBound
                    -200, // PShadeUpperBound
                    -459  // PShadeLowerBound
                },
                // Twilight
                {
                     -40, // PTwiRightBound
                    -200, // PTwiLeftBound
                    -200, // PTwiUpperBound
                    -459  // PTwiLowerBound
                },
                // Fluorescent
                {
                     190, // PFluoRightBound
                    -223, // PFluoLeftBound
                    -356, // PFluoUpperBound
                    -518  // PFluoLowerBound
                },
                // Warm fluorescent
                {
                    -217, // PWFluoRightBound
                    -417, // PWFluoLeftBound
                    -356, // PWFluoUpperBound
                    -518  // PWFluoLowerBound
                },
                // Incandescent
                {
                    -217, // PIncaRightBound
                    -417, // PIncaLeftBound
                    -200, // PIncaUpperBound
                    -459  // PIncaLowerBound
                },
                // Gray World
                {
                    5000, // PGWRightBound
                    -5000, // PGWLeftBound
                    5000, // PGWUpperBound
                    -5000  // PGWLowerBound
                }
            },
    /******************************************************************************/
    //Feature name:
    //Defaulte preset white balance gain for daylight, cloudy daylight, shade, twilight,
    //fluorescent, warm fluorescent, incandescent and grey world.
    //variable name: i4R, i4G, i4B for R gain, G gain and B gain
    //default value: N/A
    //data range : 0 ~ 4095
    //unit: 512 = 1x
    /******************************************************************************/
            // PWB default gain	
            {
                // Daylight	
                {
                     909, // PWB_Day_R
                     512, // PWB_Day_G
                     692  // PWB_Day_B
                },
                // Cloudy daylight
                {
                    1071, // PWB_Cloudy_R
                     512, // PWB_Cloudy_G
                     574  // PWB_Cloudy_B
                },
                // Shade
                {
                    1140, // PWB_Shade_R
                     512, // PWB_Shade_G
                     534  // PWB_Shade_B
                },
                // Twilight
                {
                     709, // PWB_Twi_R
                     512, // PWB_Twi_G
                     922  // PWB_Twi_B
                },
                // Fluorescent
                {
                     944, // PWB_Fluo_R
                     512, // PWB_Fluo_G
                     908  // PWB_Fluo_B
                },
                // Warm fluorescent
                {
                     647, // PWB_WFluo_R
                     512, // PWB_WFluo_G
                    1403  // PWB_WFluo_B
                },
                // Incandescent
                {
                     554, // PWB_Inca_R
                     512, // PWB_Inca_G
                    1226  // PWB_Inca_B
                },
                // Gray World	
                {
                     512, // PWB_GW_R
                     512, // PWB_GW_G
                     512  // PWB_GW_B
                }
            },
  // AWB preference color
  {
    // Tungsten
    {
                    40,    // TUNG_SLIDER
                    4500    // TUNG_OFFS
    },
    // Warm fluorescent
    {
                    40,    // WFluo_SLIDER
                    4500    // WFluo_OFFS
    },
    // Shade
    {
                    50,    // Shade_SLIDER
                    410    // Shade_OFFS
                },
                // Sunset Area
                {
                    -6,//71,   // i4Sunset_BoundXr_Thr
                    -425    // i4Sunset_BoundYr_Thr
                },
                // Shade F Area
                {
                    -201,   // i4BoundXrThr
                    -432    // i4BoundYrThr
                },
                // Shade F Vertex
                {
                    -121,   // i4BoundXrThr
                    -441    // i4BoundYrThr
                },
                // Shade CWF Area
                {
                    -201,   // i4BoundXrThr
                    -482    // i4BoundYrThr
                },
                // Shade CWF Vertex
                {
                    -123,   // i4BoundXrThr
                    -498    // i4BoundYrThr
                            }
  },
  // CCT estimation
  {
    // CCT
    {
      2300, // CCT0
      2850, // CCT1
      3750, // CCT2
      5100, // CCT3
      6500     // CCT4
    },
    // Rotated X coordinate
    {
                -577,    // i4RotatedXCoordinate[0]
                -457,    // i4RotatedXCoordinate[1]
                -263,    // i4RotatedXCoordinate[2]
                -140,    // i4RotatedXCoordinate[3]
                        0    // i4RotatedXCoordinate[4]
    }
  }
            },

                // Algorithm Tuning Paramter
                {
                    // AWB Backup Enable
                    0,

                    // Daylight locus offset LUTs for tungsten
                {
                    21, // i4Size: LUT dimension
                    {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000}, // i4LUTIn
                    {0, 350,  800, 1222, 1444, 1667, 1889, 2111, 2333, 2556, 2778, 3000, 3222, 3444, 3667, 3889, 4111, 4333, 4556, 4778,  5000} // i4LUTOut
                },

                // Daylight locus offset LUTs for WF
                {
                    21, // i4Size: LUT dimension
                    {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000}, // i4LUTIn
                    {0, 350,  700,  850, 1200, 1667, 1889, 2111, 2333, 2556, 2778, 3000, 3222, 3444, 3667, 3889, 4111, 4333, 4556, 4778,  5000} // i4LUTOut
                },

                // Daylight locus offset LUTs for shade
                {
                    21, // i4Size: LUT dimension
                    {0, 500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 10000}, // i4LUTIn
                    {0, 500, 1000, 1500, 2500, 3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, 7500, 8000, 8000, 8000, 8500, 9000, 9500, 10000}  // i4LUTOut
                },
                // Preference gain for each light source
                {
                    //        LV0              LV1              LV2              LV3              LV4              LV5              LV6              LV7              LV8              LV9
                    {
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512},
                    //        LV10             LV11             LV12             LV13             LV14             LV15             LV16             LV17             LV18
          	            {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
        	        }, // STROBE
        	        {
          	            {530, 530, 480}, {530, 530, 480}, {530, 530, 480}, {530, 530, 480}, {530, 530, 480}, {520, 520, 496}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512},
           	            {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
        	        }, // TUNGSTEN
        	        {
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {490, 512, 540}, 
                    {480, 512, 580}, {490, 512, 540}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
        	        }, // WARM F
                {
                    {490, 512, 512}, {490, 512, 512}, {490, 512, 512}, {490, 512, 512}, {500, 512, 512}, {512, 512, 512}, {512, 512, 512}, {542, 512, 440}, {552, 512, 430}, {542, 512, 440}, 
                    {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}, {502, 512, 512}
                }, // F
                    {
                       {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 490},
                    {512, 512, 490}, {512, 512, 490}, {512, 512, 490}, {512, 512, 490}, {512, 512, 500}, {518, 512, 506}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                    }, // CWF
                    {
                        {498, 512, 512}, {498, 512, 512}, {498, 512, 512}, {498, 512, 512}, {498, 512, 512}, {498, 512, 512}, {498, 512, 512}, {500, 512, 512}, {500, 512, 512}, {506, 512, 512},
                        {506, 512, 512}, {506, 512, 512}, {506, 512, 512}, {506, 512, 512}, {512, 506, 500}, {512, 506, 500}, {512, 506, 506}, {503, 512, 512}, {503, 512, 512}
                    }, // DAYLIGHT
                  
                    {
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512},
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                    }, // SHADE
                    {
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512},
                        {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}, {512, 512, 512}
                    } // DAYLIGHT F
                },
                    // Parent block weight parameter
                    {
                        1,      // bEnable
                        6           // i4ScalingFactor: [6] 1~12, [7] 1~6, [8] 1~3, [9] 1~2, [>=10]: 1
                    },
                    // AWB LV threshold for predictor
                    {
                            115,    // i4InitLVThr_L
                            155,    // i4InitLVThr_H
                            100      // i4EnqueueLVThr
                    },
                    // AWB number threshold for temporal predictor
                    {
                            65,     // i4Neutral_ParentBlk_Thr
                        //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   2,   2,   2,   2,   2,   2,   2}  // (%) i4CWFDF_LUTThr
                    },
                    // AWB light neutral noise reduction for outdoor
                    {
                        //LV0  1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                        // Non neutral
                    { 3,  3,  3,  3,  3,  3,  3,  3,  3,  3,  5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // Flurescent
                {   0,   0,   0,   0,   0,   3,   5,   5,   5,   5,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // CWF
                {   0,   0,   0,   0,   0,   3,   5,   5,   5,   5,   5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    // Daylight
                    { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  2,  2,  2,  2},  // (%)
                    // DF
                    { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  5,  10,  10,  10,  10,  10,  10,  10,  10},  // (%)
                    },
                    // AWB feature detection
                    {
                    {
                        1,          // i4Enable
                        120,        // i4LVThr_L
                        130,        // i4LVThr_H
                        10,         // i4SunsetCountThr
                        0,          // i4SunsetCountRatio_L
                        192         // i4SunsetCountRatio_H
                    },
                    // Shade F Detection
                    {
                        1,          // i4Enable
                        50,        // i4LVThr_L
                        90,        // i4LVThr_H
                        128         // i4DaylightProb
                    },
                    // Shade CWF Detection
                    {
                        1,          // i4Enable
                        50,        // i4LVThr_L
                        90,        // i4LVThr_H
                        128         // i4DaylightProb
                    }
                },

                    // AWB non-neutral probability for spatial and temporal weighting look-up table (Max: 100; Min: 0)
                    {
                        //LV0   1    2    3    4    5    6    7    8    9    10   11   12   13   14   15   16   17   18
                     {   0,  33,  66, 100, 100, 100, 100, 100, 100, 100, 100,  70,  30,  30,  20,  10,   0,   0,   0}
                    },

                    // AWB daylight locus probability look-up table (Max: 100; Min: 0)
                    {
            //LV0    1     2     3      4     5     6     7     8      9      10     11    12   13     14    15   16    17    18
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  50,  25,   0,   0,   0,   0}, // Strobe
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  25,   0,   0,   0}, // Tungsten
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  25,  25,  25,   0,   0,   0}, // Warm fluorescent
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  80,  75,  50,  25,  25,  25,   0,   0,   0}, // Fluorescent
                    {  90,  90,  90,  90,  90,  90,  90,  90,  90,  90,  80,  55,  30,  30,  20,  10,   0,   0,   0}, // CWF
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  95,  90,  80,  60,  40,  50,  50,  30,  20}, // Daylight
                    { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,  75,  50,  40,  50,  25,   0,   0}, // Shade
                    {  90,  90,  90,  90,  90,  90,  90,  90,  90,  90,  85,  60,  30,  30,  30,  30,   0,   0,   0} // Daylight fluorescent
                },

                // AWB tuning information
                {
                    6735,       // project code
                    5588,       // model
                    20150624,   // date
                    0,          // reserved 0
                    1,          // reserved 1
                    2,          // reserved 2
                    3,          // reserved 3
                    4,          // reserved 4
                },
       }
};
    return g_rAWBNVRAM;
};































































































































































































