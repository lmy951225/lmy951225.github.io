/*
 * File: SineSignal.c
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

#include "SineSignal.h"

/* Include model header file for global data */
#include "PID_MoreJoints1_6.h"
#include "PID_MoreJoints1_6_private.h"

/*
 * System initialize for enable system:
 *    '<S10>/Subsystem'
 *    '<S11>/Subsystem'
 *    '<S12>/Subsystem'
 *    '<S13>/Subsystem'
 *    '<S14>/Subsystem'
 *    '<S15>/Subsystem'
 */
void PID_MoreJoints1__Subsystem_Init(real_T *rty_u, real_T *rty_u_c,
  DW_Subsystem_PID_MoreJoints1__T *localDW, P_Subsystem_PID_MoreJoints1_6_T
  *localP)
{
  /* InitializeConditions for S-Function (sdspsine2): '<S145>/ref_signal' */
  /* This code only executes when block is re-enabled in an
     enabled subsystem when the enabled subsystem states on
     re-enabling are set to 'Reset' */
  /* Reset to time zero on re-enable */
  /* Trigonometric mode: compute accumulated
     normalized trig fcn argument for each channel */
  /* Keep normalized value in range [0 2*pi) */
  localDW->ref_signal_AccFreqNorm = fmod(localP->ref_signal_Phase,
    6.2831853071795862);
  if (localDW->ref_signal_AccFreqNorm < 0.0) {
    localDW->ref_signal_AccFreqNorm += 6.2831853071795862;
  }

  /* End of InitializeConditions for S-Function (sdspsine2): '<S145>/ref_signal' */

  /* SystemInitialize for Outport: '<S145>/外转子理想 正弦信号' */
  *rty_u = localP->_Y0;

  /* SystemInitialize for Outport: '<S145>/电机外转子 跟踪误差' */
  *rty_u_c = localP->_Y0_a;
}

/*
 * Start for enable system:
 *    '<S10>/Subsystem'
 *    '<S11>/Subsystem'
 *    '<S12>/Subsystem'
 *    '<S13>/Subsystem'
 *    '<S14>/Subsystem'
 *    '<S15>/Subsystem'
 */
void PID_MoreJoints1_Subsystem_Start(DW_Subsystem_PID_MoreJoints1__T *localDW,
  P_Subsystem_PID_MoreJoints1_6_T *localP)
{
  /* Start for S-Function (sdspsine2): '<S145>/ref_signal' */
  /* Trigonometric mode: compute accumulated
     normalized trig fcn argument for each channel */
  /* Keep normalized value in range [0 2*pi) */
  localDW->ref_signal_AccFreqNorm = fmod(localP->ref_signal_Phase,
    6.2831853071795862);
  if (localDW->ref_signal_AccFreqNorm < 0.0) {
    localDW->ref_signal_AccFreqNorm += 6.2831853071795862;
  }

  /* End of Start for S-Function (sdspsine2): '<S145>/ref_signal' */
}

/*
 * Output and update for enable system:
 *    '<S10>/Subsystem'
 *    '<S11>/Subsystem'
 *    '<S12>/Subsystem'
 *    '<S13>/Subsystem'
 *    '<S14>/Subsystem'
 *    '<S15>/Subsystem'
 */
void PID_MoreJoints1_6_Subsystem(real_T rtu_Enable, real_T rtu_rad, real_T rtu_u,
  real_T *rty_u, real_T *rty_u_c, DW_Subsystem_PID_MoreJoints1__T *localDW,
  P_Subsystem_PID_MoreJoints1_6_T *localP, real_T rtp_Freq)
{
  real_T rtb_ref_signal;
  real_T rtu_u_0;

  /* Outputs for Enabled SubSystem: '<S10>/Subsystem' incorporates:
   *  EnablePort: '<S145>/Enable'
   */
  if (rtu_Enable > 0.0) {
    /* S-Function (sdspsine2): '<S145>/ref_signal' */
    rtb_ref_signal = localP->ref_signal_Amplitude * sin
      (localDW->ref_signal_AccFreqNorm);

    /* Update accumulated normalized freq value
       for next sample.  Keep in range [0 2*pi) */
    localDW->ref_signal_AccFreqNorm += rtp_Freq * 0.0062831853071795866;
    if (localDW->ref_signal_AccFreqNorm >= 6.2831853071795862) {
      localDW->ref_signal_AccFreqNorm -= 6.2831853071795862;
    } else {
      if (localDW->ref_signal_AccFreqNorm < 0.0) {
        localDW->ref_signal_AccFreqNorm += 6.2831853071795862;
      }
    }

    /* End of S-Function (sdspsine2): '<S145>/ref_signal' */

    /* Saturate: '<S145>/限幅' */
    if (rtu_u > localP->_UpperSat) {
      rtu_u_0 = localP->_UpperSat;
    } else if (rtu_u < localP->_LowerSat) {
      rtu_u_0 = localP->_LowerSat;
    } else {
      rtu_u_0 = rtu_u;
    }

    /* End of Saturate: '<S145>/限幅' */

    /* Product: '<S145>/Product' */
    *rty_u = rtb_ref_signal * rtu_u_0;

    /* Sum: '<S145>/Sum5' */
    *rty_u_c = *rty_u - rtu_rad;
  }

  /* End of Outputs for SubSystem: '<S10>/Subsystem' */
}

/*
 * System initialize for atomic system:
 *    '<S1>/关节一正弦信号发生器'
 *    '<S1>/关节三正弦信号发生器'
 *    '<S1>/关节二正弦信号发生器'
 *    '<S1>/关节五正弦信号发生器'
 *    '<S1>/关节六正弦信号发生器'
 *    '<S1>/关节四正弦信号发生器'
 */
void SineSignal_Init(real_T *rty_qd, real_T *rty_e, DW_SineSignal_T *localDW,
                     P_SineSignal_T *localP)
{
  /* SystemInitialize for Enabled SubSystem: '<S10>/Subsystem' */
  PID_MoreJoints1__Subsystem_Init(rty_qd, rty_e, &localDW->Subsystem,
    &localP->Subsystem);

  /* End of SystemInitialize for SubSystem: '<S10>/Subsystem' */
}

/*
 * Start for atomic system:
 *    '<S1>/关节一正弦信号发生器'
 *    '<S1>/关节三正弦信号发生器'
 *    '<S1>/关节二正弦信号发生器'
 *    '<S1>/关节五正弦信号发生器'
 *    '<S1>/关节六正弦信号发生器'
 *    '<S1>/关节四正弦信号发生器'
 */
void SineSignal_Start(DW_SineSignal_T *localDW, P_SineSignal_T *localP)
{
  /* Start for Enabled SubSystem: '<S10>/Subsystem' */
  PID_MoreJoints1_Subsystem_Start(&localDW->Subsystem, &localP->Subsystem);

  /* End of Start for SubSystem: '<S10>/Subsystem' */
}

/*
 * Output and update for atomic system:
 *    '<S1>/关节一正弦信号发生器'
 *    '<S1>/关节三正弦信号发生器'
 *    '<S1>/关节二正弦信号发生器'
 *    '<S1>/关节五正弦信号发生器'
 *    '<S1>/关节六正弦信号发生器'
 *    '<S1>/关节四正弦信号发生器'
 */
void SineSignal(real_T rtu_En, real_T rtu_q, real_T *rty_qd, real_T *rty_e,
                DW_SineSignal_T *localDW, P_SineSignal_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S10>/Subsystem' */

  /* SignalConversion: '<S10>/HiddenBuf_InsertedFor_Subsystem_at_inport_2' incorporates:
   *  Constant: '<S10>/Constant3'
   *  Gain: '<S10>/Gain14'
   */
  PID_MoreJoints1_6_Subsystem(rtu_En, rtu_q, localP->Gain14_Gain *
    localP->Constant3_Value, rty_qd, rty_e, &localDW->Subsystem,
    &localP->Subsystem, localP->Subsystem_Freq);

  /* End of Outputs for SubSystem: '<S10>/Subsystem' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
