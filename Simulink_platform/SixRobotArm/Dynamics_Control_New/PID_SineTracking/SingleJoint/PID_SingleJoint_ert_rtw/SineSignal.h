/*
 * File: SineSignal.h
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

#ifndef RTW_HEADER_SineSignal_h_
#define RTW_HEADER_SineSignal_h_
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

/* Block states (default storage) for system '<S10>/Subsystem' */
typedef struct {
  real_T ref_signal_AccFreqNorm;       /* '<S145>/ref_signal' */
} DW_Subsystem_PID_SingleJoint_T;

/* Block states (default storage) for system '<S1>/关节一正弦信号发生器' */
typedef struct {
  DW_Subsystem_PID_SingleJoint_T Subsystem;/* '<S10>/Subsystem' */
} DW_SineSignal_T;

/* Parameters for system: '<S10>/Subsystem' */
struct P_Subsystem_PID_SingleJoint_T_ {
  real_T ref_signal_Amplitude;         /* Mask Parameter: ref_signal_Amplitude
                                        * Referenced by: '<S145>/ref_signal'
                                        */
  real_T ref_signal_Phase;             /* Mask Parameter: ref_signal_Phase
                                        * Referenced by: '<S145>/ref_signal'
                                        */
  real_T _Y0;                          /* Computed Parameter: _Y0
                                        * Referenced by: '<S145>/外转子理想 正弦信号'
                                        */
  real_T _Y0_a;                        /* Computed Parameter: _Y0_a
                                        * Referenced by: '<S145>/电机外转子 跟踪误差'
                                        */
  real_T _UpperSat;                    /* Expression: pi/3
                                        * Referenced by: '<S145>/限幅'
                                        */
  real_T _LowerSat;                    /* Expression: 0
                                        * Referenced by: '<S145>/限幅'
                                        */
};

/* Parameters for system: '<S1>/关节一正弦信号发生器' */
struct P_SineSignal_T_ {
  real_T Subsystem_Freq;               /* Mask Parameter: Subsystem_Freq
                                        * Referenced by: '<S10>/Subsystem'
                                        */
  real_T Constant3_Value;              /* Expression: 30
                                        * Referenced by: '<S10>/Constant3'
                                        */
  real_T Gain14_Gain;                  /* Expression: pi/180
                                        * Referenced by: '<S10>/Gain14'
                                        */
  P_Subsystem_PID_SingleJoint_T Subsystem;/* '<S10>/Subsystem' */
};

extern void PID_SingleJoint_Subsystem_Init(real_T *rty_u, real_T *rty_u_c,
  DW_Subsystem_PID_SingleJoint_T *localDW, P_Subsystem_PID_SingleJoint_T *localP);
extern void PID_SingleJoint_Subsystem_Start(DW_Subsystem_PID_SingleJoint_T
  *localDW, P_Subsystem_PID_SingleJoint_T *localP);
extern void PID_SingleJoint_Subsystem(real_T rtu_Enable, real_T rtu_rad, real_T
  rtu_u, real_T *rty_u, real_T *rty_u_c, DW_Subsystem_PID_SingleJoint_T *localDW,
  P_Subsystem_PID_SingleJoint_T *localP, real_T rtp_Freq);
extern void SineSignal_Init(real_T *rty_qd, real_T *rty_e, DW_SineSignal_T
  *localDW, P_SineSignal_T *localP);
extern void SineSignal_Start(DW_SineSignal_T *localDW, P_SineSignal_T *localP);
extern void SineSignal(real_T rtu_En, real_T rtu_q, real_T *rty_qd, real_T
  *rty_e, DW_SineSignal_T *localDW, P_SineSignal_T *localP);

#endif                                 /* RTW_HEADER_SineSignal_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
