/*
 * File: DynamicsController.h
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

#ifndef RTW_HEADER_DynamicsController_h_
#define RTW_HEADER_DynamicsController_h_
#include <math.h>
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
#include "AdaptiveAlgorithm.h"
#include "rt_nonfinite.h"

/* Block signals for system '<S1>/GetAngle' */
typedef struct {
  int32_T Merge;                       /* '<S8>/Merge' */
} B_GetAngle_SingleJoint_Algori_T;

/* Block signals for system '<S1>/GetAngleSpeed' */
typedef struct {
  int32_T Merge1;                      /* '<S9>/Merge1' */
} B_GetAngleSpeed_SingleJoint_A_T;

/* Parameters for system: '<S1>/GetAngle' */
struct P_GetAngle_SingleJoint_Algori_T_ {
  real_T Constant4_Value;              /* Expression: 1
                                        * Referenced by: '<S8>/Constant4'
                                        */
  real_T Constant3_Value;              /* Expression: -1
                                        * Referenced by: '<S8>/Constant3'
                                        */
  real_T Gain4_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S8>/Gain4'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2*pi/8080000
                                        * Referenced by: '<S8>/Gain1'
                                        */
  int32_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S8>/Merge'
                                        */
};

/* Parameters for system: '<S1>/GetAngleSpeed' */
struct P_GetAngleSpeed_SingleJoint_A_T_ {
  real_T Gain3_Gain;                   /* Expression: 2*pi/60
                                        * Referenced by: '<S9>/Gain3'
                                        */
  real_T Gain9_Gain;                   /* Expression: 1/101
                                        * Referenced by: '<S9>/Gain9'
                                        */
  int32_T Merge1_InitialOutput;        /* Computed Parameter: Merge1_InitialOutput
                                        * Referenced by: '<S9>/Merge1'
                                        */
};

extern void SingleJoint_Algor_GetAngle_Init(B_GetAngle_SingleJoint_Algori_T
  *localB, P_GetAngle_SingleJoint_Algori_T *localP);
extern void SingleJoint_Algorithm1_GetAngle(real_T *rty_Angle,
  B_GetAngle_SingleJoint_Algori_T *localB, P_GetAngle_SingleJoint_Algori_T
  *localP, uint16_T rtp_JJoint, real_T rtp_InitAngle);
extern void SingleJoint__GetAngleSpeed_Init(B_GetAngleSpeed_SingleJoint_A_T
  *localB, P_GetAngleSpeed_SingleJoint_A_T *localP);
extern void SingleJoint_Algor_GetAngleSpeed(real_T *rty_Velcity,
  B_GetAngleSpeed_SingleJoint_A_T *localB, P_GetAngleSpeed_SingleJoint_A_T
  *localP, real_T rtp_JJoint);
extern void Single_StartRobotSubsystem_Init(void);
extern void SingleJoint_StartRobotSubsystem(void);
extern void SingleJoint_Algorithm1_u_Init(void);
extern void SingleJoint_Algorithm1_u(void);
extern void SingleJoint_DriverOneMotor_Init(void);
extern void SingleJoin_DriverOneMotor_Start(void);
extern void SingleJoint_Algo_DriverOneMotor(void);
extern void DynamicsController_Init(void);
extern void DynamicsController_Start(void);
extern void DynamicsController(void);

#endif                                 /* RTW_HEADER_DynamicsController_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
