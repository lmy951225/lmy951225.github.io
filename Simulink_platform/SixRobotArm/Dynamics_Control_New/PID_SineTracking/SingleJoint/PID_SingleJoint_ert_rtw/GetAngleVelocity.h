/*
 * File: GetAngleVelocity.h
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

#ifndef RTW_HEADER_GetAngleVelocity_h_
#define RTW_HEADER_GetAngleVelocity_h_
#include <math.h>
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
#include "rt_nonfinite.h"

/* Block signals for system '<S8>/GetAngle' */
typedef struct {
  int32_T Merge;                       /* '<S49>/Merge' */
} B_GetAngle_PID_SingleJoint_T;

/* Block signals for system '<S8>/GetAngleSpeed' */
typedef struct {
  int32_T Merge1;                      /* '<S55>/Merge1' */
} B_GetAngleSpeed_PID_SingleJoi_T;

/* Parameters for system: '<S8>/GetAngle' */
struct P_GetAngle_PID_SingleJoint_T_ {
  real_T Constant4_Value;              /* Expression: 1
                                        * Referenced by: '<S49>/Constant4'
                                        */
  real_T Constant3_Value;              /* Expression: -1
                                        * Referenced by: '<S49>/Constant3'
                                        */
  real_T Gain4_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S49>/Gain4'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2*pi/8080000
                                        * Referenced by: '<S49>/Gain1'
                                        */
  int32_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S49>/Merge'
                                        */
};

/* Parameters for system: '<S8>/GetAngleSpeed' */
struct P_GetAngleSpeed_PID_SingleJoi_T_ {
  real_T Gain3_Gain;                   /* Expression: 2*pi/60
                                        * Referenced by: '<S55>/Gain3'
                                        */
  real_T Gain9_Gain;                   /* Expression: 1/101
                                        * Referenced by: '<S55>/Gain9'
                                        */
  int32_T Merge1_InitialOutput;        /* Computed Parameter: Merge1_InitialOutput
                                        * Referenced by: '<S55>/Merge1'
                                        */
};

extern void PID_SingleJoint_GetAngle_Init(B_GetAngle_PID_SingleJoint_T *localB,
  P_GetAngle_PID_SingleJoint_T *localP);
extern void PID_SingleJoint_GetAngle(real_T *rty_Angle,
  B_GetAngle_PID_SingleJoint_T *localB, P_GetAngle_PID_SingleJoint_T *localP,
  uint16_T rtp_JJoint, real_T rtp_InitAngle);
extern void PID_SingleJo_GetAngleSpeed_Init(B_GetAngleSpeed_PID_SingleJoi_T
  *localB, P_GetAngleSpeed_PID_SingleJoi_T *localP);
extern void PID_SingleJoint_GetAngleSpeed(real_T *rty_Velcity,
  B_GetAngleSpeed_PID_SingleJoi_T *localB, P_GetAngleSpeed_PID_SingleJoi_T
  *localP, real_T rtp_JJoint);
extern void GetAngleVelocity_Init(void);
extern void GetAngleVelocity(void);

#endif                                 /* RTW_HEADER_GetAngleVelocity_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
