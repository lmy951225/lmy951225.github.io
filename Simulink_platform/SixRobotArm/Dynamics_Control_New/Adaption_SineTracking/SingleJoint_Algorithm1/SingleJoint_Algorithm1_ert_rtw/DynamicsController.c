/*
 * File: DynamicsController.c
 *
 * Code generated for Simulink model 'SingleJoint_Algorithm1'.
 *
 * Model version                  : 1.230
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan  8 17:45:48 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DynamicsController.h"

/* Include model header file for global data */
#include "SingleJoint_Algorithm1.h"
#include "SingleJoint_Algorithm1_private.h"
#define SingleJoint_Algorith_IN_State01 (1U)
#define SingleJoint_Algorith_IN_State02 (2U)
#define SingleJoint_Algorith_IN_State03 (3U)
#define SingleJoint_Algorith_IN_State04 (4U)
#define SingleJoint_Algorith_IN_State05 (5U)
#define SingleJoint__IN_NO_ACTIVE_CHILD (0U)

/* System initialize for enable system: '<S31>/StartRobotSubsystem' */
void Single_StartRobotSubsystem_Init(void)
{
  /* SystemInitialize for Outport: '<S32>/Out1' */
  SingleJoint_Algorithm1_B.In1 = SingleJoint_Algorithm1_P.Out1_Y0;
}

/* Output and update for enable system: '<S31>/StartRobotSubsystem' */
void SingleJoint_StartRobotSubsystem(void)
{
  /* Outputs for Enabled SubSystem: '<S31>/StartRobotSubsystem' incorporates:
   *  EnablePort: '<S32>/Enable'
   */
  if (SingleJoint_Algorithm1_B.StartRobot_o > 0U) {
    /* user code (Output function Body) */

    /* System '<S31>/StartRobotSubsystem' */
    qibaozha_joint1();
    qibaozha_joint2();
    qibaozha_joint3();
    qibaozha_joint4();
    qibaozha_joint5();
    qibaozha_joint6();
    DELAY_US(500000);

    /* Inport: '<S32>/In1' incorporates:
     *  Constant: '<S31>/Constant'
     */
    SingleJoint_Algorithm1_B.In1 = SingleJoint_Algorithm1_P.Constant_Value_l;
  }

  /* End of Outputs for SubSystem: '<S31>/StartRobotSubsystem' */
}

/* System initialize for atomic system: '<S7>/驱动器指令' */
void SingleJoint_Algorithm1_u_Init(void)
{
  SingleJoint_Algorithm1_DW.temporalCounter_i1 = 0U;
  SingleJoint_Algorithm1_DW.is_active_c1_SingleJoint_Algori = 0U;
  SingleJoint_Algorithm1_DW.is_c1_SingleJoint_Algorithm1 =
    SingleJoint__IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S19>/DriveOder' incorporates:
   *  SubSystem: '<S26>/start_arm'
   */

  /* SystemInitialize for Enabled SubSystem: '<S31>/StartRobotSubsystem' */
  Single_StartRobotSubsystem_Init();

  /* End of SystemInitialize for SubSystem: '<S31>/StartRobotSubsystem' */
}

/* Output and update for atomic system: '<S7>/驱动器指令' */
void SingleJoint_Algorithm1_u(void)
{
  uint16_T rtb_DataTypeConversion7;
  int16_T i;
  real_T tmp;

  /* DataTypeConversion: '<S19>/Data Type Conversion7' */
  tmp = floor(SingleJoint_Algorithm1_B.u);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  rtb_DataTypeConversion7 = tmp < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp :
    (uint16_T)tmp;

  /* End of DataTypeConversion: '<S19>/Data Type Conversion7' */

  /* Chart: '<S19>/DriveOder' incorporates:
   *  DataStoreRead: '<S19>/Data Store Read'
   */
  if (SingleJoint_Algorithm1_DW.temporalCounter_i1 < 511U) {
    SingleJoint_Algorithm1_DW.temporalCounter_i1++;
  }

  if (SingleJoint_Algorithm1_DW.is_active_c1_SingleJoint_Algori == 0U) {
    SingleJoint_Algorithm1_DW.is_active_c1_SingleJoint_Algori = 1U;
    SingleJoint_Algorithm1_DW.is_c1_SingleJoint_Algorithm1 =
      SingleJoint_Algorith_IN_State01;
    SingleJoint_Algorithm1_DW.start = 0U;
  } else {
    switch (SingleJoint_Algorithm1_DW.is_c1_SingleJoint_Algorithm1) {
     case SingleJoint_Algorith_IN_State01:
      if (SingleJoint_Algorithm1_DW.start > 0U) {
        SingleJoint_Algorithm1_DW.is_c1_SingleJoint_Algorithm1 =
          SingleJoint_Algorith_IN_State05;
        SingleJoint_Algorithm1_DW.bx = 0U;
      } else {
        SingleJoint_Algorithm1_B.StartRobot_o = StartRobot;

        /* Outputs for Function Call SubSystem: '<S26>/start_arm' */
        /* Outputs for Enabled SubSystem: '<S31>/StartRobotSubsystem' */
        SingleJoint_StartRobotSubsystem();

        /* End of Outputs for SubSystem: '<S31>/StartRobotSubsystem' */
        /* End of Outputs for SubSystem: '<S26>/start_arm' */
        SingleJoint_Algorithm1_DW.start = SingleJoint_Algorithm1_B.In1;
      }
      break;

     case SingleJoint_Algorith_IN_State02:
      if (SingleJoint_Algorithm1_DW.temporalCounter_i1 >= 500U) {
        SingleJoint_Algorithm1_DW.is_c1_SingleJoint_Algorithm1 =
          SingleJoint_Algorith_IN_State03;
        SingleJoint_Algorithm1_DW.temporalCounter_i1 = 0U;

        /* Outputs for Function Call SubSystem: '<S26>/BG' */
        /* DataTypeConversion: '<S27>/Data Type Conversion' incorporates:
         *  ArithShift: '<S27>/Shift Arithmetic1'
         *  ArithShift: '<S27>/Shift Arithmetic2'
         *  ArithShift: '<S27>/Shift Arithmetic3'
         *  ArithShift: '<S27>/Shift Arithmetic4'
         *  Constant: '<S27>/Constant1'
         *  Constant: '<S27>/Constant2'
         *  Constant: '<S27>/Constant3'
         *  Constant: '<S27>/Constant8'
         */
        SingleJoint_Algorithm1_B.MSG[0] =
          SingleJoint_Algorithm1_P.Constant8_Value_c;
        SingleJoint_Algorithm1_B.MSG[1] =
          SingleJoint_Algorithm1_P.Constant1_Value_e;
        SingleJoint_Algorithm1_B.MSG[2] =
          SingleJoint_Algorithm1_P.Constant2_Value_e;
        SingleJoint_Algorithm1_B.MSG[3] = 0U;
        SingleJoint_Algorithm1_B.MSG[4] =
          SingleJoint_Algorithm1_P.Constant3_Value_b;
        SingleJoint_Algorithm1_B.MSG[5] = 0U;
        SingleJoint_Algorithm1_B.MSG[6] = 0U;
        SingleJoint_Algorithm1_B.MSG[7] = 0U;

        /* DataStoreWrite: '<S27>/Data Store Write' incorporates:
         *  Constant: '<S27>/Constant6'
         */
        One_TXD = SingleJoint_Algorithm1_P.Constant6_Value;

        /* End of Outputs for SubSystem: '<S26>/BG' */
      }
      break;

     case SingleJoint_Algorith_IN_State03:
      if (SingleJoint_Algorithm1_DW.temporalCounter_i1 >= 500U) {
        SingleJoint_Algorithm1_DW.is_c1_SingleJoint_Algorithm1 =
          SingleJoint_Algorith_IN_State04;
      }
      break;

     case SingleJoint_Algorith_IN_State04:
      /* Outputs for Function Call SubSystem: '<S26>/TF' */
      /* DataTypeConversion: '<S28>/Data Type Conversion' incorporates:
       *  ArithShift: '<S28>/Shift Arithmetic1'
       *  ArithShift: '<S28>/Shift Arithmetic2'
       *  ArithShift: '<S28>/Shift Arithmetic3'
       *  ArithShift: '<S28>/Shift Arithmetic4'
       *  Constant: '<S28>/Constant1'
       *  Constant: '<S28>/Constant3'
       *  Constant: '<S28>/Constant8'
       *  DataTypeConversion: '<S28>/Data Type Conversion1'
       */
      SingleJoint_Algorithm1_B.MSG[0] =
        SingleJoint_Algorithm1_P.Constant8_Value_cv;
      SingleJoint_Algorithm1_B.MSG[1] =
        SingleJoint_Algorithm1_P.Constant1_Value_p;
      SingleJoint_Algorithm1_B.MSG[2] = rtb_DataTypeConversion7 & 255U;
      SingleJoint_Algorithm1_B.MSG[3] = rtb_DataTypeConversion7 >> 8U;
      SingleJoint_Algorithm1_B.MSG[4] =
        SingleJoint_Algorithm1_P.Constant3_Value_h;
      SingleJoint_Algorithm1_B.MSG[5] = 0U;
      SingleJoint_Algorithm1_B.MSG[6] = 0U;
      SingleJoint_Algorithm1_B.MSG[7] = 0U;

      /* DataStoreWrite: '<S28>/Data Store Write' incorporates:
       *  Constant: '<S28>/Constant2'
       */
      One_TXD = SingleJoint_Algorithm1_P.Constant2_Value_d;

      /* End of Outputs for SubSystem: '<S26>/TF' */
      break;

     default:
      if (SingleJoint_Algorithm1_DW.bx > 0U) {
        SingleJoint_Algorithm1_DW.is_c1_SingleJoint_Algorithm1 =
          SingleJoint_Algorith_IN_State02;
        SingleJoint_Algorithm1_DW.temporalCounter_i1 = 0U;

        /* Outputs for Function Call SubSystem: '<S26>/UM1' */
        /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
         *  ArithShift: '<S29>/Shift Arithmetic1'
         *  ArithShift: '<S29>/Shift Arithmetic2'
         *  ArithShift: '<S29>/Shift Arithmetic3'
         *  ArithShift: '<S29>/Shift Arithmetic4'
         *  Constant: '<S29>/Constant1'
         *  Constant: '<S29>/Constant2'
         *  Constant: '<S29>/Constant3'
         *  Constant: '<S29>/Constant8'
         */
        SingleJoint_Algorithm1_B.MSG[0] =
          SingleJoint_Algorithm1_P.Constant8_Value;
        SingleJoint_Algorithm1_B.MSG[1] =
          SingleJoint_Algorithm1_P.Constant1_Value_j;
        SingleJoint_Algorithm1_B.MSG[2] =
          SingleJoint_Algorithm1_P.Constant2_Value;
        SingleJoint_Algorithm1_B.MSG[3] = 0U;
        SingleJoint_Algorithm1_B.MSG[4] =
          SingleJoint_Algorithm1_P.Constant3_Value;
        SingleJoint_Algorithm1_B.MSG[5] = 0U;
        SingleJoint_Algorithm1_B.MSG[6] = 0U;
        SingleJoint_Algorithm1_B.MSG[7] = 0U;

        /* DataStoreWrite: '<S29>/Data Store Write' incorporates:
         *  Constant: '<S29>/Constant'
         */
        One_TXD = SingleJoint_Algorithm1_P.Constant_Value_o;

        /* End of Outputs for SubSystem: '<S26>/UM1' */
      } else {
        /* DataTypeConversion: '<S19>/Data Type Conversion4' */
        tmp = floor(SingleJoint_Algorithm1_B.DataStoreRead4);
        if (rtIsNaN(tmp) || rtIsInf(tmp)) {
          tmp = 0.0;
        } else {
          tmp = fmod(tmp, 65536.0);
        }

        /* Outputs for Function Call SubSystem: '<S26>/check' */
        /* Switch: '<S30>/Switch' incorporates:
         *  Constant: '<S30>/Constant'
         *  Constant: '<S30>/Constant1'
         *  DataTypeConversion: '<S19>/Data Type Conversion4'
         */
        if ((tmp < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp : (uint16_T)tmp) >
            SingleJoint_Algorithm1_P.Switch_Threshold) {
          SingleJoint_Algorithm1_DW.bx =
            SingleJoint_Algorithm1_P.Constant_Value_m;
        } else {
          SingleJoint_Algorithm1_DW.bx =
            SingleJoint_Algorithm1_P.Constant1_Value;
        }

        /* End of Switch: '<S30>/Switch' */
        /* End of Outputs for SubSystem: '<S26>/check' */
      }
      break;
    }
  }

  /* End of Chart: '<S19>/DriveOder' */

  /* DataTypeConversion: '<S19>/Data Type Conversion1' */
  for (i = 0; i < 8; i++) {
    SingleJoint_Algorithm1_B.DataTypeConversion1[i] =
      SingleJoint_Algorithm1_B.MSG[i] & 255U;
  }

  /* End of DataTypeConversion: '<S19>/Data Type Conversion1' */
}

/* System initialize for atomic system: '<S1>/DriverOneMotor' */
void SingleJoint_DriverOneMotor_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S7>/驱动器指令' */
  SingleJoint_Algorithm1_u_Init();

  /* End of SystemInitialize for SubSystem: '<S7>/驱动器指令' */
}

/* Start for atomic system: '<S1>/DriverOneMotor' */
void SingleJoin_DriverOneMotor_Start(void)
{
  /* Start for Enabled SubSystem: '<S7>/BottomDriver' */
  /* Start for IfAction SubSystem: '<S18>/Joint3' */
  /* Start for S-Function (c280xcanxmt): '<S22>/eCANB _303_7' */
  {
    /* Configure mailbox 7 to transmit messages with the ID: 771 */
    config_eCAN_B_mbx (1U, 7, 771, 0);
  }

  /* End of Start for SubSystem: '<S18>/Joint3' */
  /* End of Start for SubSystem: '<S7>/BottomDriver' */

  /* Start for DataStoreMemory: '<S7>/Data Store Memory2' */
  One_TXD = SingleJoint_Algorithm1_P.DataStoreMemory2_InitialValue_m;
}

/* Output and update for atomic system: '<S1>/DriverOneMotor' */
void SingleJoint_Algo_DriverOneMotor(void)
{
  real_T tmp;

  /* Saturate: '<S7>/限幅' */
  if (SingleJoint_Algorithm1_B.Add3 > SingleJoint_Algorithm1_P._UpperSat_o) {
    SingleJoint_Algorithm1_B.u = SingleJoint_Algorithm1_P._UpperSat_o;
  } else if (SingleJoint_Algorithm1_B.Add3 <
             SingleJoint_Algorithm1_P._LowerSat_h) {
    SingleJoint_Algorithm1_B.u = SingleJoint_Algorithm1_P._LowerSat_h;
  } else {
    SingleJoint_Algorithm1_B.u = SingleJoint_Algorithm1_B.Add3;
  }

  /* End of Saturate: '<S7>/限幅' */

  /* Outputs for Atomic SubSystem: '<S7>/驱动器指令' */
  SingleJoint_Algorithm1_u();

  /* End of Outputs for SubSystem: '<S7>/驱动器指令' */

  /* Outputs for Enabled SubSystem: '<S7>/BottomDriver' incorporates:
   *  EnablePort: '<S18>/Enable'
   */
  /* DataStoreRead: '<S7>/Data Store Read4' */
  if (One_TXD > 0U) {
    /* Outputs for Atomic SubSystem: '<S1>/DriverOneMotor' */
    /* SwitchCase: '<S18>/Switch Case' */
    if (SingleJoint_Algorithm1_P.DriverOneMotor_SelectJoint < 0.0) {
      tmp = ceil(SingleJoint_Algorithm1_P.DriverOneMotor_SelectJoint);
    } else {
      tmp = floor(SingleJoint_Algorithm1_P.DriverOneMotor_SelectJoint);
    }

    /* End of Outputs for SubSystem: '<S1>/DriverOneMotor' */
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 4.294967296E+9);
    }

    if ((tmp < 0.0 ? -(int32_T)(uint32_T)-tmp : (int32_T)(uint32_T)tmp) == 3L) {
      /* Outputs for IfAction SubSystem: '<S18>/Joint3' incorporates:
       *  ActionPort: '<S22>/Action Port'
       */
      /* DataStoreWrite: '<S22>/Data Store Write' incorporates:
       *  Constant: '<S22>/Constant'
       */
      One_TXD = SingleJoint_Algorithm1_P.Constant_Value_n;

      /* S-Function (c280xcanxmt): '<S22>/eCANB _303_7' */
      {
        ECanbMboxes.MBOX7.MDH.byte.BYTE4 =
          SingleJoint_Algorithm1_B.DataTypeConversion1[7];
        ECanbMboxes.MBOX7.MDH.byte.BYTE5 =
          SingleJoint_Algorithm1_B.DataTypeConversion1[6];
        ECanbMboxes.MBOX7.MDH.byte.BYTE6 =
          SingleJoint_Algorithm1_B.DataTypeConversion1[5];
        ECanbMboxes.MBOX7.MDH.byte.BYTE7 =
          SingleJoint_Algorithm1_B.DataTypeConversion1[4];
        ECanbMboxes.MBOX7.MDL.byte.BYTE0 =
          SingleJoint_Algorithm1_B.DataTypeConversion1[3];
        ECanbMboxes.MBOX7.MDL.byte.BYTE1 =
          SingleJoint_Algorithm1_B.DataTypeConversion1[2];
        ECanbMboxes.MBOX7.MDL.byte.BYTE2 =
          SingleJoint_Algorithm1_B.DataTypeConversion1[1];
        ECanbMboxes.MBOX7.MDL.byte.BYTE3 =
          SingleJoint_Algorithm1_B.DataTypeConversion1[0];
        ECanbMboxes.MBOX7.MSGCTRL.bit.DLC = 8;
        ECanbRegs.CANTRS.all = (((uint32_T) 0x00000001) << 7);
        EDIS;
      }

      /* End of Outputs for SubSystem: '<S18>/Joint3' */
    }

    /* End of SwitchCase: '<S18>/Switch Case' */
  }

  /* End of DataStoreRead: '<S7>/Data Store Read4' */
  /* End of Outputs for SubSystem: '<S7>/BottomDriver' */
}

/* System initialize for atomic system: '<S1>/GetAngle' */
void SingleJoint_Algor_GetAngle_Init(B_GetAngle_SingleJoint_Algori_T *localB,
  P_GetAngle_SingleJoint_Algori_T *localP)
{
  /* SystemInitialize for Merge: '<S8>/Merge' */
  localB->Merge = localP->Merge_InitialOutput;
}

/* Output and update for atomic system: '<S1>/GetAngle' */
void SingleJoint_Algorithm1_GetAngle(real_T *rty_Angle,
  B_GetAngle_SingleJoint_Algori_T *localB, P_GetAngle_SingleJoint_Algori_T
  *localP, uint16_T rtp_JJoint, real_T rtp_InitAngle)
{
  real_T tmp;

  /* SwitchCase: '<S8>/Switch Case' incorporates:
   *  Constant: '<S8>/Constant1'
   */
  switch ((int32_T)rtp_JJoint) {
   case 1L:
    /* Outputs for IfAction SubSystem: '<S8>/Joint1' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    /* DataStoreRead: '<S33>/Data Store Read5' */
    localB->Merge = Motor_Position[0];

    /* End of Outputs for SubSystem: '<S8>/Joint1' */
    break;

   case 2L:
    /* Outputs for IfAction SubSystem: '<S8>/Joint2' incorporates:
     *  ActionPort: '<S34>/Action Port'
     */
    /* DataStoreRead: '<S34>/Data Store Read5' */
    localB->Merge = Motor_Position[1];

    /* End of Outputs for SubSystem: '<S8>/Joint2' */
    break;

   case 3L:
    /* Outputs for IfAction SubSystem: '<S8>/Joint3' incorporates:
     *  ActionPort: '<S35>/Action Port'
     */
    /* DataStoreRead: '<S35>/Data Store Read5' */
    localB->Merge = Motor_Position[2];

    /* End of Outputs for SubSystem: '<S8>/Joint3' */
    break;

   case 4L:
    /* Outputs for IfAction SubSystem: '<S8>/Joint4' incorporates:
     *  ActionPort: '<S36>/Action Port'
     */
    /* DataStoreRead: '<S36>/Data Store Read5' */
    localB->Merge = Motor_Position[3];

    /* End of Outputs for SubSystem: '<S8>/Joint4' */
    break;

   case 5L:
    /* Outputs for IfAction SubSystem: '<S8>/Joint5' incorporates:
     *  ActionPort: '<S37>/Action Port'
     */
    /* DataStoreRead: '<S37>/Data Store Read5' */
    localB->Merge = Motor_Position[4];

    /* End of Outputs for SubSystem: '<S8>/Joint5' */
    break;

   case 6L:
    /* Outputs for IfAction SubSystem: '<S8>/Joint6' incorporates:
     *  ActionPort: '<S38>/Action Port'
     */
    /* DataStoreRead: '<S38>/Data Store Read5' */
    localB->Merge = Motor_Position[5];

    /* End of Outputs for SubSystem: '<S8>/Joint6' */
    break;
  }

  /* End of SwitchCase: '<S8>/Switch Case' */

  /* MultiPortSwitch: '<S8>/Multiport Switch' incorporates:
   *  Constant: '<S8>/Constant1'
   *  Constant: '<S8>/Constant3'
   *  Constant: '<S8>/Constant4'
   */
  if ((int16_T)rtp_JJoint == 3) {
    tmp = localP->Constant3_Value;
  } else {
    tmp = localP->Constant4_Value;
  }

  /* End of MultiPortSwitch: '<S8>/Multiport Switch' */

  /* DataTypeConversion: '<S8>/Data Type Conversion1' incorporates:
   *  Constant: '<S8>/Constant'
   *  DataTypeConversion: '<S8>/Data Type Conversion2'
   *  Gain: '<S8>/Gain1'
   *  Gain: '<S8>/Gain4'
   *  Product: '<S8>/Product'
   *  Sum: '<S8>/Add'
   */
  *rty_Angle = localP->Gain1_Gain * (real_T)localB->Merge - localP->Gain4_Gain *
    rtp_InitAngle * tmp;
}

/* System initialize for atomic system: '<S1>/GetAngleSpeed' */
void SingleJoint__GetAngleSpeed_Init(B_GetAngleSpeed_SingleJoint_A_T *localB,
  P_GetAngleSpeed_SingleJoint_A_T *localP)
{
  /* SystemInitialize for Merge: '<S9>/Merge1' */
  localB->Merge1 = localP->Merge1_InitialOutput;
}

/* Output and update for atomic system: '<S1>/GetAngleSpeed' */
void SingleJoint_Algor_GetAngleSpeed(real_T *rty_Velcity,
  B_GetAngleSpeed_SingleJoint_A_T *localB, P_GetAngleSpeed_SingleJoint_A_T
  *localP, real_T rtp_JJoint)
{
  real_T tmp;

  /* SwitchCase: '<S9>/Switch Case' incorporates:
   *  Constant: '<S9>/Constant1'
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
    /* Outputs for IfAction SubSystem: '<S9>/Joint1' incorporates:
     *  ActionPort: '<S39>/Action Port'
     */
    /* DataStoreRead: '<S39>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[0];

    /* End of Outputs for SubSystem: '<S9>/Joint1' */
    break;

   case 2L:
    /* Outputs for IfAction SubSystem: '<S9>/Joint2' incorporates:
     *  ActionPort: '<S40>/Action Port'
     */
    /* DataStoreRead: '<S40>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[1];

    /* End of Outputs for SubSystem: '<S9>/Joint2' */
    break;

   case 3L:
    /* Outputs for IfAction SubSystem: '<S9>/Joint3' incorporates:
     *  ActionPort: '<S41>/Action Port'
     */
    /* DataStoreRead: '<S41>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[2];

    /* End of Outputs for SubSystem: '<S9>/Joint3' */
    break;

   case 4L:
    /* Outputs for IfAction SubSystem: '<S9>/Joint4' incorporates:
     *  ActionPort: '<S42>/Action Port'
     */
    /* DataStoreRead: '<S42>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[3];

    /* End of Outputs for SubSystem: '<S9>/Joint4' */
    break;

   case 5L:
    /* Outputs for IfAction SubSystem: '<S9>/Joint5' incorporates:
     *  ActionPort: '<S43>/Action Port'
     */
    /* DataStoreRead: '<S43>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[4];

    /* End of Outputs for SubSystem: '<S9>/Joint5' */
    break;

   case 6L:
    /* Outputs for IfAction SubSystem: '<S9>/Joint6' incorporates:
     *  ActionPort: '<S44>/Action Port'
     */
    /* DataStoreRead: '<S44>/Data Store Read1' */
    localB->Merge1 = Motor_Velocity[5];

    /* End of Outputs for SubSystem: '<S9>/Joint6' */
    break;
  }

  /* End of SwitchCase: '<S9>/Switch Case' */

  /* Gain: '<S9>/Gain9' incorporates:
   *  DataTypeConversion: '<S9>/Data Type Conversion3'
   *  Gain: '<S9>/Gain3'
   */
  *rty_Velcity = localP->Gain3_Gain * (real_T)localB->Merge1 *
    localP->Gain9_Gain;
}

/* System initialize for atomic system: '<Root>/AdaptionController' */
void DynamicsController_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S1>/GetAngleSpeed' */
  SingleJoint__GetAngleSpeed_Init(&SingleJoint_Algorithm1_B.GetAngleSpeed,
    &SingleJoint_Algorithm1_P.GetAngleSpeed);

  /* End of SystemInitialize for SubSystem: '<S1>/GetAngleSpeed' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/GetAngle' */
  SingleJoint_Algor_GetAngle_Init(&SingleJoint_Algorithm1_B.GetAngle,
    &SingleJoint_Algorithm1_P.GetAngle);

  /* End of SystemInitialize for SubSystem: '<S1>/GetAngle' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/AdapitionController' */
  AdaptiveAlgorithm_Init();

  /* End of SystemInitialize for SubSystem: '<S1>/AdapitionController' */

  /* SystemInitialize for Atomic SubSystem: '<S1>/DriverOneMotor' */
  SingleJoint_DriverOneMotor_Init();

  /* End of SystemInitialize for SubSystem: '<S1>/DriverOneMotor' */
}

/* Start for atomic system: '<Root>/AdaptionController' */
void DynamicsController_Start(void)
{
  /* Start for Atomic SubSystem: '<S1>/AdapitionController' */
  AdaptiveAlgorithm_Start();

  /* End of Start for SubSystem: '<S1>/AdapitionController' */

  /* Start for Atomic SubSystem: '<S1>/DriverOneMotor' */
  SingleJoin_DriverOneMotor_Start();

  /* End of Start for SubSystem: '<S1>/DriverOneMotor' */
}

/* Output and update for atomic system: '<Root>/AdaptionController' */
void DynamicsController(void)
{
  /* Outputs for Atomic SubSystem: '<S1>/GetAngleSpeed' */
  SingleJoint_Algor_GetAngleSpeed(&SingleJoint_Algorithm1_B.Add3,
    &SingleJoint_Algorithm1_B.GetAngleSpeed,
    &SingleJoint_Algorithm1_P.GetAngleSpeed,
    SingleJoint_Algorithm1_P.GetAngleSpeed_JJoint);

  /* End of Outputs for SubSystem: '<S1>/GetAngleSpeed' */

  /* Outputs for Atomic SubSystem: '<S1>/GetAngle' */
  SingleJoint_Algorithm1_GetAngle(&SingleJoint_Algorithm1_B.u,
    &SingleJoint_Algorithm1_B.GetAngle, &SingleJoint_Algorithm1_P.GetAngle,
    SingleJoint_Algorithm1_P.GetAngle_JJoint,
    SingleJoint_Algorithm1_P.GetAngle_InitAngle);

  /* End of Outputs for SubSystem: '<S1>/GetAngle' */

  /* Gain: '<S1>/Gain11' incorporates:
   *  Constant: '<S1>/Constant'
   */
  SingleJoint_Algorithm1_B.Sum2 = SingleJoint_Algorithm1_P.Gain11_Gain *
    SingleJoint_Algorithm1_P.Constant_Value;

  /* DataStoreRead: '<S1>/Data Store Read2' */
  SingleJoint_Algorithm1_B.DataStoreRead2 = J3[0];

  /* Gain: '<S1>/1' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read'
   */
  SingleJoint_Algorithm1_B.Sum4 = SingleJoint_Algorithm1_P.u_Gain * J3[1];

  /* Gain: '<S1>/gain1' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read3'
   */
  SingleJoint_Algorithm1_B.gain1 = SingleJoint_Algorithm1_P.gain1_Gain * J3[2];

  /* Gain: '<S1>/gain' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read1'
   */
  SingleJoint_Algorithm1_B.DataStoreRead4 = SingleJoint_Algorithm1_P.gain_Gain *
    J3[3];

  /* Outputs for Atomic SubSystem: '<S1>/AdapitionController' */
  AdaptiveAlgorithm();

  /* End of Outputs for SubSystem: '<S1>/AdapitionController' */

  /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
   *  Gain: '<S1>/Gain6'
   *  Gain: '<S1>/Gain8'
   */
  Send_GUIdata[0L] = SingleJoint_Algorithm1_P.Gain6_Gain *
    SingleJoint_Algorithm1_B.u * SingleJoint_Algorithm1_P.Gain8_Gain;

  /* DataStoreWrite: '<S1>/Data Store Write1' incorporates:
   *  Gain: '<S1>/Gain12'
   *  Gain: '<S1>/Gain5'
   */
  Send_GUIdata[1L] = SingleJoint_Algorithm1_P.Gain12_Gain *
    SingleJoint_Algorithm1_B.Product * SingleJoint_Algorithm1_P.Gain5_Gain;

  /* DataStoreWrite: '<S1>/Data Store Write2' incorporates:
   *  Gain: '<S1>/Gain10'
   *  Gain: '<S1>/Gain13'
   */
  Send_GUIdata[2L] = SingleJoint_Algorithm1_P.Gain13_Gain *
    SingleJoint_Algorithm1_B.Sum5 * SingleJoint_Algorithm1_P.Gain10_Gain;

  /* DataStoreWrite: '<S1>/Data Store Write3' */
  Send_GUIdata[3L] = SingleJoint_Algorithm1_B.Add3;

  /* DataStoreRead: '<S1>/Data Store Read4' */
  SingleJoint_Algorithm1_B.DataStoreRead4 = J7[0];

  /* Outputs for Atomic SubSystem: '<S1>/DriverOneMotor' */
  SingleJoint_Algo_DriverOneMotor();

  /* End of Outputs for SubSystem: '<S1>/DriverOneMotor' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
