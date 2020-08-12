/*
 * File: GetAngleVelocity.c
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

#include "GetAngleVelocity.h"

/* Include model header file for global data */
#include "ZeroForceDrag_SingleJoint.h"
#include "ZeroForceDrag_SingleJoint_private.h"

/*
 * System initialize for atomic system:
 *    '<S8>/GetAngle1'
 *    '<S8>/GetAngle2'
 *    '<S8>/GetAngle3'
 *    '<S8>/GetAngle4'
 *    '<S8>/GetAngle5'
 *    '<S8>/GetAngle6'
 */
void ZeroForceDrag_Si_GetAngle1_Init(B_GetAngle1_ZeroForceDrag_Sin_T *localB,
  P_GetAngle1_ZeroForceDrag_Sin_T *localP)
{
  /* SystemInitialize for Merge: '<S42>/Merge' */
  localB->Merge = localP->Merge_InitialOutput;
}

/*
 * Output and update for atomic system:
 *    '<S8>/GetAngle1'
 *    '<S8>/GetAngle2'
 *    '<S8>/GetAngle3'
 *    '<S8>/GetAngle4'
 *    '<S8>/GetAngle5'
 *    '<S8>/GetAngle6'
 */
void ZeroForceDrag_SingleJ_GetAngle1(real_T *rty_Angle, real_T *rty_InitAngle,
  B_GetAngle1_ZeroForceDrag_Sin_T *localB, P_GetAngle1_ZeroForceDrag_Sin_T
  *localP, uint16_T rtp_JJoint, real_T rtp_InitAngle)
{
  real_T rtb_Product;

  /* SwitchCase: '<S42>/Switch Case' incorporates:
   *  Constant: '<S42>/Constant1'
   */
  switch ((int32_T)rtp_JJoint) {
   case 1L:
    /* Outputs for IfAction SubSystem: '<S42>/Joint1' incorporates:
     *  ActionPort: '<S54>/Action Port'
     */
    /* DataStoreRead: '<S54>/Data Store Read5' */
    localB->Merge = Motor_Position[0];

    /* End of Outputs for SubSystem: '<S42>/Joint1' */
    break;

   case 2L:
    /* Outputs for IfAction SubSystem: '<S42>/Joint2' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */
    /* DataStoreRead: '<S55>/Data Store Read5' */
    localB->Merge = Motor_Position[1];

    /* End of Outputs for SubSystem: '<S42>/Joint2' */
    break;

   case 3L:
    /* Outputs for IfAction SubSystem: '<S42>/Joint3' incorporates:
     *  ActionPort: '<S56>/Action Port'
     */
    /* DataStoreRead: '<S56>/Data Store Read5' */
    localB->Merge = Motor_Position[2];

    /* End of Outputs for SubSystem: '<S42>/Joint3' */
    break;

   case 4L:
    /* Outputs for IfAction SubSystem: '<S42>/Joint4' incorporates:
     *  ActionPort: '<S57>/Action Port'
     */
    /* DataStoreRead: '<S57>/Data Store Read5' */
    localB->Merge = Motor_Position[3];

    /* End of Outputs for SubSystem: '<S42>/Joint4' */
    break;

   case 5L:
    /* Outputs for IfAction SubSystem: '<S42>/Joint5' incorporates:
     *  ActionPort: '<S58>/Action Port'
     */
    /* DataStoreRead: '<S58>/Data Store Read5' */
    localB->Merge = Motor_Position[4];

    /* End of Outputs for SubSystem: '<S42>/Joint5' */
    break;

   case 6L:
    /* Outputs for IfAction SubSystem: '<S42>/Joint6' incorporates:
     *  ActionPort: '<S59>/Action Port'
     */
    /* DataStoreRead: '<S59>/Data Store Read5' */
    localB->Merge = Motor_Position[5];

    /* End of Outputs for SubSystem: '<S42>/Joint6' */
    break;
  }

  /* End of SwitchCase: '<S42>/Switch Case' */

  /* MultiPortSwitch: '<S42>/Multiport Switch' incorporates:
   *  Constant: '<S42>/Constant1'
   *  Constant: '<S42>/Constant3'
   *  Constant: '<S42>/Constant4'
   */
  if ((int16_T)rtp_JJoint == 3) {
    rtb_Product = localP->Constant3_Value;
  } else {
    rtb_Product = localP->Constant4_Value;
  }

  /* End of MultiPortSwitch: '<S42>/Multiport Switch' */

  /* Product: '<S42>/Product' incorporates:
   *  Constant: '<S42>/Constant'
   *  Gain: '<S42>/Gain4'
   */
  rtb_Product *= localP->Gain4_Gain * rtp_InitAngle;

  /* DataTypeConversion: '<S42>/Data Type Conversion1' incorporates:
   *  DataTypeConversion: '<S42>/Data Type Conversion2'
   *  Gain: '<S42>/Gain1'
   *  Sum: '<S42>/Add'
   */
  *rty_Angle = localP->Gain1_Gain * (real_T)localB->Merge - rtb_Product;

  /* DataTypeConversion: '<S42>/Data Type Conversion3' */
  *rty_InitAngle = rtb_Product;
}

/*
 * System initialize for atomic system:
 *    '<S8>/GetAngleSpeed'
 *    '<S8>/GetAngleSpeed1'
 *    '<S8>/GetAngleSpeed2'
 *    '<S8>/GetAngleSpeed3'
 *    '<S8>/GetAngleSpeed4'
 *    '<S8>/GetAngleSpeed5'
 */
void ZeroForceDra_GetAngleSpeed_Init(B_GetAngleSpeed_ZeroForceDrag_T *localB,
  P_GetAngleSpeed_ZeroForceDrag_T *localP)
{
  /* SystemInitialize for Merge: '<S48>/Merge1' */
  localB->Merge1 = localP->Merge1_InitialOutput;
}

/*
 * Output and update for atomic system:
 *    '<S8>/GetAngleSpeed'
 *    '<S8>/GetAngleSpeed1'
 *    '<S8>/GetAngleSpeed2'
 *    '<S8>/GetAngleSpeed3'
 *    '<S8>/GetAngleSpeed4'
 *    '<S8>/GetAngleSpeed5'
 */
void ZeroForceDrag_Sin_GetAngleSpeed(real_T *rty_Velcity,
  B_GetAngleSpeed_ZeroForceDrag_T *localB, P_GetAngleSpeed_ZeroForceDrag_T
  *localP, real_T rtp_JJoint)
{
  real_T tmp;

  /* SwitchCase: '<S48>/Switch Case' incorporates:
   *  Constant: '<S48>/Constant1'
   */
  if (rtp_JJoint < 0.0) {
    tmp = ceil(rtp_JJoint);
  } else {
    tmp = floor(rtp_JJoint);
  }

  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  switch (tmp < 0.0 ? -(int32_T)(uint32_T)-tmp : (int32_T)(uint32_T)tmp) {
   case 1L:
    /* Outputs for IfAction SubSystem: '<S48>/Joint1' incorporates:
     *  ActionPort: '<S90>/Action Port'
     */
    /* DataStoreRead: '<S90>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[0];

    /* End of Outputs for SubSystem: '<S48>/Joint1' */
    break;

   case 2L:
    /* Outputs for IfAction SubSystem: '<S48>/Joint2' incorporates:
     *  ActionPort: '<S91>/Action Port'
     */
    /* DataStoreRead: '<S91>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[1];

    /* End of Outputs for SubSystem: '<S48>/Joint2' */
    break;

   case 3L:
    /* Outputs for IfAction SubSystem: '<S48>/Joint3' incorporates:
     *  ActionPort: '<S92>/Action Port'
     */
    /* DataStoreRead: '<S92>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[2];

    /* End of Outputs for SubSystem: '<S48>/Joint3' */
    break;

   case 4L:
    /* Outputs for IfAction SubSystem: '<S48>/Joint4' incorporates:
     *  ActionPort: '<S93>/Action Port'
     */
    /* DataStoreRead: '<S93>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[3];

    /* End of Outputs for SubSystem: '<S48>/Joint4' */
    break;

   case 5L:
    /* Outputs for IfAction SubSystem: '<S48>/Joint5' incorporates:
     *  ActionPort: '<S94>/Action Port'
     */
    /* DataStoreRead: '<S94>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[4];

    /* End of Outputs for SubSystem: '<S48>/Joint5' */
    break;

   case 6L:
    /* Outputs for IfAction SubSystem: '<S48>/Joint6' incorporates:
     *  ActionPort: '<S95>/Action Port'
     */
    /* DataStoreRead: '<S95>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[5];

    /* End of Outputs for SubSystem: '<S48>/Joint6' */
    break;
  }

  /* End of SwitchCase: '<S48>/Switch Case' */

  /* Gain: '<S48>/Gain9' incorporates:
   *  DataTypeConversion: '<S48>/Data Type Conversion3'
   *  Gain: '<S48>/Gain3'
   */
  *rty_Velcity = localP->Gain3_Gain * (real_T)localB->Merge1 *
    localP->Gain9_Gain;
}

/* System initialize for atomic system: '<S1>/GetAngleVelocity' */
void GetAngleVelocity_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngleSpeed' */
  ZeroForceDra_GetAngleSpeed_Init(&ZeroForceDrag_SingleJoint_B.GetAngleSpeed,
    &ZeroForceDrag_SingleJoint_P.GetAngleSpeed);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngleSpeed' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngleSpeed1' */
  ZeroForceDra_GetAngleSpeed_Init(&ZeroForceDrag_SingleJoint_B.GetAngleSpeed1,
    &ZeroForceDrag_SingleJoint_P.GetAngleSpeed1);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngleSpeed1' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngleSpeed2' */
  ZeroForceDra_GetAngleSpeed_Init(&ZeroForceDrag_SingleJoint_B.GetAngleSpeed2,
    &ZeroForceDrag_SingleJoint_P.GetAngleSpeed2);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngleSpeed2' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngleSpeed3' */
  ZeroForceDra_GetAngleSpeed_Init(&ZeroForceDrag_SingleJoint_B.GetAngleSpeed3,
    &ZeroForceDrag_SingleJoint_P.GetAngleSpeed3);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngleSpeed3' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngleSpeed4' */
  ZeroForceDra_GetAngleSpeed_Init(&ZeroForceDrag_SingleJoint_B.GetAngleSpeed4,
    &ZeroForceDrag_SingleJoint_P.GetAngleSpeed4);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngleSpeed4' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngleSpeed5' */
  ZeroForceDra_GetAngleSpeed_Init(&ZeroForceDrag_SingleJoint_B.GetAngleSpeed5,
    &ZeroForceDrag_SingleJoint_P.GetAngleSpeed5);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngleSpeed5' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngle1' */
  ZeroForceDrag_Si_GetAngle1_Init(&ZeroForceDrag_SingleJoint_B.GetAngle1,
    &ZeroForceDrag_SingleJoint_P.GetAngle1);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngle1' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngle2' */
  ZeroForceDrag_Si_GetAngle1_Init(&ZeroForceDrag_SingleJoint_B.GetAngle2,
    &ZeroForceDrag_SingleJoint_P.GetAngle2);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngle2' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngle3' */
  ZeroForceDrag_Si_GetAngle1_Init(&ZeroForceDrag_SingleJoint_B.GetAngle3,
    &ZeroForceDrag_SingleJoint_P.GetAngle3);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngle3' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngle4' */
  ZeroForceDrag_Si_GetAngle1_Init(&ZeroForceDrag_SingleJoint_B.GetAngle4,
    &ZeroForceDrag_SingleJoint_P.GetAngle4);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngle4' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngle5' */
  ZeroForceDrag_Si_GetAngle1_Init(&ZeroForceDrag_SingleJoint_B.GetAngle5,
    &ZeroForceDrag_SingleJoint_P.GetAngle5);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngle5' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngle6' */
  ZeroForceDrag_Si_GetAngle1_Init(&ZeroForceDrag_SingleJoint_B.GetAngle6,
    &ZeroForceDrag_SingleJoint_P.GetAngle6);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngle6' */
}

/* Output and update for atomic system: '<S1>/GetAngleVelocity' */
void GetAngleVelocity(void)
{
  /* Outputs for Atomic SubSystem: '<S8>/GetAngleSpeed' */
  ZeroForceDrag_Sin_GetAngleSpeed(&ZeroForceDrag_SingleJoint_B.Gain9_p,
    &ZeroForceDrag_SingleJoint_B.GetAngleSpeed,
    &ZeroForceDrag_SingleJoint_P.GetAngleSpeed,
    ZeroForceDrag_SingleJoint_P.GetAngleSpeed_JJoint);

  /* End of Outputs for SubSystem: '<S8>/GetAngleSpeed' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngleSpeed1' */
  ZeroForceDrag_Sin_GetAngleSpeed(&ZeroForceDrag_SingleJoint_B.Gain9_ed,
    &ZeroForceDrag_SingleJoint_B.GetAngleSpeed1,
    &ZeroForceDrag_SingleJoint_P.GetAngleSpeed1,
    ZeroForceDrag_SingleJoint_P.GetAngleSpeed1_JJoint);

  /* End of Outputs for SubSystem: '<S8>/GetAngleSpeed1' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngleSpeed2' */
  ZeroForceDrag_Sin_GetAngleSpeed(&ZeroForceDrag_SingleJoint_B.Gain9_e,
    &ZeroForceDrag_SingleJoint_B.GetAngleSpeed2,
    &ZeroForceDrag_SingleJoint_P.GetAngleSpeed2,
    ZeroForceDrag_SingleJoint_P.GetAngleSpeed2_JJoint);

  /* End of Outputs for SubSystem: '<S8>/GetAngleSpeed2' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngleSpeed3' */
  ZeroForceDrag_Sin_GetAngleSpeed(&ZeroForceDrag_SingleJoint_B.Gain9_j,
    &ZeroForceDrag_SingleJoint_B.GetAngleSpeed3,
    &ZeroForceDrag_SingleJoint_P.GetAngleSpeed3,
    ZeroForceDrag_SingleJoint_P.GetAngleSpeed3_JJoint);

  /* End of Outputs for SubSystem: '<S8>/GetAngleSpeed3' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngleSpeed4' */
  ZeroForceDrag_Sin_GetAngleSpeed(&ZeroForceDrag_SingleJoint_B.Gain9,
    &ZeroForceDrag_SingleJoint_B.GetAngleSpeed4,
    &ZeroForceDrag_SingleJoint_P.GetAngleSpeed4,
    ZeroForceDrag_SingleJoint_P.GetAngleSpeed4_JJoint);

  /* End of Outputs for SubSystem: '<S8>/GetAngleSpeed4' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngleSpeed5' */
  ZeroForceDrag_Sin_GetAngleSpeed(&ZeroForceDrag_SingleJoint_B.u,
    &ZeroForceDrag_SingleJoint_B.GetAngleSpeed5,
    &ZeroForceDrag_SingleJoint_P.GetAngleSpeed5,
    ZeroForceDrag_SingleJoint_P.GetAngleSpeed5_JJoint);

  /* End of Outputs for SubSystem: '<S8>/GetAngleSpeed5' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngle1' */
  ZeroForceDrag_SingleJ_GetAngle1(&ZeroForceDrag_SingleJoint_B.Saturation1,
    &ZeroForceDrag_SingleJoint_B.Saturation2,
    &ZeroForceDrag_SingleJoint_B.GetAngle1,
    &ZeroForceDrag_SingleJoint_P.GetAngle1,
    ZeroForceDrag_SingleJoint_P.GetAngle1_JJoint,
    ZeroForceDrag_SingleJoint_P.GetAngle1_InitAngle);

  /* End of Outputs for SubSystem: '<S8>/GetAngle1' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngle2' */
  ZeroForceDrag_SingleJ_GetAngle1(&ZeroForceDrag_SingleJoint_B.Saturation4,
    &ZeroForceDrag_SingleJoint_B.Saturation3,
    &ZeroForceDrag_SingleJoint_B.GetAngle2,
    &ZeroForceDrag_SingleJoint_P.GetAngle2,
    ZeroForceDrag_SingleJoint_P.GetAngle2_JJoint,
    ZeroForceDrag_SingleJoint_P.GetAngle2_InitAngle);

  /* End of Outputs for SubSystem: '<S8>/GetAngle2' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngle3' */
  ZeroForceDrag_SingleJ_GetAngle1(&ZeroForceDrag_SingleJoint_B.Saturation6,
    &ZeroForceDrag_SingleJoint_B.Saturation5,
    &ZeroForceDrag_SingleJoint_B.GetAngle3,
    &ZeroForceDrag_SingleJoint_P.GetAngle3,
    ZeroForceDrag_SingleJoint_P.GetAngle3_JJoint,
    ZeroForceDrag_SingleJoint_P.GetAngle3_InitAngle);

  /* End of Outputs for SubSystem: '<S8>/GetAngle3' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngle4' */
  ZeroForceDrag_SingleJ_GetAngle1
    (&ZeroForceDrag_SingleJoint_B.DataTypeConversion1_fj,
     &ZeroForceDrag_SingleJoint_B.DataTypeConversion3_m,
     &ZeroForceDrag_SingleJoint_B.GetAngle4,
     &ZeroForceDrag_SingleJoint_P.GetAngle4,
     ZeroForceDrag_SingleJoint_P.GetAngle4_JJoint,
     ZeroForceDrag_SingleJoint_P.GetAngle4_InitAngle);

  /* End of Outputs for SubSystem: '<S8>/GetAngle4' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngle5' */
  ZeroForceDrag_SingleJ_GetAngle1
    (&ZeroForceDrag_SingleJoint_B.DataTypeConversion1_f,
     &ZeroForceDrag_SingleJoint_B.DataTypeConversion3_g,
     &ZeroForceDrag_SingleJoint_B.GetAngle5,
     &ZeroForceDrag_SingleJoint_P.GetAngle5,
     ZeroForceDrag_SingleJoint_P.GetAngle5_JJoint,
     ZeroForceDrag_SingleJoint_P.GetAngle5_InitAngle);

  /* End of Outputs for SubSystem: '<S8>/GetAngle5' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngle6' */
  ZeroForceDrag_SingleJ_GetAngle1
    (&ZeroForceDrag_SingleJoint_B.DataTypeConversion1,
     &ZeroForceDrag_SingleJoint_B.DataTypeConversion3,
     &ZeroForceDrag_SingleJoint_B.GetAngle6,
     &ZeroForceDrag_SingleJoint_P.GetAngle6,
     ZeroForceDrag_SingleJoint_P.GetAngle6_JJoint,
     ZeroForceDrag_SingleJoint_P.GetAngle6_InitAngle);

  /* End of Outputs for SubSystem: '<S8>/GetAngle6' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
