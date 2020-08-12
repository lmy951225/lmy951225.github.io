/*
 * File: DynamicsController.c
 *
 * Code generated for Simulink model 'ZeroForceDrag_DoubleJoints'.
 *
 * Model version                  : 1.147
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jan  7 17:09:50 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DynamicsController.h"

/* Include model header file for global data */
#include "ZeroForceDrag_DoubleJoints.h"
#include "ZeroForceDrag_DoubleJoints_private.h"

/* System initialize for atomic system: '<Root>/DynamicCalculation' */
void DynamicsController_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S1>/GetAngleVelocity' */
  GetAngleVelocity_Init();

  /* End of SystemInitialize for SubSystem: '<S1>/GetAngleVelocity' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/DriveMotor' */
  DrivrMotor_Init();

  /* End of SystemInitialize for SubSystem: '<S1>/DriveMotor' */
}

/* Start for atomic system: '<Root>/DynamicCalculation' */
void DynamicsController_Start(void)
{
  int16_T i;

  /* Start for Atomic SubSystem: '<S1>/DriveMotor' */
  DrivrMotor_Start();

  /* End of Start for SubSystem: '<S1>/DriveMotor' */
  for (i = 0; i < 6; i++) {
    /* Start for DataStoreMemory: '<S1>/�����ؽ���ת�Ӳɼ� ����ʵ�ʽǶ�' */
    q[i] = ZeroForceDrag_DoubleJoints_P._InitialValue[i];

    /* Start for DataStoreMemory: '<S1>/�����ؽ���ת�Ӳɼ� ����ʵ�ʽ��ٶ�' */
    dq[i] = ZeroForceDrag_DoubleJoints_P._InitialValue_p[i];

    /* Start for DataStoreMemory: '<S1>/���������ؽ� �˶�������' */
    Tau[i] = ZeroForceDrag_DoubleJoints_P._InitialValue_n[i];
  }
}

/* Output and update for atomic system: '<Root>/DynamicCalculation' */
void DynamicsController(void)
{
  int16_T i;

  /* Outputs for Atomic SubSystem: '<S1>/GetAngleVelocity' */
  GetAngleVelocity();

  /* End of Outputs for SubSystem: '<S1>/GetAngleVelocity' */

  /* DataStoreWrite: '<S1>/���ؽڽǶ�' */
  q[0] = ZeroForceDrag_DoubleJoints_B.Saturation2;
  q[1] = ZeroForceDrag_DoubleJoints_B.Saturation1;
  q[2] = ZeroForceDrag_DoubleJoints_B.Saturation3;
  q[3] = ZeroForceDrag_DoubleJoints_B.Saturation4;
  q[4] = ZeroForceDrag_DoubleJoints_B.Saturation5;
  q[5] = ZeroForceDrag_DoubleJoints_B.Saturation6;

  /* DataStoreWrite: '<S1>/��λ����ش���1~6��������1' incorporates:
   *  DataStoreRead: '<S1>/q'
   *  Gain: '<S1>/Gain'
   */
  for (i = 0; i < 6; i++) {
    Send_GUIdata[(int32_T)i] = ZeroForceDrag_DoubleJoints_P.Gain_Gain * q[i];
  }

  /* End of DataStoreWrite: '<S1>/��λ����ش���1~6��������1' */

  /* DataStoreWrite: '<S1>/���ؽڽ��ٶ�' */
  dq[0] = ZeroForceDrag_DoubleJoints_B.Gain9_b;
  dq[1] = ZeroForceDrag_DoubleJoints_B.Gain9_e;
  dq[2] = ZeroForceDrag_DoubleJoints_B.Gain9_c4;
  dq[3] = ZeroForceDrag_DoubleJoints_B.Gain9_c;
  dq[4] = ZeroForceDrag_DoubleJoints_B.Gain9;
  dq[5] = ZeroForceDrag_DoubleJoints_B.u;

  /* Outputs for Atomic SubSystem: '<S1>/Compensate' */
  Compensate();

  /* End of Outputs for SubSystem: '<S1>/Compensate' */

  /* DataStoreWrite: '<S1>/Data Store Write3' */
  Tau[0L] = ZeroForceDrag_DoubleJoints_B.Saturation3;
  Tau[1L] = ZeroForceDrag_DoubleJoints_B.Saturation2;
  Tau[2L] = ZeroForceDrag_DoubleJoints_B.Saturation5;
  Tau[3L] = ZeroForceDrag_DoubleJoints_B.Saturation6;
  Tau[4L] = ZeroForceDrag_DoubleJoints_B.Saturation1;
  Tau[5L] = ZeroForceDrag_DoubleJoints_B.Saturation4;

  /* DataStoreWrite: '<S1>/��λ����ش���1~6��������2' incorporates:
   *  DataStoreRead: '<S1>/Tau1~6'
   */
  for (i = 0; i < 6; i++) {
    Send_GUIdata[(int32_T)(i + 6)] = Tau[i];
  }

  /* End of DataStoreWrite: '<S1>/��λ����ش���1~6��������2' */

  /* DataStoreRead: '<S1>/�л�������ģʽ ��ʹ���ź�' */
  ZeroForceDrag_DoubleJoints_B.u = J7[0];

  /* Outputs for Atomic SubSystem: '<S1>/DriveMotor' */
  DrivrMotor();

  /* End of Outputs for SubSystem: '<S1>/DriveMotor' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */