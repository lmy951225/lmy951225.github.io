/*
 * File: PID_Controller.c
 *
 * Code generated for Simulink model 'PID_SingleJoint'.
 *
 * Model version                  : 1.232
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan  8 10:12:26 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PID_Controller.h"

/* Include model header file for global data */
#include "PID_SingleJoint.h"
#include "PID_SingleJoint_private.h"

/*
 * System initialize for atomic system:
 *    '<S9>/PID_Controller1'
 *    '<S9>/PID_Controller2'
 *    '<S9>/PID_Controller3'
 *    '<S9>/PID_Controller4'
 *    '<S9>/PID_Controller5'
 *    '<S9>/PID_Controller6'
 */
void PID_Single_PID_Controller1_Init(DW_PID_Controller1_PID_Single_T *localDW,
  P_PID_Controller1_PID_SingleJ_T *localP)
{
  /* InitializeConditions for UnitDelay: '<S139>/UD'
   *
   * Block description for '<S139>/UD':
   *
   *  Store in Global RAM
   */
  localDW->UD_DSTATE = localP->DiscreteDerivative1_ICPrevScale;

  /* InitializeConditions for DiscreteIntegrator: '<S133>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_DSTATE = localP->DiscreteTimeIntegrator_IC;
}

/*
 * Output and update for atomic system:
 *    '<S9>/PID_Controller1'
 *    '<S9>/PID_Controller2'
 *    '<S9>/PID_Controller3'
 *    '<S9>/PID_Controller4'
 *    '<S9>/PID_Controller5'
 *    '<S9>/PID_Controller6'
 */
void PID_SingleJoint_PID_Controller1(real_T rtu_error, real_T rtu_KP, real_T
  rtu_KI, real_T rtu_KD, real_T *rty_Tau, DW_PID_Controller1_PID_Single_T
  *localDW, P_PID_Controller1_PID_SingleJ_T *localP)
{
  real_T rtb_TSamp;

  /* SampleTimeMath: '<S139>/TSamp' incorporates:
   *  Product: '<S133>/Product3'
   *
   * About '<S139>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = rtu_error * rtu_KD * localP->TSamp_WtEt;

  /* Sum: '<S133>/Sum1' incorporates:
   *  DiscreteIntegrator: '<S133>/Discrete-Time Integrator'
   *  Product: '<S133>/Product1'
   *  Sum: '<S139>/Diff'
   *  UnitDelay: '<S139>/UD'
   *
   * Block description for '<S139>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S139>/UD':
   *
   *  Store in Global RAM
   */
  *rty_Tau = (rtu_KP * rtu_error + localDW->DiscreteTimeIntegrator_DSTATE) +
    (rtb_TSamp - localDW->UD_DSTATE);

  /* Update for UnitDelay: '<S139>/UD'
   *
   * Block description for '<S139>/UD':
   *
   *  Store in Global RAM
   */
  localDW->UD_DSTATE = rtb_TSamp;

  /* Update for DiscreteIntegrator: '<S133>/Discrete-Time Integrator' incorporates:
   *  Product: '<S133>/Product2'
   */
  localDW->DiscreteTimeIntegrator_DSTATE += rtu_error * rtu_KI *
    localP->DiscreteTimeIntegrator_gainval;
  if (localDW->DiscreteTimeIntegrator_DSTATE >=
      localP->DiscreteTimeIntegrator_UpperSat) {
    localDW->DiscreteTimeIntegrator_DSTATE =
      localP->DiscreteTimeIntegrator_UpperSat;
  } else {
    if (localDW->DiscreteTimeIntegrator_DSTATE <=
        localP->DiscreteTimeIntegrator_LowerSat) {
      localDW->DiscreteTimeIntegrator_DSTATE =
        localP->DiscreteTimeIntegrator_LowerSat;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S133>/Discrete-Time Integrator' */
}

/* System initialize for atomic system: '<S1>/PID_Controller' */
void PID_Controller_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S9>/PID_Controller1' */
  PID_Single_PID_Controller1_Init(&DynamicsController_DW.PID_Controller1,
    &DynamicsController_P.PID_Controller1);

  /* End of SystemInitialize for SubSystem: '<S9>/PID_Controller1' */

  /* SystemInitialize for Atomic SubSystem: '<S9>/PID_Controller2' */
  PID_Single_PID_Controller1_Init(&DynamicsController_DW.PID_Controller2,
    &DynamicsController_P.PID_Controller2);

  /* End of SystemInitialize for SubSystem: '<S9>/PID_Controller2' */

  /* SystemInitialize for Atomic SubSystem: '<S9>/PID_Controller3' */
  PID_Single_PID_Controller1_Init(&DynamicsController_DW.PID_Controller3,
    &DynamicsController_P.PID_Controller3);

  /* End of SystemInitialize for SubSystem: '<S9>/PID_Controller3' */

  /* SystemInitialize for Atomic SubSystem: '<S9>/PID_Controller4' */
  PID_Single_PID_Controller1_Init(&DynamicsController_DW.PID_Controller4,
    &DynamicsController_P.PID_Controller4);

  /* End of SystemInitialize for SubSystem: '<S9>/PID_Controller4' */

  /* SystemInitialize for Atomic SubSystem: '<S9>/PID_Controller5' */
  PID_Single_PID_Controller1_Init(&DynamicsController_DW.PID_Controller5,
    &DynamicsController_P.PID_Controller5);

  /* End of SystemInitialize for SubSystem: '<S9>/PID_Controller5' */

  /* SystemInitialize for Atomic SubSystem: '<S9>/PID_Controller6' */
  PID_Single_PID_Controller1_Init(&DynamicsController_DW.PID_Controller6,
    &DynamicsController_P.PID_Controller6);

  /* End of SystemInitialize for SubSystem: '<S9>/PID_Controller6' */
}

/* Output and update for atomic system: '<S1>/PID_Controller' */
void PID_Controller(void)
{
  /* Outputs for Atomic SubSystem: '<S9>/PID_Controller1' */

  /* DataStoreRead: '<S9>/KP1' incorporates:
   *  DataStoreRead: '<S9>/KD1'
   *  DataStoreRead: '<S9>/KI1'
   */
  PID_SingleJoint_PID_Controller1(DynamicsController_B.Sum1, J1[1], J1[2], J1[3],
    &DynamicsController_B.Saturation6, &DynamicsController_DW.PID_Controller1,
    &DynamicsController_P.PID_Controller1);

  /* End of Outputs for SubSystem: '<S9>/PID_Controller1' */

  /* Outputs for Atomic SubSystem: '<S9>/PID_Controller2' */

  /* DataStoreRead: '<S9>/KP2' incorporates:
   *  DataStoreRead: '<S9>/KD2'
   *  DataStoreRead: '<S9>/KI2'
   */
  PID_SingleJoint_PID_Controller1(DynamicsController_B.Sum1_g, J2[1], J2[2], J2
    [3], &DynamicsController_B.Sum1, &DynamicsController_DW.PID_Controller2,
    &DynamicsController_P.PID_Controller2);

  /* End of Outputs for SubSystem: '<S9>/PID_Controller2' */

  /* Outputs for Atomic SubSystem: '<S9>/PID_Controller3' */

  /* DataStoreRead: '<S9>/KP3' incorporates:
   *  DataStoreRead: '<S9>/KD3'
   *  DataStoreRead: '<S9>/KI3'
   */
  PID_SingleJoint_PID_Controller1(DynamicsController_B.Sum1_c, J3[1], J3[2], J3
    [3], &DynamicsController_B.Sum1_g, &DynamicsController_DW.PID_Controller3,
    &DynamicsController_P.PID_Controller3);

  /* End of Outputs for SubSystem: '<S9>/PID_Controller3' */

  /* Outputs for Atomic SubSystem: '<S9>/PID_Controller4' */

  /* DataStoreRead: '<S9>/KP4' incorporates:
   *  DataStoreRead: '<S9>/KD4'
   *  DataStoreRead: '<S9>/KI4'
   */
  PID_SingleJoint_PID_Controller1(DynamicsController_B.Sum1_o, J4[1], J4[2], J4
    [3], &DynamicsController_B.Sum1_c, &DynamicsController_DW.PID_Controller4,
    &DynamicsController_P.PID_Controller4);

  /* End of Outputs for SubSystem: '<S9>/PID_Controller4' */

  /* Outputs for Atomic SubSystem: '<S9>/PID_Controller5' */

  /* DataStoreRead: '<S9>/KP5' incorporates:
   *  DataStoreRead: '<S9>/KD5'
   *  DataStoreRead: '<S9>/KI5'
   */
  PID_SingleJoint_PID_Controller1(DynamicsController_B.Sum1_ge, J5[1], J5[2],
    J5[3], &DynamicsController_B.Sum1_o, &DynamicsController_DW.PID_Controller5,
    &DynamicsController_P.PID_Controller5);

  /* End of Outputs for SubSystem: '<S9>/PID_Controller5' */

  /* Outputs for Atomic SubSystem: '<S9>/PID_Controller6' */

  /* DataStoreRead: '<S9>/KP6' incorporates:
   *  DataStoreRead: '<S9>/KD6'
   *  DataStoreRead: '<S9>/KI6'
   */
  PID_SingleJoint_PID_Controller1(DynamicsController_B.u_f, J6[1], J6[2], J6[3],
    &DynamicsController_B.Sum1_ge, &DynamicsController_DW.PID_Controller6,
    &DynamicsController_P.PID_Controller6);

  /* End of Outputs for SubSystem: '<S9>/PID_Controller6' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
