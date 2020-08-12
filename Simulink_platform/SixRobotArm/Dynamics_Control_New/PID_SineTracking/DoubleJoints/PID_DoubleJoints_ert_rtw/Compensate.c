/*
 * File: Compensate.c
 *
 * Code generated for Simulink model 'PID_DoubleJoints'.
 *
 * Model version                  : 1.214
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan  8 11:21:57 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Compensate.h"

/* Include model header file for global data */
#include "PID_DoubleJoints.h"
#include "PID_DoubleJoints_private.h"

/* Output and update for atomic system: '<S1>/Compensate' */
void Compensate(void)
{
  real_T Saturation2_tmp;

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  PID_DoubleJoints_B.u = PID_DoubleJoints_P.Gain9_Gain * dq[1];

  /* Signum: '<S6>/Sign3' */
  if (PID_DoubleJoints_B.u < 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = -1.0;
  } else if (PID_DoubleJoints_B.u > 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = 1.0;
  } else if (PID_DoubleJoints_B.u == 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = 0.0;
  } else {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign3' */

  /* Trigonometry: '<S6>/Sin4' incorporates:
   *  DataStoreRead: '<S1>/q'
   *  Sum: '<S6>/Add'
   *  Trigonometry: '<S6>/Sin1'
   */
  Saturation2_tmp = sin(q[1] - q[2]);

  /* Sum: '<S6>/Add7' incorporates:
   *  Constant: '<S6>/Constant'
   *  Constant: '<S6>/Constant1'
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S1>/q'
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
  PID_DoubleJoints_B.Saturation2 = (Saturation2_tmp *
    PID_DoubleJoints_P.Constant1_Value + sin(q[1]) *
    PID_DoubleJoints_P.Constant_Value) + (J3[2] * PID_DoubleJoints_B.u + dq[1] *
    J3[3]);

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  Gain: '<S6>/Gain4'
   */
  PID_DoubleJoints_B.u = PID_DoubleJoints_P.Gain4_Gain * dq[2];

  /* Signum: '<S6>/Sign4' */
  if (PID_DoubleJoints_B.u < 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = -1.0;
  } else if (PID_DoubleJoints_B.u > 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = 1.0;
  } else if (PID_DoubleJoints_B.u == 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = 0.0;
  } else {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign4' */

  /* Sum: '<S6>/Add4' incorporates:
   *  Constant: '<S6>/Constant3'
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S6>/Data Store Read3'
   *  DataStoreRead: '<S6>/Data Store Read4'
   *  Product: '<S6>/Product10'
   *  Product: '<S6>/Product8'
   *  Product: '<S6>/Product9'
   */
  PID_DoubleJoints_B.Saturation1 = (J3[4] * PID_DoubleJoints_B.u + dq[2] * J3[5])
    + Saturation2_tmp * PID_DoubleJoints_P.Constant3_Value;

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  Gain: '<S6>/Gain2'
   */
  PID_DoubleJoints_B.u = PID_DoubleJoints_P.Gain2_Gain * dq[4];

  /* Signum: '<S6>/Sign1' */
  if (PID_DoubleJoints_B.u < 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = -1.0;
  } else if (PID_DoubleJoints_B.u > 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = 1.0;
  } else if (PID_DoubleJoints_B.u == 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = 0.0;
  } else {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign1' */

  /* Sum: '<S6>/Add1' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S6>/组号5——数据1'
   *  DataStoreRead: '<S6>/组号5——数据2'
   *  Product: '<S6>/Product1'
   *  Product: '<S6>/Product2'
   */
  PID_DoubleJoints_B.Saturation3 = J5[4] * PID_DoubleJoints_B.u + dq[4] * J5[5];

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  Gain: '<S6>/Gain1'
   */
  PID_DoubleJoints_B.u = PID_DoubleJoints_P.Gain1_Gain * dq[0];

  /* Signum: '<S6>/Sign' */
  if (PID_DoubleJoints_B.u < 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = -1.0;
  } else if (PID_DoubleJoints_B.u > 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = 1.0;
  } else if (PID_DoubleJoints_B.u == 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = 0.0;
  } else {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign' */

  /* Sum: '<S6>/Add10' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S6>/组号1——数据5'
   *  DataStoreRead: '<S6>/组号1——数据6'
   *  Product: '<S6>/Product15'
   *  Product: '<S6>/Product16'
   */
  PID_DoubleJoints_B.Saturation4 = J1[4] * PID_DoubleJoints_B.u + dq[0] * J1[5];

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  Gain: '<S6>/Gain3'
   */
  PID_DoubleJoints_B.u = PID_DoubleJoints_P.Gain3_Gain * dq[5];

  /* Signum: '<S6>/Sign2' */
  if (PID_DoubleJoints_B.u < 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = -1.0;
  } else if (PID_DoubleJoints_B.u > 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = 1.0;
  } else if (PID_DoubleJoints_B.u == 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = 0.0;
  } else {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign2' */

  /* Sum: '<S6>/Add2' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S6>/组号6——数据1'
   *  DataStoreRead: '<S6>/组号6——数据2'
   *  Product: '<S6>/Product3'
   *  Product: '<S6>/Product4'
   */
  PID_DoubleJoints_B.Saturation5 = J6[4] * PID_DoubleJoints_B.u + dq[5] * J6[5];

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  Gain: '<S6>/Gain5'
   */
  PID_DoubleJoints_B.u = PID_DoubleJoints_P.Gain5_Gain * dq[3];

  /* Signum: '<S6>/Sign5' */
  if (PID_DoubleJoints_B.u < 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = -1.0;
  } else if (PID_DoubleJoints_B.u > 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = 1.0;
  } else if (PID_DoubleJoints_B.u == 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = 0.0;
  } else {
    /* Gain: '<S6>/Gain9' */
    PID_DoubleJoints_B.u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign5' */

  /* Gain: '<S6>/Gain9' incorporates:
   *  Constant: '<S6>/Constant2'
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S1>/q'
   *  DataStoreRead: '<S6>/Data Store Read8'
   *  DataStoreRead: '<S6>/Data Store Read9'
   *  Product: '<S6>/Product11'
   *  Product: '<S6>/Product12'
   *  Product: '<S6>/Product13'
   *  Sum: '<S6>/Add5'
   *  Trigonometry: '<S6>/Sin3'
   */
  PID_DoubleJoints_B.u = (J4[4] * PID_DoubleJoints_B.u + dq[3] * J4[5]) + sin(q
    [3]) * PID_DoubleJoints_P.Constant2_Value;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
