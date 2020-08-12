/*
 * File: GetAngleVelocity.c
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

#include "GetAngleVelocity.h"

/* Include model header file for global data */
#include "PID_ThreeJoints.h"
#include "PID_ThreeJoints_private.h"

/*
 * System initialize for atomic system:
 *    '<S8>/GetAngle'
 *    '<S8>/GetAngle1'
 *    '<S8>/GetAngle2'
 *    '<S8>/GetAngle3'
 *    '<S8>/GetAngle4'
 *    '<S8>/GetAngle5'
 */
void PID_ThreeJoints_GetAngle_Init(B_GetAngle_PID_ThreeJoints_T *localB,
  P_GetAngle_PID_ThreeJoints_T *localP)
{
  /* SystemInitialize for Merge: '<S49>/Merge' */
  localB->Merge = localP->Merge_InitialOutput;
}

/*
 * Output and update for atomic system:
 *    '<S8>/GetAngle'
 *    '<S8>/GetAngle1'
 *    '<S8>/GetAngle2'
 *    '<S8>/GetAngle3'
 *    '<S8>/GetAngle4'
 *    '<S8>/GetAngle5'
 */
void PID_ThreeJoints_GetAngle(real_T *rty_Angle, B_GetAngle_PID_ThreeJoints_T
  *localB, P_GetAngle_PID_ThreeJoints_T *localP, uint16_T rtp_JJoint, real_T
  rtp_InitAngle)
{
  real_T tmp;

  /* SwitchCase: '<S49>/Switch Case' incorporates:
   *  Constant: '<S49>/Constant1'
   */
  switch ((int32_T)rtp_JJoint) {
   case 1L:
    /* Outputs for IfAction SubSystem: '<S49>/Joint1' incorporates:
     *  ActionPort: '<S61>/Action Port'
     */
    /* DataStoreRead: '<S61>/Data Store Read5' */
    localB->Merge = Motor_Position[0];

    /* End of Outputs for SubSystem: '<S49>/Joint1' */
    break;

   case 2L:
    /* Outputs for IfAction SubSystem: '<S49>/Joint2' incorporates:
     *  ActionPort: '<S62>/Action Port'
     */
    /* DataStoreRead: '<S62>/Data Store Read5' */
    localB->Merge = Motor_Position[1];

    /* End of Outputs for SubSystem: '<S49>/Joint2' */
    break;

   case 3L:
    /* Outputs for IfAction SubSystem: '<S49>/Joint3' incorporates:
     *  ActionPort: '<S63>/Action Port'
     */
    /* DataStoreRead: '<S63>/Data Store Read5' */
    localB->Merge = Motor_Position[2];

    /* End of Outputs for SubSystem: '<S49>/Joint3' */
    break;

   case 4L:
    /* Outputs for IfAction SubSystem: '<S49>/Joint4' incorporates:
     *  ActionPort: '<S64>/Action Port'
     */
    /* DataStoreRead: '<S64>/Data Store Read5' */
    localB->Merge = Motor_Position[3];

    /* End of Outputs for SubSystem: '<S49>/Joint4' */
    break;

   case 5L:
    /* Outputs for IfAction SubSystem: '<S49>/Joint5' incorporates:
     *  ActionPort: '<S65>/Action Port'
     */
    /* DataStoreRead: '<S65>/Data Store Read5' */
    localB->Merge = Motor_Position[4];

    /* End of Outputs for SubSystem: '<S49>/Joint5' */
    break;

   case 6L:
    /* Outputs for IfAction SubSystem: '<S49>/Joint6' incorporates:
     *  ActionPort: '<S66>/Action Port'
     */
    /* DataStoreRead: '<S66>/Data Store Read5' */
    localB->Merge = Motor_Position[5];

    /* End of Outputs for SubSystem: '<S49>/Joint6' */
    break;
  }

  /* End of SwitchCase: '<S49>/Switch Case' */

  /* MultiPortSwitch: '<S49>/Multiport Switch' incorporates:
   *  Constant: '<S49>/Constant1'
   *  Constant: '<S49>/Constant3'
   *  Constant: '<S49>/Constant4'
   */
  if ((int16_T)rtp_JJoint == 3) {
    tmp = localP->Constant3_Value;
  } else {
    tmp = localP->Constant4_Value;
  }

  /* End of MultiPortSwitch: '<S49>/Multiport Switch' */

  /* DataTypeConversion: '<S49>/Data Type Conversion1' incorporates:
   *  Constant: '<S49>/Constant'
   *  DataTypeConversion: '<S49>/Data Type Conversion2'
   *  Gain: '<S49>/Gain1'
   *  Gain: '<S49>/Gain4'
   *  Product: '<S49>/Product'
   *  Sum: '<S49>/Add'
   */
  *rty_Angle = localP->Gain1_Gain * (real_T)localB->Merge - localP->Gain4_Gain *
    rtp_InitAngle * tmp;
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
void PID_ThreeJoi_GetAngleSpeed_Init(B_GetAngleSpeed_PID_ThreeJoin_T *localB,
  P_GetAngleSpeed_PID_ThreeJoin_T *localP)
{
  /* SystemInitialize for Merge: '<S55>/Merge1' */
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
void PID_ThreeJoints_GetAngleSpeed(real_T *rty_Velcity,
  B_GetAngleSpeed_PID_ThreeJoin_T *localB, P_GetAngleSpeed_PID_ThreeJoin_T
  *localP, real_T rtp_JJoint)
{
  real_T tmp;

  /* SwitchCase: '<S55>/Switch Case' incorporates:
   *  Constant: '<S55>/Constant1'
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
    /* Outputs for IfAction SubSystem: '<S55>/Joint1' incorporates:
     *  ActionPort: '<S97>/Action Port'
     */
    /* DataStoreRead: '<S97>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[0];

    /* End of Outputs for SubSystem: '<S55>/Joint1' */
    break;

   case 2L:
    /* Outputs for IfAction SubSystem: '<S55>/Joint2' incorporates:
     *  ActionPort: '<S98>/Action Port'
     */
    /* DataStoreRead: '<S98>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[1];

    /* End of Outputs for SubSystem: '<S55>/Joint2' */
    break;

   case 3L:
    /* Outputs for IfAction SubSystem: '<S55>/Joint3' incorporates:
     *  ActionPort: '<S99>/Action Port'
     */
    /* DataStoreRead: '<S99>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[2];

    /* End of Outputs for SubSystem: '<S55>/Joint3' */
    break;

   case 4L:
    /* Outputs for IfAction SubSystem: '<S55>/Joint4' incorporates:
     *  ActionPort: '<S100>/Action Port'
     */
    /* DataStoreRead: '<S100>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[3];

    /* End of Outputs for SubSystem: '<S55>/Joint4' */
    break;

   case 5L:
    /* Outputs for IfAction SubSystem: '<S55>/Joint5' incorporates:
     *  ActionPort: '<S101>/Action Port'
     */
    /* DataStoreRead: '<S101>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[4];

    /* End of Outputs for SubSystem: '<S55>/Joint5' */
    break;

   case 6L:
    /* Outputs for IfAction SubSystem: '<S55>/Joint6' incorporates:
     *  ActionPort: '<S102>/Action Port'
     */
    /* DataStoreRead: '<S102>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[5];

    /* End of Outputs for SubSystem: '<S55>/Joint6' */
    break;
  }

  /* End of SwitchCase: '<S55>/Switch Case' */

  /* Gain: '<S55>/Gain9' incorporates:
   *  DataTypeConversion: '<S55>/Data Type Conversion3'
   *  Gain: '<S55>/Gain3'
   */
  *rty_Velcity = localP->Gain3_Gain * (real_T)localB->Merge1 *
    localP->Gain9_Gain;
}

/* System initialize for atomic system: '<S1>/GetAngleVelocity' */
void GetAngleVelocity_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngleSpeed' */
  PID_ThreeJoi_GetAngleSpeed_Init(&PID_ThreeJoints_B.GetAngleSpeed,
    &PID_ThreeJoints_P.GetAngleSpeed);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngleSpeed' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngleSpeed1' */
  PID_ThreeJoi_GetAngleSpeed_Init(&PID_ThreeJoints_B.GetAngleSpeed1,
    &PID_ThreeJoints_P.GetAngleSpeed1);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngleSpeed1' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngleSpeed2' */
  PID_ThreeJoi_GetAngleSpeed_Init(&PID_ThreeJoints_B.GetAngleSpeed2,
    &PID_ThreeJoints_P.GetAngleSpeed2);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngleSpeed2' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngleSpeed3' */
  PID_ThreeJoi_GetAngleSpeed_Init(&PID_ThreeJoints_B.GetAngleSpeed3,
    &PID_ThreeJoints_P.GetAngleSpeed3);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngleSpeed3' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngleSpeed4' */
  PID_ThreeJoi_GetAngleSpeed_Init(&PID_ThreeJoints_B.GetAngleSpeed4,
    &PID_ThreeJoints_P.GetAngleSpeed4);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngleSpeed4' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngleSpeed5' */
  PID_ThreeJoi_GetAngleSpeed_Init(&PID_ThreeJoints_B.GetAngleSpeed5,
    &PID_ThreeJoints_P.GetAngleSpeed5);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngleSpeed5' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngle' */
  PID_ThreeJoints_GetAngle_Init(&PID_ThreeJoints_B.GetAngle,
    &PID_ThreeJoints_P.GetAngle);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngle' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngle1' */
  PID_ThreeJoints_GetAngle_Init(&PID_ThreeJoints_B.GetAngle1,
    &PID_ThreeJoints_P.GetAngle1);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngle1' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngle2' */
  PID_ThreeJoints_GetAngle_Init(&PID_ThreeJoints_B.GetAngle2,
    &PID_ThreeJoints_P.GetAngle2);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngle2' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngle3' */
  PID_ThreeJoints_GetAngle_Init(&PID_ThreeJoints_B.GetAngle3,
    &PID_ThreeJoints_P.GetAngle3);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngle3' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngle4' */
  PID_ThreeJoints_GetAngle_Init(&PID_ThreeJoints_B.GetAngle4,
    &PID_ThreeJoints_P.GetAngle4);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngle4' */

  /* SystemInitialize for Atomic SubSystem: '<S8>/GetAngle5' */
  PID_ThreeJoints_GetAngle_Init(&PID_ThreeJoints_B.GetAngle5,
    &PID_ThreeJoints_P.GetAngle5);

  /* End of SystemInitialize for SubSystem: '<S8>/GetAngle5' */
}

/* Output and update for atomic system: '<S1>/GetAngleVelocity' */
void GetAngleVelocity(void)
{
  /* Outputs for Atomic SubSystem: '<S8>/GetAngleSpeed' */
  PID_ThreeJoints_GetAngleSpeed(&PID_ThreeJoints_B.e_o3,
    &PID_ThreeJoints_B.GetAngleSpeed, &PID_ThreeJoints_P.GetAngleSpeed,
    PID_ThreeJoints_P.GetAngleSpeed_JJoint);

  /* End of Outputs for SubSystem: '<S8>/GetAngleSpeed' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngleSpeed1' */
  PID_ThreeJoints_GetAngleSpeed(&PID_ThreeJoints_B.Sum1_o,
    &PID_ThreeJoints_B.GetAngleSpeed1, &PID_ThreeJoints_P.GetAngleSpeed1,
    PID_ThreeJoints_P.GetAngleSpeed1_JJoint);

  /* End of Outputs for SubSystem: '<S8>/GetAngleSpeed1' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngleSpeed2' */
  PID_ThreeJoints_GetAngleSpeed(&PID_ThreeJoints_B.Sum1_g,
    &PID_ThreeJoints_B.GetAngleSpeed2, &PID_ThreeJoints_P.GetAngleSpeed2,
    PID_ThreeJoints_P.GetAngleSpeed2_JJoint);

  /* End of Outputs for SubSystem: '<S8>/GetAngleSpeed2' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngleSpeed3' */
  PID_ThreeJoints_GetAngleSpeed(&PID_ThreeJoints_B.u,
    &PID_ThreeJoints_B.GetAngleSpeed3, &PID_ThreeJoints_P.GetAngleSpeed3,
    PID_ThreeJoints_P.GetAngleSpeed3_JJoint);

  /* End of Outputs for SubSystem: '<S8>/GetAngleSpeed3' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngleSpeed4' */
  PID_ThreeJoints_GetAngleSpeed(&PID_ThreeJoints_B.Add2,
    &PID_ThreeJoints_B.GetAngleSpeed4, &PID_ThreeJoints_P.GetAngleSpeed4,
    PID_ThreeJoints_P.GetAngleSpeed4_JJoint);

  /* End of Outputs for SubSystem: '<S8>/GetAngleSpeed4' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngleSpeed5' */
  PID_ThreeJoints_GetAngleSpeed(&PID_ThreeJoints_B.Add10,
    &PID_ThreeJoints_B.GetAngleSpeed5, &PID_ThreeJoints_P.GetAngleSpeed5,
    PID_ThreeJoints_P.GetAngleSpeed5_JJoint);

  /* End of Outputs for SubSystem: '<S8>/GetAngleSpeed5' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngle' */
  PID_ThreeJoints_GetAngle(&PID_ThreeJoints_B.Add7, &PID_ThreeJoints_B.GetAngle,
    &PID_ThreeJoints_P.GetAngle, PID_ThreeJoints_P.GetAngle_JJoint,
    PID_ThreeJoints_P.GetAngle_InitAngle);

  /* End of Outputs for SubSystem: '<S8>/GetAngle' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngle1' */
  PID_ThreeJoints_GetAngle(&PID_ThreeJoints_B.Add5, &PID_ThreeJoints_B.GetAngle1,
    &PID_ThreeJoints_P.GetAngle1, PID_ThreeJoints_P.GetAngle1_JJoint,
    PID_ThreeJoints_P.GetAngle1_InitAngle);

  /* End of Outputs for SubSystem: '<S8>/GetAngle1' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngle2' */
  PID_ThreeJoints_GetAngle(&PID_ThreeJoints_B.Add13,
    &PID_ThreeJoints_B.GetAngle2, &PID_ThreeJoints_P.GetAngle2,
    PID_ThreeJoints_P.GetAngle2_JJoint, PID_ThreeJoints_P.GetAngle2_InitAngle);

  /* End of Outputs for SubSystem: '<S8>/GetAngle2' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngle3' */
  PID_ThreeJoints_GetAngle(&PID_ThreeJoints_B.Add1, &PID_ThreeJoints_B.GetAngle3,
    &PID_ThreeJoints_P.GetAngle3, PID_ThreeJoints_P.GetAngle3_JJoint,
    PID_ThreeJoints_P.GetAngle3_InitAngle);

  /* End of Outputs for SubSystem: '<S8>/GetAngle3' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngle4' */
  PID_ThreeJoints_GetAngle(&PID_ThreeJoints_B.Sum1, &PID_ThreeJoints_B.GetAngle4,
    &PID_ThreeJoints_P.GetAngle4, PID_ThreeJoints_P.GetAngle4_JJoint,
    PID_ThreeJoints_P.GetAngle4_InitAngle);

  /* End of Outputs for SubSystem: '<S8>/GetAngle4' */

  /* Outputs for Atomic SubSystem: '<S8>/GetAngle5' */
  PID_ThreeJoints_GetAngle(&PID_ThreeJoints_B.Sum1_c,
    &PID_ThreeJoints_B.GetAngle5, &PID_ThreeJoints_P.GetAngle5,
    PID_ThreeJoints_P.GetAngle5_JJoint, PID_ThreeJoints_P.GetAngle5_InitAngle);

  /* End of Outputs for SubSystem: '<S8>/GetAngle5' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
