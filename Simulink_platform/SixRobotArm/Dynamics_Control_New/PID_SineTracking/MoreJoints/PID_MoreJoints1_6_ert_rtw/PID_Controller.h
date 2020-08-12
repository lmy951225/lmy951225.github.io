/*
 * File: PID_Controller.h
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

#ifndef RTW_HEADER_PID_Controller_h_
#define RTW_HEADER_PID_Controller_h_
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

/* Block states (default storage) for system '<S9>/PID_Controller1' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S139>/UD' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S133>/Discrete-Time Integrator' */
} DW_PID_Controller1_PID_MoreJo_T;

/* Parameters for system: '<S9>/PID_Controller1' */
struct P_PID_Controller1_PID_MoreJoi_T_ {
  real_T DiscreteDerivative1_ICPrevScale;/* Mask Parameter: DiscreteDerivative1_ICPrevScale
                                          * Referenced by: '<S139>/UD'
                                          */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S139>/TSamp'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S133>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S133>/Discrete-Time Integrator'
                                        */
  real_T DiscreteTimeIntegrator_UpperSat;/* Expression: 1000
                                          * Referenced by: '<S133>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_LowerSat;/* Expression: -1000
                                          * Referenced by: '<S133>/Discrete-Time Integrator'
                                          */
};

extern void PID_MoreJo_PID_Controller1_Init(DW_PID_Controller1_PID_MoreJo_T
  *localDW, P_PID_Controller1_PID_MoreJoi_T *localP);
extern void PID_MoreJoints1_PID_Controller1(real_T rtu_error, real_T rtu_KP,
  real_T rtu_KI, real_T rtu_KD, real_T *rty_Tau, DW_PID_Controller1_PID_MoreJo_T
  *localDW, P_PID_Controller1_PID_MoreJoi_T *localP);
extern void PID_Controller_Init(void);
extern void PID_Controller(void);

#endif                                 /* RTW_HEADER_PID_Controller_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
