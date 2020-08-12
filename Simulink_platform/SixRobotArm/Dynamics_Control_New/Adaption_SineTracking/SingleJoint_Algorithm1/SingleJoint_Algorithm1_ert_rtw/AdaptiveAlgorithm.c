/*
 * File: AdaptiveAlgorithm.c
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

#include "AdaptiveAlgorithm.h"

/* Include model header file for global data */
#include "SingleJoint_Algorithm1.h"
#include "SingleJoint_Algorithm1_private.h"

/*
 * System initialize for atomic system:
 *    '<S10>/Subsystem1'
 *    '<S10>/Subsystem2'
 *    '<S10>/Subsystem3'
 */
void SingleJoint_Alg_Subsystem1_Init(DW_Subsystem1_SingleJoint_Alg_T *localDW,
  P_Subsystem1_SingleJoint_Algo_T *localP)
{
  /* InitializeConditions for Delay: '<S12>/Delay2' */
  localDW->Delay2_DSTATE = localP->Delay2_InitialCondition;

  /* InitializeConditions for Delay: '<S12>/Delay3' */
  localDW->Delay3_DSTATE = localP->Delay3_InitialCondition;
}

/*
 * Output and update for atomic system:
 *    '<S10>/Subsystem1'
 *    '<S10>/Subsystem2'
 *    '<S10>/Subsystem3'
 */
real_T SingleJoint_Algorith_Subsystem1(real_T rtu_In1,
  DW_Subsystem1_SingleJoint_Alg_T *localDW, P_Subsystem1_SingleJoint_Algo_T
  *localP)
{
  real_T rty_Out1_0;

  /* Sum: '<S12>/Add1' incorporates:
   *  Constant: '<S12>/Kc2'
   *  Delay: '<S12>/Delay2'
   *  Delay: '<S12>/Delay3'
   *  Product: '<S12>/Product1'
   */
  localDW->Delay2_DSTATE = (localDW->Delay2_DSTATE + rtu_In1) +
    localDW->Delay3_DSTATE * localP->Kc2_Value;

  /* Saturate: '<S12>/Saturation2' incorporates:
   *  Delay: '<S12>/Delay2'
   */
  if (localDW->Delay2_DSTATE > localP->Saturation2_UpperSat) {
    rty_Out1_0 = localP->Saturation2_UpperSat;
  } else if (localDW->Delay2_DSTATE < localP->Saturation2_LowerSat) {
    rty_Out1_0 = localP->Saturation2_LowerSat;
  } else {
    rty_Out1_0 = localDW->Delay2_DSTATE;
  }

  /* Sum: '<S12>/Add5' incorporates:
   *  Delay: '<S12>/Delay2'
   *  Delay: '<S12>/Delay3'
   *  Saturate: '<S12>/Saturation2'
   */
  localDW->Delay3_DSTATE = rty_Out1_0 - localDW->Delay2_DSTATE;
  return rty_Out1_0;
}

/* System initialize for atomic system: '<S6>/Controller' */
void SingleJoint_Alg_Controller_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S10>/Subsystem3' */
  SingleJoint_Alg_Subsystem1_Init(&SingleJoint_Algorithm1_DW.Subsystem3,
    &SingleJoint_Algorithm1_P.Subsystem3);

  /* End of SystemInitialize for SubSystem: '<S10>/Subsystem3' */

  /* SystemInitialize for Atomic SubSystem: '<S10>/Subsystem1' */
  SingleJoint_Alg_Subsystem1_Init(&SingleJoint_Algorithm1_DW.Subsystem1,
    &SingleJoint_Algorithm1_P.Subsystem1);

  /* End of SystemInitialize for SubSystem: '<S10>/Subsystem1' */

  /* SystemInitialize for Atomic SubSystem: '<S10>/Subsystem2' */
  SingleJoint_Alg_Subsystem1_Init(&SingleJoint_Algorithm1_DW.Subsystem2,
    &SingleJoint_Algorithm1_P.Subsystem2);

  /* End of SystemInitialize for SubSystem: '<S10>/Subsystem2' */
}

/* Output and update for atomic system: '<S6>/Controller' */
void SingleJoint_Algorith_Controller(void)
{
  real_T rtb_Saturation2;
  real_T rtb_Saturation2_b;
  real_T rtb_Fcn;
  real_T rtb_Saturation2_n;

  /* Outputs for Atomic SubSystem: '<S10>/Subsystem3' */

  /* Product: '<S10>/Product' incorporates:
   *  Gain: '<S10>/lambda8'
   *  Product: '<S10>/Product9'
   */
  rtb_Saturation2 = SingleJoint_Algorith_Subsystem1
    (SingleJoint_Algorithm1_B.Add3 * SingleJoint_Algorithm1_B.gain1 *
     SingleJoint_Algorithm1_P.lambda8_Gain * SingleJoint_Algorithm1_B.Sum4,
     &SingleJoint_Algorithm1_DW.Subsystem3, &SingleJoint_Algorithm1_P.Subsystem3);

  /* End of Outputs for SubSystem: '<S10>/Subsystem3' */

  /* Outputs for Atomic SubSystem: '<S10>/Subsystem1' */

  /* Product: '<S10>/Product1' incorporates:
   *  Gain: '<S10>/lambda9'
   *  Product: '<S10>/Product7'
   */
  rtb_Saturation2_b = SingleJoint_Algorith_Subsystem1
    (SingleJoint_Algorithm1_B.Sum2 * SingleJoint_Algorithm1_B.gain1 *
     SingleJoint_Algorithm1_P.lambda9_Gain * SingleJoint_Algorithm1_B.Sum4,
     &SingleJoint_Algorithm1_DW.Subsystem1, &SingleJoint_Algorithm1_P.Subsystem1);

  /* End of Outputs for SubSystem: '<S10>/Subsystem1' */

  /* Fcn: '<S10>/Fcn' */
  rtb_Fcn = cos(SingleJoint_Algorithm1_B.u);

  /* Outputs for Atomic SubSystem: '<S10>/Subsystem2' */

  /* Product: '<S10>/Product2' incorporates:
   *  Gain: '<S10>/lambda10'
   *  Product: '<S10>/Product8'
   */
  rtb_Saturation2_n = SingleJoint_Algorith_Subsystem1(rtb_Fcn *
    SingleJoint_Algorithm1_B.gain1 * SingleJoint_Algorithm1_P.lambda10_Gain *
    SingleJoint_Algorithm1_B.Sum4, &SingleJoint_Algorithm1_DW.Subsystem2,
    &SingleJoint_Algorithm1_P.Subsystem2);

  /* End of Outputs for SubSystem: '<S10>/Subsystem2' */

  /* Sum: '<S10>/Add3' incorporates:
   *  Product: '<S10>/Product3'
   *  Product: '<S10>/Product4'
   *  Product: '<S10>/Product5'
   *  Product: '<S10>/Product6'
   */
  SingleJoint_Algorithm1_B.Add3 = ((SingleJoint_Algorithm1_B.Add3 *
    rtb_Saturation2 + SingleJoint_Algorithm1_B.Sum2 * rtb_Saturation2_b) +
    rtb_Fcn * rtb_Saturation2_n) - SingleJoint_Algorithm1_B.Sum4 *
    SingleJoint_Algorithm1_B.DataStoreRead4;
}

/* System initialize for enable system: '<S11>/Subsystem' */
void SingleJoint_Algo_Subsystem_Init(void)
{
  /* InitializeConditions for S-Function (sdspsine2): '<S17>/ref_signal' */
  /* This code only executes when block is re-enabled in an
     enabled subsystem when the enabled subsystem states on
     re-enabling are set to 'Reset' */
  /* Reset to time zero on re-enable */
  /* Trigonometric mode: compute accumulated
     normalized trig fcn argument for each channel */
  /* Keep normalized value in range [0 2*pi) */
  SingleJoint_Algorithm1_DW.ref_signal_AccFreqNorm = fmod
    (SingleJoint_Algorithm1_P.ref_signal_Phase, 6.2831853071795862);
  if (SingleJoint_Algorithm1_DW.ref_signal_AccFreqNorm < 0.0) {
    SingleJoint_Algorithm1_DW.ref_signal_AccFreqNorm += 6.2831853071795862;
  }

  /* End of InitializeConditions for S-Function (sdspsine2): '<S17>/ref_signal' */

  /* SystemInitialize for Outport: '<S17>/e1' */
  SingleJoint_Algorithm1_B.Sum5 = SingleJoint_Algorithm1_P.e1_Y0;

  /* SystemInitialize for Outport: '<S17>/理想位置' */
  SingleJoint_Algorithm1_B.Product = SingleJoint_Algorithm1_P._Y0;
}

/* Start for enable system: '<S11>/Subsystem' */
void SingleJoint_Alg_Subsystem_Start(void)
{
  /* Start for S-Function (sdspsine2): '<S17>/ref_signal' */
  /* Trigonometric mode: compute accumulated
     normalized trig fcn argument for each channel */
  /* Keep normalized value in range [0 2*pi) */
  SingleJoint_Algorithm1_DW.ref_signal_AccFreqNorm = fmod
    (SingleJoint_Algorithm1_P.ref_signal_Phase, 6.2831853071795862);
  if (SingleJoint_Algorithm1_DW.ref_signal_AccFreqNorm < 0.0) {
    SingleJoint_Algorithm1_DW.ref_signal_AccFreqNorm += 6.2831853071795862;
  }

  /* End of Start for S-Function (sdspsine2): '<S17>/ref_signal' */
}

/* Output and update for enable system: '<S11>/Subsystem' */
void SingleJoint_Algorithm_Subsystem(void)
{
  real_T rtb_ref_signal;

  /* Outputs for Enabled SubSystem: '<S11>/Subsystem' incorporates:
   *  EnablePort: '<S17>/Enable'
   */
  if (SingleJoint_Algorithm1_B.DataStoreRead2 > 0.0) {
    /* S-Function (sdspsine2): '<S17>/ref_signal' */
    rtb_ref_signal = SingleJoint_Algorithm1_P.ref_signal_Amplitude * sin
      (SingleJoint_Algorithm1_DW.ref_signal_AccFreqNorm);

    /* Outputs for Atomic SubSystem: '<S1>/AdapitionController' */
    /* Update accumulated normalized freq value
       for next sample.  Keep in range [0 2*pi) */
    SingleJoint_Algorithm1_DW.ref_signal_AccFreqNorm +=
      SingleJoint_Algorithm1_P.AdapitionController_Freq * 0.0062831853071795866;

    /* End of Outputs for SubSystem: '<S1>/AdapitionController' */
    if (SingleJoint_Algorithm1_DW.ref_signal_AccFreqNorm >= 6.2831853071795862)
    {
      SingleJoint_Algorithm1_DW.ref_signal_AccFreqNorm -= 6.2831853071795862;
    } else {
      if (SingleJoint_Algorithm1_DW.ref_signal_AccFreqNorm < 0.0) {
        SingleJoint_Algorithm1_DW.ref_signal_AccFreqNorm += 6.2831853071795862;
      }
    }

    /* End of S-Function (sdspsine2): '<S17>/ref_signal' */

    /* Product: '<S17>/Product' */
    SingleJoint_Algorithm1_B.Product = rtb_ref_signal *
      SingleJoint_Algorithm1_B.Sum2;

    /* Sum: '<S17>/Sum5' */
    SingleJoint_Algorithm1_B.Sum5 = SingleJoint_Algorithm1_B.u -
      SingleJoint_Algorithm1_B.Product;
  }

  /* End of Outputs for SubSystem: '<S11>/Subsystem' */
}

/* System initialize for atomic system: '<S6>/Error' */
void SingleJoint_Algorith_Error_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S15>/UD'
   *
   * Block description for '<S15>/UD':
   *
   *  Store in Global RAM
   */
  SingleJoint_Algorithm1_DW.UD_DSTATE =
    SingleJoint_Algorithm1_P.DiscreteDerivative_ICPrevScaled;

  /* InitializeConditions for UnitDelay: '<S16>/UD'
   *
   * Block description for '<S16>/UD':
   *
   *  Store in Global RAM
   */
  SingleJoint_Algorithm1_DW.UD_DSTATE_j =
    SingleJoint_Algorithm1_P.DiscreteDerivative2_ICPrevScale;

  /* SystemInitialize for Enabled SubSystem: '<S11>/Subsystem' */
  SingleJoint_Algo_Subsystem_Init();

  /* End of SystemInitialize for SubSystem: '<S11>/Subsystem' */
}

/* Start for atomic system: '<S6>/Error' */
void SingleJoint_Algorit_Error_Start(void)
{
  /* Start for Enabled SubSystem: '<S11>/Subsystem' */
  SingleJoint_Alg_Subsystem_Start();

  /* End of Start for SubSystem: '<S11>/Subsystem' */
}

/* Output and update for atomic system: '<S6>/Error' */
void SingleJoint_Algorithm1_Error(void)
{
  real_T rtb_TSamp;
  real_T rtb_Diff_b;
  real_T rtb_TSamp_i;
  real_T rtb_Sum1;
  real_T rtb_Product5_g;

  /* Outputs for Enabled SubSystem: '<S11>/Subsystem' */
  SingleJoint_Algorithm_Subsystem();

  /* End of Outputs for SubSystem: '<S11>/Subsystem' */

  /* SampleTimeMath: '<S15>/TSamp'
   *
   * About '<S15>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = SingleJoint_Algorithm1_B.Product *
    SingleJoint_Algorithm1_P.TSamp_WtEt;

  /* Sum: '<S15>/Diff' incorporates:
   *  UnitDelay: '<S15>/UD'
   *
   * Block description for '<S15>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S15>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Diff_b = rtb_TSamp - SingleJoint_Algorithm1_DW.UD_DSTATE;

  /* SampleTimeMath: '<S16>/TSamp'
   *
   * About '<S16>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_i = rtb_Diff_b * SingleJoint_Algorithm1_P.TSamp_WtEt_c;

  /* Sum: '<S11>/Sum1' */
  rtb_Sum1 = SingleJoint_Algorithm1_B.Add3 - rtb_Diff_b;

  /* Sum: '<S11>/Sum3' incorporates:
   *  Product: '<S11>/Product1'
   *  Sum: '<S16>/Diff'
   *  UnitDelay: '<S16>/UD'
   *
   * Block description for '<S16>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S16>/UD':
   *
   *  Store in Global RAM
   */
  SingleJoint_Algorithm1_B.Add3 = (rtb_TSamp_i -
    SingleJoint_Algorithm1_DW.UD_DSTATE_j) - SingleJoint_Algorithm1_B.Sum4 *
    rtb_Sum1;

  /* Product: '<S11>/Product5' */
  rtb_Product5_g = SingleJoint_Algorithm1_B.Sum5 * SingleJoint_Algorithm1_B.Sum4;

  /* Sum: '<S11>/Sum4' */
  SingleJoint_Algorithm1_B.Sum4 = rtb_Product5_g + rtb_Sum1;

  /* Sum: '<S11>/Sum2' */
  SingleJoint_Algorithm1_B.Sum2 = rtb_Diff_b - rtb_Product5_g;

  /* Update for UnitDelay: '<S15>/UD'
   *
   * Block description for '<S15>/UD':
   *
   *  Store in Global RAM
   */
  SingleJoint_Algorithm1_DW.UD_DSTATE = rtb_TSamp;

  /* Update for UnitDelay: '<S16>/UD'
   *
   * Block description for '<S16>/UD':
   *
   *  Store in Global RAM
   */
  SingleJoint_Algorithm1_DW.UD_DSTATE_j = rtb_TSamp_i;
}

/* System initialize for atomic system: '<S1>/AdapitionController' */
void AdaptiveAlgorithm_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S6>/Error' */
  SingleJoint_Algorith_Error_Init();

  /* End of SystemInitialize for SubSystem: '<S6>/Error' */

  /* SystemInitialize for Atomic SubSystem: '<S6>/Controller' */
  SingleJoint_Alg_Controller_Init();

  /* End of SystemInitialize for SubSystem: '<S6>/Controller' */
}

/* Start for atomic system: '<S1>/AdapitionController' */
void AdaptiveAlgorithm_Start(void)
{
  /* Start for Atomic SubSystem: '<S6>/Error' */
  SingleJoint_Algorit_Error_Start();

  /* End of Start for SubSystem: '<S6>/Error' */
}

/* Output and update for atomic system: '<S1>/AdapitionController' */
void AdaptiveAlgorithm(void)
{
  /* Saturate: '<S6>/限幅' */
  if (SingleJoint_Algorithm1_B.Sum2 > SingleJoint_Algorithm1_P._UpperSat) {
    SingleJoint_Algorithm1_B.Sum2 = SingleJoint_Algorithm1_P._UpperSat;
  } else {
    if (SingleJoint_Algorithm1_B.Sum2 < SingleJoint_Algorithm1_P._LowerSat) {
      SingleJoint_Algorithm1_B.Sum2 = SingleJoint_Algorithm1_P._LowerSat;
    }
  }

  /* End of Saturate: '<S6>/限幅' */

  /* Outputs for Atomic SubSystem: '<S6>/Error' */
  SingleJoint_Algorithm1_Error();

  /* End of Outputs for SubSystem: '<S6>/Error' */

  /* Outputs for Atomic SubSystem: '<S6>/Controller' */
  SingleJoint_Algorith_Controller();

  /* End of Outputs for SubSystem: '<S6>/Controller' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
