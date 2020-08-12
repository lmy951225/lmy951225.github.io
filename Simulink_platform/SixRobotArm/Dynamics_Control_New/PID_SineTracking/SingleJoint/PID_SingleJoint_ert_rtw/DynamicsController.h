/*
 * File: DynamicsController.h
 *
 * Code generated for Simulink model 'PID_SingleJoint'.
 *
 * Model version                  : 1.232
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan  8 10:12:26 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DynamicsController_h_
#define RTW_HEADER_DynamicsController_h_
#ifndef PID_SingleJoint_COMMON_INCLUDES_
# define PID_SingleJoint_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* PID_SingleJoint_COMMON_INCLUDES_ */

#include "PID_SingleJoint_types.h"

/* Child system includes */
#include "Compensate.h"
#include "DrivrMotor.h"
#include "GetAngleVelocity.h"
#include "PID_Controller.h"
#include "SineSignal.h"

/* Block signals for system '<Root>/DynamicsController' */
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
  real_T u_f;                          /* '<S1>/切换到电流模式 的使能信号' */
  uint16_T MSG[48];                    /* '<S17>/Chart2' */
  uint16_T StartRobot_k;               /* '<S17>/Chart2' */
  uint16_T In1;                        /* '<S48>/In1' */
  uint16_T DataTypeConversion[8];      /* '<S47>/Data Type Conversion' */
  uint16_T DataTypeConversion_n[8];    /* '<S46>/Data Type Conversion' */
  uint16_T DataTypeConversion_d[8];    /* '<S45>/Data Type Conversion' */
  uint16_T DataTypeConversion_b[8];    /* '<S44>/Data Type Conversion' */
  uint16_T DataTypeConversion_m[8];    /* '<S43>/Data Type Conversion' */
  uint16_T DataTypeConversion_dd[8];   /* '<S42>/Data Type Conversion' */
  uint16_T DataTypeConversion12[48];   /* '<S17>/Data Type Conversion12' */
  B_GetAngleSpeed_PID_SingleJoi_T GetAngleSpeed5;/* '<S8>/GetAngleSpeed5' */
  B_GetAngleSpeed_PID_SingleJoi_T GetAngleSpeed4;/* '<S8>/GetAngleSpeed4' */
  B_GetAngleSpeed_PID_SingleJoi_T GetAngleSpeed3;/* '<S8>/GetAngleSpeed3' */
  B_GetAngleSpeed_PID_SingleJoi_T GetAngleSpeed2;/* '<S8>/GetAngleSpeed2' */
  B_GetAngleSpeed_PID_SingleJoi_T GetAngleSpeed1;/* '<S8>/GetAngleSpeed1' */
  B_GetAngleSpeed_PID_SingleJoi_T GetAngleSpeed;/* '<S8>/GetAngleSpeed' */
  B_GetAngle_PID_SingleJoint_T GetAngle5;/* '<S8>/GetAngle5' */
  B_GetAngle_PID_SingleJoint_T GetAngle4;/* '<S8>/GetAngle4' */
  B_GetAngle_PID_SingleJoint_T GetAngle3;/* '<S8>/GetAngle3' */
  B_GetAngle_PID_SingleJoint_T GetAngle2;/* '<S8>/GetAngle2' */
  B_GetAngle_PID_SingleJoint_T GetAngle1;/* '<S8>/GetAngle1' */
  B_GetAngle_PID_SingleJoint_T GetAngle;/* '<S8>/GetAngle' */
} B_DynamicsController_T;

/* Block states (default storage) for system '<Root>/DynamicsController' */
typedef struct {
  uint16_T bx;                         /* '<S17>/Chart2' */
  uint16_T start;                      /* '<S17>/Chart2' */
  uint16_T is_active_c5_PID_SingleJoint;/* '<S17>/Chart2' */
  uint16_T is_c5_PID_SingleJoint;      /* '<S17>/Chart2' */
  DW_SineSignal_T u_e;                 /* '<S1>/关节四正弦信号发生器' */
  DW_SineSignal_T u_k;                 /* '<S1>/关节六正弦信号发生器' */
  DW_SineSignal_T u_d;                 /* '<S1>/关节五正弦信号发生器' */
  DW_SineSignal_T u_j;                 /* '<S1>/关节二正弦信号发生器' */
  DW_SineSignal_T u_a;                 /* '<S1>/关节三正弦信号发生器' */
  DW_SineSignal_T u;                   /* '<S1>/关节一正弦信号发生器' */
  DW_PID_Controller1_PID_Single_T PID_Controller6;/* '<S9>/PID_Controller6' */
  DW_PID_Controller1_PID_Single_T PID_Controller5;/* '<S9>/PID_Controller5' */
  DW_PID_Controller1_PID_Single_T PID_Controller4;/* '<S9>/PID_Controller4' */
  DW_PID_Controller1_PID_Single_T PID_Controller3;/* '<S9>/PID_Controller3' */
  DW_PID_Controller1_PID_Single_T PID_Controller2;/* '<S9>/PID_Controller2' */
  DW_PID_Controller1_PID_Single_T PID_Controller1;/* '<S9>/PID_Controller1' */
} DW_DynamicsController_T;

/* Parameters for system: '<Root>/DynamicsController' */
struct P_DynamicsController_T_ {
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
  real_T Gain2_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain2'
                                        */
  real_T Gain1_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain1'
                                        */
  real_T Gain3_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain3'
                                        */
  real_T Gain9_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain9'
                                        */
  real_T Constant_Value;               /* Expression: -530
                                        * Referenced by: '<S6>/Constant'
                                        */
  real_T Gain4_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain4'
                                        */
  real_T Constant1_Value;              /* Expression: -180
                                        * Referenced by: '<S6>/Constant1'
                                        */
  real_T Gain5_Gain;                   /* Expression: 101
                                        * Referenced by: '<S6>/Gain5'
                                        */
  real_T Constant2_Value;              /* Expression: -10
                                        * Referenced by: '<S6>/Constant2'
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
  uint16_T Constant1_Value_f;          /* Computed Parameter: Constant1_Value_f
                                        * Referenced by: '<S28>/Constant1'
                                        */
  uint16_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
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
  uint16_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S29>/Constant'
                                        */
  uint16_T MSG_Y0_f;                   /* Computed Parameter: MSG_Y0_f
                                        * Referenced by: '<S26>/MSG'
                                        */
  uint16_T MSG_Y0_n;                   /* Computed Parameter: MSG_Y0_n
                                        * Referenced by: '<S25>/MSG'
                                        */
  uint16_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S16>/Constant'
                                        */
  uint16_T Constant1_Value_d;          /* Computed Parameter: Constant1_Value_d
                                        * Referenced by: '<S42>/Constant1'
                                        */
  uint16_T Constant2_Value_e;          /* Computed Parameter: Constant2_Value_e
                                        * Referenced by: '<S42>/Constant2'
                                        */
  uint16_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S42>/Constant3'
                                        */
  uint16_T Constant8_Value;            /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S42>/Constant8'
                                        */
  uint16_T Constant1_Value_m;          /* Computed Parameter: Constant1_Value_m
                                        * Referenced by: '<S43>/Constant1'
                                        */
  uint16_T Constant2_Value_i;          /* Computed Parameter: Constant2_Value_i
                                        * Referenced by: '<S43>/Constant2'
                                        */
  uint16_T Constant3_Value_a;          /* Computed Parameter: Constant3_Value_a
                                        * Referenced by: '<S43>/Constant3'
                                        */
  uint16_T Constant8_Value_i;          /* Computed Parameter: Constant8_Value_i
                                        * Referenced by: '<S43>/Constant8'
                                        */
  uint16_T Constant1_Value_o;          /* Computed Parameter: Constant1_Value_o
                                        * Referenced by: '<S44>/Constant1'
                                        */
  uint16_T Constant2_Value_a;          /* Computed Parameter: Constant2_Value_a
                                        * Referenced by: '<S44>/Constant2'
                                        */
  uint16_T Constant3_Value_ar;         /* Computed Parameter: Constant3_Value_ar
                                        * Referenced by: '<S44>/Constant3'
                                        */
  uint16_T Constant8_Value_k;          /* Computed Parameter: Constant8_Value_k
                                        * Referenced by: '<S44>/Constant8'
                                        */
  uint16_T Constant1_Value_h;          /* Computed Parameter: Constant1_Value_h
                                        * Referenced by: '<S45>/Constant1'
                                        */
  uint16_T Constant2_Value_n;          /* Computed Parameter: Constant2_Value_n
                                        * Referenced by: '<S45>/Constant2'
                                        */
  uint16_T Constant3_Value_o;          /* Computed Parameter: Constant3_Value_o
                                        * Referenced by: '<S45>/Constant3'
                                        */
  uint16_T Constant8_Value_m;          /* Computed Parameter: Constant8_Value_m
                                        * Referenced by: '<S45>/Constant8'
                                        */
  uint16_T Constant1_Value_b;          /* Computed Parameter: Constant1_Value_b
                                        * Referenced by: '<S46>/Constant1'
                                        */
  uint16_T Constant2_Value_c;          /* Computed Parameter: Constant2_Value_c
                                        * Referenced by: '<S46>/Constant2'
                                        */
  uint16_T Constant3_Value_k;          /* Computed Parameter: Constant3_Value_k
                                        * Referenced by: '<S46>/Constant3'
                                        */
  uint16_T Constant8_Value_g;          /* Computed Parameter: Constant8_Value_g
                                        * Referenced by: '<S46>/Constant8'
                                        */
  uint16_T Constant1_Value_ov;         /* Computed Parameter: Constant1_Value_ov
                                        * Referenced by: '<S47>/Constant1'
                                        */
  uint16_T Constant2_Value_f;          /* Computed Parameter: Constant2_Value_f
                                        * Referenced by: '<S47>/Constant2'
                                        */
  uint16_T Constant3_Value_h;          /* Computed Parameter: Constant3_Value_h
                                        * Referenced by: '<S47>/Constant3'
                                        */
  uint16_T Constant8_Value_kv;         /* Computed Parameter: Constant8_Value_kv
                                        * Referenced by: '<S47>/Constant8'
                                        */
  uint16_T Constant_Value_b;           /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S27>/Constant'
                                        */
  uint16_T Constant2_Value_id;         /* Computed Parameter: Constant2_Value_id
                                        * Referenced by: '<S26>/Constant2'
                                        */
  uint16_T Constant6_Value;            /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S25>/Constant6'
                                        */
  uint16_T DataStoreMemory1_InitialValue;/* Computed Parameter: DataStoreMemory1_InitialValue
                                          * Referenced by: '<S7>/Data Store Memory1'
                                          */
  P_SineSignal_T u_e;                  /* '<S1>/关节四正弦信号发生器' */
  P_SineSignal_T u_k;                  /* '<S1>/关节六正弦信号发生器' */
  P_SineSignal_T u_d;                  /* '<S1>/关节五正弦信号发生器' */
  P_SineSignal_T u_j;                  /* '<S1>/关节二正弦信号发生器' */
  P_SineSignal_T u_a;                  /* '<S1>/关节三正弦信号发生器' */
  P_SineSignal_T u;                    /* '<S1>/关节一正弦信号发生器' */
  P_PID_Controller1_PID_SingleJ_T PID_Controller6;/* '<S9>/PID_Controller6' */
  P_PID_Controller1_PID_SingleJ_T PID_Controller5;/* '<S9>/PID_Controller5' */
  P_PID_Controller1_PID_SingleJ_T PID_Controller4;/* '<S9>/PID_Controller4' */
  P_PID_Controller1_PID_SingleJ_T PID_Controller3;/* '<S9>/PID_Controller3' */
  P_PID_Controller1_PID_SingleJ_T PID_Controller2;/* '<S9>/PID_Controller2' */
  P_PID_Controller1_PID_SingleJ_T PID_Controller1;/* '<S9>/PID_Controller1' */
  P_GetAngleSpeed_PID_SingleJoi_T GetAngleSpeed5;/* '<S8>/GetAngleSpeed5' */
  P_GetAngleSpeed_PID_SingleJoi_T GetAngleSpeed4;/* '<S8>/GetAngleSpeed4' */
  P_GetAngleSpeed_PID_SingleJoi_T GetAngleSpeed3;/* '<S8>/GetAngleSpeed3' */
  P_GetAngleSpeed_PID_SingleJoi_T GetAngleSpeed2;/* '<S8>/GetAngleSpeed2' */
  P_GetAngleSpeed_PID_SingleJoi_T GetAngleSpeed1;/* '<S8>/GetAngleSpeed1' */
  P_GetAngleSpeed_PID_SingleJoi_T GetAngleSpeed;/* '<S8>/GetAngleSpeed' */
  P_GetAngle_PID_SingleJoint_T GetAngle5;/* '<S8>/GetAngle5' */
  P_GetAngle_PID_SingleJoint_T GetAngle4;/* '<S8>/GetAngle4' */
  P_GetAngle_PID_SingleJoint_T GetAngle3;/* '<S8>/GetAngle3' */
  P_GetAngle_PID_SingleJoint_T GetAngle2;/* '<S8>/GetAngle2' */
  P_GetAngle_PID_SingleJoint_T GetAngle1;/* '<S8>/GetAngle1' */
  P_GetAngle_PID_SingleJoint_T GetAngle;/* '<S8>/GetAngle' */
  P_J1_BG_PID_SingleJoint_T J6_BG;     /* '<S25>/J6_BG' */
  P_J1_BG_PID_SingleJoint_T J5_BG;     /* '<S25>/J5_BG' */
  P_J1_BG_PID_SingleJoint_T J4_BG;     /* '<S25>/J4_BG' */
  P_J1_BG_PID_SingleJoint_T J3_BG;     /* '<S25>/J3_BG' */
  P_J1_BG_PID_SingleJoint_T J2_BG;     /* '<S25>/J2_BG' */
  P_J1_BG_PID_SingleJoint_T J1_BG;     /* '<S25>/J1_BG' */
  P_J1_TF_PID_SingleJoint_T J6_TF;     /* '<S26>/J6_TF' */
  P_J1_TF_PID_SingleJoint_T J5_TF;     /* '<S26>/J5_TF' */
  P_J1_TF_PID_SingleJoint_T J4_TF;     /* '<S26>/J4_TF' */
  P_J1_TF_PID_SingleJoint_T J3_TF;     /* '<S26>/J3_TF' */
  P_J1_TF_PID_SingleJoint_T J2_TF;     /* '<S26>/J2_TF' */
  P_J1_TF_PID_SingleJoint_T J1_TF;     /* '<S26>/J1_TF' */
};

/* Extern declarations of internal data for system '<Root>/DynamicsController' */
extern B_DynamicsController_T DynamicsController_B;
extern DW_DynamicsController_T DynamicsController_DW;
extern P_DynamicsController_T DynamicsController_P;
extern void DynamicsController_initialize(void);
extern void DynamicsController_Init(void);
extern void DynamicsController_Start(void);
extern void DynamicsController(void);

#endif                                 /* RTW_HEADER_DynamicsController_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
