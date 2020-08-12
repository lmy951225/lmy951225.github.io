/*
 * File: DynamicsController.c
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

#include "DynamicsController.h"

/* Include model header file for global data */
#include "ZeroForceDrag_SingleJoint.h"
#include "ZeroForceDrag_SingleJoint_private.h"

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
    /* Start for DataStoreMemory: '<S1>/�����ؽ���ת�Ӳɼ� ����ʵ�ʽǶ�-��ʼ�Ƕ�' */
    q[i] = ZeroForceDrag_SingleJoint_P._InitialValue[i];

    /* Start for DataStoreMemory: '<S1>/�����ؽ���ת�Ӳɼ� ����ʵ�ʽ��ٶ�' */
    dq[i] = ZeroForceDrag_SingleJoint_P._InitialValue_p[i];

    /* Start for DataStoreMemory: '<S1>/�������ؽ� ��ʼ�Ƕ�' */
    InitAngle[i] = ZeroForceDrag_SingleJoint_P._InitialValue_g[i];

    /* Start for DataStoreMemory: '<S1>/���������ؽ� �˶�������' */
    Tau[i] = ZeroForceDrag_SingleJoint_P._InitialValue_n[i];
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
  q[0] = ZeroForceDrag_SingleJoint_B.Saturation1;
  q[1] = ZeroForceDrag_SingleJoint_B.Saturation4;
  q[2] = ZeroForceDrag_SingleJoint_B.Saturation6;
  q[3] = ZeroForceDrag_SingleJoint_B.DataTypeConversion1_fj;
  q[4] = ZeroForceDrag_SingleJoint_B.DataTypeConversion1_f;
  q[5] = ZeroForceDrag_SingleJoint_B.DataTypeConversion1;

  /* DataStoreWrite: '<S1>/��λ����ش���1~6��������1' incorporates:
   *  DataStoreRead: '<S1>/q'
   *  Gain: '<S1>/Gain'
   */
  for (i = 0; i < 6; i++) {
    Send_GUIdata[(int32_T)i] = ZeroForceDrag_SingleJoint_P.Gain_Gain * q[i];
  }

  /* End of DataStoreWrite: '<S1>/��λ����ش���1~6��������1' */

  /* DataStoreWrite: '<S1>/�����ĸ��ؽ� ��ʼ�Ƕ�' */
  InitAngle[0] = ZeroForceDrag_SingleJoint_B.Saturation2;
  InitAngle[1] = ZeroForceDrag_SingleJoint_B.Saturation3;
  InitAngle[2] = ZeroForceDrag_SingleJoint_B.Saturation5;
  InitAngle[3] = ZeroForceDrag_SingleJoint_B.DataTypeConversion3_m;
  InitAngle[4] = ZeroForceDrag_SingleJoint_B.DataTypeConversion3_g;
  InitAngle[5] = ZeroForceDrag_SingleJoint_B.DataTypeConversion3;

  /* DataStoreWrite: '<S1>/���ؽڽ��ٶ�' */
  dq[0] = ZeroForceDrag_SingleJoint_B.Gain9_p;
  dq[1] = ZeroForceDrag_SingleJoint_B.Gain9_ed;
  dq[2] = ZeroForceDrag_SingleJoint_B.Gain9_e;
  dq[3] = ZeroForceDrag_SingleJoint_B.Gain9_j;
  dq[4] = ZeroForceDrag_SingleJoint_B.Gain9;
  dq[5] = ZeroForceDrag_SingleJoint_B.u;

  /* Outputs for Atomic SubSystem: '<S1>/Compensate' */
  Compensate();

  /* End of Outputs for SubSystem: '<S1>/Compensate' */

  /* DataStoreWrite: '<S1>/Data Store Write3' */
  Tau[0L] = ZeroForceDrag_SingleJoint_B.Saturation5;
  Tau[1L] = ZeroForceDrag_SingleJoint_B.Saturation2;
  Tau[2L] = ZeroForceDrag_SingleJoint_B.Saturation1;
  Tau[3L] = ZeroForceDrag_SingleJoint_B.Saturation3;
  Tau[4L] = ZeroForceDrag_SingleJoint_B.Saturation4;
  Tau[5L] = ZeroForceDrag_SingleJoint_B.Saturation6;

  /* DataStoreWrite: '<S1>/��λ����ش���1~6��������2' incorporates:
   *  DataStoreRead: '<S1>/Tau1~6'
   */
  for (i = 0; i < 6; i++) {
    Send_GUIdata[(int32_T)(i + 6)] = Tau[i];
  }

  /* End of DataStoreWrite: '<S1>/��λ����ش���1~6��������2' */

  /* DataStoreRead: '<S1>/�л�������ģʽ ��ʹ���ź�' */
  ZeroForceDrag_SingleJoint_B.u = J7[0];

  /* Outputs for Atomic SubSystem: '<S1>/DriveMotor' */
  DrivrMotor();

  /* End of Outputs for SubSystem: '<S1>/DriveMotor' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
