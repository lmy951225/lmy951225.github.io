/*
 * File: Compensate.c
 *
 * Code generated for Simulink model 'ZeroForceDrag_SingleJoint'.
 *
 * Model version                  : 1.166
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Jan 13 14:52:51 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Compensate.h"

/* Include model header file for global data */
#include "ZeroForceDrag_SingleJoint.h"
#include "ZeroForceDrag_SingleJoint_private.h"

/* Output and update for atomic system: '<S1>/Compensate' */
void Compensate(void)
{
  real_T rtb_Add[6];
  int16_T i;
  real_T u;

  /* Sum: '<S6>/Add' incorporates:
   *  DataStoreRead: '<S1>/InitAngle'
   *  DataStoreRead: '<S1>/q'
   */
  for (i = 0; i < 6; i++) {
    rtb_Add[i] = q[i] + InitAngle[i];
  }

  /* End of Sum: '<S6>/Add' */

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_SingleJoint_P.Gain9_Gain * dq[1];

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

  /* Sum: '<S6>/Add3' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S6>/Data Store Read1'
   *  DataStoreRead: '<S6>/Data Store Read5'
   *  DataStoreRead: '<S6>/Data Store Read6'
   *  Product: '<S6>/Product5'
   *  Product: '<S6>/Product6'
   *  Product: '<S6>/Product7'
   *  Trigonometry: '<S6>/Sin2'
   */
  ZeroForceDrag_SingleJoint_B.Saturation2 = (J2[0] * u + dq[1] * J2[1]) + sin
    (rtb_Add[1]) * J2[2];

  /* Gain: '<S6>/Gain4' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_SingleJoint_P.Gain4_Gain * dq[2];

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
   *  Trigonometry: '<S6>/Sin1'
   */
  ZeroForceDrag_SingleJoint_B.Saturation1 = (J3[0] * u + dq[2] * J3[1]) + sin
    (rtb_Add[2]) * J3[2];

  /* Gain: '<S6>/Gain5' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_SingleJoint_P.Gain5_Gain * dq[3];

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
   *  DataStoreRead: '<S6>/Data Store Read7'
   *  DataStoreRead: '<S6>/Data Store Read8'
   *  DataStoreRead: '<S6>/Data Store Read9'
   *  Product: '<S6>/Product11'
   *  Product: '<S6>/Product12'
   *  Product: '<S6>/Product13'
   *  Trigonometry: '<S6>/Sin3'
   */
  ZeroForceDrag_SingleJoint_B.Saturation3 = (J4[0] * u + dq[3] * J4[1]) + sin
    (rtb_Add[3]) * J4[2];

  /* Gain: '<S6>/Gain2' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_SingleJoint_P.Gain2_Gain * dq[4];

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
  ZeroForceDrag_SingleJoint_B.Saturation4 = J5[0] * u + dq[4] * J5[1];

  /* Gain: '<S6>/Gain1' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_SingleJoint_P.Gain1_Gain * dq[0];

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
  ZeroForceDrag_SingleJoint_B.Saturation5 = J1[0] * u + dq[0] * J1[1];

  /* Gain: '<S6>/Gain3' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = ZeroForceDrag_SingleJoint_P.Gain3_Gain * dq[5];

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
  ZeroForceDrag_SingleJoint_B.Saturation6 = J6[0] * u + dq[5] * J6[1];
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
