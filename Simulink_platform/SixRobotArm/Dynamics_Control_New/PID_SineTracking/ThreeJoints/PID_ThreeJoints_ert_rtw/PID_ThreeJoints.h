/*
 * File: PID_ThreeJoints.h
 *
 * Code generated for Simulink model 'PID_ThreeJoints'.
 *
 * Model version                  : 1.259
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan  8 15:03:58 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PID_ThreeJoints_h_
#define RTW_HEADER_PID_ThreeJoints_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef PID_ThreeJoints_COMMON_INCLUDES_
# define PID_ThreeJoints_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* PID_ThreeJoints_COMMON_INCLUDES_ */

#include "PID_ThreeJoints_types.h"

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
  real_T Add[6];                       /* '<S1>/Add' */
  real_T Product;                      /* '<S150>/Product' */
  real_T Sum5;                         /* '<S150>/Sum5' */
  real_T Product_m;                    /* '<S149>/Product' */
  real_T Sum5_l;                       /* '<S149>/Sum5' */
  real_T Product_f;                    /* '<S148>/Product' */
  real_T Sum5_c;                       /* '<S148>/Sum5' */
  real_T Product_i;                    /* '<S147>/Product' */
  real_T Sum5_n;                       /* '<S147>/Sum5' */
  real_T Product_c;                    /* '<S146>/Product' */
  real_T Sum5_m;                       /* '<S146>/Sum5' */
  real_T Product_e;                    /* '<S145>/Product' */
  real_T Sum5_i;                       /* '<S145>/Sum5' */
  real_T e_o3;                         /* '<S1>/e' */
  real_T Sum1;                         /* '<S135>/Sum1' */
  real_T Sum1_c;                       /* '<S136>/Sum1' */
  real_T Sum1_o;                       /* '<S137>/Sum1' */
  real_T Sum1_g;                       /* '<S138>/Sum1' */
  real_T u;                            /* '<S1>/切换到电流模式 的使能信号' */
  real_T Add1;                         /* '<S6>/Add1' */
  real_T Add13;                        /* '<S6>/Add13' */
  real_T Add5;                         /* '<S6>/Add5' */
  real_T Add7;                         /* '<S6>/Add7' */
  real_T Add2;                         /* '<S6>/Add2' */
  real_T Add10;                        /* '<S6>/Add10' */
  uint16_T _o1[9];                     /* '<S172>/ ' */
  uint16_T _o2;                        /* '<S172>/ ' */
  uint16_T Switch[9];                  /* '<S180>/Switch' */
  uint16_T MSG[48];                    /* '<S17>/Chart2' */
  uint16_T StartRobot_o;               /* '<S17>/Chart2' */
  uint16_T In1;                        /* '<S48>/In1' */
  uint16_T DataTypeConversion[8];      /* '<S47>/Data Type Conversion' */
  uint16_T DataTypeConversion_o[8];    /* '<S46>/Data Type Conversion' */
  uint16_T DataTypeConversion_i[8];    /* '<S45>/Data Type Conversion' */
  uint16_T DataTypeConversion_g[8];    /* '<S44>/Data Type Conversion' */
  uint16_T DataTypeConversion_ot[8];   /* '<S43>/Data Type Conversion' */
  uint16_T DataTypeConversion_f[8];    /* '<S42>/Data Type Conversion' */
  uint16_T TmpSignalConversionAtSCITransmi[20];
  uint16_T eCANReceive_o2[8];          /* '<S156>/eCAN Receive' */
  uint16_T eCANReceive_o2_c[8];        /* '<S155>/eCAN Receive' */
  uint16_T eCANReceive_o2_cc[8];       /* '<S154>/eCAN Receive' */
  uint16_T eCANReceive_o2_a[8];        /* '<S153>/eCAN Receive' */
  uint16_T eCANReceive_o2_o[8];        /* '<S152>/eCAN Receive' */
  uint16_T eCANReceive1_o2[8];         /* '<S151>/eCAN Receive1' */
  uint16_T DataTypeConversion12[48];   /* '<S17>/Data Type Conversion12' */
  B_GetAngleSpeed_PID_ThreeJoin_T GetAngleSpeed5;/* '<S8>/GetAngleSpeed5' */
  B_GetAngleSpeed_PID_ThreeJoin_T GetAngleSpeed4;/* '<S8>/GetAngleSpeed4' */
  B_GetAngleSpeed_PID_ThreeJoin_T GetAngleSpeed3;/* '<S8>/GetAngleSpeed3' */
  B_GetAngleSpeed_PID_ThreeJoin_T GetAngleSpeed2;/* '<S8>/GetAngleSpeed2' */
  B_GetAngleSpeed_PID_ThreeJoin_T GetAngleSpeed1;/* '<S8>/GetAngleSpeed1' */
  B_GetAngleSpeed_PID_ThreeJoin_T GetAngleSpeed;/* '<S8>/GetAngleSpeed' */
  B_GetAngle_PID_ThreeJoints_T GetAngle5;/* '<S8>/GetAngle5' */
  B_GetAngle_PID_ThreeJoints_T GetAngle4;/* '<S8>/GetAngle4' */
  B_GetAngle_PID_ThreeJoints_T GetAngle3;/* '<S8>/GetAngle3' */
  B_GetAngle_PID_ThreeJoints_T GetAngle2;/* '<S8>/GetAngle2' */
  B_GetAngle_PID_ThreeJoints_T GetAngle1;/* '<S8>/GetAngle1' */
  B_GetAngle_PID_ThreeJoints_T GetAngle;/* '<S8>/GetAngle' */
} B_PID_ThreeJoints_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint16_T bx;                         /* '<S17>/Chart2' */
  uint16_T start;                      /* '<S17>/Chart2' */
  uint16_T Output_DSTATE;              /* '<S164>/Output' */
  uint16_T is_active_c5_PID_ThreeJoints;/* '<S17>/Chart2' */
  uint16_T is_c5_PID_ThreeJoints;      /* '<S17>/Chart2' */
  boolean_T PTX;                       /* '<S5>/消息使能' */
  DW_SineSignal_T u_e;                 /* '<S1>/关节四正弦信号发生器' */
  DW_SineSignal_T u_k;                 /* '<S1>/关节六正弦信号发生器' */
  DW_SineSignal_T u_d;                 /* '<S1>/关节五正弦信号发生器' */
  DW_SineSignal_T u_j;                 /* '<S1>/关节二正弦信号发生器' */
  DW_SineSignal_T u_a;                 /* '<S1>/关节三正弦信号发生器' */
  DW_SineSignal_T u_l;                 /* '<S1>/关节一正弦信号发生器' */
  DW_PID_Controller1_PID_ThreeJ_T PID_Controller6;/* '<S9>/PID_Controller6' */
  DW_PID_Controller1_PID_ThreeJ_T PID_Controller5;/* '<S9>/PID_Controller5' */
  DW_PID_Controller1_PID_ThreeJ_T PID_Controller4;/* '<S9>/PID_Controller4' */
  DW_PID_Controller1_PID_ThreeJ_T PID_Controller3;/* '<S9>/PID_Controller3' */
  DW_PID_Controller1_PID_ThreeJ_T PID_Controller2;/* '<S9>/PID_Controller2' */
  DW_PID_Controller1_PID_ThreeJ_T PID_Controller1;/* '<S9>/PID_Controller1' */
} DW_PID_ThreeJoints_T;

/* Parameters (default storage) */
struct P_PID_ThreeJoints_T_ {
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
                                        * Referenced by: '<S168>/Constant'
                                        */
  uint16_T ux0080_const;               /* Mask Parameter: ux0080_const
                                        * Referenced by: '<S167>/Constant'
                                        */
  uint16_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S169>/Constant'
                                        */
  uint16_T CompareToConstant2_const;   /* Mask Parameter: CompareToConstant2_const
                                        * Referenced by: '<S170>/Constant'
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
                                        * Referenced by: '<S166>/FixPt Switch'
                                        */
  real_T Constant1_Value;              /* Expression: -120
                                        * Referenced by: '<S6>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: -360
                                        * Referenced by: '<S6>/Constant'
                                        */
  real_T Constant2_Value;              /* Expression: -20
                                        * Referenced by: '<S6>/Constant2'
                                        */
  real_T Gain9_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain9'
                                        */
  real_T Gain5_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain5'
                                        */
  real_T Constant5_Value;              /* Expression: -20
                                        * Referenced by: '<S6>/Constant5'
                                        */
  real_T Gain4_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain4'
                                        */
  real_T Constant3_Value;              /* Expression: 160
                                        * Referenced by: '<S6>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 20
                                        * Referenced by: '<S6>/Constant4'
                                        */
  real_T Gain2_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain2'
                                        */
  real_T Gain1_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain1'
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
  real_T Gain5_Gain_l;                 /* Expression: 180/pi
                                        * Referenced by: '<S1>/Gain5'
                                        */
  real_T Gain7_Gain;                   /* Expression: 101
                                        * Referenced by: '<S1>/Gain7'
                                        */
  real_T Gain6_Gain;                   /* Expression: 180/pi
                                        * Referenced by: '<S1>/Gain6'
                                        */
  real_T Gain8_Gain;                   /* Expression: 101
                                        * Referenced by: '<S1>/Gain8'
                                        */
  real_T _InitialValue[6];             /* Expression: zeros(1,6)
                                        * Referenced by: '<S1>/各个关节内转子 理想的角度'
                                        */
  real_T _InitialValue_h[6];           /* Expression: zeros(1,6)
                                        * Referenced by: '<S1>/各个关节内转子采集 到的实际角度'
                                        */
  real_T _InitialValue_m[6];           /* Expression: zeros(1,6)
                                        * Referenced by: '<S1>/各个关节内转子采集 到的实际角速度'
                                        */
  real_T _InitialValue_hw[6];          /* Expression: zeros(1,6)
                                        * Referenced by: '<S1>/各个关节的内转子 位置跟踪误差'
                                        */
  real_T _InitialValue_j[12];          /* Expression: zeros(6,2)
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
  uint16_T Constant1_Value_b;          /* Computed Parameter: Constant1_Value_b
                                        * Referenced by: '<S28>/Constant1'
                                        */
  uint16_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S28>/Constant'
                                        */
  uint16_T bx_Y0;                      /* Computed Parameter: bx_Y0
                                        * Referenced by: '<S28>/bx'
                                        */
  uint16_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S28>/Switch'
                                        */
  uint16_T MSG_Y0;                     /* Computed Parameter: MSG_Y0
                                        * Referenced by: '<S27>/MSG'
                                        */
  uint16_T Out1_Y0;                    /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S48>/Out1'
                                        */
  uint16_T Constant_Value_j;           /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S29>/Constant'
                                        */
  uint16_T MSG_Y0_o;                   /* Computed Parameter: MSG_Y0_o
                                        * Referenced by: '<S26>/MSG'
                                        */
  uint16_T MSG_Y0_k;                   /* Computed Parameter: MSG_Y0_k
                                        * Referenced by: '<S25>/MSG'
                                        */
  uint16_T Constant_Value_mw[9];       /* Computed Parameter: Constant_Value_mw
                                        * Referenced by: '<S180>/Constant'
                                        */
  uint16_T Switch_Threshold_a;         /* Computed Parameter: Switch_Threshold_a
                                        * Referenced by: '<S172>/Switch'
                                        */
  uint16_T Constant1_Value_d;          /* Computed Parameter: Constant1_Value_d
                                        * Referenced by: '<S163>/Constant1'
                                        */
  uint16_T DataStoreMemory9_InitialValue;/* Computed Parameter: DataStoreMemory9_InitialValue
                                          * Referenced by: '<Root>/Data Store Memory9'
                                          */
  boolean_T Constant1_Value_p;         /* Expression: true
                                        * Referenced by: '<S172>/Constant1'
                                        */
  boolean_T Constant_Value_e;          /* Expression: false
                                        * Referenced by: '<S172>/Constant'
                                        */
  boolean_T _InitialValue_g;           /* Expression: true
                                        * Referenced by: '<S5>/消息使能'
                                        */
  boolean_T Constant_Value_n;          /* Expression: true
                                        * Referenced by: '<S3>/Constant'
                                        */
  boolean_T Constant1_Value_o;         /* Expression: false
                                        * Referenced by: '<S3>/Constant1'
                                        */
  uint16_T Constant_Value_jx;          /* Computed Parameter: Constant_Value_jx
                                        * Referenced by: '<S16>/Constant'
                                        */
  uint16_T Constant1_Value_ps;         /* Computed Parameter: Constant1_Value_ps
                                        * Referenced by: '<S42>/Constant1'
                                        */
  uint16_T Constant2_Value_o;          /* Computed Parameter: Constant2_Value_o
                                        * Referenced by: '<S42>/Constant2'
                                        */
  uint16_T Constant3_Value_a;          /* Computed Parameter: Constant3_Value_a
                                        * Referenced by: '<S42>/Constant3'
                                        */
  uint16_T Constant8_Value;            /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S42>/Constant8'
                                        */
  uint16_T Constant1_Value_j;          /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S43>/Constant1'
                                        */
  uint16_T Constant2_Value_f;          /* Computed Parameter: Constant2_Value_f
                                        * Referenced by: '<S43>/Constant2'
                                        */
  uint16_T Constant3_Value_ar;         /* Computed Parameter: Constant3_Value_ar
                                        * Referenced by: '<S43>/Constant3'
                                        */
  uint16_T Constant8_Value_o;          /* Computed Parameter: Constant8_Value_o
                                        * Referenced by: '<S43>/Constant8'
                                        */
  uint16_T Constant1_Value_m;          /* Computed Parameter: Constant1_Value_m
                                        * Referenced by: '<S44>/Constant1'
                                        */
  uint16_T Constant2_Value_p;          /* Computed Parameter: Constant2_Value_p
                                        * Referenced by: '<S44>/Constant2'
                                        */
  uint16_T Constant3_Value_ak;         /* Computed Parameter: Constant3_Value_ak
                                        * Referenced by: '<S44>/Constant3'
                                        */
  uint16_T Constant8_Value_m;          /* Computed Parameter: Constant8_Value_m
                                        * Referenced by: '<S44>/Constant8'
                                        */
  uint16_T Constant1_Value_mi;         /* Computed Parameter: Constant1_Value_mi
                                        * Referenced by: '<S45>/Constant1'
                                        */
  uint16_T Constant2_Value_h;          /* Computed Parameter: Constant2_Value_h
                                        * Referenced by: '<S45>/Constant2'
                                        */
  uint16_T Constant3_Value_o;          /* Computed Parameter: Constant3_Value_o
                                        * Referenced by: '<S45>/Constant3'
                                        */
  uint16_T Constant8_Value_p;          /* Computed Parameter: Constant8_Value_p
                                        * Referenced by: '<S45>/Constant8'
                                        */
  uint16_T Constant1_Value_mid;        /* Computed Parameter: Constant1_Value_mid
                                        * Referenced by: '<S46>/Constant1'
                                        */
  uint16_T Constant2_Value_l;          /* Computed Parameter: Constant2_Value_l
                                        * Referenced by: '<S46>/Constant2'
                                        */
  uint16_T Constant3_Value_f;          /* Computed Parameter: Constant3_Value_f
                                        * Referenced by: '<S46>/Constant3'
                                        */
  uint16_T Constant8_Value_a;          /* Computed Parameter: Constant8_Value_a
                                        * Referenced by: '<S46>/Constant8'
                                        */
  uint16_T Constant1_Value_e;          /* Computed Parameter: Constant1_Value_e
                                        * Referenced by: '<S47>/Constant1'
                                        */
  uint16_T Constant2_Value_b;          /* Computed Parameter: Constant2_Value_b
                                        * Referenced by: '<S47>/Constant2'
                                        */
  uint16_T Constant3_Value_d;          /* Computed Parameter: Constant3_Value_d
                                        * Referenced by: '<S47>/Constant3'
                                        */
  uint16_T Constant8_Value_c;          /* Computed Parameter: Constant8_Value_c
                                        * Referenced by: '<S47>/Constant8'
                                        */
  uint16_T Constant_Value_b;           /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S27>/Constant'
                                        */
  uint16_T Constant2_Value_n;          /* Computed Parameter: Constant2_Value_n
                                        * Referenced by: '<S26>/Constant2'
                                        */
  uint16_T Constant6_Value;            /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S25>/Constant6'
                                        */
  uint16_T DataStoreMemory1_InitialValue_d;/* Computed Parameter: DataStoreMemory1_InitialValue_d
                                            * Referenced by: '<S7>/Data Store Memory1'
                                            */
  uint16_T Constant_Value_p;           /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S166>/Constant'
                                        */
  uint16_T Output_InitialCondition;    /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S164>/Output'
                                        */
  uint16_T Switch_Threshold_h;         /* Computed Parameter: Switch_Threshold_h
                                        * Referenced by: '<S3>/Switch'
                                        */
  uint16_T FixPtConstant_Value;        /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S165>/FixPt Constant'
                                        */
  P_SineSignal_T u_e;                  /* '<S1>/关节四正弦信号发生器' */
  P_SineSignal_T u_k;                  /* '<S1>/关节六正弦信号发生器' */
  P_SineSignal_T u_d;                  /* '<S1>/关节五正弦信号发生器' */
  P_SineSignal_T u_j;                  /* '<S1>/关节二正弦信号发生器' */
  P_SineSignal_T u_a;                  /* '<S1>/关节三正弦信号发生器' */
  P_SineSignal_T u_l;                  /* '<S1>/关节一正弦信号发生器' */
  P_PID_Controller1_PID_ThreeJo_T PID_Controller6;/* '<S9>/PID_Controller6' */
  P_PID_Controller1_PID_ThreeJo_T PID_Controller5;/* '<S9>/PID_Controller5' */
  P_PID_Controller1_PID_ThreeJo_T PID_Controller4;/* '<S9>/PID_Controller4' */
  P_PID_Controller1_PID_ThreeJo_T PID_Controller3;/* '<S9>/PID_Controller3' */
  P_PID_Controller1_PID_ThreeJo_T PID_Controller2;/* '<S9>/PID_Controller2' */
  P_PID_Controller1_PID_ThreeJo_T PID_Controller1;/* '<S9>/PID_Controller1' */
  P_GetAngleSpeed_PID_ThreeJoin_T GetAngleSpeed5;/* '<S8>/GetAngleSpeed5' */
  P_GetAngleSpeed_PID_ThreeJoin_T GetAngleSpeed4;/* '<S8>/GetAngleSpeed4' */
  P_GetAngleSpeed_PID_ThreeJoin_T GetAngleSpeed3;/* '<S8>/GetAngleSpeed3' */
  P_GetAngleSpeed_PID_ThreeJoin_T GetAngleSpeed2;/* '<S8>/GetAngleSpeed2' */
  P_GetAngleSpeed_PID_ThreeJoin_T GetAngleSpeed1;/* '<S8>/GetAngleSpeed1' */
  P_GetAngleSpeed_PID_ThreeJoin_T GetAngleSpeed;/* '<S8>/GetAngleSpeed' */
  P_GetAngle_PID_ThreeJoints_T GetAngle5;/* '<S8>/GetAngle5' */
  P_GetAngle_PID_ThreeJoints_T GetAngle4;/* '<S8>/GetAngle4' */
  P_GetAngle_PID_ThreeJoints_T GetAngle3;/* '<S8>/GetAngle3' */
  P_GetAngle_PID_ThreeJoints_T GetAngle2;/* '<S8>/GetAngle2' */
  P_GetAngle_PID_ThreeJoints_T GetAngle1;/* '<S8>/GetAngle1' */
  P_GetAngle_PID_ThreeJoints_T GetAngle;/* '<S8>/GetAngle' */
  P_J1_BG_PID_ThreeJoints_T J6_BG;     /* '<S25>/J6_BG' */
  P_J1_BG_PID_ThreeJoints_T J5_BG;     /* '<S25>/J5_BG' */
  P_J1_BG_PID_ThreeJoints_T J4_BG;     /* '<S25>/J4_BG' */
  P_J1_BG_PID_ThreeJoints_T J3_BG;     /* '<S25>/J3_BG' */
  P_J1_BG_PID_ThreeJoints_T J2_BG;     /* '<S25>/J2_BG' */
  P_J1_BG_PID_ThreeJoints_T J1_BG;     /* '<S25>/J1_BG' */
  P_J1_TF_PID_ThreeJoints_T J6_TF;     /* '<S26>/J6_TF' */
  P_J1_TF_PID_ThreeJoints_T J5_TF;     /* '<S26>/J5_TF' */
  P_J1_TF_PID_ThreeJoints_T J4_TF;     /* '<S26>/J4_TF' */
  P_J1_TF_PID_ThreeJoints_T J3_TF;     /* '<S26>/J3_TF' */
  P_J1_TF_PID_ThreeJoints_T J2_TF;     /* '<S26>/J2_TF' */
  P_J1_TF_PID_ThreeJoints_T J1_TF;     /* '<S26>/J1_TF' */
};

/* Real-time Model Data Structure */
struct tag_RTM_PID_ThreeJoints_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_PID_ThreeJoints_T PID_ThreeJoints_P;

/* Block signals (default storage) */
extern B_PID_ThreeJoints_T PID_ThreeJoints_B;

/* Block states (default storage) */
extern DW_PID_ThreeJoints_T PID_ThreeJoints_DW;

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
extern real_T qd[6];                   /* '<S1>/各个关节内转子 理想的角度' */
extern real_T q[6];                    /* '<S1>/各个关节内转子采集 到的实际角度' */
extern real_T dq[6];                   /* '<S1>/各个关节内转子采集 到的实际角速度' */
extern real_T e[6];                    /* '<S1>/各个关节的内转子 位置跟踪误差' */
extern real_T Tau[12];                 /* '<S1>/驱动各个关节 运动的力矩' */
extern int32_T Motor_Position[6];      /* '<Root>/Data Store Memory1' */
extern int32_T Motor_Current[6];       /* '<Root>/Data Store Memory11' */
extern int32_T Motor_Velocity[6];      /* '<Root>/Data Store Memory2' */
extern uint16_T StartRobot;            /* '<Root>/Data Store Memory9' */
extern uint16_T TXD;                   /* '<S7>/Data Store Memory1' */

/* Model entry point functions */
extern void PID_ThreeJoints_initialize(void);
extern void PID_ThreeJoints_step(void);
extern void PID_ThreeJoints_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PID_ThreeJoints_T *const PID_ThreeJoints_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S17>/Reshape1' : Unused code path elimination
 * Block '<S17>/Reshape5' : Unused code path elimination
 * Block '<S17>/Reshape6' : Unused code path elimination
 * Block '<S1>/Gain1' : Unused code path elimination
 * Block '<S1>/Gain2' : Unused code path elimination
 * Block '<S1>/Gain3' : Unused code path elimination
 * Block '<S1>/Gain4' : Unused code path elimination
 * Block '<S139>/Data Type Duplicate' : Unused code path elimination
 * Block '<S140>/Data Type Duplicate' : Unused code path elimination
 * Block '<S141>/Data Type Duplicate' : Unused code path elimination
 * Block '<S142>/Data Type Duplicate' : Unused code path elimination
 * Block '<S143>/Data Type Duplicate' : Unused code path elimination
 * Block '<S144>/Data Type Duplicate' : Unused code path elimination
 * Block '<S164>/Data Type Propagation' : Unused code path elimination
 * Block '<S165>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S166>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S30>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S31>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S31>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S31>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S31>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S31>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S31>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S32>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S32>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S32>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S32>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S32>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S32>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S33>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S33>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S33>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S33>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S33>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S33>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S34>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S34>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S34>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S34>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S34>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S34>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S35>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S35>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S35>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S35>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S35>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S35>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S25>/Reshape1' : Reshape block reduction
 * Block '<S25>/Reshape2' : Reshape block reduction
 * Block '<S36>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S36>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S36>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S36>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S37>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S37>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S37>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S37>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S38>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S38>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S38>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S38>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S39>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S39>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S39>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S39>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S40>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S40>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S40>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S40>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S41>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S41>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S41>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S41>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S26>/Reshape' : Reshape block reduction
 * Block '<S26>/Reshape1' : Reshape block reduction
 * Block '<S26>/Reshape2' : Reshape block reduction
 * Block '<S26>/Reshape3' : Reshape block reduction
 * Block '<S26>/Reshape4' : Reshape block reduction
 * Block '<S26>/Reshape5' : Reshape block reduction
 * Block '<S42>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S42>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S42>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S42>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S42>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S42>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S43>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S43>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S43>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S43>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S43>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S43>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S44>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S44>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S44>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S44>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S44>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S44>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S45>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S45>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S45>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S45>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S45>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S45>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S46>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S46>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S46>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S46>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S46>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S46>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S47>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S47>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S47>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S47>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S47>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S47>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S27>/Reshape2' : Reshape block reduction
 * Block '<S27>/Reshape3' : Reshape block reduction
 * Block '<S17>/Reshape2' : Reshape block reduction
 * Block '<S17>/Reshape3' : Reshape block reduction
 * Block '<S17>/Reshape4' : Reshape block reduction
 * Block '<S133>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S133>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S133>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S133>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S134>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S134>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S134>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S134>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S135>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S135>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S135>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S135>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S136>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S136>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S136>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S136>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S137>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S137>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S137>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S137>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S138>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S138>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S138>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S138>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S161>/Data Type Conversion9' : Eliminate redundant data type conversion
 * Block '<S162>/Data Type Conversion9' : Eliminate redundant data type conversion
 * Block '<S180>/Data Type Conversion' : Eliminate redundant data type conversion
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
 * '<Root>' : 'PID_ThreeJoints'
 * '<S1>'   : 'PID_ThreeJoints/DynamicsController'
 * '<S2>'   : 'PID_ThreeJoints/GetMotorData'
 * '<S3>'   : 'PID_ThreeJoints/SendDataToGUI'
 * '<S4>'   : 'PID_ThreeJoints/Subsystem'
 * '<S5>'   : 'PID_ThreeJoints/接收上位机的数据'
 * '<S6>'   : 'PID_ThreeJoints/DynamicsController/Compensate'
 * '<S7>'   : 'PID_ThreeJoints/DynamicsController/DriveMotor'
 * '<S8>'   : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity'
 * '<S9>'   : 'PID_ThreeJoints/DynamicsController/PID_Controller'
 * '<S10>'  : 'PID_ThreeJoints/DynamicsController/关节一正弦信号发生器'
 * '<S11>'  : 'PID_ThreeJoints/DynamicsController/关节三正弦信号发生器'
 * '<S12>'  : 'PID_ThreeJoints/DynamicsController/关节二正弦信号发生器'
 * '<S13>'  : 'PID_ThreeJoints/DynamicsController/关节五正弦信号发生器'
 * '<S14>'  : 'PID_ThreeJoints/DynamicsController/关节六正弦信号发生器'
 * '<S15>'  : 'PID_ThreeJoints/DynamicsController/关节四正弦信号发生器'
 * '<S16>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/BottomDriver'
 * '<S17>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令'
 * '<S18>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/BottomDriver/Joint1'
 * '<S19>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/BottomDriver/Joint2'
 * '<S20>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/BottomDriver/Joint3'
 * '<S21>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/BottomDriver/Joint4'
 * '<S22>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/BottomDriver/Joint5'
 * '<S23>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/BottomDriver/Joint6'
 * '<S24>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2'
 * '<S25>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/BG'
 * '<S26>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/TF'
 * '<S27>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1'
 * '<S28>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/check'
 * '<S29>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/start_arm'
 * '<S30>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J1_BG'
 * '<S31>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J2_BG'
 * '<S32>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J3_BG'
 * '<S33>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J4_BG'
 * '<S34>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J5_BG'
 * '<S35>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J6_BG'
 * '<S36>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J1_TF'
 * '<S37>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J2_TF'
 * '<S38>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J3_TF'
 * '<S39>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J4_TF'
 * '<S40>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J5_TF'
 * '<S41>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J6_TF'
 * '<S42>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J1_UM1'
 * '<S43>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J2_UM1'
 * '<S44>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J3_UM1'
 * '<S45>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J4_UM1'
 * '<S46>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J5_UM1'
 * '<S47>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J6_UM1'
 * '<S48>'  : 'PID_ThreeJoints/DynamicsController/DriveMotor/驱动器指令/Chart2/start_arm/StartRobotSubsystem'
 * '<S49>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle'
 * '<S50>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle1'
 * '<S51>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle2'
 * '<S52>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle3'
 * '<S53>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle4'
 * '<S54>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle5'
 * '<S55>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed'
 * '<S56>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed1'
 * '<S57>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed2'
 * '<S58>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed3'
 * '<S59>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed4'
 * '<S60>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed5'
 * '<S61>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle/Joint1'
 * '<S62>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle/Joint2'
 * '<S63>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle/Joint3'
 * '<S64>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle/Joint4'
 * '<S65>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle/Joint5'
 * '<S66>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle/Joint6'
 * '<S67>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle1/Joint1'
 * '<S68>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle1/Joint2'
 * '<S69>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle1/Joint3'
 * '<S70>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle1/Joint4'
 * '<S71>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle1/Joint5'
 * '<S72>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle1/Joint6'
 * '<S73>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle2/Joint1'
 * '<S74>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle2/Joint2'
 * '<S75>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle2/Joint3'
 * '<S76>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle2/Joint4'
 * '<S77>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle2/Joint5'
 * '<S78>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle2/Joint6'
 * '<S79>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle3/Joint1'
 * '<S80>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle3/Joint2'
 * '<S81>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle3/Joint3'
 * '<S82>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle3/Joint4'
 * '<S83>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle3/Joint5'
 * '<S84>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle3/Joint6'
 * '<S85>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle4/Joint1'
 * '<S86>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle4/Joint2'
 * '<S87>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle4/Joint3'
 * '<S88>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle4/Joint4'
 * '<S89>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle4/Joint5'
 * '<S90>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle4/Joint6'
 * '<S91>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle5/Joint1'
 * '<S92>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle5/Joint2'
 * '<S93>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle5/Joint3'
 * '<S94>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle5/Joint4'
 * '<S95>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle5/Joint5'
 * '<S96>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngle5/Joint6'
 * '<S97>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint1'
 * '<S98>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint2'
 * '<S99>'  : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint3'
 * '<S100>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint4'
 * '<S101>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint5'
 * '<S102>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint6'
 * '<S103>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint1'
 * '<S104>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint2'
 * '<S105>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint3'
 * '<S106>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint4'
 * '<S107>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint5'
 * '<S108>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint6'
 * '<S109>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint1'
 * '<S110>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint2'
 * '<S111>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint3'
 * '<S112>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint4'
 * '<S113>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint5'
 * '<S114>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint6'
 * '<S115>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint1'
 * '<S116>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint2'
 * '<S117>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint3'
 * '<S118>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint4'
 * '<S119>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint5'
 * '<S120>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint6'
 * '<S121>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint1'
 * '<S122>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint2'
 * '<S123>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint3'
 * '<S124>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint4'
 * '<S125>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint5'
 * '<S126>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint6'
 * '<S127>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint1'
 * '<S128>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint2'
 * '<S129>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint3'
 * '<S130>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint4'
 * '<S131>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint5'
 * '<S132>' : 'PID_ThreeJoints/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint6'
 * '<S133>' : 'PID_ThreeJoints/DynamicsController/PID_Controller/PID_Controller1'
 * '<S134>' : 'PID_ThreeJoints/DynamicsController/PID_Controller/PID_Controller2'
 * '<S135>' : 'PID_ThreeJoints/DynamicsController/PID_Controller/PID_Controller3'
 * '<S136>' : 'PID_ThreeJoints/DynamicsController/PID_Controller/PID_Controller4'
 * '<S137>' : 'PID_ThreeJoints/DynamicsController/PID_Controller/PID_Controller5'
 * '<S138>' : 'PID_ThreeJoints/DynamicsController/PID_Controller/PID_Controller6'
 * '<S139>' : 'PID_ThreeJoints/DynamicsController/PID_Controller/PID_Controller1/Discrete Derivative1'
 * '<S140>' : 'PID_ThreeJoints/DynamicsController/PID_Controller/PID_Controller2/Discrete Derivative1'
 * '<S141>' : 'PID_ThreeJoints/DynamicsController/PID_Controller/PID_Controller3/Discrete Derivative1'
 * '<S142>' : 'PID_ThreeJoints/DynamicsController/PID_Controller/PID_Controller4/Discrete Derivative1'
 * '<S143>' : 'PID_ThreeJoints/DynamicsController/PID_Controller/PID_Controller5/Discrete Derivative1'
 * '<S144>' : 'PID_ThreeJoints/DynamicsController/PID_Controller/PID_Controller6/Discrete Derivative1'
 * '<S145>' : 'PID_ThreeJoints/DynamicsController/关节一正弦信号发生器/Subsystem'
 * '<S146>' : 'PID_ThreeJoints/DynamicsController/关节三正弦信号发生器/Subsystem'
 * '<S147>' : 'PID_ThreeJoints/DynamicsController/关节二正弦信号发生器/Subsystem'
 * '<S148>' : 'PID_ThreeJoints/DynamicsController/关节五正弦信号发生器/Subsystem'
 * '<S149>' : 'PID_ThreeJoints/DynamicsController/关节六正弦信号发生器/Subsystem'
 * '<S150>' : 'PID_ThreeJoints/DynamicsController/关节四正弦信号发生器/Subsystem'
 * '<S151>' : 'PID_ThreeJoints/GetMotorData/CANA_284_24'
 * '<S152>' : 'PID_ThreeJoints/GetMotorData/CANA_285_25'
 * '<S153>' : 'PID_ThreeJoints/GetMotorData/CANA_286_26'
 * '<S154>' : 'PID_ThreeJoints/GetMotorData/CANB_281_21'
 * '<S155>' : 'PID_ThreeJoints/GetMotorData/CANB_282_22'
 * '<S156>' : 'PID_ThreeJoints/GetMotorData/CANB_283_23'
 * '<S157>' : 'PID_ThreeJoints/GetMotorData/CANA_284_24/Subsystem1'
 * '<S158>' : 'PID_ThreeJoints/GetMotorData/CANA_285_25/Subsystem'
 * '<S159>' : 'PID_ThreeJoints/GetMotorData/CANA_286_26/Subsystem'
 * '<S160>' : 'PID_ThreeJoints/GetMotorData/CANB_281_21/Subsystem'
 * '<S161>' : 'PID_ThreeJoints/GetMotorData/CANB_282_22/Subsystem'
 * '<S162>' : 'PID_ThreeJoints/GetMotorData/CANB_283_23/Subsystem'
 * '<S163>' : 'PID_ThreeJoints/SendDataToGUI/  '
 * '<S164>' : 'PID_ThreeJoints/SendDataToGUI/广播周期'
 * '<S165>' : 'PID_ThreeJoints/SendDataToGUI/广播周期/Increment Real World'
 * '<S166>' : 'PID_ThreeJoints/SendDataToGUI/广播周期/Wrap To Zero'
 * '<S167>' : 'PID_ThreeJoints/接收上位机的数据/0x0080'
 * '<S168>' : 'PID_ThreeJoints/接收上位机的数据/0x88'
 * '<S169>' : 'PID_ThreeJoints/接收上位机的数据/Compare To Constant1'
 * '<S170>' : 'PID_ThreeJoints/接收上位机的数据/Compare To Constant2'
 * '<S171>' : 'PID_ThreeJoints/接收上位机的数据/Subsystem'
 * '<S172>' : 'PID_ThreeJoints/接收上位机的数据/获取用户命令'
 * '<S173>' : 'PID_ThreeJoints/接收上位机的数据/Subsystem/Joint1'
 * '<S174>' : 'PID_ThreeJoints/接收上位机的数据/Subsystem/Joint2'
 * '<S175>' : 'PID_ThreeJoints/接收上位机的数据/Subsystem/Joint3'
 * '<S176>' : 'PID_ThreeJoints/接收上位机的数据/Subsystem/Joint4'
 * '<S177>' : 'PID_ThreeJoints/接收上位机的数据/Subsystem/Joint5'
 * '<S178>' : 'PID_ThreeJoints/接收上位机的数据/Subsystem/Joint6'
 * '<S179>' : 'PID_ThreeJoints/接收上位机的数据/Subsystem/Joint7'
 * '<S180>' : 'PID_ThreeJoints/接收上位机的数据/获取用户命令/消息校验'
 */
#endif                                 /* RTW_HEADER_PID_ThreeJoints_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
