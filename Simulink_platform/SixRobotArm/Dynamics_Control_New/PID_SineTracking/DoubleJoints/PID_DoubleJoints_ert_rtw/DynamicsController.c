/*
 * File: DynamicsController.c
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

#include "DynamicsController.h"

/* Include model header file for global data */
#include "PID_DoubleJoints.h"
#include "PID_DoubleJoints_private.h"

/* System initialize for atomic system: '<Root>/DynamicsController' */
void DynamicsController_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S1>/GetAngleVelocity' */
  GetAngleVelocity_Init();

  /* End of SystemInitialize for SubSystem: '<S1>/GetAngleVelocity' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/�ؽ�һ�����źŷ�����' */
  SineSignal_Init(&PID_DoubleJoints_B.Product_e, &PID_DoubleJoints_B.Sum5_i,
                  &PID_DoubleJoints_DW.u_l, &PID_DoubleJoints_P.u_l);

  /* End of SystemInitialize for SubSystem: '<S1>/�ؽ�һ�����źŷ�����' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/�ؽڶ������źŷ�����' */
  SineSignal_Init(&PID_DoubleJoints_B.Product_i, &PID_DoubleJoints_B.Sum5_n,
                  &PID_DoubleJoints_DW.u_j, &PID_DoubleJoints_P.u_j);

  /* End of SystemInitialize for SubSystem: '<S1>/�ؽڶ������źŷ�����' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/�ؽ��������źŷ�����' */
  SineSignal_Init(&PID_DoubleJoints_B.Product_c, &PID_DoubleJoints_B.Sum5_m,
                  &PID_DoubleJoints_DW.u_a, &PID_DoubleJoints_P.u_a);

  /* End of SystemInitialize for SubSystem: '<S1>/�ؽ��������źŷ�����' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/�ؽ��������źŷ�����' */
  SineSignal_Init(&PID_DoubleJoints_B.Product, &PID_DoubleJoints_B.Sum5,
                  &PID_DoubleJoints_DW.u_e, &PID_DoubleJoints_P.u_e);

  /* End of SystemInitialize for SubSystem: '<S1>/�ؽ��������źŷ�����' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/�ؽ��������źŷ�����' */
  SineSignal_Init(&PID_DoubleJoints_B.Product_f, &PID_DoubleJoints_B.Sum5_c,
                  &PID_DoubleJoints_DW.u_d, &PID_DoubleJoints_P.u_d);

  /* End of SystemInitialize for SubSystem: '<S1>/�ؽ��������źŷ�����' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/�ؽ��������źŷ�����' */
  SineSignal_Init(&PID_DoubleJoints_B.Product_m, &PID_DoubleJoints_B.Sum5_l,
                  &PID_DoubleJoints_DW.u_k, &PID_DoubleJoints_P.u_k);

  /* End of SystemInitialize for SubSystem: '<S1>/�ؽ��������źŷ�����' */

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

  /* Start for Atomic SubSystem: '<S1>/�ؽ�һ�����źŷ�����' */
  SineSignal_Start(&PID_DoubleJoints_DW.u_l, &PID_DoubleJoints_P.u_l);

  /* End of Start for SubSystem: '<S1>/�ؽ�һ�����źŷ�����' */

  /* Start for Atomic SubSystem: '<S1>/�ؽڶ������źŷ�����' */
  SineSignal_Start(&PID_DoubleJoints_DW.u_j, &PID_DoubleJoints_P.u_j);

  /* End of Start for SubSystem: '<S1>/�ؽڶ������źŷ�����' */

  /* Start for Atomic SubSystem: '<S1>/�ؽ��������źŷ�����' */
  SineSignal_Start(&PID_DoubleJoints_DW.u_a, &PID_DoubleJoints_P.u_a);

  /* End of Start for SubSystem: '<S1>/�ؽ��������źŷ�����' */

  /* Start for Atomic SubSystem: '<S1>/�ؽ��������źŷ�����' */
  SineSignal_Start(&PID_DoubleJoints_DW.u_e, &PID_DoubleJoints_P.u_e);

  /* End of Start for SubSystem: '<S1>/�ؽ��������źŷ�����' */

  /* Start for Atomic SubSystem: '<S1>/�ؽ��������źŷ�����' */
  SineSignal_Start(&PID_DoubleJoints_DW.u_d, &PID_DoubleJoints_P.u_d);

  /* End of Start for SubSystem: '<S1>/�ؽ��������źŷ�����' */

  /* Start for Atomic SubSystem: '<S1>/�ؽ��������źŷ�����' */
  SineSignal_Start(&PID_DoubleJoints_DW.u_k, &PID_DoubleJoints_P.u_k);

  /* End of Start for SubSystem: '<S1>/�ؽ��������źŷ�����' */

  /* Start for Atomic SubSystem: '<S1>/DriveMotor' */
  DrivrMotor_Start();

  /* End of Start for SubSystem: '<S1>/DriveMotor' */
  for (i = 0; i < 6; i++) {
    /* Start for DataStoreMemory: '<S1>/�����ؽ���ת�� ����ĽǶ�' */
    qd[i] = PID_DoubleJoints_P._InitialValue[i];

    /* Start for DataStoreMemory: '<S1>/�����ؽ���ת�Ӳɼ� ����ʵ�ʽǶ�' */
    q[i] = PID_DoubleJoints_P._InitialValue_h[i];

    /* Start for DataStoreMemory: '<S1>/�����ؽ���ת�Ӳɼ� ����ʵ�ʽ��ٶ�' */
    dq[i] = PID_DoubleJoints_P._InitialValue_m[i];

    /* Start for DataStoreMemory: '<S1>/�����ؽڵ���ת�� λ�ø������' */
    e[i] = PID_DoubleJoints_P._InitialValue_hw[i];
  }

  /* Start for DataStoreMemory: '<S1>/���������ؽ� �˶�������' */
  for (i = 0; i < 12; i++) {
    Tau[i] = PID_DoubleJoints_P._InitialValue_j[i];
  }

  /* End of Start for DataStoreMemory: '<S1>/���������ؽ� �˶�������' */
}

/* Output and update for atomic system: '<Root>/DynamicsController' */
void DynamicsController(void)
{
  int16_T i;

  /* Outputs for Atomic SubSystem: '<S1>/GetAngleVelocity' */
  GetAngleVelocity();

  /* End of Outputs for SubSystem: '<S1>/GetAngleVelocity' */

  /* DataStoreWrite: '<S1>/���ؽڽǶ�' */
  q[0] = PID_DoubleJoints_B.Saturation2;
  q[1] = PID_DoubleJoints_B.Saturation1;
  q[2] = PID_DoubleJoints_B.Saturation3;
  q[3] = PID_DoubleJoints_B.Saturation4;
  q[4] = PID_DoubleJoints_B.Saturation5;
  q[5] = PID_DoubleJoints_B.Sum1;

  /* DataStoreWrite: '<S1>/���ؽڽ��ٶ�' */
  dq[0] = PID_DoubleJoints_B.Sum1_g;
  dq[1] = PID_DoubleJoints_B.Sum1_c;
  dq[2] = PID_DoubleJoints_B.Sum1_o;
  dq[3] = PID_DoubleJoints_B.Sum1_ge;
  dq[4] = PID_DoubleJoints_B.u;
  dq[5] = PID_DoubleJoints_B.Saturation6;

  /* Outputs for Atomic SubSystem: '<S1>/�ؽ�һ�����źŷ�����' */
  /* DataStoreRead: '<S1>/ʹ���ź�1' incorporates:
   *  DataStoreRead: '<S1>/q1'
   */
  SineSignal(J1[0], q[0], &PID_DoubleJoints_B.Product_e,
             &PID_DoubleJoints_B.Sum5_i, &PID_DoubleJoints_DW.u_l,
             &PID_DoubleJoints_P.u_l);

  /* End of Outputs for SubSystem: '<S1>/�ؽ�һ�����źŷ�����' */

  /* Outputs for Atomic SubSystem: '<S1>/�ؽڶ������źŷ�����' */
  /* DataStoreRead: '<S1>/ʹ���ź�2' incorporates:
   *  DataStoreRead: '<S1>/q2'
   */
  SineSignal(J2[0], q[1], &PID_DoubleJoints_B.Product_i,
             &PID_DoubleJoints_B.Sum5_n, &PID_DoubleJoints_DW.u_j,
             &PID_DoubleJoints_P.u_j);

  /* End of Outputs for SubSystem: '<S1>/�ؽڶ������źŷ�����' */

  /* Outputs for Atomic SubSystem: '<S1>/�ؽ��������źŷ�����' */
  /* DataStoreRead: '<S1>/ʹ���ź�3' incorporates:
   *  DataStoreRead: '<S1>/q3'
   */
  SineSignal(J2[0], q[2], &PID_DoubleJoints_B.Product_c,
             &PID_DoubleJoints_B.Sum5_m, &PID_DoubleJoints_DW.u_a,
             &PID_DoubleJoints_P.u_a);

  /* End of Outputs for SubSystem: '<S1>/�ؽ��������źŷ�����' */

  /* Outputs for Atomic SubSystem: '<S1>/�ؽ��������źŷ�����' */
  /* DataStoreRead: '<S1>/ʹ���ź�4' incorporates:
   *  DataStoreRead: '<S1>/q4'
   */
  SineSignal(J4[0], q[3], &PID_DoubleJoints_B.Product, &PID_DoubleJoints_B.Sum5,
             &PID_DoubleJoints_DW.u_e, &PID_DoubleJoints_P.u_e);

  /* End of Outputs for SubSystem: '<S1>/�ؽ��������źŷ�����' */

  /* Outputs for Atomic SubSystem: '<S1>/�ؽ��������źŷ�����' */
  /* DataStoreRead: '<S1>/ʹ���ź�5' incorporates:
   *  DataStoreRead: '<S1>/q5'
   */
  SineSignal(J5[0], q[4], &PID_DoubleJoints_B.Product_f,
             &PID_DoubleJoints_B.Sum5_c, &PID_DoubleJoints_DW.u_d,
             &PID_DoubleJoints_P.u_d);

  /* End of Outputs for SubSystem: '<S1>/�ؽ��������źŷ�����' */

  /* Outputs for Atomic SubSystem: '<S1>/�ؽ��������źŷ�����' */
  /* DataStoreRead: '<S1>/ʹ���ź�6' incorporates:
   *  DataStoreRead: '<S1>/q6'
   */
  SineSignal(J6[0], q[5], &PID_DoubleJoints_B.Product_m,
             &PID_DoubleJoints_B.Sum5_l, &PID_DoubleJoints_DW.u_k,
             &PID_DoubleJoints_P.u_k);

  /* End of Outputs for SubSystem: '<S1>/�ؽ��������źŷ�����' */

  /* DataStoreWrite: '<S1>/Data Store Write7' */
  e[0L] = PID_DoubleJoints_B.Sum5_i;

  /* DataStoreWrite: '<S1>/Data Store Write8' */
  e[1L] = PID_DoubleJoints_B.Sum5_n;

  /* DataStoreWrite: '<S1>/Data Store Write10' */
  e[2L] = PID_DoubleJoints_B.Sum5_m;

  /* DataStoreWrite: '<S1>/Data Store Write12' */
  e[3L] = PID_DoubleJoints_B.Sum5;

  /* DataStoreWrite: '<S1>/Data Store Write14' */
  e[4L] = PID_DoubleJoints_B.Sum5_c;

  /* DataStoreWrite: '<S1>/Data Store Write16' */
  e[5L] = PID_DoubleJoints_B.Sum5_l;

  /* DataStoreRead: '<S1>/e' */
  PID_DoubleJoints_B.Sum1 = e[0];
  PID_DoubleJoints_B.Sum1_g = e[1];
  PID_DoubleJoints_B.Sum1_c = e[2];
  PID_DoubleJoints_B.Sum1_o = e[3];
  PID_DoubleJoints_B.Sum1_ge = e[4];
  PID_DoubleJoints_B.u = e[5];

  /* Outputs for Atomic SubSystem: '<S1>/PID_Controller' */
  PID_Controller();

  /* End of Outputs for SubSystem: '<S1>/PID_Controller' */

  /* Outputs for Atomic SubSystem: '<S1>/Compensate' */
  Compensate();

  /* End of Outputs for SubSystem: '<S1>/Compensate' */

  /* DataStoreWrite: '<S1>/Data Store Write3' */
  Tau[0] = PID_DoubleJoints_B.Saturation6;
  Tau[1] = PID_DoubleJoints_B.Sum1;
  Tau[2] = PID_DoubleJoints_B.Sum1_g;
  Tau[3] = PID_DoubleJoints_B.Sum1_c;
  Tau[4] = PID_DoubleJoints_B.Sum1_o;
  Tau[5] = PID_DoubleJoints_B.Sum1_ge;

  /* DataStoreWrite: '<S1>/Data Store Write4' */
  Tau[6] = PID_DoubleJoints_B.Saturation4;
  Tau[7] = PID_DoubleJoints_B.Saturation2;
  Tau[8] = PID_DoubleJoints_B.Saturation1;
  Tau[9] = PID_DoubleJoints_B.u;
  Tau[10] = PID_DoubleJoints_B.Saturation3;
  Tau[11] = PID_DoubleJoints_B.Saturation5;
  for (i = 0; i < 6; i++) {
    /* Sum: '<S1>/Add' incorporates:
     *  DataStoreRead: '<S1>/Tau1~6_1'
     *  DataStoreRead: '<S1>/Tau1~6_2'
     */
    PID_DoubleJoints_B.Add[i] = Tau[6 + i] + Tau[i];

    /* DataStoreWrite: '<S1>/��λ����ش���1~6��������3' */
    Send_GUIdata[(int32_T)(i + 12)] = PID_DoubleJoints_B.Add[i];
  }

  /* DataStoreWrite: '<S1>/��λ����ش���1~6��������1' incorporates:
   *  DataStoreRead: '<S1>/q1~6'
   *  Gain: '<S1>/Gain5'
   *  Gain: '<S1>/Gain7'
   */
  for (i = 0; i < 6; i++) {
    Send_GUIdata[(int32_T)i] = PID_DoubleJoints_P.Gain5_Gain_l * q[i] *
      PID_DoubleJoints_P.Gain7_Gain;
  }

  /* End of DataStoreWrite: '<S1>/��λ����ش���1~6��������1' */

  /* DataStoreWrite: '<S1>/��λ����ش���1~6��������2' incorporates:
   *  DataStoreRead: '<S1>/e1~6'
   *  Gain: '<S1>/Gain6'
   *  Gain: '<S1>/Gain8'
   */
  for (i = 0; i < 6; i++) {
    Send_GUIdata[(int32_T)(i + 6)] = PID_DoubleJoints_P.Gain6_Gain * e[i] *
      PID_DoubleJoints_P.Gain8_Gain;
  }

  /* End of DataStoreWrite: '<S1>/��λ����ش���1~6��������2' */

  /* DataStoreRead: '<S1>/�л�������ģʽ ��ʹ���ź�' */
  PID_DoubleJoints_B.u = J7[0];

  /* Outputs for Atomic SubSystem: '<S1>/DriveMotor' */
  DrivrMotor();

  /* End of Outputs for SubSystem: '<S1>/DriveMotor' */

  /* DataStoreWrite: '<S1>/Data Store Write6' */
  qd[0L] = PID_DoubleJoints_B.Product_e;

  /* DataStoreWrite: '<S1>/Data Store Write9' */
  qd[1L] = PID_DoubleJoints_B.Product_i;

  /* DataStoreWrite: '<S1>/Data Store Write11' */
  qd[2L] = PID_DoubleJoints_B.Product_c;

  /* DataStoreWrite: '<S1>/Data Store Write13' */
  qd[3L] = PID_DoubleJoints_B.Product;

  /* DataStoreWrite: '<S1>/Data Store Write15' */
  qd[4L] = PID_DoubleJoints_B.Product_f;

  /* DataStoreWrite: '<S1>/Data Store Write17' */
  qd[5L] = PID_DoubleJoints_B.Product_m;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
