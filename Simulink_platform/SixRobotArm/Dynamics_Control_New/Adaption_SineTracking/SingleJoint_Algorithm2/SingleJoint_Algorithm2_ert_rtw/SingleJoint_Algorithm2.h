/*
 * File: SingleJoint_Algorithm2.h
 *
 * Code generated for Simulink model 'SingleJoint_Algorithm2'.
 *
 * Model version                  : 1.147
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Jan  9 09:56:27 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SingleJoint_Algorithm2_h_
#define RTW_HEADER_SingleJoint_Algorithm2_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef SingleJoint_Algorithm2_COMMON_INCLUDES_
# define SingleJoint_Algorithm2_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* SingleJoint_Algorithm2_COMMON_INCLUDES_ */

#include "SingleJoint_Algorithm2_types.h"

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
  real_T Product;                      /* '<S18>/Product' */
  real_T Sum5;                         /* '<S18>/Sum5' */
  real_T Add[9];                       /* '<S15>/Add' */
  real_T Add_l[3];                     /* '<S14>/Add' */
  real_T Product3[3];                  /* '<S13>/Product3' */
  real_T Add_b[3];                     /* '<S13>/Add' */
  real_T Sum4;                         /* '<S11>/Sum4' */
  real_T DataStoreRead4;               /* '<S1>/Data Store Read4' */
  real_T Product_c;                    /* '<S13>/Product' */
  real_T Sum3;                         /* '<S11>/Sum3' */
  real_T u;                            /* '<S7>/限幅' */
  uint16_T _o1[9];                     /* '<S67>/ ' */
  uint16_T _o2;                        /* '<S67>/ ' */
  uint16_T Switch[9];                  /* '<S75>/Switch' */
  uint16_T MSG[8];                     /* '<S20>/DriveOder' */
  uint16_T StartRobot_c;               /* '<S20>/DriveOder' */
  uint16_T In1;                        /* '<S33>/In1' */
  uint16_T TmpSignalConversionAtSCITransmi[20];
  uint16_T eCANReceive_o2[8];          /* '<S51>/eCAN Receive' */
  uint16_T eCANReceive_o2_i[8];        /* '<S50>/eCAN Receive' */
  uint16_T eCANReceive_o2_j[8];        /* '<S49>/eCAN Receive' */
  uint16_T eCANReceive_o2_e[8];        /* '<S48>/eCAN Receive' */
  uint16_T eCANReceive_o2_l[8];        /* '<S47>/eCAN Receive' */
  uint16_T eCANReceive1_o2[8];         /* '<S46>/eCAN Receive1' */
  uint16_T DataTypeConversion1[8];     /* '<S20>/Data Type Conversion1' */
  B_GetAngleSpeed_SingleJoint_A_T GetAngleSpeed;/* '<S1>/GetAngleSpeed' */
  B_GetAngle_SingleJoint_Algori_T GetAngle;/* '<S1>/GetAngle' */
} B_SingleJoint_Algorithm2_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S16>/UD' */
  real_T UD_DSTATE_g;                  /* '<S17>/UD' */
  real_T ref_signal_AccFreqNorm;       /* '<S18>/ref_signal' */
  real_T UnitDelay2_DSTATE[9];         /* '<S10>/Unit Delay2' */
  real_T UnitDelay1_DSTATE[3];         /* '<S10>/Unit Delay1' */
  real_T UnitDelay_DSTATE;             /* '<S10>/Unit Delay' */
  real_T DiscreteTimeIntegrator1_DSTATE[9];/* '<S10>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator3_DSTATE[3];/* '<S10>/Discrete-Time Integrator3' */
  real_T DiscreteTimeIntegrator2_DSTATE[7];/* '<S12>/Discrete-Time Integrator2' */
  uint16_T start;                      /* '<S20>/DriveOder' */
  uint16_T bx;                         /* '<S20>/DriveOder' */
  uint16_T temporalCounter_i1;         /* '<S20>/DriveOder' */
  uint16_T Output_DSTATE;              /* '<S59>/Output' */
  uint16_T is_active_c1_SingleJoint_Algori;/* '<S20>/DriveOder' */
  uint16_T is_c1_SingleJoint_Algorithm2;/* '<S20>/DriveOder' */
  boolean_T PTX;                       /* '<S5>/消息使能' */
} DW_SingleJoint_Algorithm2_T;

/* Parameters (default storage) */
struct P_SingleJoint_Algorithm2_T_ {
  real_T ref_signal_Amplitude;         /* Mask Parameter: ref_signal_Amplitude
                                        * Referenced by: '<S18>/ref_signal'
                                        */
  real_T AdapitionController_Freq;     /* Mask Parameter: AdapitionController_Freq
                                        * Referenced by: '<S18>/ref_signal'
                                        */
  real_T DiscreteDerivative_ICPrevScaled;/* Mask Parameter: DiscreteDerivative_ICPrevScaled
                                          * Referenced by: '<S16>/UD'
                                          */
  real_T DiscreteDerivative1_ICPrevScale;/* Mask Parameter: DiscreteDerivative1_ICPrevScale
                                          * Referenced by: '<S17>/UD'
                                          */
  real_T GetAngle_InitAngle;           /* Mask Parameter: GetAngle_InitAngle
                                        * Referenced by: '<S1>/GetAngle'
                                        */
  real_T GetAngleSpeed_JJoint;         /* Mask Parameter: GetAngleSpeed_JJoint
                                        * Referenced by: '<S1>/GetAngleSpeed'
                                        */
  real_T ref_signal_Phase;             /* Mask Parameter: ref_signal_Phase
                                        * Referenced by: '<S18>/ref_signal'
                                        */
  real_T DriverOneMotor_SelectJoint;   /* Mask Parameter: DriverOneMotor_SelectJoint
                                        * Referenced by: '<S7>/Constant1'
                                        */
  uint16_T ux88_const;                 /* Mask Parameter: ux88_const
                                        * Referenced by: '<S63>/Constant'
                                        */
  uint16_T ux0080_const;               /* Mask Parameter: ux0080_const
                                        * Referenced by: '<S62>/Constant'
                                        */
  uint16_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S64>/Constant'
                                        */
  uint16_T CompareToConstant2_const;   /* Mask Parameter: CompareToConstant2_const
                                        * Referenced by: '<S65>/Constant'
                                        */
  uint16_T GetAngle_JJoint;            /* Mask Parameter: GetAngle_JJoint
                                        * Referenced by: '<S1>/GetAngle'
                                        */
  uint16_T _uplimit;                   /* Mask Parameter: _uplimit
                                        * Referenced by: '<S61>/FixPt Switch'
                                        */
  real_T u_Gain;                       /* Expression: -1
                                        * Referenced by: '<S12>/6'
                                        */
  real_T DiscreteTimeIntegrator2_gainval;/* Computed Parameter: DiscreteTimeIntegrator2_gainval
                                          * Referenced by: '<S12>/Discrete-Time Integrator2'
                                          */
  real_T DiscreteTimeIntegrator2_IC;   /* Expression: 0
                                        * Referenced by: '<S12>/Discrete-Time Integrator2'
                                        */
  real_T DiscreteTimeIntegrator2_UpperSa[7];/* Expression: [1000;1000;1000;1000;1000;1000;1000;]
                                             * Referenced by: '<S12>/Discrete-Time Integrator2'
                                             */
  real_T DiscreteTimeIntegrator2_LowerSa[7];/* Expression: [-1000;-1000;-1000;-1000;-1000;-1000;-1000;]
                                             * Referenced by: '<S12>/Discrete-Time Integrator2'
                                             */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S13>/Constant9'
                                        */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<S13>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: 1
                                        * Referenced by: '<S13>/Constant11'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S13>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S13>/Constant5'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<S13>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S13>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S13>/Constant3'
                                        */
  real_T Constant8_Value;              /* Expression: 1
                                        * Referenced by: '<S13>/Constant8'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S13>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 1.75
                                        * Referenced by: '<S13>/Constant7'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S14>/Constant'
                                        */
  real_T Constant1_Value_h;            /* Expression: 0
                                        * Referenced by: '<S14>/Constant1'
                                        */
  real_T Constant2_Value_c;            /* Expression: -1
                                        * Referenced by: '<S14>/Constant2'
                                        */
  real_T Constant3_Value_j;            /* Expression: 1
                                        * Referenced by: '<S14>/Constant3'
                                        */
  real_T Constant4_Value_h;            /* Expression: 0
                                        * Referenced by: '<S14>/Constant4'
                                        */
  real_T Constant5_Value_k;            /* Expression: -2.15
                                        * Referenced by: '<S14>/Constant5'
                                        */
  real_T Constant6_Value_g;            /* Expression: 0
                                        * Referenced by: '<S14>/Constant6'
                                        */
  real_T Constant7_Value_l;            /* Expression: 1
                                        * Referenced by: '<S14>/Constant7'
                                        */
  real_T Constant8_Value_h;            /* Expression: -1.75
                                        * Referenced by: '<S14>/Constant8'
                                        */
  real_T Constant9_Value_i;            /* Expression: 0
                                        * Referenced by: '<S14>/Constant9'
                                        */
  real_T Constant10_Value_o;           /* Expression: 0
                                        * Referenced by: '<S14>/Constant10'
                                        */
  real_T Constant11_Value_j;           /* Expression: 1
                                        * Referenced by: '<S14>/Constant11'
                                        */
  real_T Constant_Value_h;             /* Expression: 0
                                        * Referenced by: '<S15>/Constant'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S15>/Constant1'
                                        */
  real_T Constant2_Value_o;            /* Expression: -1
                                        * Referenced by: '<S15>/Constant2'
                                        */
  real_T Constant3_Value_o;            /* Expression: 1
                                        * Referenced by: '<S15>/Constant3'
                                        */
  real_T Constant4_Value_i;            /* Expression: 0
                                        * Referenced by: '<S15>/Constant4'
                                        */
  real_T Constant5_Value_g;            /* Expression: -2.15
                                        * Referenced by: '<S15>/Constant5'
                                        */
  real_T Constant6_Value_i;            /* Expression: 0
                                        * Referenced by: '<S15>/Constant6'
                                        */
  real_T Constant7_Value_e;            /* Expression: 1
                                        * Referenced by: '<S15>/Constant7'
                                        */
  real_T Constant8_Value_p;            /* Expression: -1.75
                                        * Referenced by: '<S15>/Constant8'
                                        */
  real_T Constant9_Value_g;            /* Expression: 0
                                        * Referenced by: '<S15>/Constant9'
                                        */
  real_T Constant10_Value_a;           /* Expression: 0
                                        * Referenced by: '<S15>/Constant10'
                                        */
  real_T Constant11_Value_p;           /* Expression: 1
                                        * Referenced by: '<S15>/Constant11'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S15>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S15>/Constant13'
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S10>/Unit Delay2'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S10>/Unit Delay1'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S10>/Unit Delay'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S10>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S10>/Discrete-Time Integrator1'
                                        */
  real_T DiscreteTimeIntegrator1_UpperSa[9];/* Expression: [1000 1000 1000;1000 1000 1000;1000 1000 1000;]
                                             * Referenced by: '<S10>/Discrete-Time Integrator1'
                                             */
  real_T DiscreteTimeIntegrator1_LowerSa[9];/* Expression: [-1000 -1000 -1000;-1000 -1000 -1000;-1000 -1000 -1000;]
                                             * Referenced by: '<S10>/Discrete-Time Integrator1'
                                             */
  real_T DiscreteTimeIntegrator3_gainval;/* Computed Parameter: DiscreteTimeIntegrator3_gainval
                                          * Referenced by: '<S10>/Discrete-Time Integrator3'
                                          */
  real_T DiscreteTimeIntegrator3_IC;   /* Expression: 0
                                        * Referenced by: '<S10>/Discrete-Time Integrator3'
                                        */
  real_T DiscreteTimeIntegrator3_UpperSa[3];/* Expression: [1000;1000;1000;]
                                             * Referenced by: '<S10>/Discrete-Time Integrator3'
                                             */
  real_T DiscreteTimeIntegrator3_LowerSa[3];/* Expression: [-1000;-1000;-1000;]
                                             * Referenced by: '<S10>/Discrete-Time Integrator3'
                                             */
  real_T e1_Y0;                        /* Computed Parameter: e1_Y0
                                        * Referenced by: '<S18>/e1'
                                        */
  real_T qd_Y0;                        /* Computed Parameter: qd_Y0
                                        * Referenced by: '<S18>/qd'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S16>/TSamp'
                                        */
  real_T TSamp_WtEt_i;                 /* Computed Parameter: TSamp_WtEt_i
                                        * Referenced by: '<S17>/TSamp'
                                        */
  real_T _UpperSat;                    /* Expression: pi/3
                                        * Referenced by: '<S6>/限幅'
                                        */
  real_T _LowerSat;                    /* Expression: 0
                                        * Referenced by: '<S6>/限幅'
                                        */
  real_T _UpperSat_f;                  /* Expression: 500
                                        * Referenced by: '<S7>/限幅'
                                        */
  real_T _LowerSat_l;                  /* Expression: -500
                                        * Referenced by: '<S7>/限幅'
                                        */
  real_T Gain6_Gain;                   /* Expression: 180/pi
                                        * Referenced by: '<S1>/Gain6'
                                        */
  real_T Gain8_Gain;                   /* Expression: 101
                                        * Referenced by: '<S1>/Gain8'
                                        */
  real_T Constant_Value_f;             /* Expression: 30
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Gain11_Gain;                  /* Expression: pi/180
                                        * Referenced by: '<S1>/Gain11'
                                        */
  real_T u_Gain_d;                     /* Expression: 0.1
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
                                        * Referenced by: '<S30>/MSG'
                                        */
  uint16_T MSG_Y0_p;                   /* Computed Parameter: MSG_Y0_p
                                        * Referenced by: '<S28>/MSG'
                                        */
  uint16_T MSG_Y0_m;                   /* Computed Parameter: MSG_Y0_m
                                        * Referenced by: '<S29>/MSG'
                                        */
  uint16_T Out1_Y0;                    /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S33>/Out1'
                                        */
  uint16_T Constant_Value_a;           /* Computed Parameter: Constant_Value_a
                                        * Referenced by: '<S32>/Constant'
                                        */
  uint16_T Constant1_Value_i;          /* Computed Parameter: Constant1_Value_i
                                        * Referenced by: '<S31>/Constant1'
                                        */
  uint16_T Constant_Value_i;           /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S31>/Constant'
                                        */
  uint16_T bx_Y0;                      /* Computed Parameter: bx_Y0
                                        * Referenced by: '<S31>/bx'
                                        */
  uint16_T Switch_Threshold;           /* Computed Parameter: Switch_Threshold
                                        * Referenced by: '<S31>/Switch'
                                        */
  uint16_T Constant_Value_p[9];        /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S75>/Constant'
                                        */
  uint16_T Switch_Threshold_m;         /* Computed Parameter: Switch_Threshold_m
                                        * Referenced by: '<S67>/Switch'
                                        */
  uint16_T Constant1_Value_o;          /* Computed Parameter: Constant1_Value_o
                                        * Referenced by: '<S58>/Constant1'
                                        */
  uint16_T DataStoreMemory9_InitialValue;/* Computed Parameter: DataStoreMemory9_InitialValue
                                          * Referenced by: '<Root>/Data Store Memory9'
                                          */
  boolean_T Constant1_Value_a;         /* Expression: true
                                        * Referenced by: '<S67>/Constant1'
                                        */
  boolean_T Constant_Value_a0;         /* Expression: false
                                        * Referenced by: '<S67>/Constant'
                                        */
  boolean_T _InitialValue;             /* Expression: true
                                        * Referenced by: '<S5>/消息使能'
                                        */
  boolean_T Constant_Value_e;          /* Expression: true
                                        * Referenced by: '<S3>/Constant'
                                        */
  boolean_T Constant1_Value_p;         /* Expression: false
                                        * Referenced by: '<S3>/Constant1'
                                        */
  uint16_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S23>/Constant'
                                        */
  uint16_T Constant1_Value_ou;         /* Computed Parameter: Constant1_Value_ou
                                        * Referenced by: '<S30>/Constant1'
                                        */
  uint16_T Constant2_Value_k;          /* Computed Parameter: Constant2_Value_k
                                        * Referenced by: '<S30>/Constant2'
                                        */
  uint16_T Constant3_Value_h;          /* Computed Parameter: Constant3_Value_h
                                        * Referenced by: '<S30>/Constant3'
                                        */
  uint16_T Constant8_Value_m;          /* Computed Parameter: Constant8_Value_m
                                        * Referenced by: '<S30>/Constant8'
                                        */
  uint16_T Constant_Value_cs;          /* Computed Parameter: Constant_Value_cs
                                        * Referenced by: '<S30>/Constant'
                                        */
  uint16_T Constant1_Value_a3;         /* Computed Parameter: Constant1_Value_a3
                                        * Referenced by: '<S28>/Constant1'
                                        */
  uint16_T Constant2_Value_cz;         /* Computed Parameter: Constant2_Value_cz
                                        * Referenced by: '<S28>/Constant2'
                                        */
  uint16_T Constant3_Value_k;          /* Computed Parameter: Constant3_Value_k
                                        * Referenced by: '<S28>/Constant3'
                                        */
  uint16_T Constant8_Value_i;          /* Computed Parameter: Constant8_Value_i
                                        * Referenced by: '<S28>/Constant8'
                                        */
  uint16_T Constant6_Value_e;          /* Computed Parameter: Constant6_Value_e
                                        * Referenced by: '<S28>/Constant6'
                                        */
  uint16_T Constant1_Value_k;          /* Computed Parameter: Constant1_Value_k
                                        * Referenced by: '<S29>/Constant1'
                                        */
  uint16_T Constant3_Value_a;          /* Computed Parameter: Constant3_Value_a
                                        * Referenced by: '<S29>/Constant3'
                                        */
  uint16_T Constant8_Value_k;          /* Computed Parameter: Constant8_Value_k
                                        * Referenced by: '<S29>/Constant8'
                                        */
  uint16_T Constant2_Value_ov;         /* Computed Parameter: Constant2_Value_ov
                                        * Referenced by: '<S29>/Constant2'
                                        */
  uint16_T DataStoreMemory2_InitialValue_c;/* Computed Parameter: DataStoreMemory2_InitialValue_c
                                            * Referenced by: '<S7>/Data Store Memory2'
                                            */
  uint16_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S61>/Constant'
                                        */
  uint16_T Output_InitialCondition;    /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S59>/Output'
                                        */
  uint16_T Switch_Threshold_my;        /* Computed Parameter: Switch_Threshold_my
                                        * Referenced by: '<S3>/Switch'
                                        */
  uint16_T FixPtConstant_Value;        /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S60>/FixPt Constant'
                                        */
  P_GetAngleSpeed_SingleJoint_A_T GetAngleSpeed;/* '<S1>/GetAngleSpeed' */
  P_GetAngle_SingleJoint_Algori_T GetAngle;/* '<S1>/GetAngle' */
};

/* Real-time Model Data Structure */
struct tag_RTM_SingleJoint_Algorithm_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_SingleJoint_Algorithm2_T SingleJoint_Algorithm2_P;

/* Block signals (default storage) */
extern B_SingleJoint_Algorithm2_T SingleJoint_Algorithm2_B;

/* Block states (default storage) */
extern DW_SingleJoint_Algorithm2_T SingleJoint_Algorithm2_DW;

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
extern void SingleJoint_Algorithm2_initialize(void);
extern void SingleJoint_Algorithm2_step(void);
extern void SingleJoint_Algorithm2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SingleJoint_Algorith_T *const SingleJoint_Algorithm2_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S16>/Data Type Duplicate' : Unused code path elimination
 * Block '<S17>/Data Type Duplicate' : Unused code path elimination
 * Block '<S11>/Sum2' : Unused code path elimination
 * Block '<S59>/Data Type Propagation' : Unused code path elimination
 * Block '<S60>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S61>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S12>/transpose' : Reshape block reduction
 * Block '<S13>/Gamma_0' : Reshape block reduction
 * Block '<S13>/H' : Reshape block reduction
 * Block '<S13>/Y' : Reshape block reduction
 * Block '<S13>/Y_J' : Reshape block reduction
 * Block '<S13>/bar_Gamma' : Reshape block reduction
 * Block '<S14>/F' : Reshape block reduction
 * Block '<S14>/H' : Reshape block reduction
 * Block '<S15>/F' : Reshape block reduction
 * Block '<S15>/H' : Reshape block reduction
 * Block '<S15>/Y' : Reshape block reduction
 * Block '<S15>/Y_J' : Reshape block reduction
 * Block '<S28>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S28>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S29>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S29>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S29>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S29>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S30>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S56>/Data Type Conversion9' : Eliminate redundant data type conversion
 * Block '<S57>/Data Type Conversion9' : Eliminate redundant data type conversion
 * Block '<S75>/Data Type Conversion' : Eliminate redundant data type conversion
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
 * '<Root>' : 'SingleJoint_Algorithm2'
 * '<S1>'   : 'SingleJoint_Algorithm2/AdaptionController'
 * '<S2>'   : 'SingleJoint_Algorithm2/GetMotorData'
 * '<S3>'   : 'SingleJoint_Algorithm2/SendDataToGUI'
 * '<S4>'   : 'SingleJoint_Algorithm2/Subsystem'
 * '<S5>'   : 'SingleJoint_Algorithm2/接收上位机的数据'
 * '<S6>'   : 'SingleJoint_Algorithm2/AdaptionController/AdapitionController'
 * '<S7>'   : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor'
 * '<S8>'   : 'SingleJoint_Algorithm2/AdaptionController/GetAngle'
 * '<S9>'   : 'SingleJoint_Algorithm2/AdaptionController/GetAngleSpeed'
 * '<S10>'  : 'SingleJoint_Algorithm2/AdaptionController/AdapitionController/Controller'
 * '<S11>'  : 'SingleJoint_Algorithm2/AdaptionController/AdapitionController/Error'
 * '<S12>'  : 'SingleJoint_Algorithm2/AdaptionController/AdapitionController/Controller/SolveTau'
 * '<S13>'  : 'SingleJoint_Algorithm2/AdaptionController/AdapitionController/Controller/adaptive'
 * '<S14>'  : 'SingleJoint_Algorithm2/AdaptionController/AdapitionController/Controller/im1'
 * '<S15>'  : 'SingleJoint_Algorithm2/AdaptionController/AdapitionController/Controller/im2'
 * '<S16>'  : 'SingleJoint_Algorithm2/AdaptionController/AdapitionController/Error/Discrete Derivative'
 * '<S17>'  : 'SingleJoint_Algorithm2/AdaptionController/AdapitionController/Error/Discrete Derivative1'
 * '<S18>'  : 'SingleJoint_Algorithm2/AdaptionController/AdapitionController/Error/Subsystem'
 * '<S19>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/BottomDriver'
 * '<S20>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/驱动器指令'
 * '<S21>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/BottomDriver/Joint1'
 * '<S22>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/BottomDriver/Joint2'
 * '<S23>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/BottomDriver/Joint3'
 * '<S24>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/BottomDriver/Joint4'
 * '<S25>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/BottomDriver/Joint5'
 * '<S26>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/BottomDriver/Joint6'
 * '<S27>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/驱动器指令/DriveOder'
 * '<S28>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/驱动器指令/DriveOder/BG'
 * '<S29>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/驱动器指令/DriveOder/TF'
 * '<S30>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/驱动器指令/DriveOder/UM1'
 * '<S31>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/驱动器指令/DriveOder/check'
 * '<S32>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/驱动器指令/DriveOder/start_arm'
 * '<S33>'  : 'SingleJoint_Algorithm2/AdaptionController/DriverOneMotor/驱动器指令/DriveOder/start_arm/StartRobotSubsystem'
 * '<S34>'  : 'SingleJoint_Algorithm2/AdaptionController/GetAngle/Joint1'
 * '<S35>'  : 'SingleJoint_Algorithm2/AdaptionController/GetAngle/Joint2'
 * '<S36>'  : 'SingleJoint_Algorithm2/AdaptionController/GetAngle/Joint3'
 * '<S37>'  : 'SingleJoint_Algorithm2/AdaptionController/GetAngle/Joint4'
 * '<S38>'  : 'SingleJoint_Algorithm2/AdaptionController/GetAngle/Joint5'
 * '<S39>'  : 'SingleJoint_Algorithm2/AdaptionController/GetAngle/Joint6'
 * '<S40>'  : 'SingleJoint_Algorithm2/AdaptionController/GetAngleSpeed/Joint1'
 * '<S41>'  : 'SingleJoint_Algorithm2/AdaptionController/GetAngleSpeed/Joint2'
 * '<S42>'  : 'SingleJoint_Algorithm2/AdaptionController/GetAngleSpeed/Joint3'
 * '<S43>'  : 'SingleJoint_Algorithm2/AdaptionController/GetAngleSpeed/Joint4'
 * '<S44>'  : 'SingleJoint_Algorithm2/AdaptionController/GetAngleSpeed/Joint5'
 * '<S45>'  : 'SingleJoint_Algorithm2/AdaptionController/GetAngleSpeed/Joint6'
 * '<S46>'  : 'SingleJoint_Algorithm2/GetMotorData/CANA_284_24'
 * '<S47>'  : 'SingleJoint_Algorithm2/GetMotorData/CANA_285_25'
 * '<S48>'  : 'SingleJoint_Algorithm2/GetMotorData/CANA_286_26'
 * '<S49>'  : 'SingleJoint_Algorithm2/GetMotorData/CANB_281_21'
 * '<S50>'  : 'SingleJoint_Algorithm2/GetMotorData/CANB_282_22'
 * '<S51>'  : 'SingleJoint_Algorithm2/GetMotorData/CANB_283_23'
 * '<S52>'  : 'SingleJoint_Algorithm2/GetMotorData/CANA_284_24/Subsystem1'
 * '<S53>'  : 'SingleJoint_Algorithm2/GetMotorData/CANA_285_25/Subsystem'
 * '<S54>'  : 'SingleJoint_Algorithm2/GetMotorData/CANA_286_26/Subsystem'
 * '<S55>'  : 'SingleJoint_Algorithm2/GetMotorData/CANB_281_21/Subsystem'
 * '<S56>'  : 'SingleJoint_Algorithm2/GetMotorData/CANB_282_22/Subsystem'
 * '<S57>'  : 'SingleJoint_Algorithm2/GetMotorData/CANB_283_23/Subsystem'
 * '<S58>'  : 'SingleJoint_Algorithm2/SendDataToGUI/  '
 * '<S59>'  : 'SingleJoint_Algorithm2/SendDataToGUI/广播周期'
 * '<S60>'  : 'SingleJoint_Algorithm2/SendDataToGUI/广播周期/Increment Real World'
 * '<S61>'  : 'SingleJoint_Algorithm2/SendDataToGUI/广播周期/Wrap To Zero'
 * '<S62>'  : 'SingleJoint_Algorithm2/接收上位机的数据/0x0080'
 * '<S63>'  : 'SingleJoint_Algorithm2/接收上位机的数据/0x88'
 * '<S64>'  : 'SingleJoint_Algorithm2/接收上位机的数据/Compare To Constant1'
 * '<S65>'  : 'SingleJoint_Algorithm2/接收上位机的数据/Compare To Constant2'
 * '<S66>'  : 'SingleJoint_Algorithm2/接收上位机的数据/Subsystem'
 * '<S67>'  : 'SingleJoint_Algorithm2/接收上位机的数据/获取用户命令'
 * '<S68>'  : 'SingleJoint_Algorithm2/接收上位机的数据/Subsystem/Joint1'
 * '<S69>'  : 'SingleJoint_Algorithm2/接收上位机的数据/Subsystem/Joint2'
 * '<S70>'  : 'SingleJoint_Algorithm2/接收上位机的数据/Subsystem/Joint3'
 * '<S71>'  : 'SingleJoint_Algorithm2/接收上位机的数据/Subsystem/Joint4'
 * '<S72>'  : 'SingleJoint_Algorithm2/接收上位机的数据/Subsystem/Joint5'
 * '<S73>'  : 'SingleJoint_Algorithm2/接收上位机的数据/Subsystem/Joint6'
 * '<S74>'  : 'SingleJoint_Algorithm2/接收上位机的数据/Subsystem/Joint7'
 * '<S75>'  : 'SingleJoint_Algorithm2/接收上位机的数据/获取用户命令/消息校验'
 */
#endif                                 /* RTW_HEADER_SingleJoint_Algorithm2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
