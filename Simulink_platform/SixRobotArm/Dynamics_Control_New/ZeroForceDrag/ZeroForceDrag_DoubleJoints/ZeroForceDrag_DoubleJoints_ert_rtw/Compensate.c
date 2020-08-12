/*
 * File: Compensate.c
 *
 * Code generated for Simulink model 'ZeroForceDrag_DoubleJoints'.
 *
 * Model version                  : 1.147
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jan  7 17:09:50 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Compensate.h"

/* Include model header file for global data */
#include "ZeroForceDrag_DoubleJoints.h"
#include "ZeroForceDrag_DoubleJoints_private.h"

/* Output and update for atomic system: '<S1>/Compensate' */
void Compensate(void)
{
  real_T u;
  real_T Saturation2_tmp;

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_DoubleJoints_P.Gain9_Gain * dq[1];

  /* Signum: '<S6>/Sign3' */
  if (u < 0.0) {
    u = -1.0;
  } else if (u > 0.0) {
    u = 1.0;
  } else if (u == 0.0) {
    u = 0.0;
  } else {
    u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign3' */

  /* Trigonometry: '<S6>/Sin4' incorporates:
   *  DataStoreRead: '<S1>/q'
   *  Sum: '<S6>/Add'
   *  Trigonometry: '<S6>/Sin1'
   */
  Saturation2_tmp = sin(q[1] - q[2]);

  /* Sum: '<S6>/Add7' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S1>/q'
   *  DataStoreRead: '<S6>/Data Store Read1'
   *  DataStoreRead: '<S6>/Data Store Read10'
   *  DataStoreRead: '<S6>/Data Store Read5'
   *  DataStoreRead: '<S6>/Data Store Read6'
   *  Product: '<S6>/Product14'
   *  Product: '<S6>/Product5'
   *  Product: '<S6>/Product6'
   *  Product: '<S6>/Product7'
   *  Sum: '<S6>/Add3'
   *  Sum: '<S6>/Add6'
   *  Trigonometry: '<S6>/Sin2'
   *  Trigonometry: '<S6>/Sin4'
   */
  ZeroForceDrag_DoubleJoints_B.Saturation2 = (Saturation2_tmp * J2[3] + sin(q[1])
    * J2[2]) + (J2[0] * u + dq[1] * J2[1]);

  /* Gain: '<S6>/Gain2' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_DoubleJoints_P.Gain2_Gain * dq[4];

  /* Signum: '<S6>/Sign1' */
  if (u < 0.0) {
    u = -1.0;
  } else if (u > 0.0) {
    u = 1.0;
  } else if (u == 0.0) {
    u = 0.0;
  } else {
    u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign1' */

  /* Sum: '<S6>/Add1' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S6>/组号5——数据1'
   *  DataStoreRead: '<S6>/组号5——数据2'
   *  Product: '<S6>/Product1'
   *  Product: '<S6>/Product2'
   */
  ZeroForceDrag_DoubleJoints_B.Saturation1 = J5[0] * u + dq[4] * J5[1];

  /* Gain: '<S6>/Gain1' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_DoubleJoints_P.Gain1_Gain * dq[0];

  /* Signum: '<S6>/Sign' */
  if (u < 0.0) {
    u = -1.0;
  } else if (u > 0.0) {
    u = 1.0;
  } else if (u == 0.0) {
    u = 0.0;
  } else {
    u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign' */

  /* Sum: '<S6>/Add10' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S6>/组号1——数据1'
   *  DataStoreRead: '<S6>/组号1——数据2'
   *  Product: '<S6>/Product15'
   *  Product: '<S6>/Product16'
   */
  ZeroForceDrag_DoubleJoints_B.Saturation3 = J1[0] * u + dq[0] * J1[1];

  /* Gain: '<S6>/Gain3' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_DoubleJoints_P.Gain3_Gain * dq[5];

  /* Signum: '<S6>/Sign2' */
  if (u < 0.0) {
    u = -1.0;
  } else if (u > 0.0) {
    u = 1.0;
  } else if (u == 0.0) {
    u = 0.0;
  } else {
    u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign2' */

  /* Sum: '<S6>/Add2' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S6>/组号6——数据1'
   *  DataStoreRead: '<S6>/组号6——数据2'
   *  Product: '<S6>/Product3'
   *  Product: '<S6>/Product4'
   */
  ZeroForceDrag_DoubleJoints_B.Saturation4 = J6[0] * u + dq[5] * J6[1];

  /* Gain: '<S6>/Gain4' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_DoubleJoints_P.Gain4_Gain * dq[2];

  /* Signum: '<S6>/Sign4' */
  if (u < 0.0) {
    u = -1.0;
  } else if (u > 0.0) {
    u = 1.0;
  } else if (u == 0.0) {
    u = 0.0;
  } else {
    u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign4' */

  /* Sum: '<S6>/Add4' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S6>/Data Store Read2'
   *  DataStoreRead: '<S6>/Data Store Read3'
   *  DataStoreRead: '<S6>/Data Store Read4'
   *  Product: '<S6>/Product10'
   *  Product: '<S6>/Product8'
   *  Product: '<S6>/Product9'
   */
  ZeroForceDrag_DoubleJoints_B.Saturation5 = (J3[0] * u + dq[2] * J3[1]) +
    Saturation2_tmp * J3[2];

  /* Gain: '<S6>/Gain5' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_DoubleJoints_P.Gain5_Gain * dq[3];

  /* Signum: '<S6>/Sign5' */
  if (u < 0.0) {
    u = -1.0;
  } else if (u > 0.0) {
    u = 1.0;
  } else if (u == 0.0) {
    u = 0.0;
  } else {
    u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign5' */

  /* Sum: '<S6>/Add5' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S1>/q'
   *  DataStoreRead: '<S6>/Data Store Read7'
   *  DataStoreRead: '<S6>/Data Store Read8'
   *  DataStoreRead: '<S6>/Data Store Read9'
   *  Product: '<S6>/Product11'
   *  Product: '<S6>/Product12'
   *  Product: '<S6>/Product13'
   *  Trigonometry: '<S6>/Sin3'
   */
  ZeroForceDrag_DoubleJoints_B.Saturation6 = (J4[0] * u + dq[3] * J4[1]) + sin
    (q[3]) * J4[2];
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
