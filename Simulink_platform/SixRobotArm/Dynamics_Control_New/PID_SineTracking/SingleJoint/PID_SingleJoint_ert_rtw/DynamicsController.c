/*
 * File: DynamicsController.c
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

#include "DynamicsController.h"

/* Include model header file for global data */
#include "PID_SingleJoint.h"
#include "PID_SingleJoint_private.h"

/* Declare variables for internal data of system '<Root>/DynamicsController' */
B_DynamicsController_T DynamicsController_B;
DW_DynamicsController_T DynamicsController_DW;

/* System initialize for atomic system: '<Root>/DynamicsController' */
void DynamicsController_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S1>/GetAngleVelocity' */
  GetAngleVelocity_Init();

  /* End of SystemInitialize for SubSystem: '<S1>/GetAngleVelocity' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/关节一正弦信号发生器' */
  SineSignal_Init(&DynamicsController_B.Product_e, &DynamicsController_B.Sum5_i,
                  &DynamicsController_DW.u, &DynamicsController_P.u);

  /* End of SystemInitialize for SubSystem: '<S1>/关节一正弦信号发生器' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/关节二正弦信号发生器' */
  SineSignal_Init(&DynamicsController_B.Product_i, &DynamicsController_B.Sum5_n,
                  &DynamicsController_DW.u_j, &DynamicsController_P.u_j);

  /* End of SystemInitialize for SubSystem: '<S1>/关节二正弦信号发生器' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/关节三正弦信号发生器' */
  SineSignal_Init(&DynamicsController_B.Product_c, &DynamicsController_B.Sum5_m,
                  &DynamicsController_DW.u_a, &DynamicsController_P.u_a);

  /* End of SystemInitialize for SubSystem: '<S1>/关节三正弦信号发生器' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/关节四正弦信号发生器' */
  SineSignal_Init(&DynamicsController_B.Product, &DynamicsController_B.Sum5,
                  &DynamicsController_DW.u_e, &DynamicsController_P.u_e);

  /* End of SystemInitialize for SubSystem: '<S1>/关节四正弦信号发生器' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/关节五正弦信号发生器' */
  SineSignal_Init(&DynamicsController_B.Product_f, &DynamicsController_B.Sum5_c,
                  &DynamicsController_DW.u_d, &DynamicsController_P.u_d);

  /* End of SystemInitialize for SubSystem: '<S1>/关节五正弦信号发生器' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/关节六正弦信号发生器' */
  SineSignal_Init(&DynamicsController_B.Product_m, &DynamicsController_B.Sum5_l,
                  &DynamicsController_DW.u_k, &DynamicsController_P.u_k);

  /* End of SystemInitialize for SubSystem: '<S1>/关节六正弦信号发生器' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/PID_Controller' */
  PID_Controller_Init();

  /* End of SystemInitialize for SubSystem: '<S1>/PID_Controller' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/DriveMotor' */
  DrivrMotor_Init();

  /* End of SystemInitialize for SubSystem: '<S1>/DriveMotor' */
}

/* Start for atomic system: '<Root>/DynamicsController' */
void DynamicsController_Start(void)
{
  int16_T i;

  /* Start for Atomic SubSystem: '<S1>/关节一正弦信号发生器' */
  SineSignal_Start(&DynamicsController_DW.u, &DynamicsController_P.u);

  /* End of Start for SubSystem: '<S1>/关节一正弦信号发生器' */

  /* Start for Atomic SubSystem: '<S1>/关节二正弦信号发生器' */
  SineSignal_Start(&DynamicsController_DW.u_j, &DynamicsController_P.u_j);

  /* End of Start for SubSystem: '<S1>/关节二正弦信号发生器' */

  /* Start for Atomic SubSystem: '<S1>/关节三正弦信号发生器' */
  SineSignal_Start(&DynamicsController_DW.u_a, &DynamicsController_P.u_a);

  /* End of Start for SubSystem: '<S1>/关节三正弦信号发生器' */

  /* Start for Atomic SubSystem: '<S1>/关节四正弦信号发生器' */
  SineSignal_Start(&DynamicsController_DW.u_e, &DynamicsController_P.u_e);

  /* End of Start for SubSystem: '<S1>/关节四正弦信号发生器' */

  /* Start for Atomic SubSystem: '<S1>/关节五正弦信号发生器' */
  SineSignal_Start(&DynamicsController_DW.u_d, &DynamicsController_P.u_d);

  /* End of Start for SubSystem: '<S1>/关节五正弦信号发生器' */

  /* Start for Atomic SubSystem: '<S1>/关节六正弦信号发生器' */
  SineSignal_Start(&DynamicsController_DW.u_k, &DynamicsController_P.u_k);

  /* End of Start for SubSystem: '<S1>/关节六正弦信号发生器' */

  /* Start for Atomic SubSystem: '<S1>/DriveMotor' */
  DrivrMotor_Start();

  /* End of Start for SubSystem: '<S1>/DriveMotor' */
  for (i = 0; i < 6; i++) {
    /* Start for DataStoreMemory: '<S1>/各个关节内转子 理想的角度' */
    qd[i] = DynamicsController_P._InitialValue[i];

    /* Start for DataStoreMemory: '<S1>/各个关节内转子采集 到的实际角度' */
    q[i] = DynamicsController_P._InitialValue_h[i];

    /* Start for DataStoreMemory: '<S1>/各个关节内转子采集 到的实际角速度' */
    dq[i] = DynamicsController_P._InitialValue_m[i];

    /* Start for DataStoreMemory: '<S1>/各个关节的内转子 位置跟踪误差' */
    e[i] = DynamicsController_P._InitialValue_hw[i];
  }

  /* Start for DataStoreMemory: '<S1>/驱动各个关节 运动的力矩' */
  for (i = 0; i < 12; i++) {
    Tau[i] = DynamicsController_P._InitialValue_j[i];
  }

  /* End of Start for DataStoreMemory: '<S1>/驱动各个关节 运动的力矩' */
}

/* Output and update for atomic system: '<Root>/DynamicsController' */
void DynamicsController(void)
{
  int16_T i;

  /* Outputs for Atomic SubSystem: '<S1>/GetAngleVelocity' */
  GetAngleVelocity();

  /* End of Outputs for SubSystem: '<S1>/GetAngleVelocity' */

  /* DataStoreWrite: '<S1>/各关节角度' */
  q[0] = DynamicsController_B.Saturation2;
  q[1] = DynamicsController_B.Saturation1;
  q[2] = DynamicsController_B.Saturation3;
  q[3] = DynamicsController_B.Saturation4;
  q[4] = DynamicsController_B.Saturation5;
  q[5] = DynamicsController_B.Sum1;

  /* DataStoreWrite: '<S1>/各关节角速度' */
  dq[0] = DynamicsController_B.Sum1_g;
  dq[1] = DynamicsController_B.Sum1_c;
  dq[2] = DynamicsController_B.Sum1_o;
  dq[3] = DynamicsController_B.Sum1_ge;
  dq[4] = DynamicsController_B.u_f;
  dq[5] = DynamicsController_B.Saturation6;

  /* Outputs for Atomic SubSystem: '<S1>/关节一正弦信号发生器' */
  /* DataStoreRead: '<S1>/使能信号1' incorporates:
   *  DataStoreRead: '<S1>/q1'
   */
  SineSignal(J1[0], q[0], &DynamicsController_B.Product_e,
             &DynamicsController_B.Sum5_i, &DynamicsController_DW.u,
             &DynamicsController_P.u);

  /* End of Outputs for SubSystem: '<S1>/关节一正弦信号发生器' */

  /* Outputs for Atomic SubSystem: '<S1>/关节二正弦信号发生器' */
  /* DataStoreRead: '<S1>/使能信号2' incorporates:
   *  DataStoreRead: '<S1>/q2'
   */
  SineSignal(J2[0], q[1], &DynamicsController_B.Product_i,
             &DynamicsController_B.Sum5_n, &DynamicsController_DW.u_j,
             &DynamicsController_P.u_j);

  /* End of Outputs for SubSystem: '<S1>/关节二正弦信号发生器' */

  /* Outputs for Atomic SubSystem: '<S1>/关节三正弦信号发生器' */
  /* DataStoreRead: '<S1>/使能信号3' incorporates:
   *  DataStoreRead: '<S1>/q3'
   */
  SineSignal(J3[0], q[2], &DynamicsController_B.Product_c,
             &DynamicsController_B.Sum5_m, &DynamicsController_DW.u_a,
             &DynamicsController_P.u_a);

  /* End of Outputs for SubSystem: '<S1>/关节三正弦信号发生器' */

  /* Outputs for Atomic SubSystem: '<S1>/关节四正弦信号发生器' */
  /* DataStoreRead: '<S1>/使能信号4' incorporates:
   *  DataStoreRead: '<S1>/q4'
   */
  SineSignal(J4[0], q[3], &DynamicsController_B.Product,
             &DynamicsController_B.Sum5, &DynamicsController_DW.u_e,
             &DynamicsController_P.u_e);

  /* End of Outputs for SubSystem: '<S1>/关节四正弦信号发生器' */

  /* Outputs for Atomic SubSystem: '<S1>/关节五正弦信号发生器' */
  /* DataStoreRead: '<S1>/使能信号5' incorporates:
   *  DataStoreRead: '<S1>/q5'
   */
  SineSignal(J5[0], q[4], &DynamicsController_B.Product_f,
             &DynamicsController_B.Sum5_c, &DynamicsController_DW.u_d,
             &DynamicsController_P.u_d);

  /* End of Outputs for SubSystem: '<S1>/关节五正弦信号发生器' */

  /* Outputs for Atomic SubSystem: '<S1>/关节六正弦信号发生器' */
  /* DataStoreRead: '<S1>/使能信号6' incorporates:
   *  DataStoreRead: '<S1>/q6'
   */
  SineSignal(J6[0], q[5], &DynamicsController_B.Product_m,
             &DynamicsController_B.Sum5_l, &DynamicsController_DW.u_k,
             &DynamicsController_P.u_k);

  /* End of Outputs for SubSystem: '<S1>/关节六正弦信号发生器' */

  /* DataStoreWrite: '<S1>/Data Store Write7' */
  e[0L] = DynamicsController_B.Sum5_i;

  /* DataStoreWrite: '<S1>/Data Store Write8' */
  e[1L] = DynamicsController_B.Sum5_n;

  /* DataStoreWrite: '<S1>/Data Store Write10' */
  e[2L] = DynamicsController_B.Sum5_m;

  /* DataStoreWrite: '<S1>/Data Store Write12' */
  e[3L] = DynamicsController_B.Sum5;

  /* DataStoreWrite: '<S1>/Data Store Write14' */
  e[4L] = DynamicsController_B.Sum5_c;

  /* DataStoreWrite: '<S1>/Data Store Write16' */
  e[5L] = DynamicsController_B.Sum5_l;

  /* DataStoreRead: '<S1>/e' */
  DynamicsController_B.Sum1 = e[0];
  DynamicsController_B.Sum1_g = e[1];
  DynamicsController_B.Sum1_c = e[2];
  DynamicsController_B.Sum1_o = e[3];
  DynamicsController_B.Sum1_ge = e[4];
  DynamicsController_B.u_f = e[5];

  /* Outputs for Atomic SubSystem: '<S1>/PID_Controller' */
  PID_Controller();

  /* End of Outputs for SubSystem: '<S1>/PID_Controller' */

  /* Outputs for Atomic SubSystem: '<S1>/Compensate' */
  Compensate();

  /* End of Outputs for SubSystem: '<S1>/Compensate' */

  /* DataStoreWrite: '<S1>/Data Store Write3' */
  Tau[0] = DynamicsController_B.Saturation6;
  Tau[1] = DynamicsController_B.Sum1;
  Tau[2] = DynamicsController_B.Sum1_g;
  Tau[3] = DynamicsController_B.Sum1_c;
  Tau[4] = DynamicsController_B.Sum1_o;
  Tau[5] = DynamicsController_B.Sum1_ge;

  /* DataStoreWrite: '<S1>/Data Store Write4' */
  Tau[6] = DynamicsController_B.Saturation1;
  Tau[7] = DynamicsController_B.Saturation4;
  Tau[8] = DynamicsController_B.Saturation5;
  Tau[9] = DynamicsController_B.u_f;
  Tau[10] = DynamicsController_B.Saturation2;
  Tau[11] = DynamicsController_B.Saturation3;
  for (i = 0; i < 6; i++) {
    /* Sum: '<S1>/Add' incorporates:
     *  DataStoreRead: '<S1>/Tau1~6_1'
     *  DataStoreRead: '<S1>/Tau1~6_2'
     */
    DynamicsController_B.Add[i] = Tau[6 + i] + Tau[i];

    /* DataStoreWrite: '<S1>/上位机监控窗口1~6——参数3' */
    Send_GUIdata[(int32_T)(i + 12)] = DynamicsController_B.Add[i];
  }

  /* DataStoreWrite: '<S1>/上位机监控窗口1~6——参数1' incorporates:
   *  DataStoreRead: '<S1>/q1~6'
   *  Gain: '<S1>/Gain5'
   *  Gain: '<S1>/Gain7'
   */
  for (i = 0; i < 6; i++) {
    Send_GUIdata[(int32_T)i] = DynamicsController_P.Gain5_Gain_l * q[i] *
      DynamicsController_P.Gain7_Gain;
  }

  /* End of DataStoreWrite: '<S1>/上位机监控窗口1~6——参数1' */

  /* DataStoreWrite: '<S1>/上位机监控窗口1~6——参数2' incorporates:
   *  DataStoreRead: '<S1>/e1~6'
   *  Gain: '<S1>/Gain6'
   *  Gain: '<S1>/Gain8'
   */
  for (i = 0; i < 6; i++) {
    Send_GUIdata[(int32_T)(i + 6)] = DynamicsController_P.Gain6_Gain * e[i] *
      DynamicsController_P.Gain8_Gain;
  }

  /* End of DataStoreWrite: '<S1>/上位机监控窗口1~6——参数2' */

  /* DataStoreRead: '<S1>/切换到电流模式 的使能信号' */
  DynamicsController_B.u_f = J7[0];

  /* Outputs for Atomic SubSystem: '<S1>/DriveMotor' */
  DrivrMotor();

  /* End of Outputs for SubSystem: '<S1>/DriveMotor' */

  /* DataStoreWrite: '<S1>/Data Store Write6' */
  qd[0L] = DynamicsController_B.Product_e;

  /* DataStoreWrite: '<S1>/Data Store Write9' */
  qd[1L] = DynamicsController_B.Product_i;

  /* DataStoreWrite: '<S1>/Data Store Write11' */
  qd[2L] = DynamicsController_B.Product_c;

  /* DataStoreWrite: '<S1>/Data Store Write13' */
  qd[3L] = DynamicsController_B.Product;

  /* DataStoreWrite: '<S1>/Data Store Write15' */
  qd[4L] = DynamicsController_B.Product_f;

  /* DataStoreWrite: '<S1>/Data Store Write17' */
  qd[5L] = DynamicsController_B.Product_m;
}

/* Initialize for atomic system: '<Root>/DynamicsController' */
void DynamicsController_initialize(void)
{
  (void) memset((void *) &DynamicsController_B, 0,
                sizeof(B_DynamicsController_T));
  (void) memset((void *)&DynamicsController_DW, 0,
                sizeof(DW_DynamicsController_T));

  /* exported global states */
  (void) memset(&qd, 0,
                6U*sizeof(real_T));
  (void) memset(&q, 0,
                6U*sizeof(real_T));
  (void) memset(&dq, 0,
                6U*sizeof(real_T));
  (void) memset(&e, 0,
                6U*sizeof(real_T));
  (void) memset(&Tau, 0,
                12U*sizeof(real_T));
  TXD = 0U;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
