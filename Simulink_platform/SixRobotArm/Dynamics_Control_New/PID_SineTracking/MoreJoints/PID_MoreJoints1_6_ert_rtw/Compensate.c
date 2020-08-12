/*
 * File: Compensate.c
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

#include "Compensate.h"

/* Include model header file for global data */
#include "PID_MoreJoints1_6.h"
#include "PID_MoreJoints1_6_private.h"

/* Output and update for atomic system: '<S1>/Compensate' */
void Compensate(void)
{
  real_T rtb_Product13_tmp;

  /* Sum: '<S6>/Add' incorporates:
   *  DataStoreRead: '<S1>/q'
   *  Sum: '<S6>/Add8'
   */
  rtb_Product13_tmp = q[1] - q[2];

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   */
  PID_MoreJoints1_6_B.u = PID_MoreJoints1_6_P.Gain9_Gain * dq[1];

  /* Signum: '<S6>/Sign3' */
  if (PID_MoreJoints1_6_B.u < 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = -1.0;
  } else if (PID_MoreJoints1_6_B.u > 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = 1.0;
  } else if (PID_MoreJoints1_6_B.u == 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = 0.0;
  } else {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = (rtNaN);
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
  PID_MoreJoints1_6_B.Saturation2 = ((sin(q[1]) *
    PID_MoreJoints1_6_P.Constant_Value + sin(rtb_Product13_tmp) *
    PID_MoreJoints1_6_P.Constant1_Value) + sin(rtb_Product13_tmp + q[3]) *
    PID_MoreJoints1_6_P.Constant2_Value) + (J4[0] * PID_MoreJoints1_6_B.u + dq[1]
    * J4[1]);

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  Gain: '<S6>/Gain5'
   */
  PID_MoreJoints1_6_B.u = PID_MoreJoints1_6_P.Gain5_Gain * dq[3];

  /* Signum: '<S6>/Sign5' */
  if (PID_MoreJoints1_6_B.u < 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = -1.0;
  } else if (PID_MoreJoints1_6_B.u > 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = 1.0;
  } else if (PID_MoreJoints1_6_B.u == 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = 0.0;
  } else {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = (rtNaN);
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
  PID_MoreJoints1_6_B.Saturation1 = sin((q[1] - q[2]) + q[3]) *
    PID_MoreJoints1_6_P.Constant5_Value + (J4[4] * PID_MoreJoints1_6_B.u + dq[3]
    * J4[5]);

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  Gain: '<S6>/Gain4'
   */
  PID_MoreJoints1_6_B.u = PID_MoreJoints1_6_P.Gain4_Gain * dq[2];

  /* Signum: '<S6>/Sign4' */
  if (PID_MoreJoints1_6_B.u < 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = -1.0;
  } else if (PID_MoreJoints1_6_B.u > 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = 1.0;
  } else if (PID_MoreJoints1_6_B.u == 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = 0.0;
  } else {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = (rtNaN);
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
  PID_MoreJoints1_6_B.Saturation3 = (J4[2] * PID_MoreJoints1_6_B.u + dq[2] * J4
    [3]) + (sin(rtb_Product13_tmp + q[3]) * PID_MoreJoints1_6_P.Constant4_Value
            + sin(rtb_Product13_tmp) * PID_MoreJoints1_6_P.Constant3_Value);

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  Gain: '<S6>/Gain2'
   */
  PID_MoreJoints1_6_B.u = PID_MoreJoints1_6_P.Gain2_Gain * dq[4];

  /* Signum: '<S6>/Sign1' */
  if (PID_MoreJoints1_6_B.u < 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = -1.0;
  } else if (PID_MoreJoints1_6_B.u > 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = 1.0;
  } else if (PID_MoreJoints1_6_B.u == 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = 0.0;
  } else {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign1' */

  /* Sum: '<S6>/Add1' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S6>/组号5——数据1'
   *  DataStoreRead: '<S6>/组号5——数据2'
   *  Product: '<S6>/Product1'
   *  Product: '<S6>/Product2'
   */
  PID_MoreJoints1_6_B.Saturation4 = J5[2] * PID_MoreJoints1_6_B.u + dq[4] * J5[3];

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  Gain: '<S6>/Gain1'
   */
  PID_MoreJoints1_6_B.u = PID_MoreJoints1_6_P.Gain1_Gain * dq[0];

  /* Signum: '<S6>/Sign' */
  if (PID_MoreJoints1_6_B.u < 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = -1.0;
  } else if (PID_MoreJoints1_6_B.u > 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = 1.0;
  } else if (PID_MoreJoints1_6_B.u == 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = 0.0;
  } else {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign' */

  /* Sum: '<S6>/Add10' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S6>/组号1——数据5'
   *  DataStoreRead: '<S6>/组号1——数据6'
   *  Product: '<S6>/Product15'
   *  Product: '<S6>/Product16'
   */
  PID_MoreJoints1_6_B.Saturation5 = J5[0] * PID_MoreJoints1_6_B.u + dq[0] * J5[1];

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  Gain: '<S6>/Gain3'
   */
  PID_MoreJoints1_6_B.u = PID_MoreJoints1_6_P.Gain3_Gain * dq[5];

  /* Signum: '<S6>/Sign2' */
  if (PID_MoreJoints1_6_B.u < 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = -1.0;
  } else if (PID_MoreJoints1_6_B.u > 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = 1.0;
  } else if (PID_MoreJoints1_6_B.u == 0.0) {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = 0.0;
  } else {
    /* Gain: '<S6>/Gain9' */
    PID_MoreJoints1_6_B.u = (rtNaN);
  }

  /* End of Signum: '<S6>/Sign2' */

  /* Gain: '<S6>/Gain9' incorporates:
   *  DataStoreRead: '<S1>/dq'
   *  DataStoreRead: '<S6>/组号5——数据3'
   *  DataStoreRead: '<S6>/组号5——数据4'
   *  Product: '<S6>/Product3'
   *  Product: '<S6>/Product4'
   *  Sum: '<S6>/Add2'
   */
  PID_MoreJoints1_6_B.u = J5[4] * PID_MoreJoints1_6_B.u + dq[5] * J5[5];
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
