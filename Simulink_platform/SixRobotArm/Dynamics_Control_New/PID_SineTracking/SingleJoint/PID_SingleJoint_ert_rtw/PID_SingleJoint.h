/*
 * File: PID_SingleJoint.h
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

#ifndef RTW_HEADER_PID_SingleJoint_h_
#define RTW_HEADER_PID_SingleJoint_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
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

extern void init_eCAN_A ( uint16_T bitRatePrescaler, uint16_T timeSeg1, uint16_T
  timeSeg2, uint16_T sbg, uint16_T sjw, uint16_T sam);
extern void init_eCAN_B ( uint16_T bitRatePrescaler, uint16_T timeSeg1, uint16_T
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
  uint16_T _o1[9];                     /* '<S172>/ ' */
  uint16_T _o2;                        /* '<S172>/ ' */
  uint16_T Switch[9];                  /* '<S180>/Switch' */
  uint16_T TmpSignalConversionAtSCITransmi[20];
  uint16_T eCANReceive_o2[8];          /* '<S156>/eCAN Receive' */
  uint16_T eCANReceive_o2_j[8];        /* '<S155>/eCAN Receive' */
  uint16_T eCANReceive_o2_l[8];        /* '<S154>/eCAN Receive' */
  uint16_T eCANReceive_o2_a[8];        /* '<S153>/eCAN Receive' */
  uint16_T eCANReceive_o2_e[8];        /* '<S152>/eCAN Receive' */
  uint16_T eCANReceive1_o2[8];         /* '<S151>/eCAN Receive1' */
} B_PID_SingleJoint_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint16_T Output_DSTATE;              /* '<S164>/Output' */
  boolean_T PTX;                       /* '<S5>/消息使能' */
} DW_PID_SingleJoint_T;

/* Parameters (default storage) */
struct P_PID_SingleJoint_T_ {
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
  uint16_T _uplimit;                   /* Mask Parameter: _uplimit
                                        * Referenced by: '<S166>/FixPt Switch'
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
  uint16_T Constant_Value[9];          /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S180>/Constant'
                                        */
  uint16_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S172>/Switch'
                                        */
  uint16_T Constant1_Value;            /* Computed Parameter: Constant1_Value
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
  boolean_T _InitialValue;             /* Expression: true
                                        * Referenced by: '<S5>/消息使能'
                                        */
  boolean_T Constant_Value_p;          /* Expression: true
                                        * Referenced by: '<S3>/Constant'
                                        */
  boolean_T Constant1_Value_j;         /* Expression: false
                                        * Referenced by: '<S3>/Constant1'
                                        */
  uint16_T Constant_Value_l;           /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S166>/Constant'
                                        */
  uint16_T Output_InitialCondition;    /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S164>/Output'
                                        */
  uint16_T Switch_Threshold_e;         /* Computed Parameter: Switch_Threshold_e
                                        * Referenced by: '<S3>/Switch'
                                        */
  uint16_T FixPtConstant_Value;        /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S165>/FixPt Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_PID_SingleJoint_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_PID_SingleJoint_T PID_SingleJoint_P;

/* Block signals (default storage) */
extern B_PID_SingleJoint_T PID_SingleJoint_B;

/* Block states (default storage) */
extern DW_PID_SingleJoint_T PID_SingleJoint_DW;

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
extern int32_T Motor_Position[6];      /* '<Root>/Data Store Memory1' */
extern int32_T Motor_Current[6];       /* '<Root>/Data Store Memory11' */
extern int32_T Motor_Velocity[6];      /* '<Root>/Data Store Memory2' */
extern uint16_T StartRobot;            /* '<Root>/Data Store Memory9' */
extern real_T qd[6];                   /* '<S1>/各个关节内转子 理想的角度' */
extern real_T q[6];                    /* '<S1>/各个关节内转子采集 到的实际角度' */
extern real_T dq[6];                   /* '<S1>/各个关节内转子采集 到的实际角速度' */
extern real_T e[6];                    /* '<S1>/各个关节的内转子 位置跟踪误差' */
extern real_T Tau[12];                 /* '<S1>/驱动各个关节 运动的力矩' */
extern uint16_T TXD;                   /* '<S7>/Data Store Memory1' */

/* Model entry point functions */
extern void PID_SingleJoint_initialize(void);
extern void PID_SingleJoint_step(void);
extern void PID_SingleJoint_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PID_SingleJoint_T *const PID_SingleJoint_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S17>/Reshape1' : Unused code path elimination
 * Block '<S17>/Reshape2' : Unused code path elimination
 * Block '<S17>/Reshape3' : Unused code path elimination
 * Block '<S17>/Reshape4' : Unused code path elimination
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
 * Block '<S17>/Reshape5' : Reshape block reduction
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
 * '<Root>' : 'PID_SingleJoint'
 * '<S1>'   : 'PID_SingleJoint/DynamicsController'
 * '<S2>'   : 'PID_SingleJoint/GetMotorData'
 * '<S3>'   : 'PID_SingleJoint/SendDataToGUI'
 * '<S4>'   : 'PID_SingleJoint/Subsystem'
 * '<S5>'   : 'PID_SingleJoint/接收上位机的数据'
 * '<S6>'   : 'PID_SingleJoint/DynamicsController/Compensate'
 * '<S7>'   : 'PID_SingleJoint/DynamicsController/DriveMotor'
 * '<S8>'   : 'PID_SingleJoint/DynamicsController/GetAngleVelocity'
 * '<S9>'   : 'PID_SingleJoint/DynamicsController/PID_Controller'
 * '<S10>'  : 'PID_SingleJoint/DynamicsController/关节一正弦信号发生器'
 * '<S11>'  : 'PID_SingleJoint/DynamicsController/关节三正弦信号发生器'
 * '<S12>'  : 'PID_SingleJoint/DynamicsController/关节二正弦信号发生器'
 * '<S13>'  : 'PID_SingleJoint/DynamicsController/关节五正弦信号发生器'
 * '<S14>'  : 'PID_SingleJoint/DynamicsController/关节六正弦信号发生器'
 * '<S15>'  : 'PID_SingleJoint/DynamicsController/关节四正弦信号发生器'
 * '<S16>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/BottomDriver'
 * '<S17>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令'
 * '<S18>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/BottomDriver/Joint1'
 * '<S19>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/BottomDriver/Joint2'
 * '<S20>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/BottomDriver/Joint3'
 * '<S21>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/BottomDriver/Joint4'
 * '<S22>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/BottomDriver/Joint5'
 * '<S23>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/BottomDriver/Joint6'
 * '<S24>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2'
 * '<S25>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/BG'
 * '<S26>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/TF'
 * '<S27>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1'
 * '<S28>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/check'
 * '<S29>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/start_arm'
 * '<S30>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J1_BG'
 * '<S31>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J2_BG'
 * '<S32>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J3_BG'
 * '<S33>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J4_BG'
 * '<S34>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J5_BG'
 * '<S35>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/BG/J6_BG'
 * '<S36>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J1_TF'
 * '<S37>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J2_TF'
 * '<S38>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J3_TF'
 * '<S39>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J4_TF'
 * '<S40>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J5_TF'
 * '<S41>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/TF/J6_TF'
 * '<S42>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J1_UM1'
 * '<S43>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J2_UM1'
 * '<S44>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J3_UM1'
 * '<S45>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J4_UM1'
 * '<S46>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J5_UM1'
 * '<S47>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/UM1/J6_UM1'
 * '<S48>'  : 'PID_SingleJoint/DynamicsController/DriveMotor/驱动器指令/Chart2/start_arm/StartRobotSubsystem'
 * '<S49>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle'
 * '<S50>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle1'
 * '<S51>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle2'
 * '<S52>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle3'
 * '<S53>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle4'
 * '<S54>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle5'
 * '<S55>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed'
 * '<S56>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed1'
 * '<S57>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed2'
 * '<S58>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed3'
 * '<S59>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed4'
 * '<S60>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed5'
 * '<S61>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle/Joint1'
 * '<S62>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle/Joint2'
 * '<S63>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle/Joint3'
 * '<S64>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle/Joint4'
 * '<S65>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle/Joint5'
 * '<S66>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle/Joint6'
 * '<S67>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle1/Joint1'
 * '<S68>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle1/Joint2'
 * '<S69>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle1/Joint3'
 * '<S70>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle1/Joint4'
 * '<S71>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle1/Joint5'
 * '<S72>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle1/Joint6'
 * '<S73>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle2/Joint1'
 * '<S74>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle2/Joint2'
 * '<S75>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle2/Joint3'
 * '<S76>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle2/Joint4'
 * '<S77>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle2/Joint5'
 * '<S78>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle2/Joint6'
 * '<S79>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle3/Joint1'
 * '<S80>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle3/Joint2'
 * '<S81>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle3/Joint3'
 * '<S82>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle3/Joint4'
 * '<S83>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle3/Joint5'
 * '<S84>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle3/Joint6'
 * '<S85>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle4/Joint1'
 * '<S86>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle4/Joint2'
 * '<S87>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle4/Joint3'
 * '<S88>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle4/Joint4'
 * '<S89>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle4/Joint5'
 * '<S90>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle4/Joint6'
 * '<S91>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle5/Joint1'
 * '<S92>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle5/Joint2'
 * '<S93>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle5/Joint3'
 * '<S94>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle5/Joint4'
 * '<S95>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle5/Joint5'
 * '<S96>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngle5/Joint6'
 * '<S97>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint1'
 * '<S98>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint2'
 * '<S99>'  : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint3'
 * '<S100>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint4'
 * '<S101>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint5'
 * '<S102>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed/Joint6'
 * '<S103>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint1'
 * '<S104>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint2'
 * '<S105>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint3'
 * '<S106>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint4'
 * '<S107>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint5'
 * '<S108>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed1/Joint6'
 * '<S109>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint1'
 * '<S110>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint2'
 * '<S111>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint3'
 * '<S112>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint4'
 * '<S113>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint5'
 * '<S114>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed2/Joint6'
 * '<S115>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint1'
 * '<S116>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint2'
 * '<S117>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint3'
 * '<S118>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint4'
 * '<S119>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint5'
 * '<S120>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed3/Joint6'
 * '<S121>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint1'
 * '<S122>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint2'
 * '<S123>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint3'
 * '<S124>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint4'
 * '<S125>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint5'
 * '<S126>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed4/Joint6'
 * '<S127>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint1'
 * '<S128>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint2'
 * '<S129>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint3'
 * '<S130>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint4'
 * '<S131>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint5'
 * '<S132>' : 'PID_SingleJoint/DynamicsController/GetAngleVelocity/GetAngleSpeed5/Joint6'
 * '<S133>' : 'PID_SingleJoint/DynamicsController/PID_Controller/PID_Controller1'
 * '<S134>' : 'PID_SingleJoint/DynamicsController/PID_Controller/PID_Controller2'
 * '<S135>' : 'PID_SingleJoint/DynamicsController/PID_Controller/PID_Controller3'
 * '<S136>' : 'PID_SingleJoint/DynamicsController/PID_Controller/PID_Controller4'
 * '<S137>' : 'PID_SingleJoint/DynamicsController/PID_Controller/PID_Controller5'
 * '<S138>' : 'PID_SingleJoint/DynamicsController/PID_Controller/PID_Controller6'
 * '<S139>' : 'PID_SingleJoint/DynamicsController/PID_Controller/PID_Controller1/Discrete Derivative1'
 * '<S140>' : 'PID_SingleJoint/DynamicsController/PID_Controller/PID_Controller2/Discrete Derivative1'
 * '<S141>' : 'PID_SingleJoint/DynamicsController/PID_Controller/PID_Controller3/Discrete Derivative1'
 * '<S142>' : 'PID_SingleJoint/DynamicsController/PID_Controller/PID_Controller4/Discrete Derivative1'
 * '<S143>' : 'PID_SingleJoint/DynamicsController/PID_Controller/PID_Controller5/Discrete Derivative1'
 * '<S144>' : 'PID_SingleJoint/DynamicsController/PID_Controller/PID_Controller6/Discrete Derivative1'
 * '<S145>' : 'PID_SingleJoint/DynamicsController/关节一正弦信号发生器/Subsystem'
 * '<S146>' : 'PID_SingleJoint/DynamicsController/关节三正弦信号发生器/Subsystem'
 * '<S147>' : 'PID_SingleJoint/DynamicsController/关节二正弦信号发生器/Subsystem'
 * '<S148>' : 'PID_SingleJoint/DynamicsController/关节五正弦信号发生器/Subsystem'
 * '<S149>' : 'PID_SingleJoint/DynamicsController/关节六正弦信号发生器/Subsystem'
 * '<S150>' : 'PID_SingleJoint/DynamicsController/关节四正弦信号发生器/Subsystem'
 * '<S151>' : 'PID_SingleJoint/GetMotorData/CANA_284_24'
 * '<S152>' : 'PID_SingleJoint/GetMotorData/CANA_285_25'
 * '<S153>' : 'PID_SingleJoint/GetMotorData/CANA_286_26'
 * '<S154>' : 'PID_SingleJoint/GetMotorData/CANB_281_21'
 * '<S155>' : 'PID_SingleJoint/GetMotorData/CANB_282_22'
 * '<S156>' : 'PID_SingleJoint/GetMotorData/CANB_283_23'
 * '<S157>' : 'PID_SingleJoint/GetMotorData/CANA_284_24/Subsystem1'
 * '<S158>' : 'PID_SingleJoint/GetMotorData/CANA_285_25/Subsystem'
 * '<S159>' : 'PID_SingleJoint/GetMotorData/CANA_286_26/Subsystem'
 * '<S160>' : 'PID_SingleJoint/GetMotorData/CANB_281_21/Subsystem'
 * '<S161>' : 'PID_SingleJoint/GetMotorData/CANB_282_22/Subsystem'
 * '<S162>' : 'PID_SingleJoint/GetMotorData/CANB_283_23/Subsystem'
 * '<S163>' : 'PID_SingleJoint/SendDataToGUI/  '
 * '<S164>' : 'PID_SingleJoint/SendDataToGUI/广播周期'
 * '<S165>' : 'PID_SingleJoint/SendDataToGUI/广播周期/Increment Real World'
 * '<S166>' : 'PID_SingleJoint/SendDataToGUI/广播周期/Wrap To Zero'
 * '<S167>' : 'PID_SingleJoint/接收上位机的数据/0x0080'
 * '<S168>' : 'PID_SingleJoint/接收上位机的数据/0x88'
 * '<S169>' : 'PID_SingleJoint/接收上位机的数据/Compare To Constant1'
 * '<S170>' : 'PID_SingleJoint/接收上位机的数据/Compare To Constant2'
 * '<S171>' : 'PID_SingleJoint/接收上位机的数据/Subsystem'
 * '<S172>' : 'PID_SingleJoint/接收上位机的数据/获取用户命令'
 * '<S173>' : 'PID_SingleJoint/接收上位机的数据/Subsystem/Joint1'
 * '<S174>' : 'PID_SingleJoint/接收上位机的数据/Subsystem/Joint2'
 * '<S175>' : 'PID_SingleJoint/接收上位机的数据/Subsystem/Joint3'
 * '<S176>' : 'PID_SingleJoint/接收上位机的数据/Subsystem/Joint4'
 * '<S177>' : 'PID_SingleJoint/接收上位机的数据/Subsystem/Joint5'
 * '<S178>' : 'PID_SingleJoint/接收上位机的数据/Subsystem/Joint6'
 * '<S179>' : 'PID_SingleJoint/接收上位机的数据/Subsystem/Joint7'
 * '<S180>' : 'PID_SingleJoint/接收上位机的数据/获取用户命令/消息校验'
 */
#endif                                 /* RTW_HEADER_PID_SingleJoint_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
