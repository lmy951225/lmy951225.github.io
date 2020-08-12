/*
 * File: Compensate.c
 *
 * Code generated for Simulink model 'PID_ThreeJoints'.
 *
 * Model version                  : 1.259
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan  8 15:03:58 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Compensate.h"

/* Include model header file for global data */
#include "PID_ThreeJoints.h"
#include "PID_ThreeJoints_private.h"

/* Output and update for atomic system: '<S1>/Compensate' */
void Compensate(void)
{
  real_T u;
  real_T rtb_Product13_tmp;

  /* Sum: '<S6>/Add' incorporates:
   *  DataStoreRead: '<S1>/q'
   *  Sum: '<S6>/Add8'
   */
  rtb_Product13_tmp = q[1] - q[2];

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = PID_ThreeJoints_P.Gain9_Gain * dq[1];

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
   *  Constant: '<S6>/Constant'
   *  Constant: '<S6>/Constant1'
   *  Constant: '<S6>/Constant2'
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S1>/q'
   *  DataStoreRead: '<S6>/Data Store Read3'
   *  DataStoreRead: '<S6>/Data Store Read4'
   *  Product: '<S6>/Product14'
   *  Product: '<S6>/Product17'
   *  Product: '<S6>/Product5'
   *  Product: '<S6>/Product6'
   *  Product: '<S6>/Product7'
   *  Sum: '<S6>/Add'
   *  Sum: '<S6>/Add3'
   *  Sum: '<S6>/Add6'
   *  Sum: '<S6>/Add9'
   *  Trigonometry: '<S6>/Sin2'
   *  Trigonometry: '<S6>/Sin4'
   *  Trigonometry: '<S6>/Sin5'
   */
  PID_ThreeJoints_B.Add7 = ((sin(q[1]) * PID_ThreeJoints_P.Constant_Value + sin
    (rtb_Product13_tmp) * PID_ThreeJoints_P.Constant1_Value) + sin
    (rtb_Product13_tmp + q[3]) * PID_ThreeJoints_P.Constant2_Value) + (J4[0] * u
    + dq[1] * J4[1]);

  /* Gain: '<S6>/Gain5' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = PID_ThreeJoints_P.Gain5_Gain * dq[3];

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
   *  Constant: '<S6>/Constant5'
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S1>/q'
   *  DataStoreRead: '<S6>/Data Store Read8'
   *  DataStoreRead: '<S6>/Data Store Read9'
   *  Product: '<S6>/Product11'
   *  Product: '<S6>/Product12'
   *  Product: '<S6>/Product13'
   *  Sum: '<S6>/Add14'
   *  Trigonometry: '<S6>/Sin3'
   */
  PID_ThreeJoints_B.Add5 = sin((q[1] - q[2]) + q[3]) *
    PID_ThreeJoints_P.Constant5_Value + (J4[4] * u + dq[3] * J4[5]);

  /* Gain: '<S6>/Gain4' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = PID_ThreeJoints_P.Gain4_Gain * dq[2];

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
   *  Constant: '<S6>/Constant3'
   *  Constant: '<S6>/Constant4'
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S1>/q'
   *  DataStoreRead: '<S6>/Data Store Read1'
   *  DataStoreRead: '<S6>/Data Store Read2'
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
  PID_ThreeJoints_B.Add13 = (J4[2] * u + dq[2] * J4[3]) + (sin(rtb_Product13_tmp
    + q[3]) * PID_ThreeJoints_P.Constant4_Value + sin(rtb_Product13_tmp) *
    PID_ThreeJoints_P.Constant3_Value);

  /* Gain: '<S6>/Gain2' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = PID_ThreeJoints_P.Gain2_Gain * dq[4];

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
  PID_ThreeJoints_B.Add1 = J5[4] * u + dq[4] * J5[5];

  /* Gain: '<S6>/Gain1' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = PID_ThreeJoints_P.Gain1_Gain * dq[0];

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
   *  DataStoreRead: '<S6>/组号1——数据5'
   *  DataStoreRead: '<S6>/组号1——数据6'
   *  Product: '<S6>/Product15'
   *  Product: '<S6>/Product16'
   */
  PID_ThreeJoints_B.Add10 = J1[4] * u + dq[0] * J1[5];

  /* Gain: '<S6>/Gain3' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  u = PID_ThreeJoints_P.Gain3_Gain * dq[5];

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
  PID_ThreeJoints_B.Add2 = J6[4] * u + dq[5] * J6[5];
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
