/*
 * File: AdapitionController.c
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

#include "AdapitionController.h"

/* Include model header file for global data */
#include "SingleJoint_Algorithm2.h"
#include "SingleJoint_Algorithm2_private.h"

/* System initialize for atomic system: '<S10>/SolveTau' */
void SingleJoint_Algor_SolveTau_Init(void)
{
  int16_T i;

  /* InitializeConditions for DiscreteIntegrator: '<S12>/Discrete-Time Integrator2' */
  for (i = 0; i < 7; i++) {
    SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator2_DSTATE[i] =
      SingleJoint_Algorithm2_P.DiscreteTimeIntegrator2_IC;
  }

  /* End of InitializeConditions for DiscreteIntegrator: '<S12>/Discrete-Time Integrator2' */
}

/* Output and update for atomic system: '<S10>/SolveTau' */
void SingleJoint_Algorithm2_SolveTau(void)
{
  real_T rtb_u;
  real_T rtb_TmpSignalConversionAtMathFu[7];
  real_T rtb_TmpSignalConversionAtMath_0;
  int16_T i;

  /* SignalConversion: '<S12>/TmpSignal ConversionAtMath Function2Inport1' */
  rtb_TmpSignalConversionAtMathFu[0] = SingleJoint_Algorithm2_B.Product_c;
  rtb_TmpSignalConversionAtMathFu[1] = SingleJoint_Algorithm2_B.Product3[0];
  rtb_TmpSignalConversionAtMathFu[4] = SingleJoint_Algorithm2_B.Add_b[0];
  rtb_TmpSignalConversionAtMathFu[2] = SingleJoint_Algorithm2_B.Product3[1];
  rtb_TmpSignalConversionAtMathFu[5] = SingleJoint_Algorithm2_B.Add_b[1];
  rtb_TmpSignalConversionAtMathFu[3] = SingleJoint_Algorithm2_B.Product3[2];
  rtb_TmpSignalConversionAtMathFu[6] = SingleJoint_Algorithm2_B.Add_b[2];

  /* Gain: '<S12>/6' */
  rtb_u = SingleJoint_Algorithm2_P.u_Gain * SingleJoint_Algorithm2_B.gain1;

  /* Product: '<S12>/Product7' incorporates:
   *  DiscreteIntegrator: '<S12>/Discrete-Time Integrator2'
   */
  rtb_TmpSignalConversionAtMath_0 = 0.0;
  for (i = 0; i < 7; i++) {
    rtb_TmpSignalConversionAtMath_0 += rtb_TmpSignalConversionAtMathFu[i] *
      SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator2_DSTATE[i];

    /* Update for DiscreteIntegrator: '<S12>/Discrete-Time Integrator2' incorporates:
     *  Product: '<S12>/Product6'
     */
    SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator2_DSTATE[i] +=
      rtb_TmpSignalConversionAtMathFu[i] * rtb_u * SingleJoint_Algorithm2_B.Sum4
      * SingleJoint_Algorithm2_P.DiscreteTimeIntegrator2_gainval;
    if (SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator2_DSTATE[i] >=
        SingleJoint_Algorithm2_P.DiscreteTimeIntegrator2_UpperSa[i]) {
      SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator2_DSTATE[i] =
        SingleJoint_Algorithm2_P.DiscreteTimeIntegrator2_UpperSa[i];
    } else {
      if (SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator2_DSTATE[i] <=
          SingleJoint_Algorithm2_P.DiscreteTimeIntegrator2_LowerSa[i]) {
        SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator2_DSTATE[i] =
          SingleJoint_Algorithm2_P.DiscreteTimeIntegrator2_LowerSa[i];
      }
    }

    /* End of Update for DiscreteIntegrator: '<S12>/Discrete-Time Integrator2' */
  }

  /* Sum: '<S12>/Add' incorporates:
   *  Product: '<S12>/Product5'
   *  Product: '<S12>/Product7'
   *  UnitDelay: '<S10>/Unit Delay'
   */
  SingleJoint_Algorithm2_DW.UnitDelay_DSTATE = (SingleJoint_Algorithm2_B.u +
    rtb_TmpSignalConversionAtMath_0) - SingleJoint_Algorithm2_B.Sum4 *
    SingleJoint_Algorithm2_B.DataStoreRead4;
}

/* Output and update for atomic system: '<S10>/adaptive' */
void SingleJoint_Algorithm2_adaptive(void)
{
  real_T rtb_TmpSignalConversionAtProd_i[3];
  real_T Product3_tmp[9];
  real_T tmp[3];
  real_T Product3_tmp_0[9];
  int16_T i;
  int16_T Product3_tmp_1;
  int16_T Product3_tmp_2;

  /* SignalConversion: '<S13>/TmpSignal ConversionAtProduct2Inport1' incorporates:
   *  Constant: '<S13>/Constant10'
   *  Constant: '<S13>/Constant11'
   *  Constant: '<S13>/Constant9'
   */
  tmp[0] = SingleJoint_Algorithm2_P.Constant9_Value;
  tmp[1] = SingleJoint_Algorithm2_P.Constant10_Value;
  tmp[2] = SingleJoint_Algorithm2_P.Constant11_Value;
  for (i = 0; i < 3; i++) {
    /* Product: '<S13>/Product2' incorporates:
     *  Constant: '<S13>/Constant4'
     *  Constant: '<S13>/Constant5'
     *  Product: '<S13>/Product4'
     *  SignalConversion: '<S13>/TmpSignal ConversionAtProduct2Inport2'
     */
    Product3_tmp[i] = tmp[i] * SingleJoint_Algorithm2_B.Sum4;
    Product3_tmp[i + 3] = tmp[i] * SingleJoint_Algorithm2_P.Constant4_Value;
    Product3_tmp[i + 6] = tmp[i] * SingleJoint_Algorithm2_P.Constant5_Value;
  }

  /* Sum: '<S13>/Add1' incorporates:
   *  Product: '<S13>/Product2'
   *  UnitDelay: '<S10>/Unit Delay2'
   */
  for (i = 0; i < 9; i++) {
    Product3_tmp_0[i] = Product3_tmp[i] +
      SingleJoint_Algorithm2_DW.UnitDelay2_DSTATE[i];
  }

  /* End of Sum: '<S13>/Add1' */

  /* SignalConversion: '<S13>/TmpSignal ConversionAtProduct1Inport1' incorporates:
   *  Constant: '<S13>/Constant6'
   *  Constant: '<S13>/Constant7'
   *  Constant: '<S13>/Constant8'
   */
  rtb_TmpSignalConversionAtProd_i[0] = SingleJoint_Algorithm2_P.Constant8_Value;
  rtb_TmpSignalConversionAtProd_i[1] = SingleJoint_Algorithm2_P.Constant6_Value;
  rtb_TmpSignalConversionAtProd_i[2] = SingleJoint_Algorithm2_P.Constant7_Value;

  /* Sum: '<S13>/Add' incorporates:
   *  Fcn: '<S13>/Fcn'
   */
  tmp[0] = SingleJoint_Algorithm2_B.Sum3;
  tmp[1] = SingleJoint_Algorithm2_B.Product_c;
  tmp[2] = cos(SingleJoint_Algorithm2_B.u);

  /* Product: '<S13>/Product5' */
  SingleJoint_Algorithm2_B.u = 0.0;
  for (i = 0; i < 3; i++) {
    /* Product: '<S13>/Product3' incorporates:
     *  Constant: '<S13>/Constant1'
     *  Constant: '<S13>/Constant2'
     *  Constant: '<S13>/Constant3'
     *  Product: '<S13>/Product1'
     *  Product: '<S13>/Product4'
     */
    SingleJoint_Algorithm2_B.Product3[i] = 0.0;
    SingleJoint_Algorithm2_B.Product3[i] += Product3_tmp_0[3 * i] *
      SingleJoint_Algorithm2_P.Constant3_Value;
    Product3_tmp_1 = 3 * i + 1;
    SingleJoint_Algorithm2_B.Product3[i] += Product3_tmp_0[Product3_tmp_1] *
      SingleJoint_Algorithm2_P.Constant1_Value;
    Product3_tmp_2 = 3 * i + 2;
    SingleJoint_Algorithm2_B.Product3[i] += Product3_tmp_0[Product3_tmp_2] *
      SingleJoint_Algorithm2_P.Constant2_Value;

    /* Sum: '<S13>/Add' incorporates:
     *  Constant: '<S13>/Constant6'
     *  Constant: '<S13>/Constant7'
     *  Constant: '<S13>/Constant8'
     *  Product: '<S13>/Product1'
     *  Product: '<S13>/Product4'
     *  UnitDelay: '<S10>/Unit Delay2'
     */
    SingleJoint_Algorithm2_B.Add_b[i] =
      ((SingleJoint_Algorithm2_DW.UnitDelay2_DSTATE[Product3_tmp_2] *
        SingleJoint_Algorithm2_P.Constant7_Value +
        (SingleJoint_Algorithm2_DW.UnitDelay2_DSTATE[Product3_tmp_1] *
         SingleJoint_Algorithm2_P.Constant6_Value +
         SingleJoint_Algorithm2_DW.UnitDelay2_DSTATE[3 * i] *
         SingleJoint_Algorithm2_P.Constant8_Value)) -
       (Product3_tmp[Product3_tmp_2] * SingleJoint_Algorithm2_P.Constant7_Value
        + (Product3_tmp[Product3_tmp_1] *
           SingleJoint_Algorithm2_P.Constant6_Value + Product3_tmp[3 * i] *
           SingleJoint_Algorithm2_P.Constant8_Value))) + tmp[i];

    /* Product: '<S13>/Product5' incorporates:
     *  UnitDelay: '<S10>/Unit Delay1'
     */
    SingleJoint_Algorithm2_B.u += rtb_TmpSignalConversionAtProd_i[i] *
      SingleJoint_Algorithm2_DW.UnitDelay1_DSTATE[i];
  }

  /* Product: '<S13>/Product' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Constant: '<S13>/Constant2'
   *  Constant: '<S13>/Constant3'
   *  UnitDelay: '<S10>/Unit Delay1'
   */
  SingleJoint_Algorithm2_B.Product_c = (SingleJoint_Algorithm2_P.Constant3_Value
    * SingleJoint_Algorithm2_DW.UnitDelay1_DSTATE[0] +
    SingleJoint_Algorithm2_P.Constant1_Value *
    SingleJoint_Algorithm2_DW.UnitDelay1_DSTATE[1]) +
    SingleJoint_Algorithm2_P.Constant2_Value *
    SingleJoint_Algorithm2_DW.UnitDelay1_DSTATE[2];
}

/* Output and update for atomic system: '<S10>/im1' */
void SingleJoint_Algorithm2_im1(real_T rtu_tau, const real_T rtu_eta1[3])
{
  real_T tmp[9];
  real_T tmp_0[3];
  int16_T i;

  /* Product: '<S14>/Product' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Constant: '<S14>/Constant2'
   *  Constant: '<S14>/Constant3'
   *  Constant: '<S14>/Constant4'
   *  Constant: '<S14>/Constant5'
   *  Constant: '<S14>/Constant6'
   *  Constant: '<S14>/Constant7'
   *  Constant: '<S14>/Constant8'
   */
  tmp[0] = SingleJoint_Algorithm2_P.Constant_Value;
  tmp[3] = SingleJoint_Algorithm2_P.Constant3_Value_j;
  tmp[6] = SingleJoint_Algorithm2_P.Constant6_Value_g;
  tmp[1] = SingleJoint_Algorithm2_P.Constant1_Value_h;
  tmp[4] = SingleJoint_Algorithm2_P.Constant4_Value_h;
  tmp[7] = SingleJoint_Algorithm2_P.Constant7_Value_l;
  tmp[2] = SingleJoint_Algorithm2_P.Constant2_Value_c;
  tmp[5] = SingleJoint_Algorithm2_P.Constant5_Value_k;
  tmp[8] = SingleJoint_Algorithm2_P.Constant8_Value_h;

  /* Product: '<S14>/Product1' incorporates:
   *  Constant: '<S14>/Constant10'
   *  Constant: '<S14>/Constant11'
   *  Constant: '<S14>/Constant9'
   */
  tmp_0[0] = SingleJoint_Algorithm2_P.Constant9_Value_i;
  tmp_0[1] = SingleJoint_Algorithm2_P.Constant10_Value_o;
  tmp_0[2] = SingleJoint_Algorithm2_P.Constant11_Value_j;

  /* Sum: '<S14>/Add' incorporates:
   *  Product: '<S14>/Product'
   *  Product: '<S14>/Product1'
   */
  for (i = 0; i < 3; i++) {
    SingleJoint_Algorithm2_B.Add_l[i] = ((tmp[i + 3] * rtu_eta1[1] + tmp[i] *
      rtu_eta1[0]) + tmp[i + 6] * rtu_eta1[2]) + tmp_0[i] * rtu_tau;
  }

  /* End of Sum: '<S14>/Add' */
}

/* Output and update for atomic system: '<S10>/im2' */
void SingleJoint_Algorithm2_im2(void)
{
  real_T rtb_TmpSignalConversionAtProd_l[9];
  real_T rtb_TmpSignalConversionAtProd_n[3];
  real_T tmp[3];
  real_T rtb_TmpSignalConversionAtPr_ojm[9];
  real_T rtb_TmpSignalConversionAtPro_ig[9];
  real_T tmp_0[3];
  real_T rtb_TmpSignalConversionAtPro__0[9];
  int16_T i;
  int16_T i_0;
  int16_T rtb_TmpSignalConversionAtPr_o_0;
  int16_T rtb_TmpSignalConversionAtPr_o_1;

  /* SignalConversion: '<S15>/TmpSignal ConversionAtProductInport1' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S15>/Constant1'
   *  Constant: '<S15>/Constant2'
   *  Constant: '<S15>/Constant3'
   *  Constant: '<S15>/Constant4'
   *  Constant: '<S15>/Constant5'
   *  Constant: '<S15>/Constant6'
   *  Constant: '<S15>/Constant7'
   *  Constant: '<S15>/Constant8'
   */
  rtb_TmpSignalConversionAtProd_l[0] = SingleJoint_Algorithm2_P.Constant_Value_h;
  rtb_TmpSignalConversionAtProd_l[1] =
    SingleJoint_Algorithm2_P.Constant1_Value_l;
  rtb_TmpSignalConversionAtProd_l[2] =
    SingleJoint_Algorithm2_P.Constant2_Value_o;
  rtb_TmpSignalConversionAtProd_l[3] =
    SingleJoint_Algorithm2_P.Constant3_Value_o;
  rtb_TmpSignalConversionAtProd_l[4] =
    SingleJoint_Algorithm2_P.Constant4_Value_i;
  rtb_TmpSignalConversionAtProd_l[5] =
    SingleJoint_Algorithm2_P.Constant5_Value_g;
  rtb_TmpSignalConversionAtProd_l[6] =
    SingleJoint_Algorithm2_P.Constant6_Value_i;
  rtb_TmpSignalConversionAtProd_l[7] =
    SingleJoint_Algorithm2_P.Constant7_Value_e;
  rtb_TmpSignalConversionAtProd_l[8] =
    SingleJoint_Algorithm2_P.Constant8_Value_p;

  /* SignalConversion: '<S15>/TmpSignal ConversionAtProduct1Inport1' incorporates:
   *  Constant: '<S15>/Constant10'
   *  Constant: '<S15>/Constant11'
   *  Constant: '<S15>/Constant9'
   */
  rtb_TmpSignalConversionAtProd_n[0] =
    SingleJoint_Algorithm2_P.Constant9_Value_g;
  rtb_TmpSignalConversionAtProd_n[1] =
    SingleJoint_Algorithm2_P.Constant10_Value_a;
  rtb_TmpSignalConversionAtProd_n[2] =
    SingleJoint_Algorithm2_P.Constant11_Value_p;

  /* Product: '<S15>/Product1' incorporates:
   *  Fcn: '<S15>/Fcn'
   *  SignalConversion: '<S15>/TmpSignal ConversionAtProduct1Inport2'
   */
  tmp[0] = SingleJoint_Algorithm2_B.Sum3;
  tmp[1] = SingleJoint_Algorithm2_B.Product_c;
  tmp[2] = cos(SingleJoint_Algorithm2_B.u);

  /* Product: '<S15>/Product2' incorporates:
   *  Constant: '<S15>/Constant12'
   *  Constant: '<S15>/Constant13'
   *  SignalConversion: '<S15>/TmpSignal ConversionAtProduct2Inport3'
   */
  tmp_0[0] = SingleJoint_Algorithm2_B.Sum4;
  tmp_0[1] = SingleJoint_Algorithm2_P.Constant12_Value;
  tmp_0[2] = SingleJoint_Algorithm2_P.Constant13_Value;
  for (i = 0; i < 3; i++) {
    for (i_0 = 0; i_0 < 3; i_0++) {
      /* Product: '<S15>/Product' incorporates:
       *  Product: '<S15>/Product1'
       *  Product: '<S15>/Product2'
       *  UnitDelay: '<S10>/Unit Delay2'
       */
      rtb_TmpSignalConversionAtPr_o_0 = i + 3 * i_0;
      rtb_TmpSignalConversionAtPr_ojm[rtb_TmpSignalConversionAtPr_o_0] = 0.0;
      rtb_TmpSignalConversionAtPr_o_1 = 3 * i_0 + i;
      rtb_TmpSignalConversionAtPr_ojm[rtb_TmpSignalConversionAtPr_o_0] =
        rtb_TmpSignalConversionAtPr_ojm[rtb_TmpSignalConversionAtPr_o_1] +
        SingleJoint_Algorithm2_DW.UnitDelay2_DSTATE[3 * i_0] *
        rtb_TmpSignalConversionAtProd_l[i];
      rtb_TmpSignalConversionAtPr_ojm[rtb_TmpSignalConversionAtPr_o_0] =
        SingleJoint_Algorithm2_DW.UnitDelay2_DSTATE[3 * i_0 + 1] *
        rtb_TmpSignalConversionAtProd_l[i + 3] +
        rtb_TmpSignalConversionAtPr_ojm[rtb_TmpSignalConversionAtPr_o_1];
      rtb_TmpSignalConversionAtPr_ojm[rtb_TmpSignalConversionAtPr_o_0] =
        SingleJoint_Algorithm2_DW.UnitDelay2_DSTATE[3 * i_0 + 2] *
        rtb_TmpSignalConversionAtProd_l[i + 6] +
        rtb_TmpSignalConversionAtPr_ojm[rtb_TmpSignalConversionAtPr_o_1];

      /* Product: '<S15>/Product1' */
      rtb_TmpSignalConversionAtPro_ig[rtb_TmpSignalConversionAtPr_o_0] =
        rtb_TmpSignalConversionAtProd_n[i] * tmp[i_0];

      /* Product: '<S15>/Product2' incorporates:
       *  Product: '<S15>/Product1'
       */
      rtb_TmpSignalConversionAtPro__0[rtb_TmpSignalConversionAtPr_o_0] =
        rtb_TmpSignalConversionAtProd_n[i] * tmp_0[i_0];
    }
  }

  /* Sum: '<S15>/Add' incorporates:
   *  Product: '<S15>/Product2'
   */
  for (i = 0; i < 3; i++) {
    for (i_0 = 0; i_0 < 3; i_0++) {
      rtb_TmpSignalConversionAtPr_o_0 = 3 * i + i_0;
      SingleJoint_Algorithm2_B.Add[i_0 + 3 * i] =
        ((rtb_TmpSignalConversionAtPro__0[3 * i + 1] *
          rtb_TmpSignalConversionAtProd_l[i_0 + 3] +
          rtb_TmpSignalConversionAtPro__0[3 * i] *
          rtb_TmpSignalConversionAtProd_l[i_0]) +
         rtb_TmpSignalConversionAtPro__0[3 * i + 2] *
         rtb_TmpSignalConversionAtProd_l[i_0 + 6]) +
        (rtb_TmpSignalConversionAtPr_ojm[rtb_TmpSignalConversionAtPr_o_0] +
         rtb_TmpSignalConversionAtPro_ig[rtb_TmpSignalConversionAtPr_o_0]);
    }
  }

  /* End of Sum: '<S15>/Add' */
}

/* System initialize for atomic system: '<S6>/Controller' */
void SingleJoint_Alg_Controller_Init(void)
{
  int16_T i;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay1' */
  SingleJoint_Algorithm2_DW.UnitDelay1_DSTATE[0] =
    SingleJoint_Algorithm2_P.UnitDelay1_InitialCondition;
  SingleJoint_Algorithm2_DW.UnitDelay1_DSTATE[1] =
    SingleJoint_Algorithm2_P.UnitDelay1_InitialCondition;
  SingleJoint_Algorithm2_DW.UnitDelay1_DSTATE[2] =
    SingleJoint_Algorithm2_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S10>/Unit Delay' */
  SingleJoint_Algorithm2_DW.UnitDelay_DSTATE =
    SingleJoint_Algorithm2_P.UnitDelay_InitialCondition;
  for (i = 0; i < 9; i++) {
    /* InitializeConditions for UnitDelay: '<S10>/Unit Delay2' */
    SingleJoint_Algorithm2_DW.UnitDelay2_DSTATE[i] =
      SingleJoint_Algorithm2_P.UnitDelay2_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S10>/Discrete-Time Integrator1' */
    SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator1_DSTATE[i] =
      SingleJoint_Algorithm2_P.DiscreteTimeIntegrator1_IC;
  }

  /* InitializeConditions for DiscreteIntegrator: '<S10>/Discrete-Time Integrator3' */
  SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[0] =
    SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_IC;
  SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[1] =
    SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_IC;
  SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[2] =
    SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_IC;

  /* SystemInitialize for Atomic SubSystem: '<S10>/SolveTau' */
  SingleJoint_Algor_SolveTau_Init();

  /* End of SystemInitialize for SubSystem: '<S10>/SolveTau' */
}

/* Output and update for atomic system: '<S6>/Controller' */
void SingleJoint_Algorith_Controller(void)
{
  int16_T i;

  /* Outputs for Atomic SubSystem: '<S10>/im2' */
  SingleJoint_Algorithm2_im2();

  /* End of Outputs for SubSystem: '<S10>/im2' */

  /* Outputs for Atomic SubSystem: '<S10>/adaptive' */
  SingleJoint_Algorithm2_adaptive();

  /* End of Outputs for SubSystem: '<S10>/adaptive' */

  /* Outputs for Atomic SubSystem: '<S10>/im1' */
  /* UnitDelay: '<S10>/Unit Delay' incorporates:
   *  UnitDelay: '<S10>/Unit Delay1'
   */
  SingleJoint_Algorithm2_im1(SingleJoint_Algorithm2_DW.UnitDelay_DSTATE,
    SingleJoint_Algorithm2_DW.UnitDelay1_DSTATE);

  /* End of Outputs for SubSystem: '<S10>/im1' */

  /* Outputs for Atomic SubSystem: '<S10>/SolveTau' */
  SingleJoint_Algorithm2_SolveTau();

  /* End of Outputs for SubSystem: '<S10>/SolveTau' */

  /* DiscreteIntegrator: '<S10>/Discrete-Time Integrator3' incorporates:
   *  UnitDelay: '<S10>/Unit Delay1'
   */
  SingleJoint_Algorithm2_DW.UnitDelay1_DSTATE[0] =
    SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[0];
  SingleJoint_Algorithm2_DW.UnitDelay1_DSTATE[1] =
    SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[1];
  SingleJoint_Algorithm2_DW.UnitDelay1_DSTATE[2] =
    SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[2];
  for (i = 0; i < 9; i++) {
    /* DiscreteIntegrator: '<S10>/Discrete-Time Integrator1' incorporates:
     *  UnitDelay: '<S10>/Unit Delay2'
     */
    SingleJoint_Algorithm2_DW.UnitDelay2_DSTATE[i] =
      SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator1_DSTATE[i];

    /* Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator1' */
    SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator1_DSTATE[i] +=
      SingleJoint_Algorithm2_P.DiscreteTimeIntegrator1_gainval *
      SingleJoint_Algorithm2_B.Add[i];
    if (SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator1_DSTATE[i] >=
        SingleJoint_Algorithm2_P.DiscreteTimeIntegrator1_UpperSa[i]) {
      SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator1_DSTATE[i] =
        SingleJoint_Algorithm2_P.DiscreteTimeIntegrator1_UpperSa[i];
    } else {
      if (SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator1_DSTATE[i] <=
          SingleJoint_Algorithm2_P.DiscreteTimeIntegrator1_LowerSa[i]) {
        SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator1_DSTATE[i] =
          SingleJoint_Algorithm2_P.DiscreteTimeIntegrator1_LowerSa[i];
      }
    }

    /* End of Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator1' */
  }

  /* Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator3' */
  SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[0] +=
    SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_gainval *
    SingleJoint_Algorithm2_B.Add_l[0];
  if (SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[0] >=
      SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_UpperSa[0]) {
    SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[0] =
      SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_UpperSa[0];
  } else {
    if (SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[0] <=
        SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_LowerSa[0]) {
      SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[0] =
        SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_LowerSa[0];
    }
  }

  SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[1] +=
    SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_gainval *
    SingleJoint_Algorithm2_B.Add_l[1];
  if (SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[1] >=
      SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_UpperSa[1]) {
    SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[1] =
      SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_UpperSa[1];
  } else {
    if (SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[1] <=
        SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_LowerSa[1]) {
      SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[1] =
        SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_LowerSa[1];
    }
  }

  SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[2] +=
    SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_gainval *
    SingleJoint_Algorithm2_B.Add_l[2];
  if (SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[2] >=
      SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_UpperSa[2]) {
    SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[2] =
      SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_UpperSa[2];
  } else {
    if (SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[2] <=
        SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_LowerSa[2]) {
      SingleJoint_Algorithm2_DW.DiscreteTimeIntegrator3_DSTATE[2] =
        SingleJoint_Algorithm2_P.DiscreteTimeIntegrator3_LowerSa[2];
    }
  }

  /* End of Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator3' */
}

/* System initialize for atomic system: '<S6>/Error' */
void SingleJoint_Algorith_Error_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S16>/UD'
   *
   * Block description for '<S16>/UD':
   *
   *  Store in Global RAM
   */
  SingleJoint_Algorithm2_DW.UD_DSTATE =
    SingleJoint_Algorithm2_P.DiscreteDerivative_ICPrevScaled;

  /* InitializeConditions for UnitDelay: '<S17>/UD'
   *
   * Block description for '<S17>/UD':
   *
   *  Store in Global RAM
   */
  SingleJoint_Algorithm2_DW.UD_DSTATE_g =
    SingleJoint_Algorithm2_P.DiscreteDerivative1_ICPrevScale;

  /* SystemInitialize for Enabled SubSystem: '<S11>/Subsystem' */
  /* InitializeConditions for S-Function (sdspsine2): '<S18>/ref_signal' */
  /* This code only executes when block is re-enabled in an
     enabled subsystem when the enabled subsystem states on
     re-enabling are set to 'Reset' */
  /* Reset to time zero on re-enable */
  /* Trigonometric mode: compute accumulated
     normalized trig fcn argument for each channel */
  /* Keep normalized value in range [0 2*pi) */
  SingleJoint_Algorithm2_DW.ref_signal_AccFreqNorm = fmod
    (SingleJoint_Algorithm2_P.ref_signal_Phase, 6.2831853071795862);
  if (SingleJoint_Algorithm2_DW.ref_signal_AccFreqNorm < 0.0) {
    SingleJoint_Algorithm2_DW.ref_signal_AccFreqNorm += 6.2831853071795862;
  }

  /* End of InitializeConditions for S-Function (sdspsine2): '<S18>/ref_signal' */

  /* SystemInitialize for Outport: '<S18>/e1' */
  SingleJoint_Algorithm2_B.Sum5 = SingleJoint_Algorithm2_P.e1_Y0;

  /* SystemInitialize for Outport: '<S18>/qd' */
  SingleJoint_Algorithm2_B.Product = SingleJoint_Algorithm2_P.qd_Y0;

  /* End of SystemInitialize for SubSystem: '<S11>/Subsystem' */
}

/* Start for atomic system: '<S6>/Error' */
void SingleJoint_Algorit_Error_Start(void)
{
  /* Start for Enabled SubSystem: '<S11>/Subsystem' */
  /* Start for S-Function (sdspsine2): '<S18>/ref_signal' */
  /* Trigonometric mode: compute accumulated
     normalized trig fcn argument for each channel */
  /* Keep normalized value in range [0 2*pi) */
  SingleJoint_Algorithm2_DW.ref_signal_AccFreqNorm = fmod
    (SingleJoint_Algorithm2_P.ref_signal_Phase, 6.2831853071795862);
  if (SingleJoint_Algorithm2_DW.ref_signal_AccFreqNorm < 0.0) {
    SingleJoint_Algorithm2_DW.ref_signal_AccFreqNorm += 6.2831853071795862;
  }

  /* End of Start for S-Function (sdspsine2): '<S18>/ref_signal' */
  /* End of Start for SubSystem: '<S11>/Subsystem' */
}

/* Output and update for atomic system: '<S6>/Error' */
void SingleJoint_Algorithm2_Error(void)
{
  real_T rtb_Sum1;
  real_T rtb_TSamp_o;
  real_T rtb_Uk1;

  /* Outputs for Enabled SubSystem: '<S11>/Subsystem' incorporates:
   *  EnablePort: '<S18>/Enable'
   */
  if (SingleJoint_Algorithm2_B.DataStoreRead2 > 0.0) {
    /* S-Function (sdspsine2): '<S18>/ref_signal' */
    rtb_Uk1 = SingleJoint_Algorithm2_P.ref_signal_Amplitude * sin
      (SingleJoint_Algorithm2_DW.ref_signal_AccFreqNorm);

    /* Outputs for Atomic SubSystem: '<S1>/AdapitionController' */
    /* Update accumulated normalized freq value
       for next sample.  Keep in range [0 2*pi) */
    SingleJoint_Algorithm2_DW.ref_signal_AccFreqNorm +=
      SingleJoint_Algorithm2_P.AdapitionController_Freq * 0.0062831853071795866;

    /* End of Outputs for SubSystem: '<S1>/AdapitionController' */
    if (SingleJoint_Algorithm2_DW.ref_signal_AccFreqNorm >= 6.2831853071795862)
    {
      SingleJoint_Algorithm2_DW.ref_signal_AccFreqNorm -= 6.2831853071795862;
    } else {
      if (SingleJoint_Algorithm2_DW.ref_signal_AccFreqNorm < 0.0) {
        SingleJoint_Algorithm2_DW.ref_signal_AccFreqNorm += 6.2831853071795862;
      }
    }

    /* End of S-Function (sdspsine2): '<S18>/ref_signal' */

    /* Product: '<S18>/Product' */
    SingleJoint_Algorithm2_B.Product = rtb_Uk1 * SingleJoint_Algorithm2_B.Sum3;

    /* Sum: '<S18>/Sum5' */
    SingleJoint_Algorithm2_B.Sum5 = SingleJoint_Algorithm2_B.u -
      SingleJoint_Algorithm2_B.Product;
  }

  /* End of Outputs for SubSystem: '<S11>/Subsystem' */

  /* SampleTimeMath: '<S16>/TSamp'
   *
   * About '<S16>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_Uk1 = SingleJoint_Algorithm2_B.Product *
    SingleJoint_Algorithm2_P.TSamp_WtEt;

  /* Sum: '<S16>/Diff' incorporates:
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
  rtb_Sum1 = rtb_Uk1 - SingleJoint_Algorithm2_DW.UD_DSTATE;

  /* SampleTimeMath: '<S17>/TSamp'
   *
   * About '<S17>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_o = rtb_Sum1 * SingleJoint_Algorithm2_P.TSamp_WtEt_i;

  /* Sum: '<S11>/Sum1' */
  rtb_Sum1 = SingleJoint_Algorithm2_B.Product_c - rtb_Sum1;

  /* Sum: '<S11>/Sum3' incorporates:
   *  Product: '<S11>/Product5'
   *  Sum: '<S17>/Diff'
   *  UnitDelay: '<S17>/UD'
   *
   * Block description for '<S17>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S17>/UD':
   *
   *  Store in Global RAM
   */
  SingleJoint_Algorithm2_B.Sum3 = (rtb_TSamp_o -
    SingleJoint_Algorithm2_DW.UD_DSTATE_g) - SingleJoint_Algorithm2_B.Sum4 *
    rtb_Sum1;

  /* Sum: '<S11>/Sum4' incorporates:
   *  Product: '<S11>/Product1'
   */
  SingleJoint_Algorithm2_B.Sum4 = SingleJoint_Algorithm2_B.Sum5 *
    SingleJoint_Algorithm2_B.Sum4 + rtb_Sum1;

  /* Update for UnitDelay: '<S16>/UD'
   *
   * Block description for '<S16>/UD':
   *
   *  Store in Global RAM
   */
  SingleJoint_Algorithm2_DW.UD_DSTATE = rtb_Uk1;

  /* Update for UnitDelay: '<S17>/UD'
   *
   * Block description for '<S17>/UD':
   *
   *  Store in Global RAM
   */
  SingleJoint_Algorithm2_DW.UD_DSTATE_g = rtb_TSamp_o;
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
  /* Saturate: '<S6>/оч╥Ы' */
  if (SingleJoint_Algorithm2_B.Sum3 > SingleJoint_Algorithm2_P._UpperSat) {
    SingleJoint_Algorithm2_B.Sum3 = SingleJoint_Algorithm2_P._UpperSat;
  } else {
    if (SingleJoint_Algorithm2_B.Sum3 < SingleJoint_Algorithm2_P._LowerSat) {
      SingleJoint_Algorithm2_B.Sum3 = SingleJoint_Algorithm2_P._LowerSat;
    }
  }

  /* End of Saturate: '<S6>/оч╥Ы' */

  /* Outputs for Atomic SubSystem: '<S6>/Error' */
  SingleJoint_Algorithm2_Error();

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
