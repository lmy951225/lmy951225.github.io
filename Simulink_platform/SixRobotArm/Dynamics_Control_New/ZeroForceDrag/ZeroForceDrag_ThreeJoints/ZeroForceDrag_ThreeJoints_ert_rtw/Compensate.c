/*
 * File: Compensate.c
 *
 * Code generated for Simulink model 'ZeroForceDrag_ThreeJoints'.
 *
 * Model version                  : 1.166
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jan  7 20:06:33 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Compensate.h"

/* Include model header file for global data */
#include "ZeroForceDrag_ThreeJoints.h"
#include "ZeroForceDrag_ThreeJoints_private.h"

/* Output and update for atomic system: '<S1>/Compensate' */
void Compensate(void)
{
  real_T rtb_Add9;
  real_T rtb_Product14;
  real_T u;

  /* Sum: '<S6>/Add' incorporates:
   *  DataStoreRead: '<S1>/q'
   *  Gain: '<S6>/Gain'
   */
  rtb_Add9 = ZeroForceDrag_ThreeJoints_P.Gain_Gain * q[2] + q[1];

  /* Product: '<S6>/Product14' incorporates:
   *  DataStoreRead: '<S6>/Data Store Read10'
   *  Trigonometry: '<S6>/Sin4'
   */
  rtb_Product14 = sin(rtb_Add9) * J2[3];

  /* Sum: '<S6>/Add9' incorporates:
   *  DataStoreRead: '<S1>/q'
   */
  rtb_Add9 += q[3];

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_ThreeJoints_P.Gain9_Gain * dq[1];

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

  /* Sum: '<S6>/Add7' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S1>/q'
   *  DataStoreRead: '<S6>/Data Store Read1'
   *  DataStoreRead: '<S6>/Data Store Read11'
   *  DataStoreRead: '<S6>/Data Store Read5'
   *  DataStoreRead: '<S6>/Data Store Read6'
   *  Product: '<S6>/Product17'
   *  Product: '<S6>/Product5'
   *  Product: '<S6>/Product6'
   *  Product: '<S6>/Product7'
   *  Sum: '<S6>/Add3'
   *  Sum: '<S6>/Add6'
   *  Trigonometry: '<S6>/Sin2'
   *  Trigonometry: '<S6>/Sin5'
   */
  ZeroForceDrag_ThreeJoints_B.Saturation2 = ((sin(q[1]) * J2[2] + rtb_Product14)
    + sin(rtb_Add9) * J2[4]) + (J2[0] * u + dq[1] * J2[1]);

  /* Gain: '<S6>/Gain2' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_ThreeJoints_P.Gain2_Gain * dq[4];

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
  ZeroForceDrag_ThreeJoints_B.Saturation1 = J5[0] * u + dq[4] * J5[1];

  /* Gain: '<S6>/Gain1' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_ThreeJoints_P.Gain1_Gain * dq[0];

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
  ZeroForceDrag_ThreeJoints_B.Saturation3 = J1[0] * u + dq[0] * J1[1];

  /* Sum: '<S6>/Add8' incorporates:
   *  DataStoreRead: '<S1>/q'
   *  Gain: '<S6>/Gain6'
   */
  rtb_Add9 = ZeroForceDrag_ThreeJoints_P.Gain6_Gain * q[2] + q[1];

  /* Gain: '<S6>/Gain4' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_ThreeJoints_P.Gain4_Gain * dq[2];

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

  /* Sum: '<S6>/Add13' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S1>/q'
   *  DataStoreRead: '<S6>/Data Store Read12'
   *  DataStoreRead: '<S6>/Data Store Read2'
   *  DataStoreRead: '<S6>/Data Store Read3'
   *  DataStoreRead: '<S6>/Data Store Read4'
   *  Product: '<S6>/Product10'
   *  Product: '<S6>/Product18'
   *  Product: '<S6>/Product8'
   *  Product: '<S6>/Product9'
   *  Sum: '<S6>/Add11'
   *  Sum: '<S6>/Add12'
   *  Sum: '<S6>/Add4'
   *  Trigonometry: '<S6>/Sin1'
   *  Trigonometry: '<S6>/Sin6'
   */
  ZeroForceDrag_ThreeJoints_B.Saturation4 = (sin(rtb_Add9 + q[3]) * J3[3] + sin
    (rtb_Add9) * J3[2]) + (J3[0] * u + dq[2] * J3[1]);

  /* Gain: '<S6>/Gain5' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_ThreeJoints_P.Gain5_Gain * dq[3];

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
   *  Gain: '<S6>/Gain7'
   *  Product: '<S6>/Product11'
   *  Product: '<S6>/Product12'
   *  Product: '<S6>/Product13'
   *  Sum: '<S6>/Add14'
   *  Trigonometry: '<S6>/Sin3'
   */
  ZeroForceDrag_ThreeJoints_B.Saturation5 = sin
    ((ZeroForceDrag_ThreeJoints_P.Gain7_Gain * q[2] + q[1]) + q[3]) * J4[2] +
    (J4[0] * u + dq[3] * J4[1]);

  /* Gain: '<S6>/Gain3' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_ThreeJoints_P.Gain3_Gain * dq[5];

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
  ZeroForceDrag_ThreeJoints_B.Saturation6 = J6[0] * u + dq[5] * J6[1];
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
