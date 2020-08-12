/*
 * File: PID_MoreJoints1_6.h
 *
 * Code generated for Simulink model 'PID_MoreJoints1_6'.
 *
 * Model version                  : 1.339
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan  8 15:53:53 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PID_MoreJoints1_6_h_
#define RTW_HEADER_PID_MoreJoints1_6_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef PID_MoreJoints1_6_COMMON_INCLUDES_
# define PID_MoreJoints1_6_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* PID_MoreJoints1_6_COMMON_INCLUDES_ */

#include "PID_MoreJoints1_6_types.h"

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
  real_T Product_k;                    /* '<S149>/Product' */
  real_T Sum5_a;                       /* '<S149>/Sum5' */
  real_T Product_b;                    /* '<S148>/Product' */
  real_T Sum5_ak;                      /* '<S148>/Sum5' */
  real_T Product_d;                    /* '<S147>/Product' */
  real_T Sum5_g;                       /* '<S147>/Sum5' */
  real_T Product_a;                    /* '<S146>/Product' */
  real_T Sum5_l;                       /* '<S146>/Sum5' */
  real_T Product_e;                    /* '<S145>/Product' */
  real_T Sum5_i;                       /* '<S145>/Sum5' */
  real_T Sum1;                         /* '<S134>/Sum1' */
  real_T Sum1_g;                       /* '<S135>/Sum1' */
  real_T Sum1_c;                       /* '<S136>/Sum1' */
  real_T Sum1_o;                       /* '<S137>/Sum1' */
  real_T Sum1_ge;                      /* '<S138>/Sum1' */
  real_T Saturation6;                  /* '<S7>/Saturation6' */
  real_T Saturation5;                  /* '<S7>/Saturation5' */
  real_T Saturation4;                  /* '<S7>/Saturation4' */
  real_T Saturation3;                  /* '<S7>/Saturation3' */
  real_T Saturation1;                  /* '<S7>/Saturation1' */
  real_T Saturation2;                  /* '<S7>/Saturation2' */
  real_T u;                            /* '<S1>/切换到电流模式 的使能信号' */
  uint16_T _o1[9];                     /* '<S172>/ ' */
  uint16_T _o2;                        /* '<S172>/ ' */
  uint16_T Switch[9];                  /* '<S180>/Switch' */
  uint16_T MSG[48];                    /* '<S17>/Chart2' */
  uint16_T StartRobot_b;               /* '<S17>/Chart2' */
  uint16_T In1;                        /* '<S48>/In1' */
  uint16_T DataTypeConversion[8];      /* '<S47>/Data Type Conversion' */
  uint16_T DataTypeConversion_d[8];    /* '<S46>/Data Type Conversion' */
  uint16_T DataTypeConversion_n[8];    /* '<S45>/Data Type Conversion' */
  uint16_T DataTypeConversion_a[8];    /* '<S44>/Data Type Conversion' */
  uint16_T DataTypeConversion_j[8];    /* '<S43>/Data Type Conversion' */
  uint16_T DataTypeConversion_k[8];    /* '<S42>/Data Type Conversion' */
  uint16_T TmpSignalConversionAtSCITransmi[20];
  uint16_T eCANReceive_o2[8];          /* '<S156>/eCAN Receive' */
  uint16_T eCANReceive_o2_c[8];        /* '<S155>/eCAN Receive' */
  uint16_T eCANReceive_o2_n[8];        /* '<S154>/eCAN Receive' */
  uint16_T eCANReceive_o2_l[8];        /* '<S153>/eCAN Receive' */
  uint16_T eCANReceive_o2_m[8];        /* '<S152>/eCAN Receive' */
  uint16_T eCANReceive1_o2[8];         /* '<S151>/eCAN Receive1' */
  uint16_T DataTypeConversion12[48];   /* '<S17>/Data Type Conversion12' */
  B_GetAngleSpeed_PID_MoreJoint_T GetAngleSpeed5;/* '<S8>/GetAngleSpeed5' */
  B_GetAngleSpeed_PID_MoreJoint_T GetAngleSpeed4;/* '<S8>/GetAngleSpeed4' */
  B_GetAngleSpeed_PID_MoreJoint_T GetAngleSpeed3;/* '<S8>/GetAngleSpeed3' */
  B_GetAngleSpeed_PID_MoreJoint_T GetAngleSpeed2;/* '<S8>/GetAngleSpeed2' */
  B_GetAngleSpeed_PID_MoreJoint_T GetAngleSpeed1;/* '<S8>/GetAngleSpeed1' */
  B_GetAngleSpeed_PID_MoreJoint_T GetAngleSpeed;/* '<S8>/GetAngleSpeed' */
  B_GetAngle_PID_MoreJoints1_6_T GetAngle5;/* '<S8>/GetAngle5' */
  B_GetAngle_PID_MoreJoints1_6_T GetAngle4;/* '<S8>/GetAngle4' */
  B_GetAngle_PID_MoreJoints1_6_T GetAngle3;/* '<S8>/GetAngle3' */
  B_GetAngle_PID_MoreJoints1_6_T GetAngle2;/* '<S8>/GetAngle2' */
  B_GetAngle_PID_MoreJoints1_6_T GetAngle1;/* '<S8>/GetAngle1' */
  B_GetAngle_PID_MoreJoints1_6_T GetAngle;/* '<S8>/GetAngle' */
} B_PID_MoreJoints1_6_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint16_T bx;                         /* '<S17>/Chart2' */
  uint16_T start;                      /* '<S17>/Chart2' */
  uint16_T Output_DSTATE;              /* '<S164>/Output' */
  uint16_T is_active_c5_PID_MoreJoints1_6;/* '<S17>/Chart2' */
  uint16_T is_c5_PID_MoreJoints1_6;    /* '<S17>/Chart2' */
  boolean_T PTX;                       /* '<S5>/消息使能' */
  DW_SineSignal_T u_e;                 /* '<S1>/关节四正弦信号发生器' */
  DW_SineSignal_T u_k;                 /* '<S1>/关节六正弦信号发生器' */
  DW_SineSignal_T u_d;                 /* '<S1>/关节五正弦信号发生器' */
  DW_SineSignal_T u_j;                 /* '<S1>/关节二正弦信号发生器' */
  DW_SineSignal_T u_a;                 /* '<S1>/关节三正弦信号发生器' */
  DW_SineSignal_T u_l;                 /* '<S1>/关节一正弦信号发生器' */
  DW_PID_Controller1_PID_MoreJo_T PID_Controller6;/* '<S9>/PID_Controller6' */
  DW_PID_Controller1_PID_MoreJo_T PID_Controller5;/* '<S9>/PID_Controller5' */
  DW_PID_Controller1_PID_MoreJo_T PID_Controller4;/* '<S9>/PID_Controller4' */
  DW_PID_Controller1_PID_MoreJo_T PID_Controller3;/* '<S9>/PID_Controller3' */
  DW_PID_Controller1_PID_MoreJo_T PID_Controller2;/* '<S9>/PID_Controller2' */
  DW_PID_Controller1_PID_MoreJo_T PID_Controller1;/* '<S9>/PID_Controller1' */
} DW_PID_MoreJoints1_6_T;

/* Parameters (default storage) */
struct P_PID_MoreJoints1_6_T_ {
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
  real_T Constant1_Value;              /* Expression: -140
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
  uint16_T Constant1_Value_f;          /* Computed Parameter: Constant1_Value_f
                                        * Referenced by: '<S28>/Constant1'
                                        */
  uint16_T Constant_Value_j;           /* Computed Parameter: Constant_Value_j
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
  uint16_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S29>/Constant'
                                        */
  uint16_T MSG_Y0_e;                   /* Computed Parameter: MSG_Y0_e
                                        * Referenced by: '<S26>/MSG'
                                        */
  uint16_T MSG_Y0_n;                   /* Computed Parameter: MSG_Y0_n
                                        * Referenced by: '<S25>/MSG'
                                        */
  uint16_T Constant_Value_m[9];        /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S180>/Constant'
                                        */
  uint16_T Switch_Threshold_a;         /* Computed Parameter: Switch_Threshold_a
                                        * Referenced by: '<S172>/Switch'
                                        */
  uint16_T Constant1_Value_b;          /* Computed Parameter: Constant1_Value_b
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
  boolean_T Constant_Value_i;          /* Expression: true
                                        * Referenced by: '<S3>/Constant'
                                        */
  boolean_T Constant1_Value_n;         /* Expression: false
                                        * Referenced by: '<S3>/Constant1'
                                        */
  uint16_T Constant_Value_b;           /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S16>/Constant'
                                        */
  uint16_T Constant1_Value_o;          /* Computed Parameter: Constant1_Value_o
                                        * Referenced by: '<S42>/Constant1'
                                        */
  uint16_T Constant2_Value_k;          /* Computed Parameter: Constant2_Value_k
                                        * Referenced by: '<S42>/Constant2'
                                        */
  uint16_T Constant3_Value_a;          /* Computed Parameter: Constant3_Value_a
                                        * Referenced by: '<S42>/Constant3'
                                        */
  uint16_T Constant8_Value;            /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S42>/Constant8'
                                        */
  uint16_T Constant1_Value_h;          /* Computed Parameter: Constant1_Value_h
                                        * Referenced by: '<S43>/Constant1'
                                        */
  uint16_T Constant2_Value_h;          /* Computed Parameter: Constant2_Value_h
                                        * Referenced by: '<S43>/Constant2'
                                        */
  uint16_T Constant3_Value_b;          /* Computed Parameter: Constant3_Value_b
                                        * Referenced by: '<S43>/Constant3'
                                        */
  uint16_T Constant8_Value_h;          /* Computed Parameter: Constant8_Value_h
                                        * Referenced by: '<S43>/Constant8'
                                        */
  uint16_T Constant1_Value_k;          /* Computed Parameter: Constant1_Value_k
                                        * Referenced by: '<S44>/Constant1'
                                        */
  uint16_T Constant2_Value_c;          /* Computed Parameter: Constant2_Value_c
                                        * Referenced by: '<S44>/Constant2'
                                        */
  uint16_T Constant3_Value_bv;         /* Computed Parameter: Constant3_Value_bv
                                        * Referenced by: '<S44>/Constant3'
                                        */
  uint16_T Constant8_Value_k;          /* Computed Parameter: Constant8_Value_k
                                        * Referenced by: '<S44>/Constant8'
                                        */
  uint16_T Constant1_Value_a;          /* Computed Parameter: Constant1_Value_a
                                        * Referenced by: '<S45>/Constant1'
                                        */
  uint16_T Constant2_Value_b;          /* Computed Parameter: Constant2_Value_b
                                        * Referenced by: '<S45>/Constant2'
                                        */
  uint16_T Constant3_Value_e;          /* Computed Parameter: Constant3_Value_e
                                        * Referenced by: '<S45>/Constant3'
                                        */
  uint16_T Constant8_Value_k0;         /* Computed Parameter: Constant8_Value_k0
                                        * Referenced by: '<S45>/Constant8'
                                        */
  uint16_T Constant1_Value_oj;         /* Computed Parameter: Constant1_Value_oj
                                        * Referenced by: '<S46>/Constant1'
                                        */
  uint16_T Constant2_Value_a;          /* Computed Parameter: Constant2_Value_a
                                        * Referenced by: '<S46>/Constant2'
                                        */
  uint16_T Constant3_Value_j;          /* Computed Parameter: Constant3_Value_j
                                        * Referenced by: '<S46>/Constant3'
                                        */
  uint16_T Constant8_Value_n;          /* Computed Parameter: Constant8_Value_n
                                        * Referenced by: '<S46>/Constant8'
                                        */
  uint16_T Constant1_Value_nv;         /* Computed Parameter: Constant1_Value_nv
                                        * Referenced by: '<S47>/Constant1'
                                        */
  uint16_T Constant2_Value_e;          /* Computed Parameter: Constant2_Value_e
                                        * Referenced by: '<S47>/Constant2'
                                        */
  uint16_T Constant3_Value_n;          /* Computed Parameter: Constant3_Value_n
                                        * Referenced by: '<S47>/Constant3'
                                        */
  uint16_T Constant8_Value_e;          /* Computed Parameter: Constant8_Value_e
                                        * Referenced by: '<S47>/Constant8'
                                        */
  uint16_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S27>/Constant'
                                        */
  uint16_T Constant2_Value_j;          /* Computed Parameter: Constant2_Value_j
                                        * Referenced by: '<S26>/Constant2'
                                        */
  uint16_T Constant6_Value;            /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S25>/Constant6'
                                        */
  uint16_T DataStoreMemory1_InitialValue_i;/* Computed Parameter: DataStoreMemory1_InitialValue_i
                                            * Referenced by: '<S7>/Data Store Memory1'
                                            */
  uint16_T Constant_Value_m3;          /* Computed Parameter: Constant_Value_m3
                                        * Referenced by: '<S166>/Constant'
                                        */
  uint16_T Output_InitialCondition;    /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S164>/Output'
                                        */
  uint16_T Switch_Threshold_ad;        /* Computed Parameter: Switch_Threshold_ad
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
  P_PID_Controller1_PID_MoreJoi_T PID_Controller6;/* '<S9>/PID_Controller6' */
  P_PID_Controller1_PID_MoreJoi_T PID_Controller5;/* '<S9>/PID_Controller5' */
  P_PID_Controller1_PID_MoreJoi_T PID_Controller4;/* '<S9>/PID_Controller4' */
  P_PID_Controller1_PID_MoreJoi_T PID_Controller3;/* '<S9>/PID_Controller3' */
  P_PID_Controller1_PID_MoreJoi_T PID_Controller2;/* '<S9>/PID_Controller2' */
  P_PID_Controller1_PID_MoreJoi_T PID_Controller1;/* '<S9>/PID_Controller1' */
  P_GetAngleSpeed_PID_MoreJoint_T GetAngleSpeed5;/* '<S8>/GetAngleSpeed5' */
  P_GetAngleSpeed_PID_MoreJoint_T GetAngleSpeed4;/* '<S8>/GetAngleSpeed4' */
  P_GetAngleSpeed_PID_MoreJoint_T GetAngleSpeed3;/* '<S8>/GetAngleSpeed3' */
  P_GetAngleSpeed_PID_MoreJoint_T GetAngleSpeed2;/* '<S8>/GetAngleSpeed2' */
  P_GetAngleSpeed_PID_MoreJoint_T GetAngleSpeed1;/* '<S8>/GetAngleSpeed1' */
  P_GetAngleSpeed_PID_MoreJoint_T GetAngleSpeed;/* '<S8>/GetAngleSpeed' */
  P_GetAngle_PID_MoreJoints1_6_T GetAngle5;/* '<S8>/GetAngle5' */
  P_GetAngle_PID_MoreJoints1_6_T GetAngle4;/* '<S8>/GetAngle4' */
  P_GetAngle_PID_MoreJoints1_6_T GetAngle3;/* '<S8>/GetAngle3' */
  P_GetAngle_PID_MoreJoints1_6_T GetAngle2;/* '<S8>/GetAngle2' */
  P_GetAngle_PID_MoreJoints1_6_T GetAngle1;/* '<S8>/GetAngle1' */
  P_GetAngle_PID_MoreJoints1_6_T GetAngle;/* '<S8>/GetAngle' */
  P_J1_BG_PID_MoreJoints1_6_T J6_BG;   /* '<S25>/J6_BG' */
  P_J1_BG_PID_MoreJoints1_6_T J5_BG;   /* '<S25>/J5_BG' */
  P_J1_BG_PID_MoreJoints1_6_T J4_BG;   /* '<S25>/J4_BG' */
  P_J1_BG_PID_MoreJoints1_6_T J3_BG;   /* '<S25>/J3_BG' */
  P_J1_BG_PID_MoreJoints1_6_T J2_BG;   /* '<S25>/J2_BG' */
  P_J1_BG_PID_MoreJoints1_6_T J1_BG;   /* '<S25>/J1_BG' */
  P_J1_TF_PID_MoreJoints1_6_T J6_TF;   /* '<S26>/J6_TF' */
  P_J1_TF_PID_MoreJoints1_6_T J5_TF;   /* '<S26>/J5_TF' */
  P_J1_TF_PID_MoreJoints1_6_T J4_TF;   /* '<S26>/J4_TF' */
  P_J1_TF_PID_MoreJoints1_6_T J3_TF;   /* '<S26>/J3_TF' */
  P_J1_TF_PID_MoreJoints1_6_T J2_TF;   /* '<S26>/J2_TF' */
  P_J1_TF_PID_MoreJoints1_6_T J1_TF;   /* '<S26>/J1_TF' */
};

/* Real-time Model Data Structure */
struct tag_RTM_PID_MoreJoints1_6_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_PID_MoreJoints1_6_T PID_MoreJoints1_6_P;

/* Block signals (default storage) */
extern B_PID_MoreJoints1_6_T PID_MoreJoints1_6_B;

/* Block states (default storage) */
extern DW_PID_MoreJoints1_6_T PID_MoreJoints1_6_DW;

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
extern void PID_MoreJoints1_6_initialize(void);
extern void PID_MoreJoints1_6_step(void);
extern void PID_MoreJoints1_6_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PID_MoreJoints1_6_T *const PID_MoreJoints1_6_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
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
 * Block '<S17>/Reshape1' : Reshape block reduction
 * Block '<S17>/Reshape2' : Reshape block reduction
 * Block '<S17>/Reshape3' : Reshape block reduction
 * Block '<S17>/Reshape4' : Reshape block reduction
 * Block '<S17>/Reshape5' : Reshape block reduction
 * Block '<S17>/Reshape6' : Reshape block reduction
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
 * '<Root>' : 'PID_MoreJoints1_6'
 * '<S1>'   : 'PID_MoreJoints1_6/DynamicsController'
 * '<S2>'   : 'PID_MoreJoints1_6/GetMotorData'
 * '<S3>'   : 'PID_MoreJoints1_6/SendDataToGUI'
 * '<S4>'   : 'PID_MoreJoints1_6/Subsystem'
 * '<S5>'   : 'PID_MoreJoints1_6/接收上位机的数据'
 * '<S6>'   : 'PID_MoreJoints1_6/DynamicsController/Compensate'
 * '<S7>'   : 'PID_MoreJoints1_6/DynamicsController/DriveMotor'
 * '<S8>'   : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity'
 * '<S9>'   : 'PID_MoreJoints1_6/DynamicsController/PID_Controller'
 * '<S10>'  : 'PID_MoreJoints1_6/DynamicsController/关节一正弦信号发生器'
 * '<S11>'  : 'PID_MoreJoints1_6/DynamicsController/关节三正弦信号发生器'
 * '<S12>'  : 'PID_MoreJoints1_6/DynamicsController/关节二正弦信号发生器'
 * '<S13>'  : 'PID_MoreJoints1_6/DynamicsController/关节五正弦信号发生器'
 * '<S14>'  : 'PID_MoreJoints1_6/DynamicsController/关节六正弦信号发生器'
 * '<S15>'  : 'PID_MoreJoints1_6/DynamicsController/关节四正弦信号发生器'
 * '<S16>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/BottomDriver'
 * '<S17>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令'
 * '<S18>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/BottomDriver/Joint1'
 * '<S19>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/BottomDriver/Joint2'
 * '<S20>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/BottomDriver/Joint3'
 * '<S21>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/BottomDriver/Joint4'
 * '<S22>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/BottomDriver/Joint5'
 * '<S23>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/BottomDriver/Joint6'
 * '<S24>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2'
 * '<S25>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/BG'
 * '<S26>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/TF'
 * '<S27>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1'
 * '<S28>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/check'
 * '<S29>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/start_arm'
 * '<S30>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J1_BG'
 * '<S31>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J2_BG'
 * '<S32>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J3_BG'
 * '<S33>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J4_BG'
 * '<S34>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J5_BG'
 * '<S35>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J6_BG'
 * '<S36>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J1_TF'
 * '<S37>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J2_TF'
 * '<S38>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J3_TF'
 * '<S39>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J4_TF'
 * '<S40>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J5_TF'
 * '<S41>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J6_TF'
 * '<S42>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J1_UM1'
 * '<S43>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J2_UM1'
 * '<S44>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J3_UM1'
 * '<S45>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J4_UM1'
 * '<S46>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J5_UM1'
 * '<S47>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J6_UM1'
 * '<S48>'  : 'PID_MoreJoints1_6/DynamicsController/DriveMotor/驱动器指令/Chart2/start_arm/StartRobotSubsystem'
 * '<S49>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle'
 * '<S50>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle1'
 * '<S51>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle2'
 * '<S52>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle3'
 * '<S53>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle4'
 * '<S54>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle5'
 * '<S55>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed'
 * '<S56>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed1'
 * '<S57>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed2'
 * '<S58>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed3'
 * '<S59>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed4'
 * '<S60>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed5'
 * '<S61>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle/Joint1'
 * '<S62>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle/Joint2'
 * '<S63>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle/Joint3'
 * '<S64>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle/Joint4'
 * '<S65>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle/Joint5'
 * '<S66>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle/Joint6'
 * '<S67>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle1/Joint1'
 * '<S68>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle1/Joint2'
 * '<S69>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle1/Joint3'
 * '<S70>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle1/Joint4'
 * '<S71>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle1/Joint5'
 * '<S72>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle1/Joint6'
 * '<S73>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle2/Joint1'
 * '<S74>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle2/Joint2'
 * '<S75>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle2/Joint3'
 * '<S76>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle2/Joint4'
 * '<S77>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle2/Joint5'
 * '<S78>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle2/Joint6'
 * '<S79>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle3/Joint1'
 * '<S80>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle3/Joint2'
 * '<S81>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle3/Joint3'
 * '<S82>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle3/Joint4'
 * '<S83>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle3/Joint5'
 * '<S84>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle3/Joint6'
 * '<S85>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle4/Joint1'
 * '<S86>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle4/Joint2'
 * '<S87>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle4/Joint3'
 * '<S88>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle4/Joint4'
 * '<S89>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle4/Joint5'
 * '<S90>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle4/Joint6'
 * '<S91>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle5/Joint1'
 * '<S92>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle5/Joint2'
 * '<S93>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle5/Joint3'
 * '<S94>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle5/Joint4'
 * '<S95>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle5/Joint5'
 * '<S96>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngle5/Joint6'
 * '<S97>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint1'
 * '<S98>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint2'
 * '<S99>'  : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint3'
 * '<S100>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint4'
 * '<S101>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint5'
 * '<S102>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint6'
 * '<S103>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint1'
 * '<S104>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint2'
 * '<S105>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint3'
 * '<S106>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint4'
 * '<S107>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint5'
 * '<S108>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint6'
 * '<S109>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint1'
 * '<S110>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint2'
 * '<S111>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint3'
 * '<S112>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint4'
 * '<S113>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint5'
 * '<S114>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint6'
 * '<S115>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint1'
 * '<S116>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint2'
 * '<S117>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint3'
 * '<S118>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint4'
 * '<S119>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint5'
 * '<S120>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint6'
 * '<S121>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint1'
 * '<S122>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint2'
 * '<S123>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint3'
 * '<S124>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint4'
 * '<S125>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint5'
 * '<S126>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint6'
 * '<S127>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint1'
 * '<S128>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint2'
 * '<S129>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint3'
 * '<S130>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint4'
 * '<S131>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint5'
 * '<S132>' : 'PID_MoreJoints1_6/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint6'
 * '<S133>' : 'PID_MoreJoints1_6/DynamicsController/PID_Controller/PID_Controller1'
 * '<S134>' : 'PID_MoreJoints1_6/DynamicsController/PID_Controller/PID_Controller2'
 * '<S135>' : 'PID_MoreJoints1_6/DynamicsController/PID_Controller/PID_Controller3'
 * '<S136>' : 'PID_MoreJoints1_6/DynamicsController/PID_Controller/PID_Controller4'
 * '<S137>' : 'PID_MoreJoints1_6/DynamicsController/PID_Controller/PID_Controller5'
 * '<S138>' : 'PID_MoreJoints1_6/DynamicsController/PID_Controller/PID_Controller6'
 * '<S139>' : 'PID_MoreJoints1_6/DynamicsController/PID_Controller/PID_Controller1/Discrete Derivative1'
 * '<S140>' : 'PID_MoreJoints1_6/DynamicsController/PID_Controller/PID_Controller2/Discrete Derivative1'
 * '<S141>' : 'PID_MoreJoints1_6/DynamicsController/PID_Controller/PID_Controller3/Discrete Derivative1'
 * '<S142>' : 'PID_MoreJoints1_6/DynamicsController/PID_Controller/PID_Controller4/Discrete Derivative1'
 * '<S143>' : 'PID_MoreJoints1_6/DynamicsController/PID_Controller/PID_Controller5/Discrete Derivative1'
 * '<S144>' : 'PID_MoreJoints1_6/DynamicsController/PID_Controller/PID_Controller6/Discrete Derivative1'
 * '<S145>' : 'PID_MoreJoints1_6/DynamicsController/关节一正弦信号发生器/Subsystem'
 * '<S146>' : 'PID_MoreJoints1_6/DynamicsController/关节三正弦信号发生器/Subsystem'
 * '<S147>' : 'PID_MoreJoints1_6/DynamicsController/关节二正弦信号发生器/Subsystem'
 * '<S148>' : 'PID_MoreJoints1_6/DynamicsController/关节五正弦信号发生器/Subsystem'
 * '<S149>' : 'PID_MoreJoints1_6/DynamicsController/关节六正弦信号发生器/Subsystem'
 * '<S150>' : 'PID_MoreJoints1_6/DynamicsController/关节四正弦信号发生器/Subsystem'
 * '<S151>' : 'PID_MoreJoints1_6/GetMotorData/CANA_284_24'
 * '<S152>' : 'PID_MoreJoints1_6/GetMotorData/CANA_285_25'
 * '<S153>' : 'PID_MoreJoints1_6/GetMotorData/CANA_286_26'
 * '<S154>' : 'PID_MoreJoints1_6/GetMotorData/CANB_281_21'
 * '<S155>' : 'PID_MoreJoints1_6/GetMotorData/CANB_282_22'
 * '<S156>' : 'PID_MoreJoints1_6/GetMotorData/CANB_283_23'
 * '<S157>' : 'PID_MoreJoints1_6/GetMotorData/CANA_284_24/Subsystem1'
 * '<S158>' : 'PID_MoreJoints1_6/GetMotorData/CANA_285_25/Subsystem'
 * '<S159>' : 'PID_MoreJoints1_6/GetMotorData/CANA_286_26/Subsystem'
 * '<S160>' : 'PID_MoreJoints1_6/GetMotorData/CANB_281_21/Subsystem'
 * '<S161>' : 'PID_MoreJoints1_6/GetMotorData/CANB_282_22/Subsystem'
 * '<S162>' : 'PID_MoreJoints1_6/GetMotorData/CANB_283_23/Subsystem'
 * '<S163>' : 'PID_MoreJoints1_6/SendDataToGUI/  '
 * '<S164>' : 'PID_MoreJoints1_6/SendDataToGUI/广播周期'
 * '<S165>' : 'PID_MoreJoints1_6/SendDataToGUI/广播周期/Increment Real World'
 * '<S166>' : 'PID_MoreJoints1_6/SendDataToGUI/广播周期/Wrap To Zero'
 * '<S167>' : 'PID_MoreJoints1_6/接收上位机的数据/0x0080'
 * '<S168>' : 'PID_MoreJoints1_6/接收上位机的数据/0x88'
 * '<S169>' : 'PID_MoreJoints1_6/接收上位机的数据/Compare To Constant1'
 * '<S170>' : 'PID_MoreJoints1_6/接收上位机的数据/Compare To Constant2'
 * '<S171>' : 'PID_MoreJoints1_6/接收上位机的数据/Subsystem'
 * '<S172>' : 'PID_MoreJoints1_6/接收上位机的数据/获取用户命令'
 * '<S173>' : 'PID_MoreJoints1_6/接收上位机的数据/Subsystem/Joint1'
 * '<S174>' : 'PID_MoreJoints1_6/接收上位机的数据/Subsystem/Joint2'
 * '<S175>' : 'PID_MoreJoints1_6/接收上位机的数据/Subsystem/Joint3'
 * '<S176>' : 'PID_MoreJoints1_6/接收上位机的数据/Subsystem/Joint4'
 * '<S177>' : 'PID_MoreJoints1_6/接收上位机的数据/Subsystem/Joint5'
 * '<S178>' : 'PID_MoreJoints1_6/接收上位机的数据/Subsystem/Joint6'
 * '<S179>' : 'PID_MoreJoints1_6/接收上位机的数据/Subsystem/Joint7'
 * '<S180>' : 'PID_MoreJoints1_6/接收上位机的数据/获取用户命令/消息校验'
 */
#endif                                 /* RTW_HEADER_PID_MoreJoints1_6_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
