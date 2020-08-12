/*
 * File: ZeroForceDrag_ThreeJoints.h
 *
 * Code generated for Simulink model 'ZeroForceDrag_ThreeJoints'.
 *
 * Model version                  : 1.166
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jan  7 20:06:33 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ZeroForceDrag_ThreeJoints_h_
#define RTW_HEADER_ZeroForceDrag_ThreeJoints_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef ZeroForceDrag_ThreeJoints_COMMON_INCLUDES_
# define ZeroForceDrag_ThreeJoints_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* ZeroForceDrag_ThreeJoints_COMMON_INCLUDES_ */

#include "ZeroForceDrag_ThreeJoints_types.h"

/* Child system includes */
#include "DynamicsController.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

extern void init_eCAN_B ( uint16_T bitRatePrescaler, uint16_T timeSeg1, uint16_T
  timeSeg2, uint16_T sbg, uint16_T sjw, uint16_T sam);
extern void init_eCAN_A ( uint16_T bitRatePrescaler, uint16_T timeSeg1, uint16_T
  timeSeg2, uint16_T sbg, uint16_T sjw, uint16_T sam);
extern void init_SCI(void);
extern void init_SCI_GPIO(void);

/* user code (top of header file) */
/* System '<Root>' */
#define DELAY_JOINTX                   500000

void qibaozha_joint1(void);
void qibaozha_joint2(void);
void qibaozha_joint3(void);
void qibaozha_joint4(void);
void qibaozha_joint5(void);
void qibaozha_joint6(void);

/* user code (top of export header file) */
#include "can_message.h"
#include "can_message.h"

/* Block signals (default storage) */
typedef struct {
  real_T Gain9;                        /* '<S52>/Gain9' */
  real_T Gain9_h;                      /* '<S51>/Gain9' */
  real_T Gain9_d;                      /* '<S50>/Gain9' */
  real_T Gain9_g;                      /* '<S49>/Gain9' */
  real_T Gain9_f;                      /* '<S48>/Gain9' */
  real_T u;                            /* '<S1>/切换到电流模式 的使能信号' */
  real_T Saturation6;                  /* '<S7>/Saturation6' */
  real_T Saturation5;                  /* '<S7>/Saturation5' */
  real_T Saturation4;                  /* '<S7>/Saturation4' */
  real_T Saturation3;                  /* '<S7>/Saturation3' */
  real_T Saturation1;                  /* '<S7>/Saturation1' */
  real_T Saturation2;                  /* '<S7>/Saturation2' */
  uint16_T _o1[9];                     /* '<S135>/ ' */
  uint16_T _o2;                        /* '<S135>/ ' */
  uint16_T Switch[9];                  /* '<S143>/Switch' */
  uint16_T MSG[48];                    /* '<S10>/Chart2' */
  uint16_T StartRobot_f;               /* '<S10>/Chart2' */
  uint16_T In1;                        /* '<S41>/In1' */
  uint16_T DataTypeConversion[8];      /* '<S40>/Data Type Conversion' */
  uint16_T DataTypeConversion_j[8];    /* '<S39>/Data Type Conversion' */
  uint16_T DataTypeConversion_k[8];    /* '<S38>/Data Type Conversion' */
  uint16_T DataTypeConversion_kn[8];   /* '<S37>/Data Type Conversion' */
  uint16_T DataTypeConversion_km[8];   /* '<S36>/Data Type Conversion' */
  uint16_T DataTypeConversion_kw[8];   /* '<S35>/Data Type Conversion' */
  uint16_T TmpSignalConversionAtSCITransmi[20];
  uint16_T eCANReceive_o2[8];          /* '<S149>/eCAN Receive' */
  uint16_T eCANReceive_o2_b[8];        /* '<S148>/eCAN Receive' */
  uint16_T eCANReceive_o2_o[8];        /* '<S147>/eCAN Receive' */
  uint16_T eCANReceive_o2_be[8];       /* '<S146>/eCAN Receive' */
  uint16_T eCANReceive_o2_k[8];        /* '<S145>/eCAN Receive' */
  uint16_T eCANReceive1_o2[8];         /* '<S144>/eCAN Receive1' */
  uint16_T DataTypeConversion12[48];   /* '<S10>/Data Type Conversion12' */
  B_GetAngleSpeed_ZeroForceDrag_T GetAngleSpeed5;/* '<S8>/GetAngleSpeed5' */
  B_GetAngleSpeed_ZeroForceDrag_T GetAngleSpeed4;/* '<S8>/GetAngleSpeed4' */
  B_GetAngleSpeed_ZeroForceDrag_T GetAngleSpeed3;/* '<S8>/GetAngleSpeed3' */
  B_GetAngleSpeed_ZeroForceDrag_T GetAngleSpeed2;/* '<S8>/GetAngleSpeed2' */
  B_GetAngleSpeed_ZeroForceDrag_T GetAngleSpeed1;/* '<S8>/GetAngleSpeed1' */
  B_GetAngleSpeed_ZeroForceDrag_T GetAngleSpeed;/* '<S8>/GetAngleSpeed' */
  B_GetAngle_ZeroForceDrag_Thre_T GetAngle5;/* '<S8>/GetAngle5' */
  B_GetAngle_ZeroForceDrag_Thre_T GetAngle4;/* '<S8>/GetAngle4' */
  B_GetAngle_ZeroForceDrag_Thre_T GetAngle3;/* '<S8>/GetAngle3' */
  B_GetAngle_ZeroForceDrag_Thre_T GetAngle2;/* '<S8>/GetAngle2' */
  B_GetAngle_ZeroForceDrag_Thre_T GetAngle1;/* '<S8>/GetAngle1' */
  B_GetAngle_ZeroForceDrag_Thre_T GetAngle;/* '<S8>/GetAngle' */
} B_ZeroForceDrag_ThreeJoints_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint16_T bx;                         /* '<S10>/Chart2' */
  uint16_T start;                      /* '<S10>/Chart2' */
  uint16_T Output_DSTATE;              /* '<S127>/Output' */
  uint16_T is_active_c5_ZeroForceDrag_Thre;/* '<S10>/Chart2' */
  uint16_T is_c5_ZeroForceDrag_ThreeJoints;/* '<S10>/Chart2' */
  boolean_T PTX;                       /* '<S4>/消息使能' */
} DW_ZeroForceDrag_ThreeJoints_T;

/* Parameters (default storage) */
struct P_ZeroForceDrag_ThreeJoints_T_ {
  real_T GetAngle_InitAngle;           /* Mask Parameter: GetAngle_InitAngle
                                        * Referenced by: '<S8>/GetAngle'
                                        */
  real_T GetAngle1_InitAngle;          /* Mask Parameter: GetAngle1_InitAngle
                                        * Referenced by: '<S8>/GetAngle1'
                                        */
  real_T GetAngle2_InitAngle;          /* Mask Parameter: GetAngle2_InitAngle
                                        * Referenced by: '<S8>/GetAngle2'
                                        */
  real_T GetAngle3_InitAngle;          /* Mask Parameter: GetAngle3_InitAngle
                                        * Referenced by: '<S8>/GetAngle3'
                                        */
  real_T GetAngle4_InitAngle;          /* Mask Parameter: GetAngle4_InitAngle
                                        * Referenced by: '<S8>/GetAngle4'
                                        */
  real_T GetAngle5_InitAngle;          /* Mask Parameter: GetAngle5_InitAngle
                                        * Referenced by: '<S8>/GetAngle5'
                                        */
  real_T GetAngleSpeed_JJoint;         /* Mask Parameter: GetAngleSpeed_JJoint
                                        * Referenced by: '<S8>/GetAngleSpeed'
                                        */
  real_T GetAngleSpeed1_JJoint;        /* Mask Parameter: GetAngleSpeed1_JJoint
                                        * Referenced by: '<S8>/GetAngleSpeed1'
                                        */
  real_T GetAngleSpeed2_JJoint;        /* Mask Parameter: GetAngleSpeed2_JJoint
                                        * Referenced by: '<S8>/GetAngleSpeed2'
                                        */
  real_T GetAngleSpeed3_JJoint;        /* Mask Parameter: GetAngleSpeed3_JJoint
                                        * Referenced by: '<S8>/GetAngleSpeed3'
                                        */
  real_T GetAngleSpeed4_JJoint;        /* Mask Parameter: GetAngleSpeed4_JJoint
                                        * Referenced by: '<S8>/GetAngleSpeed4'
                                        */
  real_T GetAngleSpeed5_JJoint;        /* Mask Parameter: GetAngleSpeed5_JJoint
                                        * Referenced by: '<S8>/GetAngleSpeed5'
                                        */
  uint16_T ux88_const;                 /* Mask Parameter: ux88_const
                                        * Referenced by: '<S131>/Constant'
                                        */
  uint16_T ux0080_const;               /* Mask Parameter: ux0080_const
                                        * Referenced by: '<S130>/Constant'
                                        */
  uint16_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S132>/Constant'
                                        */
  uint16_T CompareToConstant2_const;   /* Mask Parameter: CompareToConstant2_const
                                        * Referenced by: '<S133>/Constant'
                                        */
  uint16_T GetAngle_JJoint;            /* Mask Parameter: GetAngle_JJoint
                                        * Referenced by: '<S8>/GetAngle'
                                        */
  uint16_T GetAngle1_JJoint;           /* Mask Parameter: GetAngle1_JJoint
                                        * Referenced by: '<S8>/GetAngle1'
                                        */
  uint16_T GetAngle2_JJoint;           /* Mask Parameter: GetAngle2_JJoint
                                        * Referenced by: '<S8>/GetAngle2'
                                        */
  uint16_T GetAngle3_JJoint;           /* Mask Parameter: GetAngle3_JJoint
                                        * Referenced by: '<S8>/GetAngle3'
                                        */
  uint16_T GetAngle4_JJoint;           /* Mask Parameter: GetAngle4_JJoint
                                        * Referenced by: '<S8>/GetAngle4'
                                        */
  uint16_T GetAngle5_JJoint;           /* Mask Parameter: GetAngle5_JJoint
                                        * Referenced by: '<S8>/GetAngle5'
                                        */
  uint16_T _uplimit;                   /* Mask Parameter: _uplimit
                                        * Referenced by: '<S129>/FixPt Switch'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T Gain9_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain9'
                                        */
  real_T Gain2_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain2'
                                        */
  real_T Gain1_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain1'
                                        */
  real_T Gain6_Gain;                   /* Expression: -1
                                        * Referenced by: '<S6>/Gain6'
                                        */
  real_T Gain4_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain4'
                                        */
  real_T Gain7_Gain;                   /* Expression: -1
                                        * Referenced by: '<S6>/Gain7'
                                        */
  real_T Gain5_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain5'
                                        */
  real_T Gain3_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain3'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 900
                                        * Referenced by: '<S7>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -900
                                        * Referenced by: '<S7>/Saturation2'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 900
                                        * Referenced by: '<S7>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -900
                                        * Referenced by: '<S7>/Saturation1'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: 900
                                        * Referenced by: '<S7>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: -900
                                        * Referenced by: '<S7>/Saturation3'
                                        */
  real_T Saturation4_UpperSat;         /* Expression: 900
                                        * Referenced by: '<S7>/Saturation4'
                                        */
  real_T Saturation4_LowerSat;         /* Expression: -900
                                        * Referenced by: '<S7>/Saturation4'
                                        */
  real_T Saturation5_UpperSat;         /* Expression: 900
                                        * Referenced by: '<S7>/Saturation5'
                                        */
  real_T Saturation5_LowerSat;         /* Expression: -900
                                        * Referenced by: '<S7>/Saturation5'
                                        */
  real_T Saturation6_UpperSat;         /* Expression: 900
                                        * Referenced by: '<S7>/Saturation6'
                                        */
  real_T Saturation6_LowerSat;         /* Expression: -900
                                        * Referenced by: '<S7>/Saturation6'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 180/pi
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T _InitialValue[6];             /* Expression: zeros(1,6)
                                        * Referenced by: '<S1>/各个关节内转子采集 到的实际角度'
                                        */
  real_T _InitialValue_p[6];           /* Expression: zeros(1,6)
                                        * Referenced by: '<S1>/各个关节内转子采集 到的实际角速度'
                                        */
  real_T _InitialValue_n[6];           /* Expression: zeros(1,6)
                                        * Referenced by: '<S1>/驱动各个关节 运动的力矩'
                                        */
  real_T DataStoreMemory10_InitialValue[6];/* Expression: [0 0 0 0 0 0]
                                            * Referenced by: '<Root>/Data Store Memory10'
                                            */
  real_T DataStoreMemory13_InitialValue[6];/* Expression: [0 0 0 0 0 0]
                                            * Referenced by: '<Root>/Data Store Memory13'
                                            */
  real_T DataStoreMemory3_InitialValue[6];/* Expression: [0 0 0 0 0 0]
                                           * Referenced by: '<Root>/Data Store Memory3'
                                           */
  real_T DataStoreMemory4_InitialValue[6];/* Expression: [0 0 0 0 0 0]
                                           * Referenced by: '<Root>/Data Store Memory4'
                                           */
  real_T DataStoreMemory5_InitialValue[6];/* Expression: [0 0 0 0 0 0]
                                           * Referenced by: '<Root>/Data Store Memory5'
                                           */
  real_T DataStoreMemory6_InitialValue[6];/* Expression: [0 0 0 0 0 0]
                                           * Referenced by: '<Root>/Data Store Memory6'
                                           */
  real_T DataStoreMemory7_InitialValue[6];/* Expression: [0 0 0 0 0 0]
                                           * Referenced by: '<Root>/Data Store Memory7'
                                           */
  real_T DataStoreMemory8_InitialValue[18];/* Expression: zeros(1,18)
                                            * Referenced by: '<Root>/Data Store Memory8'
                                            */
  int32_T DataStoreMemory1_InitialValue[6];/* Computed Parameter: DataStoreMemory1_InitialValue
                                            * Referenced by: '<Root>/Data Store Memory1'
                                            */
  int32_T DataStoreMemory11_InitialValue[6];/* Computed Parameter: DataStoreMemory11_InitialValue
                                             * Referenced by: '<Root>/Data Store Memory11'
                                             */
  int32_T DataStoreMemory2_InitialValue[6];/* Computed Parameter: DataStoreMemory2_InitialValue
                                            * Referenced by: '<Root>/Data Store Memory2'
                                            */
  uint16_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S21>/Constant1'
                                        */
  uint16_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S21>/Constant'
                                        */
  uint16_T bx_Y0;                      /* Computed Parameter: bx_Y0
                                        * Referenced by: '<S21>/bx'
                                        */
  uint16_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S21>/Switch'
                                        */
  uint16_T MSG_Y0;                     /* Computed Parameter: MSG_Y0
                                        * Referenced by: '<S20>/MSG'
                                        */
  uint16_T Out1_Y0;                    /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S41>/Out1'
                                        */
  uint16_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S22>/Constant'
                                        */
  uint16_T MSG_Y0_d;                   /* Computed Parameter: MSG_Y0_d
                                        * Referenced by: '<S19>/MSG'
                                        */
  uint16_T MSG_Y0_h;                   /* Computed Parameter: MSG_Y0_h
                                        * Referenced by: '<S18>/MSG'
                                        */
  uint16_T Constant_Value_p[9];        /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S143>/Constant'
                                        */
  uint16_T Switch_Threshold_o;         /* Computed Parameter: Switch_Threshold_o
                                        * Referenced by: '<S135>/Switch'
                                        */
  uint16_T Constant1_Value_f;          /* Computed Parameter: Constant1_Value_f
                                        * Referenced by: '<S126>/Constant1'
                                        */
  uint16_T DataStoreMemory9_InitialValue;/* Computed Parameter: DataStoreMemory9_InitialValue
                                          * Referenced by: '<Root>/Data Store Memory9'
                                          */
  boolean_T Constant1_Value_k;         /* Expression: true
                                        * Referenced by: '<S135>/Constant1'
                                        */
  boolean_T Constant_Value_fd;         /* Expression: false
                                        * Referenced by: '<S135>/Constant'
                                        */
  boolean_T _InitialValue_k;           /* Expression: true
                                        * Referenced by: '<S4>/消息使能'
                                        */
  boolean_T Constant_Value_fdk;        /* Expression: true
                                        * Referenced by: '<S2>/Constant'
                                        */
  boolean_T Constant1_Value_m;         /* Expression: false
                                        * Referenced by: '<S2>/Constant1'
                                        */
  uint16_T Constant_Value_l;           /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S9>/Constant'
                                        */
  uint16_T Constant1_Value_g;          /* Computed Parameter: Constant1_Value_g
                                        * Referenced by: '<S35>/Constant1'
                                        */
  uint16_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S35>/Constant2'
                                        */
  uint16_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S35>/Constant3'
                                        */
  uint16_T Constant8_Value;            /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S35>/Constant8'
                                        */
  uint16_T Constant1_Value_mf;         /* Computed Parameter: Constant1_Value_mf
                                        * Referenced by: '<S36>/Constant1'
                                        */
  uint16_T Constant2_Value_p;          /* Computed Parameter: Constant2_Value_p
                                        * Referenced by: '<S36>/Constant2'
                                        */
  uint16_T Constant3_Value_h;          /* Computed Parameter: Constant3_Value_h
                                        * Referenced by: '<S36>/Constant3'
                                        */
  uint16_T Constant8_Value_f;          /* Computed Parameter: Constant8_Value_f
                                        * Referenced by: '<S36>/Constant8'
                                        */
  uint16_T Constant1_Value_kx;         /* Computed Parameter: Constant1_Value_kx
                                        * Referenced by: '<S37>/Constant1'
                                        */
  uint16_T Constant2_Value_k;          /* Computed Parameter: Constant2_Value_k
                                        * Referenced by: '<S37>/Constant2'
                                        */
  uint16_T Constant3_Value_f;          /* Computed Parameter: Constant3_Value_f
                                        * Referenced by: '<S37>/Constant3'
                                        */
  uint16_T Constant8_Value_d;          /* Computed Parameter: Constant8_Value_d
                                        * Referenced by: '<S37>/Constant8'
                                        */
  uint16_T Constant1_Value_p;          /* Computed Parameter: Constant1_Value_p
                                        * Referenced by: '<S38>/Constant1'
                                        */
  uint16_T Constant2_Value_i;          /* Computed Parameter: Constant2_Value_i
                                        * Referenced by: '<S38>/Constant2'
                                        */
  uint16_T Constant3_Value_m;          /* Computed Parameter: Constant3_Value_m
                                        * Referenced by: '<S38>/Constant3'
                                        */
  uint16_T Constant8_Value_e;          /* Computed Parameter: Constant8_Value_e
                                        * Referenced by: '<S38>/Constant8'
                                        */
  uint16_T Constant1_Value_n;          /* Computed Parameter: Constant1_Value_n
                                        * Referenced by: '<S39>/Constant1'
                                        */
  uint16_T Constant2_Value_g;          /* Computed Parameter: Constant2_Value_g
                                        * Referenced by: '<S39>/Constant2'
                                        */
  uint16_T Constant3_Value_l;          /* Computed Parameter: Constant3_Value_l
                                        * Referenced by: '<S39>/Constant3'
                                        */
  uint16_T Constant8_Value_fr;         /* Computed Parameter: Constant8_Value_fr
                                        * Referenced by: '<S39>/Constant8'
                                        */
  uint16_T Constant1_Value_c;          /* Computed Parameter: Constant1_Value_c
                                        * Referenced by: '<S40>/Constant1'
                                        */
  uint16_T Constant2_Value_d;          /* Computed Parameter: Constant2_Value_d
                                        * Referenced by: '<S40>/Constant2'
                                        */
  uint16_T Constant3_Value_lp;         /* Computed Parameter: Constant3_Value_lp
                                        * Referenced by: '<S40>/Constant3'
                                        */
  uint16_T Constant8_Value_g;          /* Computed Parameter: Constant8_Value_g
                                        * Referenced by: '<S40>/Constant8'
                                        */
  uint16_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S20>/Constant'
                                        */
  uint16_T Constant2_Value_i3;         /* Computed Parameter: Constant2_Value_i3
                                        * Referenced by: '<S19>/Constant2'
                                        */
  uint16_T Constant6_Value;            /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S18>/Constant6'
                                        */
  uint16_T DataStoreMemory1_InitialValue_l;/* Computed Parameter: DataStoreMemory1_InitialValue_l
                                            * Referenced by: '<S7>/Data Store Memory1'
                                            */
  uint16_T Constant_Value_i;           /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S129>/Constant'
                                        */
  uint16_T Output_InitialCondition;    /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S127>/Output'
                                        */
  uint16_T Switch_Threshold_m;         /* Computed Parameter: Switch_Threshold_m
                                        * Referenced by: '<S2>/Switch'
                                        */
  uint16_T FixPtConstant_Value;        /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S128>/FixPt Constant'
                                        */
  P_GetAngleSpeed_ZeroForceDrag_T GetAngleSpeed5;/* '<S8>/GetAngleSpeed5' */
  P_GetAngleSpeed_ZeroForceDrag_T GetAngleSpeed4;/* '<S8>/GetAngleSpeed4' */
  P_GetAngleSpeed_ZeroForceDrag_T GetAngleSpeed3;/* '<S8>/GetAngleSpeed3' */
  P_GetAngleSpeed_ZeroForceDrag_T GetAngleSpeed2;/* '<S8>/GetAngleSpeed2' */
  P_GetAngleSpeed_ZeroForceDrag_T GetAngleSpeed1;/* '<S8>/GetAngleSpeed1' */
  P_GetAngleSpeed_ZeroForceDrag_T GetAngleSpeed;/* '<S8>/GetAngleSpeed' */
  P_GetAngle_ZeroForceDrag_Thre_T GetAngle5;/* '<S8>/GetAngle5' */
  P_GetAngle_ZeroForceDrag_Thre_T GetAngle4;/* '<S8>/GetAngle4' */
  P_GetAngle_ZeroForceDrag_Thre_T GetAngle3;/* '<S8>/GetAngle3' */
  P_GetAngle_ZeroForceDrag_Thre_T GetAngle2;/* '<S8>/GetAngle2' */
  P_GetAngle_ZeroForceDrag_Thre_T GetAngle1;/* '<S8>/GetAngle1' */
  P_GetAngle_ZeroForceDrag_Thre_T GetAngle;/* '<S8>/GetAngle' */
  P_J1_BG_ZeroForceDrag_ThreeJo_T J6_BG;/* '<S18>/J6_BG' */
  P_J1_BG_ZeroForceDrag_ThreeJo_T J5_BG;/* '<S18>/J5_BG' */
  P_J1_BG_ZeroForceDrag_ThreeJo_T J4_BG;/* '<S18>/J4_BG' */
  P_J1_BG_ZeroForceDrag_ThreeJo_T J3_BG;/* '<S18>/J3_BG' */
  P_J1_BG_ZeroForceDrag_ThreeJo_T J2_BG;/* '<S18>/J2_BG' */
  P_J1_BG_ZeroForceDrag_ThreeJo_T J1_BG;/* '<S18>/J1_BG' */
  P_J1_TF_ZeroForceDrag_ThreeJo_T J6_TF;/* '<S19>/J6_TF' */
  P_J1_TF_ZeroForceDrag_ThreeJo_T J5_TF;/* '<S19>/J5_TF' */
  P_J1_TF_ZeroForceDrag_ThreeJo_T J4_TF;/* '<S19>/J4_TF' */
  P_J1_TF_ZeroForceDrag_ThreeJo_T J3_TF;/* '<S19>/J3_TF' */
  P_J1_TF_ZeroForceDrag_ThreeJo_T J2_TF;/* '<S19>/J2_TF' */
  P_J1_TF_ZeroForceDrag_ThreeJo_T J1_TF;/* '<S19>/J1_TF' */
};

/* Real-time Model Data Structure */
struct tag_RTM_ZeroForceDrag_ThreeJo_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_ZeroForceDrag_ThreeJoints_T ZeroForceDrag_ThreeJoints_P;

/* Block signals (default storage) */
extern B_ZeroForceDrag_ThreeJoints_T ZeroForceDrag_ThreeJoints_B;

/* Block states (default storage) */
extern DW_ZeroForceDrag_ThreeJoints_T ZeroForceDrag_ThreeJoints_DW;

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern real_T J7[6];                   /* '<Root>/Data Store Memory10' */
extern real_T J1[6];                   /* '<Root>/Data Store Memory13' */
extern real_T J2[6];                   /* '<Root>/Data Store Memory3' */
extern real_T J3[6];                   /* '<Root>/Data Store Memory4' */
extern real_T J4[6];                   /* '<Root>/Data Store Memory5' */
extern real_T J5[6];                   /* '<Root>/Data Store Memory6' */
extern real_T J6[6];                   /* '<Root>/Data Store Memory7' */
extern real_T Send_GUIdata[18];        /* '<Root>/Data Store Memory8' */
extern real_T q[6];                    /* '<S1>/各个关节内转子采集 到的实际角度' */
extern real_T dq[6];                   /* '<S1>/各个关节内转子采集 到的实际角速度' */
extern real_T Tau[6];                  /* '<S1>/驱动各个关节 运动的力矩' */
extern int32_T Motor_Position[6];      /* '<Root>/Data Store Memory1' */
extern int32_T Motor_Current[6];       /* '<Root>/Data Store Memory11' */
extern int32_T Motor_Velocity[6];      /* '<Root>/Data Store Memory2' */
extern uint16_T StartRobot;            /* '<Root>/Data Store Memory9' */
extern uint16_T TXD;                   /* '<S7>/Data Store Memory1' */

/* Model entry point functions */
extern void ZeroForceDrag_ThreeJoints_initialize(void);
extern void ZeroForceDrag_ThreeJoints_step(void);
extern void ZeroForceDrag_ThreeJoints_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ZeroForceDrag_ThreeJ_T *const ZeroForceDrag_ThreeJoints_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S10>/Reshape1' : Unused code path elimination
 * Block '<S10>/Reshape5' : Unused code path elimination
 * Block '<S10>/Reshape6' : Unused code path elimination
 * Block '<S127>/Data Type Propagation' : Unused code path elimination
 * Block '<S128>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S129>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S23>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S23>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S23>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S23>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S23>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S23>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S24>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S24>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S24>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S24>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S24>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S24>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S25>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S25>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S25>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S25>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S25>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S25>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S26>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S26>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S26>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S26>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S26>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S26>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S27>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S27>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S27>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S27>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S27>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S27>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S18>/Reshape1' : Reshape block reduction
 * Block '<S18>/Reshape2' : Reshape block reduction
 * Block '<S29>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S29>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S29>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S29>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S31>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S31>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S31>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S31>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S32>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S32>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S32>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S32>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S33>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S33>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S33>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S33>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S34>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S34>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S34>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S34>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S19>/Reshape' : Reshape block reduction
 * Block '<S19>/Reshape1' : Reshape block reduction
 * Block '<S19>/Reshape2' : Reshape block reduction
 * Block '<S19>/Reshape3' : Reshape block reduction
 * Block '<S19>/Reshape4' : Reshape block reduction
 * Block '<S19>/Reshape5' : Reshape block reduction
 * Block '<S35>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S35>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S35>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S35>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S35>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S35>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S36>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S36>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S36>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S36>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S36>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S36>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S37>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S37>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S37>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S37>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S37>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S37>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S38>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S38>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S38>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S38>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S38>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S38>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S39>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S39>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S39>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S39>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S39>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S39>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S40>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S40>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S40>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S40>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S40>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S40>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S20>/Reshape2' : Reshape block reduction
 * Block '<S20>/Reshape3' : Reshape block reduction
 * Block '<S10>/Reshape2' : Reshape block reduction
 * Block '<S10>/Reshape3' : Reshape block reduction
 * Block '<S10>/Reshape4' : Reshape block reduction
 * Block '<S143>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S154>/Data Type Conversion9' : Eliminate redundant data type conversion
 * Block '<S155>/Data Type Conversion9' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ZeroForceDrag_ThreeJoints'
 * '<S1>'   : 'ZeroForceDrag_ThreeJoints/DynamicCalculation'
 * '<S2>'   : 'ZeroForceDrag_ThreeJoints/SendDataToGUI'
 * '<S3>'   : 'ZeroForceDrag_ThreeJoints/Subsystem'
 * '<S4>'   : 'ZeroForceDrag_ThreeJoints/接收上位机的数据'
 * '<S5>'   : 'ZeroForceDrag_ThreeJoints/获取关节角度、角速度信息'
 * '<S6>'   : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/Compensate'
 * '<S7>'   : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor'
 * '<S8>'   : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity'
 * '<S9>'   : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/BottomDriver'
 * '<S10>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令'
 * '<S11>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/BottomDriver/Joint1'
 * '<S12>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/BottomDriver/Joint2'
 * '<S13>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/BottomDriver/Joint3'
 * '<S14>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/BottomDriver/Joint4'
 * '<S15>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/BottomDriver/Joint5'
 * '<S16>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/BottomDriver/Joint6'
 * '<S17>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2'
 * '<S18>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/BG'
 * '<S19>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/TF'
 * '<S20>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/UM1'
 * '<S21>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/check'
 * '<S22>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/start_arm'
 * '<S23>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/BG/J1_BG'
 * '<S24>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/BG/J2_BG'
 * '<S25>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/BG/J3_BG'
 * '<S26>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/BG/J4_BG'
 * '<S27>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/BG/J5_BG'
 * '<S28>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/BG/J6_BG'
 * '<S29>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/TF/J1_TF'
 * '<S30>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/TF/J2_TF'
 * '<S31>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/TF/J3_TF'
 * '<S32>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/TF/J4_TF'
 * '<S33>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/TF/J5_TF'
 * '<S34>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/TF/J6_TF'
 * '<S35>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/UM1/J1_UM1'
 * '<S36>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/UM1/J2_UM1'
 * '<S37>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/UM1/J3_UM1'
 * '<S38>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/UM1/J4_UM1'
 * '<S39>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/UM1/J5_UM1'
 * '<S40>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/UM1/J6_UM1'
 * '<S41>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/DriveMotor/驱动器指令/Chart2/start_arm/StartRobotSubsystem'
 * '<S42>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle'
 * '<S43>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle1'
 * '<S44>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle2'
 * '<S45>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle3'
 * '<S46>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle4'
 * '<S47>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle5'
 * '<S48>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed'
 * '<S49>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed1'
 * '<S50>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed2'
 * '<S51>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed3'
 * '<S52>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed4'
 * '<S53>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed5'
 * '<S54>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle/Joint1'
 * '<S55>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle/Joint2'
 * '<S56>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle/Joint3'
 * '<S57>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle/Joint4'
 * '<S58>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle/Joint5'
 * '<S59>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle/Joint6'
 * '<S60>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle1/Joint1'
 * '<S61>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle1/Joint2'
 * '<S62>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle1/Joint3'
 * '<S63>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle1/Joint4'
 * '<S64>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle1/Joint5'
 * '<S65>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle1/Joint6'
 * '<S66>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle2/Joint1'
 * '<S67>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle2/Joint2'
 * '<S68>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle2/Joint3'
 * '<S69>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle2/Joint4'
 * '<S70>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle2/Joint5'
 * '<S71>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle2/Joint6'
 * '<S72>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle3/Joint1'
 * '<S73>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle3/Joint2'
 * '<S74>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle3/Joint3'
 * '<S75>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle3/Joint4'
 * '<S76>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle3/Joint5'
 * '<S77>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle3/Joint6'
 * '<S78>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle4/Joint1'
 * '<S79>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle4/Joint2'
 * '<S80>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle4/Joint3'
 * '<S81>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle4/Joint4'
 * '<S82>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle4/Joint5'
 * '<S83>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle4/Joint6'
 * '<S84>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle5/Joint1'
 * '<S85>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle5/Joint2'
 * '<S86>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle5/Joint3'
 * '<S87>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle5/Joint4'
 * '<S88>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle5/Joint5'
 * '<S89>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngle5/Joint6'
 * '<S90>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed/Joint1'
 * '<S91>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed/Joint2'
 * '<S92>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed/Joint3'
 * '<S93>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed/Joint4'
 * '<S94>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed/Joint5'
 * '<S95>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed/Joint6'
 * '<S96>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed1/Joint1'
 * '<S97>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed1/Joint2'
 * '<S98>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed1/Joint3'
 * '<S99>'  : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed1/Joint4'
 * '<S100>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed1/Joint5'
 * '<S101>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed1/Joint6'
 * '<S102>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed2/Joint1'
 * '<S103>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed2/Joint2'
 * '<S104>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed2/Joint3'
 * '<S105>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed2/Joint4'
 * '<S106>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed2/Joint5'
 * '<S107>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed2/Joint6'
 * '<S108>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed3/Joint1'
 * '<S109>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed3/Joint2'
 * '<S110>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed3/Joint3'
 * '<S111>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed3/Joint4'
 * '<S112>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed3/Joint5'
 * '<S113>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed3/Joint6'
 * '<S114>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed4/Joint1'
 * '<S115>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed4/Joint2'
 * '<S116>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed4/Joint3'
 * '<S117>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed4/Joint4'
 * '<S118>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed4/Joint5'
 * '<S119>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed4/Joint6'
 * '<S120>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed5/Joint1'
 * '<S121>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed5/Joint2'
 * '<S122>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed5/Joint3'
 * '<S123>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed5/Joint4'
 * '<S124>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed5/Joint5'
 * '<S125>' : 'ZeroForceDrag_ThreeJoints/DynamicCalculation/GetAngleVelocity/GetAngleSpeed5/Joint6'
 * '<S126>' : 'ZeroForceDrag_ThreeJoints/SendDataToGUI/  '
 * '<S127>' : 'ZeroForceDrag_ThreeJoints/SendDataToGUI/广播周期'
 * '<S128>' : 'ZeroForceDrag_ThreeJoints/SendDataToGUI/广播周期/Increment Real World'
 * '<S129>' : 'ZeroForceDrag_ThreeJoints/SendDataToGUI/广播周期/Wrap To Zero'
 * '<S130>' : 'ZeroForceDrag_ThreeJoints/接收上位机的数据/0x0080'
 * '<S131>' : 'ZeroForceDrag_ThreeJoints/接收上位机的数据/0x88'
 * '<S132>' : 'ZeroForceDrag_ThreeJoints/接收上位机的数据/Compare To Constant1'
 * '<S133>' : 'ZeroForceDrag_ThreeJoints/接收上位机的数据/Compare To Constant2'
 * '<S134>' : 'ZeroForceDrag_ThreeJoints/接收上位机的数据/Subsystem'
 * '<S135>' : 'ZeroForceDrag_ThreeJoints/接收上位机的数据/获取用户命令'
 * '<S136>' : 'ZeroForceDrag_ThreeJoints/接收上位机的数据/Subsystem/Joint1'
 * '<S137>' : 'ZeroForceDrag_ThreeJoints/接收上位机的数据/Subsystem/Joint2'
 * '<S138>' : 'ZeroForceDrag_ThreeJoints/接收上位机的数据/Subsystem/Joint3'
 * '<S139>' : 'ZeroForceDrag_ThreeJoints/接收上位机的数据/Subsystem/Joint4'
 * '<S140>' : 'ZeroForceDrag_ThreeJoints/接收上位机的数据/Subsystem/Joint5'
 * '<S141>' : 'ZeroForceDrag_ThreeJoints/接收上位机的数据/Subsystem/Joint6'
 * '<S142>' : 'ZeroForceDrag_ThreeJoints/接收上位机的数据/Subsystem/Joint7'
 * '<S143>' : 'ZeroForceDrag_ThreeJoints/接收上位机的数据/获取用户命令/消息校验'
 * '<S144>' : 'ZeroForceDrag_ThreeJoints/获取关节角度、角速度信息/CANA_284_24'
 * '<S145>' : 'ZeroForceDrag_ThreeJoints/获取关节角度、角速度信息/CANA_285_25'
 * '<S146>' : 'ZeroForceDrag_ThreeJoints/获取关节角度、角速度信息/CANA_286_26'
 * '<S147>' : 'ZeroForceDrag_ThreeJoints/获取关节角度、角速度信息/CANB_281_21'
 * '<S148>' : 'ZeroForceDrag_ThreeJoints/获取关节角度、角速度信息/CANB_282_22'
 * '<S149>' : 'ZeroForceDrag_ThreeJoints/获取关节角度、角速度信息/CANB_283_23'
 * '<S150>' : 'ZeroForceDrag_ThreeJoints/获取关节角度、角速度信息/CANA_284_24/Subsystem1'
 * '<S151>' : 'ZeroForceDrag_ThreeJoints/获取关节角度、角速度信息/CANA_285_25/Subsystem'
 * '<S152>' : 'ZeroForceDrag_ThreeJoints/获取关节角度、角速度信息/CANA_286_26/Subsystem'
 * '<S153>' : 'ZeroForceDrag_ThreeJoints/获取关节角度、角速度信息/CANB_281_21/Subsystem'
 * '<S154>' : 'ZeroForceDrag_ThreeJoints/获取关节角度、角速度信息/CANB_282_22/Subsystem'
 * '<S155>' : 'ZeroForceDrag_ThreeJoints/获取关节角度、角速度信息/CANB_283_23/Subsystem'
 */
#endif                                 /* RTW_HEADER_ZeroForceDrag_ThreeJoints_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
