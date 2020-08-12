/*
 * File: GetAngleVelocity.h
 *
 * Code generated for Simulink model 'ZeroForceDrag_MoreJoints'.
 *
 * Model version                  : 1.171
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jan  7 21:52:39 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_GetAngleVelocity_h_
#define RTW_HEADER_GetAngleVelocity_h_
#include <math.h>
#ifndef ZeroForceDrag_MoreJoints_COMMON_INCLUDES_
# define ZeroForceDrag_MoreJoints_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* ZeroForceDrag_MoreJoints_COMMON_INCLUDES_ */

#include "ZeroForceDrag_MoreJoints_types.h"
#include "rt_nonfinite.h"

/* Block signals for system '<S8>/GetAngle' */
typedef struct {
  int32_T Merge;                       /* '<S42>/Merge' */
} B_GetAngle_ZeroForceDrag_More_T;

/* Block signals for system '<S8>/GetAngleSpeed' */
typedef struct {
  int32_T Merge1;                      /* '<S48>/Merge1' */
} B_GetAngleSpeed_ZeroForceDrag_T;

/* Parameters for system: '<S8>/GetAngle' */
struct P_GetAngle_ZeroForceDrag_More_T_ {
  real_T Constant4_Value;              /* Expression: 1
                                        * Referenced by: '<S42>/Constant4'
                                        */
  real_T Constant3_Value;              /* Expression: -1
                                        * Referenced by: '<S42>/Constant3'
                                        */
  real_T Gain4_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S42>/Gain4'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2*pi/8080000
                                        * Referenced by: '<S42>/Gain1'
                                        */
  int32_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                        * Referenced by: '<S42>/Merge'
                                        */
};

/* Parameters for system: '<S8>/GetAngleSpeed' */
struct P_GetAngleSpeed_ZeroForceDrag_T_ {
  real_T Gain3_Gain;                   /* Expression: 2*pi/60
                                        * Referenced by: '<S48>/Gain3'
                                        */
  real_T Gain9_Gain;                   /* Expression: 1/101
                                        * Referenced by: '<S48>/Gain9'
                                        */
  int32_T Merge1_InitialOutput;        /* Computed Parameter: Merge1_InitialOutput
                                        * Referenced by: '<S48>/Merge1'
                                        */
};

extern void ZeroForceDrag_Mor_GetAngle_Init(B_GetAngle_ZeroForceDrag_More_T
  *localB, P_GetAngle_ZeroForceDrag_More_T *localP);
extern void ZeroForceDrag_MoreJoin_GetAngle(real_T *rty_Angle,
  B_GetAngle_ZeroForceDrag_More_T *localB, P_GetAngle_ZeroForceDrag_More_T
  *localP, uint16_T rtp_JJoint, real_T rtp_InitAngle);
extern void ZeroForceDra_GetAngleSpeed_Init(B_GetAngleSpeed_ZeroForceDrag_T
  *localB, P_GetAngleSpeed_ZeroForceDrag_T *localP);
extern void ZeroForceDrag_Mor_GetAngleSpeed(real_T *rty_Velcity,
  B_GetAngleSpeed_ZeroForceDrag_T *localB, P_GetAngleSpeed_ZeroForceDrag_T
  *localP, real_T rtp_JJoint);
extern void GetAngleVelocity_Init(void);
extern void GetAngleVelocity(void);

#endif                                 /* RTW_HEADER_GetAngleVelocity_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
