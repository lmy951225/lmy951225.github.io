/*
 * File: SingleJoint_Algorithm1.h
 *
 * Code generated for Simulink model 'SingleJoint_Algorithm1'.
 *
 * Model version                  : 1.230
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan  8 17:45:48 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SingleJoint_Algorithm1_h_
#define RTW_HEADER_SingleJoint_Algorithm1_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef SingleJoint_Algorithm1_COMMON_INCLUDES_
# define SingleJoint_Algorithm1_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* SingleJoint_Algorithm1_COMMON_INCLUDES_ */

#include "SingleJoint_Algorithm1_types.h"

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
  real_T DataStoreRead2;               /* '<S1>/Data Store Read2' */
  real_T gain1;                        /* '<S1>/gain1' */
  real_T Product;                      /* '<S17>/Product' */
  real_T Sum5;                         /* '<S17>/Sum5' */
  real_T Sum4;                         /* '<S11>/Sum4' */
  real_T DataStoreRead4;               /* '<S1>/Data Store Read4' */
  real_T u;                            /* '<S7>/限幅' */
  real_T Sum2;                         /* '<S11>/Sum2' */
  real_T Add3;                         /* '<S10>/Add3' */
  uint16_T _o1[9];                     /* '<S66>/ ' */
  uint16_T _o2;                        /* '<S66>/ ' */
  uint16_T Switch[9];                  /* '<S74>/Switch' */
  uint16_T MSG[8];                     /* '<S19>/DriveOder' */
  uint16_T StartRobot_o;               /* '<S19>/DriveOder' */
  uint16_T In1;                        /* '<S32>/In1' */
  uint16_T TmpSignalConversionAtSCITransmi[20];
  uint16_T eCANReceive_o2[8];          /* '<S50>/eCAN Receive' */
  uint16_T eCANReceive_o2_d[8];        /* '<S49>/eCAN Receive' */
  uint16_T eCANReceive_o2_j[8];        /* '<S48>/eCAN Receive' */
  uint16_T eCANReceive_o2_c[8];        /* '<S47>/eCAN Receive' */
  uint16_T eCANReceive_o2_o[8];        /* '<S46>/eCAN Receive' */
  uint16_T eCANReceive1_o2[8];         /* '<S45>/eCAN Receive1' */
  uint16_T DataTypeConversion1[8];     /* '<S19>/Data Type Conversion1' */
  B_GetAngleSpeed_SingleJoint_A_T GetAngleSpeed;/* '<S1>/GetAngleSpeed' */
  B_GetAngle_SingleJoint_Algori_T GetAngle;/* '<S1>/GetAngle' */
} B_SingleJoint_Algorithm1_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S15>/UD' */
  real_T UD_DSTATE_j;                  /* '<S16>/UD' */
  real_T ref_signal_AccFreqNorm;       /* '<S17>/ref_signal' */
  uint16_T start;                      /* '<S19>/DriveOder' */
  uint16_T bx;                         /* '<S19>/DriveOder' */
  uint16_T temporalCounter_i1;         /* '<S19>/DriveOder' */
  uint16_T Output_DSTATE;              /* '<S58>/Output' */
  uint16_T is_active_c1_SingleJoint_Algori;/* '<S19>/DriveOder' */
  uint16_T is_c1_SingleJoint_Algorithm1;/* '<S19>/DriveOder' */
  boolean_T PTX;                       /* '<S5>/消息使能' */
  DW_Subsystem1_SingleJoint_Alg_T Subsystem3;/* '<S10>/Subsystem3' */
  DW_Subsystem1_SingleJoint_Alg_T Subsystem2;/* '<S10>/Subsystem2' */
  DW_Subsystem1_SingleJoint_Alg_T Subsystem1;/* '<S10>/Subsystem1' */
} DW_SingleJoint_Algorithm1_T;

/* Parameters (default storage) */
struct P_SingleJoint_Algorithm1_T_ {
  real_T ref_signal_Amplitude;         /* Mask Parameter: ref_signal_Amplitude
                                        * Referenced by: '<S17>/ref_signal'
                                        */
  real_T AdapitionController_Freq;     /* Mask Parameter: AdapitionController_Freq
                                        * Referenced by: '<S17>/ref_signal'
                                        */
  real_T DiscreteDerivative_ICPrevScaled;/* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                          * Referenced by: '<S15>/UD'
                                          */
  real_T DiscreteDerivative2_ICPrevScale;/* Mask Parameter: DiscreteDerivative2_ICPrevScale
                                          * Referenced by: '<S16>/UD'
                                          */
  real_T GetAngle_InitAngle;           /* Mask Parameter: GetAngle_InitAngle
                                        * Referenced by: '<S1>/GetAngle'
                                        */
  real_T GetAngleSpeed_JJoint;         /* Mask Parameter: GetAngleSpeed_JJoint
                                        * Referenced by: '<S1>/GetAngleSpeed'
                                        */
  real_T ref_signal_Phase;             /* Mask Parameter: ref_signal_Phase
                                        * Referenced by: '<S17>/ref_signal'
                                        */
  real_T DriverOneMotor_SelectJoint;   /* Mask Parameter: DriverOneMotor_SelectJoint
                                        * Referenced by: '<S7>/Constant1'
                                        */
  uint16_T ux88_const;                 /* Mask Parameter: ux88_const
                                        * Referenced by: '<S62>/Constant'
                                        */
  uint16_T ux0080_const;               /* Mask Parameter: ux0080_const
                                        * Referenced by: '<S61>/Constant'
                                        */
  uint16_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S63>/Constant'
                                        */
  uint16_T CompareToConstant2_const;   /* Mask Parameter: CompareToConstant2_const
                                        * Referenced by: '<S64>/Constant'
                                        */
  uint16_T GetAngle_JJoint;            /* Mask Parameter: GetAngle_JJoint
                                        * Referenced by: '<S1>/GetAngle'
                                        */
  uint16_T _uplimit;                   /* Mask Parameter: _uplimit
                                        * Referenced by: '<S60>/FixPt Switch'
                                        */
  real_T lambda8_Gain;                 /* Expression: -1
                                        * Referenced by: '<S10>/lambda8'
                                        */
  real_T lambda9_Gain;                 /* Expression: -1
                                        * Referenced by: '<S10>/lambda9'
                                        */
  real_T lambda10_Gain;                /* Expression: -1
                                        * Referenced by: '<S10>/lambda10'
                                        */
  real_T e1_Y0;                        /* Computed Parameter: e1_Y0
                                        * Referenced by: '<S17>/e1'
                                        */
  real_T _Y0;                          /* Computed Parameter: _Y0
                                        * Referenced by: '<S17>/理想位置'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S15>/TSamp'
                                        */
  real_T TSamp_WtEt_c;                 /* Computed Parameter: TSamp_WtEt_c
                                        * Referenced by: '<S16>/TSamp'
                                        */
  real_T _UpperSat;                    /* Expression: pi/3
                                        * Referenced by: '<S6>/限幅'
                                        */
  real_T _LowerSat;                    /* Expression: 0
                                        * Referenced by: '<S6>/限幅'
                                        */
  real_T _UpperSat_o;                  /* Expression: 500
                                        * Referenced by: '<S7>/限幅'
                                        */
  real_T _LowerSat_h;                  /* Expression: -500
                                        * Referenced by: '<S7>/限幅'
                                        */
  real_T Constant_Value;               /* Expression: 30
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Gain11_Gain;                  /* Expression: pi/180
                                        * Referenced by: '<S1>/Gain11'
                                        */
  real_T u_Gain;                       /* Expression: 0.1
                                        * Referenced by: '<S1>/1'
                                        */
  real_T gain1_Gain;                   /* Expression: 0.01
                                        * Referenced by: '<S1>/gain1'
                                        */
  real_T gain_Gain;                    /* Expression: 0.1
                                        * Referenced by: '<S1>/gain'
                                        */
  real_T Gain12_Gain;                  /* Expression: 180/pi
                                        * Referenced by: '<S1>/Gain12'
                                        */
  real_T Gain5_Gain;                   /* Expression: 101
                                        * Referenced by: '<S1>/Gain5'
                                        */
  real_T Gain6_Gain;                   /* Expression: 180/pi
                                        * Referenced by: '<S1>/Gain6'
                                        */
  real_T Gain8_Gain;                   /* Expression: 101
                                        * Referenced by: '<S1>/Gain8'
                                        */
  real_T Gain13_Gain;                  /* Expression: 180/pi
                                        * Referenced by: '<S1>/Gain13'
                                        */
  real_T Gain10_Gain;                  /* Expression: 101
                                        * Referenced by: '<S1>/Gain10'
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
  uint16_T MSG_Y0;                     /* Computed Parameter: MSG_Y0
                                        * Referenced by: '<S29>/MSG'
                                        */
  uint16_T MSG_Y0_j;                   /* Computed Parameter: MSG_Y0_j
                                        * Referenced by: '<S27>/MSG'
                                        */
  uint16_T MSG_Y0_i;                   /* Computed Parameter: MSG_Y0_i
                                        * Referenced by: '<S28>/MSG'
                                        */
  uint16_T Out1_Y0;                    /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S32>/Out1'
                                        */
  uint16_T Constant_Value_l;           /* Computed Parameter: Constant_Value_l
                                        * Referenced by: '<S31>/Constant'
                                        */
  uint16_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S30>/Constant1'
                                        */
  uint16_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S30>/Constant'
                                        */
  uint16_T bx_Y0;                      /* Computed Parameter: bx_Y0
                                        * Referenced by: '<S30>/bx'
                                        */
  uint16_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S30>/Switch'
                                        */
  uint16_T Constant_Value_b[9];        /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S74>/Constant'
                                        */
  uint16_T Switch_Threshold_i;         /* Computed Parameter: Switch_Threshold_i
                                        * Referenced by: '<S66>/Switch'
                                        */
  uint16_T Constant1_Value_d;          /* Computed Parameter: Constant1_Value_d
                                        * Referenced by: '<S57>/Constant1'
                                        */
  uint16_T DataStoreMemory9_InitialValue;/* Computed Parameter: DataStoreMemory9_InitialValue
                                          * Referenced by: '<Root>/Data Store Memory9'
                                          */
  boolean_T Constant1_Value_l;         /* Expression: true
                                        * Referenced by: '<S66>/Constant1'
                                        */
  boolean_T Constant_Value_e;          /* Expression: false
                                        * Referenced by: '<S66>/Constant'
                                        */
  boolean_T _InitialValue;             /* Expression: true
                                        * Referenced by: '<S5>/消息使能'
                                        */
  boolean_T Constant_Value_a;          /* Expression: true
                                        * Referenced by: '<S3>/Constant'
                                        */
  boolean_T Constant1_Value_m;         /* Expression: false
                                        * Referenced by: '<S3>/Constant1'
                                        */
  uint16_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S22>/Constant'
                                        */
  uint16_T Constant1_Value_j;          /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S29>/Constant1'
                                        */
  uint16_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S29>/Constant2'
                                        */
  uint16_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S29>/Constant3'
                                        */
  uint16_T Constant8_Value;            /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S29>/Constant8'
                                        */
  uint16_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S29>/Constant'
                                        */
  uint16_T Constant1_Value_e;          /* Computed Parameter: Constant1_Value_e
                                        * Referenced by: '<S27>/Constant1'
                                        */
  uint16_T Constant2_Value_e;          /* Computed Parameter: Constant2_Value_e
                                        * Referenced by: '<S27>/Constant2'
                                        */
  uint16_T Constant3_Value_b;          /* Computed Parameter: Constant3_Value_b
                                        * Referenced by: '<S27>/Constant3'
                                        */
  uint16_T Constant8_Value_c;          /* Computed Parameter: Constant8_Value_c
                                        * Referenced by: '<S27>/Constant8'
                                        */
  uint16_T Constant6_Value;            /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S27>/Constant6'
                                        */
  uint16_T Constant1_Value_p;          /* Computed Parameter: Constant1_Value_p
                                        * Referenced by: '<S28>/Constant1'
                                        */
  uint16_T Constant3_Value_h;          /* Computed Parameter: Constant3_Value_h
                                        * Referenced by: '<S28>/Constant3'
                                        */
  uint16_T Constant8_Value_cv;         /* Computed Parameter: Constant8_Value_cv
                                        * Referenced by: '<S28>/Constant8'
                                        */
  uint16_T Constant2_Value_d;          /* Computed Parameter: Constant2_Value_d
                                        * Referenced by: '<S28>/Constant2'
                                        */
  uint16_T DataStoreMemory2_InitialValue_m;/* Computed Parameter: DataStoreMemory2_InitialValue_m
                                            * Referenced by: '<S7>/Data Store Memory2'
                                            */
  uint16_T Constant_Value_d;           /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S60>/Constant'
                                        */
  uint16_T Output_InitialCondition;    /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S58>/Output'
                                        */
  uint16_T Switch_Threshold_o;         /* Computed Parameter: Switch_Threshold_o
                                        * Referenced by: '<S3>/Switch'
                                        */
  uint16_T FixPtConstant_Value;        /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S59>/FixPt Constant'
                                        */
  P_GetAngleSpeed_SingleJoint_A_T GetAngleSpeed;/* '<S1>/GetAngleSpeed' */
  P_GetAngle_SingleJoint_Algori_T GetAngle;/* '<S1>/GetAngle' */
  P_Subsystem1_SingleJoint_Algo_T Subsystem3;/* '<S10>/Subsystem3' */
  P_Subsystem1_SingleJoint_Algo_T Subsystem2;/* '<S10>/Subsystem2' */
  P_Subsystem1_SingleJoint_Algo_T Subsystem1;/* '<S10>/Subsystem1' */
};

/* Real-time Model Data Structure */
struct tag_RTM_SingleJoint_Algorithm_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_SingleJoint_Algorithm1_T SingleJoint_Algorithm1_P;

/* Block signals (default storage) */
extern B_SingleJoint_Algorithm1_T SingleJoint_Algorithm1_B;

/* Block states (default storage) */
extern DW_SingleJoint_Algorithm1_T SingleJoint_Algorithm1_DW;

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
extern uint16_T One_TXD;               /* '<S7>/Data Store Memory2' */

/* Model entry point functions */
extern void SingleJoint_Algorithm1_initialize(void);
extern void SingleJoint_Algorithm1_step(void);
extern void SingleJoint_Algorithm1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SingleJoint_Algorith_T *const SingleJoint_Algorithm1_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S15>/Data Type Duplicate' : Unused code path elimination
 * Block '<S16>/Data Type Duplicate' : Unused code path elimination
 * Block '<S58>/Data Type Propagation' : Unused code path elimination
 * Block '<S59>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S60>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S27>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S27>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S27>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S27>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S27>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S27>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S29>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S29>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S29>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S29>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S29>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S29>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S55>/Data Type Conversion9' : Eliminate redundant data type conversion
 * Block '<S56>/Data Type Conversion9' : Eliminate redundant data type conversion
 * Block '<S74>/Data Type Conversion' : Eliminate redundant data type conversion
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
 * '<Root>' : 'SingleJoint_Algorithm1'
 * '<S1>'   : 'SingleJoint_Algorithm1/AdaptionController'
 * '<S2>'   : 'SingleJoint_Algorithm1/GetMotorData'
 * '<S3>'   : 'SingleJoint_Algorithm1/SendDataToGUI'
 * '<S4>'   : 'SingleJoint_Algorithm1/Subsystem'
 * '<S5>'   : 'SingleJoint_Algorithm1/接收上位机的数据'
 * '<S6>'   : 'SingleJoint_Algorithm1/AdaptionController/AdapitionController'
 * '<S7>'   : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor'
 * '<S8>'   : 'SingleJoint_Algorithm1/AdaptionController/GetAngle'
 * '<S9>'   : 'SingleJoint_Algorithm1/AdaptionController/GetAngleSpeed'
 * '<S10>'  : 'SingleJoint_Algorithm1/AdaptionController/AdapitionController/Controller'
 * '<S11>'  : 'SingleJoint_Algorithm1/AdaptionController/AdapitionController/Error'
 * '<S12>'  : 'SingleJoint_Algorithm1/AdaptionController/AdapitionController/Controller/Subsystem1'
 * '<S13>'  : 'SingleJoint_Algorithm1/AdaptionController/AdapitionController/Controller/Subsystem2'
 * '<S14>'  : 'SingleJoint_Algorithm1/AdaptionController/AdapitionController/Controller/Subsystem3'
 * '<S15>'  : 'SingleJoint_Algorithm1/AdaptionController/AdapitionController/Error/Discrete Derivative'
 * '<S16>'  : 'SingleJoint_Algorithm1/AdaptionController/AdapitionController/Error/Discrete Derivative2'
 * '<S17>'  : 'SingleJoint_Algorithm1/AdaptionController/AdapitionController/Error/Subsystem'
 * '<S18>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/BottomDriver'
 * '<S19>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/驱动器指令'
 * '<S20>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/BottomDriver/Joint1'
 * '<S21>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/BottomDriver/Joint2'
 * '<S22>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/BottomDriver/Joint3'
 * '<S23>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/BottomDriver/Joint4'
 * '<S24>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/BottomDriver/Joint5'
 * '<S25>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/BottomDriver/Joint6'
 * '<S26>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/驱动器指令/DriveOder'
 * '<S27>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/驱动器指令/DriveOder/BG'
 * '<S28>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/驱动器指令/DriveOder/TF'
 * '<S29>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/驱动器指令/DriveOder/UM1'
 * '<S30>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/驱动器指令/DriveOder/check'
 * '<S31>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/驱动器指令/DriveOder/start_arm'
 * '<S32>'  : 'SingleJoint_Algorithm1/AdaptionController/DriverOneMotor/驱动器指令/DriveOder/start_arm/StartRobotSubsystem'
 * '<S33>'  : 'SingleJoint_Algorithm1/AdaptionController/GetAngle/Joint1'
 * '<S34>'  : 'SingleJoint_Algorithm1/AdaptionController/GetAngle/Joint2'
 * '<S35>'  : 'SingleJoint_Algorithm1/AdaptionController/GetAngle/Joint3'
 * '<S36>'  : 'SingleJoint_Algorithm1/AdaptionController/GetAngle/Joint4'
 * '<S37>'  : 'SingleJoint_Algorithm1/AdaptionController/GetAngle/Joint5'
 * '<S38>'  : 'SingleJoint_Algorithm1/AdaptionController/GetAngle/Joint6'
 * '<S39>'  : 'SingleJoint_Algorithm1/AdaptionController/GetAngleSpeed/Joint1'
 * '<S40>'  : 'SingleJoint_Algorithm1/AdaptionController/GetAngleSpeed/Joint2'
 * '<S41>'  : 'SingleJoint_Algorithm1/AdaptionController/GetAngleSpeed/Joint3'
 * '<S42>'  : 'SingleJoint_Algorithm1/AdaptionController/GetAngleSpeed/Joint4'
 * '<S43>'  : 'SingleJoint_Algorithm1/AdaptionController/GetAngleSpeed/Joint5'
 * '<S44>'  : 'SingleJoint_Algorithm1/AdaptionController/GetAngleSpeed/Joint6'
 * '<S45>'  : 'SingleJoint_Algorithm1/GetMotorData/CANA_284_24'
 * '<S46>'  : 'SingleJoint_Algorithm1/GetMotorData/CANA_285_25'
 * '<S47>'  : 'SingleJoint_Algorithm1/GetMotorData/CANA_286_26'
 * '<S48>'  : 'SingleJoint_Algorithm1/GetMotorData/CANB_281_21'
 * '<S49>'  : 'SingleJoint_Algorithm1/GetMotorData/CANB_282_22'
 * '<S50>'  : 'SingleJoint_Algorithm1/GetMotorData/CANB_283_23'
 * '<S51>'  : 'SingleJoint_Algorithm1/GetMotorData/CANA_284_24/Subsystem1'
 * '<S52>'  : 'SingleJoint_Algorithm1/GetMotorData/CANA_285_25/Subsystem'
 * '<S53>'  : 'SingleJoint_Algorithm1/GetMotorData/CANA_286_26/Subsystem'
 * '<S54>'  : 'SingleJoint_Algorithm1/GetMotorData/CANB_281_21/Subsystem'
 * '<S55>'  : 'SingleJoint_Algorithm1/GetMotorData/CANB_282_22/Subsystem'
 * '<S56>'  : 'SingleJoint_Algorithm1/GetMotorData/CANB_283_23/Subsystem'
 * '<S57>'  : 'SingleJoint_Algorithm1/SendDataToGUI/  '
 * '<S58>'  : 'SingleJoint_Algorithm1/SendDataToGUI/广播周期'
 * '<S59>'  : 'SingleJoint_Algorithm1/SendDataToGUI/广播周期/Increment Real World'
 * '<S60>'  : 'SingleJoint_Algorithm1/SendDataToGUI/广播周期/Wrap To Zero'
 * '<S61>'  : 'SingleJoint_Algorithm1/接收上位机的数据/0x0080'
 * '<S62>'  : 'SingleJoint_Algorithm1/接收上位机的数据/0x88'
 * '<S63>'  : 'SingleJoint_Algorithm1/接收上位机的数据/Compare To Constant1'
 * '<S64>'  : 'SingleJoint_Algorithm1/接收上位机的数据/Compare To Constant2'
 * '<S65>'  : 'SingleJoint_Algorithm1/接收上位机的数据/Subsystem'
 * '<S66>'  : 'SingleJoint_Algorithm1/接收上位机的数据/获取用户命令'
 * '<S67>'  : 'SingleJoint_Algorithm1/接收上位机的数据/Subsystem/Joint1'
 * '<S68>'  : 'SingleJoint_Algorithm1/接收上位机的数据/Subsystem/Joint2'
 * '<S69>'  : 'SingleJoint_Algorithm1/接收上位机的数据/Subsystem/Joint3'
 * '<S70>'  : 'SingleJoint_Algorithm1/接收上位机的数据/Subsystem/Joint4'
 * '<S71>'  : 'SingleJoint_Algorithm1/接收上位机的数据/Subsystem/Joint5'
 * '<S72>'  : 'SingleJoint_Algorithm1/接收上位机的数据/Subsystem/Joint6'
 * '<S73>'  : 'SingleJoint_Algorithm1/接收上位机的数据/Subsystem/Joint7'
 * '<S74>'  : 'SingleJoint_Algorithm1/接收上位机的数据/获取用户命令/消息校验'
 */
#endif                                 /* RTW_HEADER_SingleJoint_Algorithm1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
