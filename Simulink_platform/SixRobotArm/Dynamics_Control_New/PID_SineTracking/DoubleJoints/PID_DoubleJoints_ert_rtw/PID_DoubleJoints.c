/*
 * File: PID_DoubleJoints.c
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

#include "PID_DoubleJoints.h"
#include "PID_DoubleJoints_private.h"

/* user code (top of source file) */
/* System '<Root>' */
unsigned char enable_tx= 1;
unsigned char MO_Order[]= { 0x4d, 0x4f, 0, 0, 1, 0, 0, 0 };

void MO_config_eCAN_B_mbx (uint16_T mbxType, uint16_T mbxNo, uint32_T msgID,
  uint16_T msgType)
{
  uint32_T maskRx = 0x1;
  uint32_T maskTx;
  struct ECAN_REGS ECanbShadow;
  volatile struct MBOX *mbx = &ECanbMboxes.MBOX0 + mbxNo;
  maskRx = maskRx<<mbxNo;
  maskTx = ~maskRx;
  mbx->MSGCTRL.bit.RTR = 0;
  ECanbShadow.CANME.all = ECanbRegs.CANME.all;
  ECanbRegs.CANME.all = 0x00000000;
  if (msgType==1)
    mbx->MSGID.all = msgID;            /* For Extended ID use bits  0:28 */
  else
    mbx->MSGID.bit.STDMSGID = msgID;   /* For Standard ID use bits 18:28 */
  mbx->MSGID.bit.AME = 0;
  mbx->MSGID.bit.AAM = 0;
  mbx->MSGID.bit.IDE = msgType;
  ECanbShadow.CANMD.all = ECanbRegs.CANMD.all;
  if (mbxType==0) {
    ECanbShadow.CANMD.all |= maskRx;
  } else {
    ECanbShadow.CANMD.all &= maskTx;
  }

  ECanbRegs.CANMD.all = ECanbShadow.CANMD.all;
  ECanbShadow.CANME.all |= maskRx;
  ECanbRegs.CANME.all = ECanbShadow.CANME.all;
}

void MO_config_eCAN_A_mbx (uint16_T mbxType, uint16_T mbxNo, uint32_T msgID,
  uint16_T msgType)
{
  uint32_T maskRx = 0x1;
  uint32_T maskTx;
  struct ECAN_REGS ECanaShadow;
  volatile struct MBOX *mbx = &ECanaMboxes.MBOX0 + mbxNo;
  maskRx = maskRx<<mbxNo;
  maskTx = ~maskRx;
  mbx->MSGCTRL.bit.RTR = 0;
  ECanaShadow.CANME.all = ECanaRegs.CANME.all;
  ECanaRegs.CANME.all = 0x00000000;
  if (msgType==1)
    mbx->MSGID.all = msgID;            /* For Extended ID use bits  0:28 */
  else
    mbx->MSGID.bit.STDMSGID = msgID;   /* For Standard ID use bits 18:28 */
  mbx->MSGID.bit.AME = 0;
  mbx->MSGID.bit.AAM = 0;
  mbx->MSGID.bit.IDE = msgType;
  ECanaShadow.CANMD.all = ECanaRegs.CANMD.all;
  if (mbxType==0) {
    ECanaShadow.CANMD.all |= maskRx;
  } else {
    ECanaShadow.CANMD.all &= maskTx;
  }

  ECanaRegs.CANMD.all = ECanaShadow.CANMD.all;
  ECanaShadow.CANME.all |= maskRx;
  ECanaRegs.CANME.all = ECanaShadow.CANME.all;
}

/* Output and update for atomic system: '<S1>/joint1' */
void qibaozha_joint1(void)
{
  /* S-Function (c280xcanxmt): '<S2>/eCAN Transmit' incorporates:
   *  Constant: '<S1>/Constant'
   */
  {
    ECanbMboxes.MBOX26.MDH.byte.BYTE4 = MO_Order[7];
    ECanbMboxes.MBOX26.MDH.byte.BYTE5 = MO_Order[6];
    ECanbMboxes.MBOX26.MDH.byte.BYTE6 = MO_Order[5];
    ECanbMboxes.MBOX26.MDH.byte.BYTE7 = MO_Order[4];
    ECanbMboxes.MBOX26.MDL.byte.BYTE0 = MO_Order[3];
    ECanbMboxes.MBOX26.MDL.byte.BYTE1 = MO_Order[2];
    ECanbMboxes.MBOX26.MDL.byte.BYTE2 = MO_Order[1];
    ECanbMboxes.MBOX26.MDL.byte.BYTE3 = MO_Order[0];
    ECanbMboxes.MBOX26.MSGCTRL.bit.DLC = 8;
    ECanbRegs.CANTRS.all = (((uint32_T) 0x00000001) << 26);
    EDIS;
  }

  /* user code (Output function Trailer) */
  /* System '<S1>/joint1' */
  DELAY_US(DELAY_JOINTX);
}

/* Output and update for atomic system: '<S1>/joint2' */
void qibaozha_joint2(void)
{
  /* S-Function (c280xcanxmt): '<S3>/eCAN Transmit' incorporates:
   *  Constant: '<S1>/Constant'
   */
  {
    ECanbMboxes.MBOX27.MDH.byte.BYTE4 = MO_Order[7];
    ECanbMboxes.MBOX27.MDH.byte.BYTE5 = MO_Order[6];
    ECanbMboxes.MBOX27.MDH.byte.BYTE6 = MO_Order[5];
    ECanbMboxes.MBOX27.MDH.byte.BYTE7 = MO_Order[4];
    ECanbMboxes.MBOX27.MDL.byte.BYTE0 = MO_Order[3];
    ECanbMboxes.MBOX27.MDL.byte.BYTE1 = MO_Order[2];
    ECanbMboxes.MBOX27.MDL.byte.BYTE2 = MO_Order[1];
    ECanbMboxes.MBOX27.MDL.byte.BYTE3 = MO_Order[0];
    ECanbMboxes.MBOX27.MSGCTRL.bit.DLC = 8;
    ECanbRegs.CANTRS.all = (((uint32_T) 0x00000001) << 27);
    EDIS;
  }

  /* user code (Output function Trailer) */
  /* System '<S1>/joint2' */
  DELAY_US(DELAY_JOINTX);
}

/* Output and update for atomic system: '<S1>/joint3' */
void qibaozha_joint3(void)
{
  /* S-Function (c280xcanxmt): '<S4>/eCAN Transmit' incorporates:
   *  Constant: '<S1>/Constant'
   */
  {
    ECanbMboxes.MBOX28.MDH.byte.BYTE4 = MO_Order[7];
    ECanbMboxes.MBOX28.MDH.byte.BYTE5 = MO_Order[6];
    ECanbMboxes.MBOX28.MDH.byte.BYTE6 = MO_Order[5];
    ECanbMboxes.MBOX28.MDH.byte.BYTE7 = MO_Order[4];
    ECanbMboxes.MBOX28.MDL.byte.BYTE0 = MO_Order[3];
    ECanbMboxes.MBOX28.MDL.byte.BYTE1 = MO_Order[2];
    ECanbMboxes.MBOX28.MDL.byte.BYTE2 = MO_Order[1];
    ECanbMboxes.MBOX28.MDL.byte.BYTE3 = MO_Order[0];
    ECanbMboxes.MBOX28.MSGCTRL.bit.DLC = 8;
    ECanbRegs.CANTRS.all = (((uint32_T) 0x00000001) << 28);
    EDIS;
  }

  /* user code (Output function Trailer) */
  /* System '<S1>/joint3' */
  DELAY_US(DELAY_JOINTX);
}

/* Output and update for atomic system: '<S1>/joint4' */
void qibaozha_joint4(void)
{
  /* S-Function (c280xcanxmt): '<S5>/eCAN Transmit' incorporates:
   *  Constant: '<S1>/Constant'
   */
  {
    ECanaMboxes.MBOX29.MDH.byte.BYTE4 = MO_Order[7];
    ECanaMboxes.MBOX29.MDH.byte.BYTE5 = MO_Order[6];
    ECanaMboxes.MBOX29.MDH.byte.BYTE6 = MO_Order[5];
    ECanaMboxes.MBOX29.MDH.byte.BYTE7 = MO_Order[4];
    ECanaMboxes.MBOX29.MDL.byte.BYTE0 = MO_Order[3];
    ECanaMboxes.MBOX29.MDL.byte.BYTE1 = MO_Order[2];
    ECanaMboxes.MBOX29.MDL.byte.BYTE2 = MO_Order[1];
    ECanaMboxes.MBOX29.MDL.byte.BYTE3 = MO_Order[0];
    ECanaMboxes.MBOX29.MSGCTRL.bit.DLC = 8;
    ECanaRegs.CANTRS.all = (((uint32_T) 0x00000001) << 29);
    EDIS;
  }

  /* user code (Output function Trailer) */
  /* System '<S1>/joint4' */
  DELAY_US(DELAY_JOINTX);
}

/* Output and update for atomic system: '<S1>/joint5' */
void qibaozha_joint5(void)
{
  /* S-Function (c280xcanxmt): '<S6>/eCAN Transmit' incorporates:
   *  Constant: '<S1>/Constant'
   */
  {
    ECanaMboxes.MBOX30.MDH.byte.BYTE4 = MO_Order[7];
    ECanaMboxes.MBOX30.MDH.byte.BYTE5 = MO_Order[6];
    ECanaMboxes.MBOX30.MDH.byte.BYTE6 = MO_Order[5];
    ECanaMboxes.MBOX30.MDH.byte.BYTE7 = MO_Order[4];
    ECanaMboxes.MBOX30.MDL.byte.BYTE0 = MO_Order[3];
    ECanaMboxes.MBOX30.MDL.byte.BYTE1 = MO_Order[2];
    ECanaMboxes.MBOX30.MDL.byte.BYTE2 = MO_Order[1];
    ECanaMboxes.MBOX30.MDL.byte.BYTE3 = MO_Order[0];
    ECanaMboxes.MBOX30.MSGCTRL.bit.DLC = 8;
    ECanaRegs.CANTRS.all = (((uint32_T) 0x00000001) << 30);
    EDIS;
  }

  /* user code (Output function Trailer) */
  /* System '<S1>/joint5' */
  DELAY_US(DELAY_JOINTX);
}

/* Output and update for atomic system: '<S1>/joint6' */
void qibaozha_joint6(void)
{
  /* S-Function (c280xcanxmt): '<S7>/eCAN Transmit' incorporates:
   *  Constant: '<S1>/Constant'
   */
  {
    ECanaMboxes.MBOX31.MDH.byte.BYTE4 = MO_Order[7];
    ECanaMboxes.MBOX31.MDH.byte.BYTE5 = MO_Order[6];
    ECanaMboxes.MBOX31.MDH.byte.BYTE6 = MO_Order[5];
    ECanaMboxes.MBOX31.MDH.byte.BYTE7 = MO_Order[4];
    ECanaMboxes.MBOX31.MDL.byte.BYTE0 = MO_Order[3];
    ECanaMboxes.MBOX31.MDL.byte.BYTE1 = MO_Order[2];
    ECanaMboxes.MBOX31.MDL.byte.BYTE2 = MO_Order[1];
    ECanaMboxes.MBOX31.MDL.byte.BYTE3 = MO_Order[0];
    ECanaMboxes.MBOX31.MSGCTRL.bit.DLC = 8;
    ECanaRegs.CANTRS.all = (((uint32_T) 0x00000001) << 31);
    EDIS;
  }

  /* user code (Output function Trailer) */
  /* System '<S1>/joint6' */
  DELAY_US(DELAY_JOINTX);
}

/* Exported block states */
real_T J7[6];                          /* '<Root>/Data Store Memory10' */
real_T J1[6];                          /* '<Root>/Data Store Memory13' */
real_T J2[6];                          /* '<Root>/Data Store Memory3' */
real_T J3[6];                          /* '<Root>/Data Store Memory4' */
real_T J4[6];                          /* '<Root>/Data Store Memory5' */
real_T J5[6];                          /* '<Root>/Data Store Memory6' */
real_T J6[6];                          /* '<Root>/Data Store Memory7' */
real_T Send_GUIdata[18];               /* '<Root>/Data Store Memory8' */
real_T qd[6];                          /* '<S1>/各个关节内转子 理想的角度' */
real_T q[6];                           /* '<S1>/各个关节内转子采集 到的实际角度' */
real_T dq[6];                          /* '<S1>/各个关节内转子采集 到的实际角速度' */
real_T e[6];                           /* '<S1>/各个关节的内转子 位置跟踪误差' */
real_T Tau[12];                        /* '<S1>/驱动各个关节 运动的力矩' */
int32_T Motor_Position[6];             /* '<Root>/Data Store Memory1' */
int32_T Motor_Current[6];              /* '<Root>/Data Store Memory11' */
int32_T Motor_Velocity[6];             /* '<Root>/Data Store Memory2' */
uint16_T StartRobot;                   /* '<Root>/Data Store Memory9' */
uint16_T TXD;                          /* '<S7>/Data Store Memory1' */

/* Block signals (default storage) */
B_PID_DoubleJoints_T PID_DoubleJoints_B;

/* Block states (default storage) */
DW_PID_DoubleJoints_T PID_DoubleJoints_DW;

/* Real-time model */
RT_MODEL_PID_DoubleJoints_T PID_DoubleJoints_M_;
RT_MODEL_PID_DoubleJoints_T *const PID_DoubleJoints_M = &PID_DoubleJoints_M_;

/* Idle Task Block: '<Root>/Idle Task' */
void idle_num0_task_fcn(void)
{
  /* Call the system: <Root>/接收上位机的数据 */
  {
    /* S-Function (idletask): '<Root>/Idle Task' */

    /* Output and update for function-call system: '<Root>/接收上位机的数据' */
    {
      int16_T i;

      /* Outputs for Atomic SubSystem: '<S5>/获取用户命令' */
      PID_DoubleJoints_u_k();

      /* End of Outputs for SubSystem: '<S5>/获取用户命令' */

      /* Outputs for Enabled SubSystem: '<S5>/Subsystem' incorporates:
       *  EnablePort: '<S171>/Enable'
       */
      /* RelationalOperator: '<S168>/Compare' incorporates:
       *  Constant: '<S168>/Constant'
       */
      if (PID_DoubleJoints_B.Switch[0] == PID_DoubleJoints_P.ux88_const) {
        /* SwitchCase: '<S171>/Switch Case' */
        switch ((int32_T)PID_DoubleJoints_B.Switch[1]) {
         case 1L:
          /* Outputs for IfAction SubSystem: '<S171>/Joint1' incorporates:
           *  ActionPort: '<S173>/Action Port'
           */
          /* DataStoreWrite: '<S173>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J1[i] = (int16_T)PID_DoubleJoints_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S173>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S171>/Joint1' */
          break;

         case 2L:
          /* Outputs for IfAction SubSystem: '<S171>/Joint2' incorporates:
           *  ActionPort: '<S174>/Action Port'
           */
          /* DataStoreWrite: '<S174>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J2[i] = (int16_T)PID_DoubleJoints_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S174>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S171>/Joint2' */
          break;

         case 3L:
          /* Outputs for IfAction SubSystem: '<S171>/Joint3' incorporates:
           *  ActionPort: '<S175>/Action Port'
           */
          /* DataStoreWrite: '<S175>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J3[i] = (int16_T)PID_DoubleJoints_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S175>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S171>/Joint3' */
          break;

         case 4L:
          /* Outputs for IfAction SubSystem: '<S171>/Joint4' incorporates:
           *  ActionPort: '<S176>/Action Port'
           */
          /* DataStoreWrite: '<S176>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J4[i] = (int16_T)PID_DoubleJoints_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S176>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S171>/Joint4' */
          break;

         case 5L:
          /* Outputs for IfAction SubSystem: '<S171>/Joint5' incorporates:
           *  ActionPort: '<S177>/Action Port'
           */
          /* DataStoreWrite: '<S177>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J5[i] = (int16_T)PID_DoubleJoints_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S177>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S171>/Joint5' */
          break;

         case 6L:
          /* Outputs for IfAction SubSystem: '<S171>/Joint6' incorporates:
           *  ActionPort: '<S178>/Action Port'
           */
          /* DataStoreWrite: '<S178>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J6[i] = (int16_T)PID_DoubleJoints_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S178>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S171>/Joint6' */
          break;

         case 7L:
          /* Outputs for IfAction SubSystem: '<S171>/Joint7' incorporates:
           *  ActionPort: '<S179>/Action Port'
           */
          /* DataStoreWrite: '<S179>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J7[i] = (int16_T)PID_DoubleJoints_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S179>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S171>/Joint7' */
          break;
        }

        /* End of SwitchCase: '<S171>/Switch Case' */
      }

      /* End of RelationalOperator: '<S168>/Compare' */
      /* End of Outputs for SubSystem: '<S5>/Subsystem' */

      /* DataTypeConversion: '<S5>/Data Type Conversion4' incorporates:
       *  Constant: '<S167>/Constant'
       *  Constant: '<S169>/Constant'
       *  Constant: '<S170>/Constant'
       *  DataStoreRead: '<S5>/Data Store Read'
       *  DataStoreWrite: '<S5>/Data Store Write2'
       *  Logic: '<S5>/Logical Operator'
       *  RelationalOperator: '<S167>/Compare'
       *  RelationalOperator: '<S169>/Compare'
       *  RelationalOperator: '<S170>/Compare'
       */
      StartRobot = (uint16_T)((PID_DoubleJoints_B.Switch[0] ==
        PID_DoubleJoints_P.ux0080_const) && PID_DoubleJoints_DW.PTX &&
        (PID_DoubleJoints_B.Switch[2] ==
         PID_DoubleJoints_P.CompareToConstant1_const) &&
        (PID_DoubleJoints_B.Switch[3] ==
         PID_DoubleJoints_P.CompareToConstant2_const));
    }

    /* End of Outputs for S-Function (idletask): '<Root>/Idle Task' */
  }
}

/* Start for atomic system: '<S2>/CANA_284_24' */
void PID_DoubleJoi_CANA_284_24_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S151>/eCAN Receive1' */

  /* Configure mailbox 24 to receive messages with the ID: 644 */
  config_eCAN_A_mbx (0U, 24, 644, 0);

  /* Initialize PID_DoubleJoints_B.eCANReceive1_o2[0] */
  {
    PID_DoubleJoints_B.eCANReceive1_o2[0] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive1_o2[1] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive1_o2[2] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive1_o2[3] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive1_o2[4] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive1_o2[5] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive1_o2[6] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive1_o2[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S151>/eCAN Receive1' */
}

/* Output and update for atomic system: '<S2>/CANA_284_24' */
void PID_DoubleJoints_CANA_284_24(void)
{
  /* S-Function (c280xcanrcv): '<S151>/eCAN Receive1' */
  {
    struct ECAN_REGS ECanaShadow;
    if (ECanaRegs.CANRMP.bit.RMP24) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanaShadow.CANRMP.all = 0x0;
      ECanaShadow.CANRMP.bit.RMP24 = 1;/* request clear RMP for this mailbox only*/
      ECanaRegs.CANRMP.all = ECanaShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      PID_DoubleJoints_B.eCANReceive1_o2[0] = ECanaMboxes.MBOX24.MDL.byte.BYTE3;
      PID_DoubleJoints_B.eCANReceive1_o2[1] = ECanaMboxes.MBOX24.MDL.byte.BYTE2;
      PID_DoubleJoints_B.eCANReceive1_o2[2] = ECanaMboxes.MBOX24.MDL.byte.BYTE1;
      PID_DoubleJoints_B.eCANReceive1_o2[3] = ECanaMboxes.MBOX24.MDL.byte.BYTE0;
      PID_DoubleJoints_B.eCANReceive1_o2[4] = ECanaMboxes.MBOX24.MDH.byte.BYTE7;
      PID_DoubleJoints_B.eCANReceive1_o2[5] = ECanaMboxes.MBOX24.MDH.byte.BYTE6;
      PID_DoubleJoints_B.eCANReceive1_o2[6] = ECanaMboxes.MBOX24.MDH.byte.BYTE5;
      PID_DoubleJoints_B.eCANReceive1_o2[7] = ECanaMboxes.MBOX24.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S151>/Subsystem1' */

      /* DataStoreWrite: '<S157>/Data Store Write1' incorporates:
       *  ArithShift: '<S157>/Shift Arithmetic4'
       *  DataTypeConversion: '<S157>/Data Type Conversion6'
       *  DataTypeConversion: '<S157>/Data Type Conversion7'
       *  Sum: '<S157>/Add1'
       */
      Motor_Velocity[3L] = ((int16_T)PID_DoubleJoints_B.eCANReceive1_o2[3] << 8U)
        + (int16_T)PID_DoubleJoints_B.eCANReceive1_o2[2];

      /* DataStoreWrite: '<S157>/Data Store Write2' incorporates:
       *  ArithShift: '<S157>/Shift Arithmetic'
       *  ArithShift: '<S157>/Shift Arithmetic1'
       *  ArithShift: '<S157>/Shift Arithmetic2'
       *  DataTypeConversion: '<S157>/Data Type Conversion'
       *  DataTypeConversion: '<S157>/Data Type Conversion1'
       *  DataTypeConversion: '<S157>/Data Type Conversion2'
       *  DataTypeConversion: '<S157>/Data Type Conversion3'
       *  Sum: '<S157>/Add'
       */
      Motor_Position[3L] = ((((int32_T)PID_DoubleJoints_B.eCANReceive1_o2[5] <<
        8U) + PID_DoubleJoints_B.eCANReceive1_o2[4]) + ((int32_T)
        PID_DoubleJoints_B.eCANReceive1_o2[6] << 16U)) + ((int32_T)
        PID_DoubleJoints_B.eCANReceive1_o2[7] << 24U);

      /* DataStoreWrite: '<S157>/Data Store Write3' incorporates:
       *  ArithShift: '<S157>/Shift Arithmetic3'
       *  DataTypeConversion: '<S157>/Data Type Conversion4'
       *  DataTypeConversion: '<S157>/Data Type Conversion5'
       *  Sum: '<S157>/Add2'
       */
      Motor_Current[3L] = ((int16_T)PID_DoubleJoints_B.eCANReceive1_o2[1] << 8U)
        + (int16_T)PID_DoubleJoints_B.eCANReceive1_o2[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S151>/eCAN Receive1' */
}

/* Start for atomic system: '<S2>/CANA_285_25' */
void PID_DoubleJoi_CANA_285_25_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S152>/eCAN Receive' */

  /* Configure mailbox 25 to receive messages with the ID: 645 */
  config_eCAN_A_mbx (0U, 25, 645, 0);

  /* Initialize PID_DoubleJoints_B.eCANReceive_o2_k5[0] */
  {
    PID_DoubleJoints_B.eCANReceive_o2_k5[0] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_k5[1] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_k5[2] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_k5[3] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_k5[4] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_k5[5] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_k5[6] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_k5[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S152>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANA_285_25' */
void PID_DoubleJoints_CANA_285_25(void)
{
  /* S-Function (c280xcanrcv): '<S152>/eCAN Receive' */
  {
    struct ECAN_REGS ECanaShadow;
    if (ECanaRegs.CANRMP.bit.RMP25) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanaShadow.CANRMP.all = 0x0;
      ECanaShadow.CANRMP.bit.RMP25 = 1;/* request clear RMP for this mailbox only*/
      ECanaRegs.CANRMP.all = ECanaShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      PID_DoubleJoints_B.eCANReceive_o2_k5[0] =
        ECanaMboxes.MBOX25.MDL.byte.BYTE3;
      PID_DoubleJoints_B.eCANReceive_o2_k5[1] =
        ECanaMboxes.MBOX25.MDL.byte.BYTE2;
      PID_DoubleJoints_B.eCANReceive_o2_k5[2] =
        ECanaMboxes.MBOX25.MDL.byte.BYTE1;
      PID_DoubleJoints_B.eCANReceive_o2_k5[3] =
        ECanaMboxes.MBOX25.MDL.byte.BYTE0;
      PID_DoubleJoints_B.eCANReceive_o2_k5[4] =
        ECanaMboxes.MBOX25.MDH.byte.BYTE7;
      PID_DoubleJoints_B.eCANReceive_o2_k5[5] =
        ECanaMboxes.MBOX25.MDH.byte.BYTE6;
      PID_DoubleJoints_B.eCANReceive_o2_k5[6] =
        ECanaMboxes.MBOX25.MDH.byte.BYTE5;
      PID_DoubleJoints_B.eCANReceive_o2_k5[7] =
        ECanaMboxes.MBOX25.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S152>/Subsystem' */

      /* DataStoreWrite: '<S158>/Data Store Write1' incorporates:
       *  ArithShift: '<S158>/Shift Arithmetic4'
       *  DataTypeConversion: '<S158>/Data Type Conversion4'
       *  DataTypeConversion: '<S158>/Data Type Conversion6'
       *  Sum: '<S158>/Add1'
       */
      Motor_Velocity[4L] = ((int16_T)PID_DoubleJoints_B.eCANReceive_o2_k5[3] <<
                            8U) + (int16_T)PID_DoubleJoints_B.eCANReceive_o2_k5
        [2];

      /* DataStoreWrite: '<S158>/Data Store Write2' incorporates:
       *  ArithShift: '<S158>/Shift Arithmetic'
       *  ArithShift: '<S158>/Shift Arithmetic1'
       *  ArithShift: '<S158>/Shift Arithmetic2'
       *  DataTypeConversion: '<S158>/Data Type Conversion'
       *  DataTypeConversion: '<S158>/Data Type Conversion1'
       *  DataTypeConversion: '<S158>/Data Type Conversion2'
       *  DataTypeConversion: '<S158>/Data Type Conversion3'
       *  Sum: '<S158>/Add'
       */
      Motor_Position[4L] = ((((int32_T)PID_DoubleJoints_B.eCANReceive_o2_k5[5] <<
        8U) + PID_DoubleJoints_B.eCANReceive_o2_k5[4]) + ((int32_T)
        PID_DoubleJoints_B.eCANReceive_o2_k5[6] << 16U)) + ((int32_T)
        PID_DoubleJoints_B.eCANReceive_o2_k5[7] << 24U);

      /* DataStoreWrite: '<S158>/Data Store Write3' incorporates:
       *  ArithShift: '<S158>/Shift Arithmetic3'
       *  DataTypeConversion: '<S158>/Data Type Conversion5'
       *  DataTypeConversion: '<S158>/Data Type Conversion7'
       *  Sum: '<S158>/Add2'
       */
      Motor_Current[4L] = ((int16_T)PID_DoubleJoints_B.eCANReceive_o2_k5[1] <<
                           8U) + (int16_T)PID_DoubleJoints_B.eCANReceive_o2_k5[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S152>/eCAN Receive' */
}

/* Start for atomic system: '<S2>/CANA_286_26' */
void PID_DoubleJoi_CANA_286_26_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S153>/eCAN Receive' */

  /* Configure mailbox 26 to receive messages with the ID: 646 */
  config_eCAN_A_mbx (0U, 26, 646, 0);

  /* Initialize PID_DoubleJoints_B.eCANReceive_o2_a[0] */
  {
    PID_DoubleJoints_B.eCANReceive_o2_a[0] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_a[1] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_a[2] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_a[3] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_a[4] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_a[5] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_a[6] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_a[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S153>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANA_286_26' */
void PID_DoubleJoints_CANA_286_26(void)
{
  /* S-Function (c280xcanrcv): '<S153>/eCAN Receive' */
  {
    struct ECAN_REGS ECanaShadow;
    if (ECanaRegs.CANRMP.bit.RMP26) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanaShadow.CANRMP.all = 0x0;
      ECanaShadow.CANRMP.bit.RMP26 = 1;/* request clear RMP for this mailbox only*/
      ECanaRegs.CANRMP.all = ECanaShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      PID_DoubleJoints_B.eCANReceive_o2_a[0] = ECanaMboxes.MBOX26.MDL.byte.BYTE3;
      PID_DoubleJoints_B.eCANReceive_o2_a[1] = ECanaMboxes.MBOX26.MDL.byte.BYTE2;
      PID_DoubleJoints_B.eCANReceive_o2_a[2] = ECanaMboxes.MBOX26.MDL.byte.BYTE1;
      PID_DoubleJoints_B.eCANReceive_o2_a[3] = ECanaMboxes.MBOX26.MDL.byte.BYTE0;
      PID_DoubleJoints_B.eCANReceive_o2_a[4] = ECanaMboxes.MBOX26.MDH.byte.BYTE7;
      PID_DoubleJoints_B.eCANReceive_o2_a[5] = ECanaMboxes.MBOX26.MDH.byte.BYTE6;
      PID_DoubleJoints_B.eCANReceive_o2_a[6] = ECanaMboxes.MBOX26.MDH.byte.BYTE5;
      PID_DoubleJoints_B.eCANReceive_o2_a[7] = ECanaMboxes.MBOX26.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S153>/Subsystem' */

      /* DataStoreWrite: '<S159>/Data Store Write1' incorporates:
       *  ArithShift: '<S159>/Shift Arithmetic4'
       *  DataTypeConversion: '<S159>/Data Type Conversion4'
       *  DataTypeConversion: '<S159>/Data Type Conversion7'
       *  Sum: '<S159>/Add1'
       */
      Motor_Velocity[5L] = ((int16_T)PID_DoubleJoints_B.eCANReceive_o2_a[3] <<
                            8U) + (int16_T)PID_DoubleJoints_B.eCANReceive_o2_a[2];

      /* DataStoreWrite: '<S159>/Data Store Write2' incorporates:
       *  ArithShift: '<S159>/Shift Arithmetic'
       *  ArithShift: '<S159>/Shift Arithmetic1'
       *  ArithShift: '<S159>/Shift Arithmetic2'
       *  DataTypeConversion: '<S159>/Data Type Conversion'
       *  DataTypeConversion: '<S159>/Data Type Conversion1'
       *  DataTypeConversion: '<S159>/Data Type Conversion2'
       *  DataTypeConversion: '<S159>/Data Type Conversion3'
       *  Sum: '<S159>/Add'
       */
      Motor_Position[5L] = ((((int32_T)PID_DoubleJoints_B.eCANReceive_o2_a[5] <<
        8U) + PID_DoubleJoints_B.eCANReceive_o2_a[4]) + ((int32_T)
        PID_DoubleJoints_B.eCANReceive_o2_a[6] << 16U)) + ((int32_T)
        PID_DoubleJoints_B.eCANReceive_o2_a[7] << 24U);

      /* DataStoreWrite: '<S159>/Data Store Write3' incorporates:
       *  ArithShift: '<S159>/Shift Arithmetic3'
       *  DataTypeConversion: '<S159>/Data Type Conversion5'
       *  DataTypeConversion: '<S159>/Data Type Conversion6'
       *  Sum: '<S159>/Add2'
       */
      Motor_Current[5L] = ((int16_T)PID_DoubleJoints_B.eCANReceive_o2_a[1] << 8U)
        + (int16_T)PID_DoubleJoints_B.eCANReceive_o2_a[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S153>/eCAN Receive' */
}

/* Start for atomic system: '<S2>/CANB_281_21' */
void PID_DoubleJoi_CANB_281_21_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S154>/eCAN Receive' */

  /* Configure mailbox 21 to receive messages with the ID: 641 */
  config_eCAN_B_mbx (0U, 21, 641, 0);

  /* Initialize PID_DoubleJoints_B.eCANReceive_o2_k[0] */
  {
    PID_DoubleJoints_B.eCANReceive_o2_k[0] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_k[1] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_k[2] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_k[3] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_k[4] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_k[5] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_k[6] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_k[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S154>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANB_281_21' */
void PID_DoubleJoints_CANB_281_21(void)
{
  /* S-Function (c280xcanrcv): '<S154>/eCAN Receive' */
  {
    struct ECAN_REGS ECanbShadow;
    if (ECanbRegs.CANRMP.bit.RMP21) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanbShadow.CANRMP.all = 0x0;
      ECanbShadow.CANRMP.bit.RMP21 = 1;/* request clear RMP for this mailbox only*/
      ECanbRegs.CANRMP.all = ECanbShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      PID_DoubleJoints_B.eCANReceive_o2_k[0] = ECanbMboxes.MBOX21.MDL.byte.BYTE3;
      PID_DoubleJoints_B.eCANReceive_o2_k[1] = ECanbMboxes.MBOX21.MDL.byte.BYTE2;
      PID_DoubleJoints_B.eCANReceive_o2_k[2] = ECanbMboxes.MBOX21.MDL.byte.BYTE1;
      PID_DoubleJoints_B.eCANReceive_o2_k[3] = ECanbMboxes.MBOX21.MDL.byte.BYTE0;
      PID_DoubleJoints_B.eCANReceive_o2_k[4] = ECanbMboxes.MBOX21.MDH.byte.BYTE7;
      PID_DoubleJoints_B.eCANReceive_o2_k[5] = ECanbMboxes.MBOX21.MDH.byte.BYTE6;
      PID_DoubleJoints_B.eCANReceive_o2_k[6] = ECanbMboxes.MBOX21.MDH.byte.BYTE5;
      PID_DoubleJoints_B.eCANReceive_o2_k[7] = ECanbMboxes.MBOX21.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S154>/Subsystem' */

      /* DataStoreWrite: '<S160>/Data Store Write1' incorporates:
       *  ArithShift: '<S160>/Shift Arithmetic4'
       *  DataTypeConversion: '<S160>/Data Type Conversion1'
       *  DataTypeConversion: '<S160>/Data Type Conversion2'
       *  Sum: '<S160>/Add1'
       */
      Motor_Velocity[0L] = ((int16_T)PID_DoubleJoints_B.eCANReceive_o2_k[3] <<
                            8U) + (int16_T)PID_DoubleJoints_B.eCANReceive_o2_k[2];

      /* DataStoreWrite: '<S160>/Data Store Write2' incorporates:
       *  ArithShift: '<S160>/Shift Arithmetic'
       *  ArithShift: '<S160>/Shift Arithmetic1'
       *  ArithShift: '<S160>/Shift Arithmetic2'
       *  DataTypeConversion: '<S160>/Data Type Conversion3'
       *  DataTypeConversion: '<S160>/Data Type Conversion6'
       *  DataTypeConversion: '<S160>/Data Type Conversion7'
       *  DataTypeConversion: '<S160>/Data Type Conversion8'
       *  Sum: '<S160>/Add'
       */
      Motor_Position[0L] = ((((int32_T)PID_DoubleJoints_B.eCANReceive_o2_k[5] <<
        8U) + PID_DoubleJoints_B.eCANReceive_o2_k[4]) + ((int32_T)
        PID_DoubleJoints_B.eCANReceive_o2_k[6] << 16U)) + ((int32_T)
        PID_DoubleJoints_B.eCANReceive_o2_k[7] << 24U);

      /* DataStoreWrite: '<S160>/Data Store Write3' incorporates:
       *  ArithShift: '<S160>/Shift Arithmetic3'
       *  DataTypeConversion: '<S160>/Data Type Conversion4'
       *  DataTypeConversion: '<S160>/Data Type Conversion5'
       *  Sum: '<S160>/Add2'
       */
      Motor_Current[0L] = ((int16_T)PID_DoubleJoints_B.eCANReceive_o2_k[1] << 8U)
        + (int16_T)PID_DoubleJoints_B.eCANReceive_o2_k[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S154>/eCAN Receive' */
}

/* Start for atomic system: '<S2>/CANB_282_22' */
void PID_DoubleJoi_CANB_282_22_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S155>/eCAN Receive' */

  /* Configure mailbox 22 to receive messages with the ID: 642 */
  config_eCAN_B_mbx (0U, 22, 642, 0);

  /* Initialize PID_DoubleJoints_B.eCANReceive_o2_o[0] */
  {
    PID_DoubleJoints_B.eCANReceive_o2_o[0] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_o[1] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_o[2] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_o[3] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_o[4] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_o[5] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_o[6] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2_o[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S155>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANB_282_22' */
void PID_DoubleJoints_CANB_282_22(void)
{
  /* S-Function (c280xcanrcv): '<S155>/eCAN Receive' */
  {
    struct ECAN_REGS ECanbShadow;
    if (ECanbRegs.CANRMP.bit.RMP22) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanbShadow.CANRMP.all = 0x0;
      ECanbShadow.CANRMP.bit.RMP22 = 1;/* request clear RMP for this mailbox only*/
      ECanbRegs.CANRMP.all = ECanbShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      PID_DoubleJoints_B.eCANReceive_o2_o[0] = ECanbMboxes.MBOX22.MDL.byte.BYTE3;
      PID_DoubleJoints_B.eCANReceive_o2_o[1] = ECanbMboxes.MBOX22.MDL.byte.BYTE2;
      PID_DoubleJoints_B.eCANReceive_o2_o[2] = ECanbMboxes.MBOX22.MDL.byte.BYTE1;
      PID_DoubleJoints_B.eCANReceive_o2_o[3] = ECanbMboxes.MBOX22.MDL.byte.BYTE0;
      PID_DoubleJoints_B.eCANReceive_o2_o[4] = ECanbMboxes.MBOX22.MDH.byte.BYTE7;
      PID_DoubleJoints_B.eCANReceive_o2_o[5] = ECanbMboxes.MBOX22.MDH.byte.BYTE6;
      PID_DoubleJoints_B.eCANReceive_o2_o[6] = ECanbMboxes.MBOX22.MDH.byte.BYTE5;
      PID_DoubleJoints_B.eCANReceive_o2_o[7] = ECanbMboxes.MBOX22.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S155>/Subsystem' */

      /* DataStoreWrite: '<S161>/Data Store Write1' incorporates:
       *  ArithShift: '<S161>/Shift Arithmetic4'
       *  DataTypeConversion: '<S161>/Data Type Conversion6'
       *  DataTypeConversion: '<S161>/Data Type Conversion7'
       *  Sum: '<S161>/Add1'
       */
      Motor_Velocity[1L] = ((int16_T)PID_DoubleJoints_B.eCANReceive_o2_o[3] <<
                            8U) + (int16_T)PID_DoubleJoints_B.eCANReceive_o2_o[2];

      /* DataStoreWrite: '<S161>/Data Store Write2' incorporates:
       *  ArithShift: '<S161>/Shift Arithmetic'
       *  ArithShift: '<S161>/Shift Arithmetic1'
       *  ArithShift: '<S161>/Shift Arithmetic2'
       *  DataTypeConversion: '<S161>/Data Type Conversion'
       *  DataTypeConversion: '<S161>/Data Type Conversion1'
       *  DataTypeConversion: '<S161>/Data Type Conversion2'
       *  DataTypeConversion: '<S161>/Data Type Conversion3'
       *  Sum: '<S161>/Add'
       */
      Motor_Position[1L] = ((((int32_T)PID_DoubleJoints_B.eCANReceive_o2_o[5] <<
        8U) + PID_DoubleJoints_B.eCANReceive_o2_o[4]) + ((int32_T)
        PID_DoubleJoints_B.eCANReceive_o2_o[6] << 16U)) + ((int32_T)
        PID_DoubleJoints_B.eCANReceive_o2_o[7] << 24U);

      /* DataStoreWrite: '<S161>/Data Store Write3' incorporates:
       *  ArithShift: '<S161>/Shift Arithmetic3'
       *  DataTypeConversion: '<S161>/Data Type Conversion4'
       *  DataTypeConversion: '<S161>/Data Type Conversion5'
       *  Sum: '<S161>/Add2'
       */
      Motor_Current[1L] = ((int32_T)PID_DoubleJoints_B.eCANReceive_o2_o[1] << 8U)
        + PID_DoubleJoints_B.eCANReceive_o2_o[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S155>/eCAN Receive' */
}

/* Start for atomic system: '<S2>/CANB_283_23' */
void PID_DoubleJoi_CANB_283_23_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S156>/eCAN Receive' */

  /* Configure mailbox 23 to receive messages with the ID: 643 */
  config_eCAN_B_mbx (0U, 23, 643, 0);

  /* Initialize PID_DoubleJoints_B.eCANReceive_o2[0] */
  {
    PID_DoubleJoints_B.eCANReceive_o2[0] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2[1] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2[2] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2[3] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2[4] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2[5] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2[6] = (uint8_T)0.0;
    PID_DoubleJoints_B.eCANReceive_o2[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S156>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANB_283_23' */
void PID_DoubleJoints_CANB_283_23(void)
{
  /* S-Function (c280xcanrcv): '<S156>/eCAN Receive' */
  {
    struct ECAN_REGS ECanbShadow;
    if (ECanbRegs.CANRMP.bit.RMP23) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanbShadow.CANRMP.all = 0x0;
      ECanbShadow.CANRMP.bit.RMP23 = 1;/* request clear RMP for this mailbox only*/
      ECanbRegs.CANRMP.all = ECanbShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      PID_DoubleJoints_B.eCANReceive_o2[0] = ECanbMboxes.MBOX23.MDL.byte.BYTE3;
      PID_DoubleJoints_B.eCANReceive_o2[1] = ECanbMboxes.MBOX23.MDL.byte.BYTE2;
      PID_DoubleJoints_B.eCANReceive_o2[2] = ECanbMboxes.MBOX23.MDL.byte.BYTE1;
      PID_DoubleJoints_B.eCANReceive_o2[3] = ECanbMboxes.MBOX23.MDL.byte.BYTE0;
      PID_DoubleJoints_B.eCANReceive_o2[4] = ECanbMboxes.MBOX23.MDH.byte.BYTE7;
      PID_DoubleJoints_B.eCANReceive_o2[5] = ECanbMboxes.MBOX23.MDH.byte.BYTE6;
      PID_DoubleJoints_B.eCANReceive_o2[6] = ECanbMboxes.MBOX23.MDH.byte.BYTE5;
      PID_DoubleJoints_B.eCANReceive_o2[7] = ECanbMboxes.MBOX23.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S156>/Subsystem' */

      /* DataStoreWrite: '<S162>/Data Store Write1' incorporates:
       *  ArithShift: '<S162>/Shift Arithmetic4'
       *  DataTypeConversion: '<S162>/Data Type Conversion6'
       *  DataTypeConversion: '<S162>/Data Type Conversion7'
       *  Sum: '<S162>/Add1'
       */
      Motor_Velocity[2L] = ((int16_T)PID_DoubleJoints_B.eCANReceive_o2[3] << 8U)
        + (int16_T)PID_DoubleJoints_B.eCANReceive_o2[2];

      /* DataStoreWrite: '<S162>/Data Store Write2' incorporates:
       *  ArithShift: '<S162>/Shift Arithmetic'
       *  ArithShift: '<S162>/Shift Arithmetic1'
       *  ArithShift: '<S162>/Shift Arithmetic2'
       *  DataTypeConversion: '<S162>/Data Type Conversion'
       *  DataTypeConversion: '<S162>/Data Type Conversion1'
       *  DataTypeConversion: '<S162>/Data Type Conversion2'
       *  DataTypeConversion: '<S162>/Data Type Conversion3'
       *  Sum: '<S162>/Add'
       */
      Motor_Position[2L] = ((((int32_T)PID_DoubleJoints_B.eCANReceive_o2[5] <<
        8U) + PID_DoubleJoints_B.eCANReceive_o2[4]) + ((int32_T)
        PID_DoubleJoints_B.eCANReceive_o2[6] << 16U)) + ((int32_T)
        PID_DoubleJoints_B.eCANReceive_o2[7] << 24U);

      /* DataStoreWrite: '<S162>/Data Store Write3' incorporates:
       *  ArithShift: '<S162>/Shift Arithmetic3'
       *  DataTypeConversion: '<S162>/Data Type Conversion4'
       *  DataTypeConversion: '<S162>/Data Type Conversion5'
       *  Sum: '<S162>/Add2'
       */
      Motor_Current[2L] = ((int32_T)PID_DoubleJoints_B.eCANReceive_o2[1] << 8U)
        + PID_DoubleJoints_B.eCANReceive_o2[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S156>/eCAN Receive' */
}

/* Start for atomic system: '<Root>/GetMotorData' */
void PID_DoubleJo_GetMotorData_Start(void)
{
  /* Start for Atomic SubSystem: '<S2>/CANB_281_21' */
  PID_DoubleJoi_CANB_281_21_Start();

  /* End of Start for SubSystem: '<S2>/CANB_281_21' */

  /* Start for Atomic SubSystem: '<S2>/CANB_282_22' */
  PID_DoubleJoi_CANB_282_22_Start();

  /* End of Start for SubSystem: '<S2>/CANB_282_22' */

  /* Start for Atomic SubSystem: '<S2>/CANB_283_23' */
  PID_DoubleJoi_CANB_283_23_Start();

  /* End of Start for SubSystem: '<S2>/CANB_283_23' */

  /* Start for Atomic SubSystem: '<S2>/CANA_284_24' */
  PID_DoubleJoi_CANA_284_24_Start();

  /* End of Start for SubSystem: '<S2>/CANA_284_24' */

  /* Start for Atomic SubSystem: '<S2>/CANA_285_25' */
  PID_DoubleJoi_CANA_285_25_Start();

  /* End of Start for SubSystem: '<S2>/CANA_285_25' */

  /* Start for Atomic SubSystem: '<S2>/CANA_286_26' */
  PID_DoubleJoi_CANA_286_26_Start();

  /* End of Start for SubSystem: '<S2>/CANA_286_26' */
}

/* Output and update for atomic system: '<Root>/GetMotorData' */
void PID_DoubleJoints_GetMotorData(void)
{
  /* Outputs for Atomic SubSystem: '<S2>/CANB_281_21' */
  PID_DoubleJoints_CANB_281_21();

  /* End of Outputs for SubSystem: '<S2>/CANB_281_21' */

  /* Outputs for Atomic SubSystem: '<S2>/CANB_282_22' */
  PID_DoubleJoints_CANB_282_22();

  /* End of Outputs for SubSystem: '<S2>/CANB_282_22' */

  /* Outputs for Atomic SubSystem: '<S2>/CANB_283_23' */
  PID_DoubleJoints_CANB_283_23();

  /* End of Outputs for SubSystem: '<S2>/CANB_283_23' */

  /* Outputs for Atomic SubSystem: '<S2>/CANA_284_24' */
  PID_DoubleJoints_CANA_284_24();

  /* End of Outputs for SubSystem: '<S2>/CANA_284_24' */

  /* Outputs for Atomic SubSystem: '<S2>/CANA_285_25' */
  PID_DoubleJoints_CANA_285_25();

  /* End of Outputs for SubSystem: '<S2>/CANA_285_25' */

  /* Outputs for Atomic SubSystem: '<S2>/CANA_286_26' */
  PID_DoubleJoints_CANA_286_26();

  /* End of Outputs for SubSystem: '<S2>/CANA_286_26' */
}

/* Start for atomic system: '<S5>/获取用户命令' */
void PID_DoubleJoints_u_k_Start(void)
{
  /* Start for S-Function (c28xsci_rx): '<S172>/ ' */

  /* Initialize PID_DoubleJoints_B._o1[0] */
  {
    PID_DoubleJoints_B._o1[0] = (uint16_T)0.0;
    PID_DoubleJoints_B._o1[1] = (uint16_T)0.0;
    PID_DoubleJoints_B._o1[2] = (uint16_T)0.0;
    PID_DoubleJoints_B._o1[3] = (uint16_T)0.0;
    PID_DoubleJoints_B._o1[4] = (uint16_T)0.0;
    PID_DoubleJoints_B._o1[5] = (uint16_T)0.0;
    PID_DoubleJoints_B._o1[6] = (uint16_T)0.0;
    PID_DoubleJoints_B._o1[7] = (uint16_T)0.0;
    PID_DoubleJoints_B._o1[8] = (uint16_T)0.0;
  }
}

/* Output and update for atomic system: '<S5>/获取用户命令' */
void PID_DoubleJoints_u_k(void)
{
  boolean_T rtb_RelationalOperator;
  int16_T i;
  boolean_T tmp;

  /* S-Function (c28xsci_rx): '<S172>/ ' */
  {
    int i;
    int errFlg = NOERROR;
    unsigned int recbuff[9];
    for (i = 0; i < 9; i++)
      recbuff[i] = 0;

    /* Receiving data */
    errFlg = scia_rcv(recbuff, 18, LONGLOOP, 2);
    if (errFlg != NOERROR)
      goto RXERRA;
    memcpy( &PID_DoubleJoints_B._o1[0], recbuff, 9);
   RXERRA:
    asm(" NOP");
    PID_DoubleJoints_B._o2 = errFlg;
  }

  /* RelationalOperator: '<S180>/Relational Operator' incorporates:
   *  Sum: '<S180>/Add'
   */
  rtb_RelationalOperator = (((((((PID_DoubleJoints_B._o1[0] +
    PID_DoubleJoints_B._o1[1]) + PID_DoubleJoints_B._o1[2]) +
    PID_DoubleJoints_B._o1[3]) + PID_DoubleJoints_B._o1[4]) +
    PID_DoubleJoints_B._o1[5]) + PID_DoubleJoints_B._o1[6]) +
    PID_DoubleJoints_B._o1[7] == PID_DoubleJoints_B._o1[8]);

  /* Switch: '<S180>/Switch' incorporates:
   *  Constant: '<S180>/Constant'
   */
  for (i = 0; i < 9; i++) {
    if (rtb_RelationalOperator) {
      PID_DoubleJoints_B.Switch[i] = PID_DoubleJoints_B._o1[i];
    } else {
      PID_DoubleJoints_B.Switch[i] = PID_DoubleJoints_P.Constant_Value_m[i];
    }
  }

  /* End of Switch: '<S180>/Switch' */

  /* Switch: '<S172>/Switch' incorporates:
   *  Constant: '<S172>/Constant'
   *  Constant: '<S172>/Constant1'
   */
  if (PID_DoubleJoints_B._o2 > PID_DoubleJoints_P.Switch_Threshold_a) {
    tmp = PID_DoubleJoints_P.Constant_Value_e;
  } else {
    tmp = PID_DoubleJoints_P.Constant1_Value_p;
  }

  /* End of Switch: '<S172>/Switch' */

  /* Logic: '<S172>/Logical Operator' incorporates:
   *  DataStoreWrite: '<S172>/Data Store Write1'
   */
  PID_DoubleJoints_DW.PTX = (rtb_RelationalOperator && tmp);
}

/* System initialize for atomic system: '<Root>/SendDataToGUI' */
void PID_DoubleJo_SendDataToGUI_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S164>/Output' */
  PID_DoubleJoints_DW.Output_DSTATE = PID_DoubleJoints_P.Output_InitialCondition;
}

/* Output and update for atomic system: '<Root>/SendDataToGUI' */
void PID_DoubleJoints_SendDataToGUI(void)
{
  uint16_T rtb_DataTypeConversion12[18];
  int16_T i;
  uint16_T rtb_DataTypeConversion12_h;
  real_T tmp;
  boolean_T tmp_0;

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant1'
   *  UnitDelay: '<S164>/Output'
   */
  if (PID_DoubleJoints_DW.Output_DSTATE > PID_DoubleJoints_P.Switch_Threshold_i)
  {
    tmp_0 = PID_DoubleJoints_P.Constant1_Value_f;
  } else {
    tmp_0 = PID_DoubleJoints_P.Constant_Value_l;
  }

  /* End of Switch: '<S3>/Switch' */

  /* Outputs for Enabled SubSystem: '<S3>/  ' incorporates:
   *  EnablePort: '<S163>/Enable'
   */
  if (tmp_0) {
    /* SignalConversion: '<S163>/TmpSignal ConversionAtSCI TransmitInport1' incorporates:
     *  Constant: '<S163>/Constant1'
     */
    PID_DoubleJoints_B.TmpSignalConversionAtSCITransmi[0] =
      PID_DoubleJoints_P.Constant1_Value_o;
    for (i = 0; i < 18; i++) {
      /* DataTypeConversion: '<S163>/Data Type Conversion12' incorporates:
       *  DataStoreRead: '<S163>/Data Store Read4'
       */
      tmp = floor(Send_GUIdata[i]);
      if (rtIsNaN(tmp) || rtIsInf(tmp)) {
        tmp = 0.0;
      } else {
        tmp = fmod(tmp, 65536.0);
      }

      rtb_DataTypeConversion12_h = tmp < 0.0 ? (uint16_T)-(int16_T)(uint16_T)
        -tmp : (uint16_T)tmp;

      /* SignalConversion: '<S163>/TmpSignal ConversionAtSCI TransmitInport1' */
      PID_DoubleJoints_B.TmpSignalConversionAtSCITransmi[i + 1] =
        rtb_DataTypeConversion12_h;

      /* DataTypeConversion: '<S163>/Data Type Conversion12' */
      rtb_DataTypeConversion12[i] = rtb_DataTypeConversion12_h;
    }

    /* SignalConversion: '<S163>/TmpSignal ConversionAtSCI TransmitInport1' incorporates:
     *  Constant: '<S163>/Constant1'
     *  Sum: '<S163>/校验码填充'
     */
    PID_DoubleJoints_B.TmpSignalConversionAtSCITransmi[19] =
      (((((((((((((((((PID_DoubleJoints_P.Constant1_Value_o +
                       rtb_DataTypeConversion12[0]) + rtb_DataTypeConversion12[1])
                     + rtb_DataTypeConversion12[2]) + rtb_DataTypeConversion12[3])
                   + rtb_DataTypeConversion12[4]) + rtb_DataTypeConversion12[5])
                 + rtb_DataTypeConversion12[6]) + rtb_DataTypeConversion12[7]) +
               rtb_DataTypeConversion12[8]) + rtb_DataTypeConversion12[9]) +
             rtb_DataTypeConversion12[10]) + rtb_DataTypeConversion12[11]) +
           rtb_DataTypeConversion12[12]) + rtb_DataTypeConversion12[13]) +
         rtb_DataTypeConversion12[14]) + rtb_DataTypeConversion12[15]) +
       rtb_DataTypeConversion12[16]) + rtb_DataTypeConversion12[17];

    /* S-Function (c28xsci_tx): '<S163>/SCI Transmit' */
    {
      scia_xmit((char*)&PID_DoubleJoints_B.TmpSignalConversionAtSCITransmi[0],
                40, 2);
    }
  }

  /* End of Outputs for SubSystem: '<S3>/  ' */

  /* Sum: '<S165>/FixPt Sum1' incorporates:
   *  Constant: '<S165>/FixPt Constant'
   *  UnitDelay: '<S164>/Output'
   */
  PID_DoubleJoints_DW.Output_DSTATE = (PID_DoubleJoints_DW.Output_DSTATE +
    PID_DoubleJoints_P.FixPtConstant_Value) & 255U;

  /* Switch: '<S166>/FixPt Switch' incorporates:
   *  Constant: '<S166>/Constant'
   *  UnitDelay: '<S164>/Output'
   */
  if (PID_DoubleJoints_DW.Output_DSTATE > PID_DoubleJoints_P._uplimit) {
    PID_DoubleJoints_DW.Output_DSTATE = PID_DoubleJoints_P.Constant_Value_n3;
  }

  /* End of Switch: '<S166>/FixPt Switch' */
}

/* Model step function */
void PID_DoubleJoints_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/GetMotorData' */
  PID_DoubleJoints_GetMotorData();

  /* End of Outputs for SubSystem: '<Root>/GetMotorData' */

  /* Outputs for Atomic SubSystem: '<Root>/DynamicsController' */
  DynamicsController();

  /* End of Outputs for SubSystem: '<Root>/DynamicsController' */

  /* Outputs for Atomic SubSystem: '<Root>/SendDataToGUI' */
  PID_DoubleJoints_SendDataToGUI();

  /* End of Outputs for SubSystem: '<Root>/SendDataToGUI' */
}

/* Model initialize function */
void PID_DoubleJoints_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(PID_DoubleJoints_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &PID_DoubleJoints_B), 0,
                sizeof(B_PID_DoubleJoints_T));

  /* states (dwork) */
  (void) memset((void *)&PID_DoubleJoints_DW, 0,
                sizeof(DW_PID_DoubleJoints_T));

  /* exported global states */
  (void) memset(&J7, 0,
                6U*sizeof(real_T));
  (void) memset(&J1, 0,
                6U*sizeof(real_T));
  (void) memset(&J2, 0,
                6U*sizeof(real_T));
  (void) memset(&J3, 0,
                6U*sizeof(real_T));
  (void) memset(&J4, 0,
                6U*sizeof(real_T));
  (void) memset(&J5, 0,
                6U*sizeof(real_T));
  (void) memset(&J6, 0,
                6U*sizeof(real_T));
  (void) memset(&Send_GUIdata, 0,
                18U*sizeof(real_T));
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
  (void) memset(&Motor_Position, 0,
                6U*sizeof(int32_T));
  (void) memset(&Motor_Current, 0,
                6U*sizeof(int32_T));
  (void) memset(&Motor_Velocity, 0,
                6U*sizeof(int32_T));
  StartRobot = 0U;
  TXD = 0U;

  {
    int16_T i;

    /* Start for Atomic SubSystem: '<Root>/GetMotorData' */
    PID_DoubleJo_GetMotorData_Start();

    /* End of Start for SubSystem: '<Root>/GetMotorData' */

    /* Start for Atomic SubSystem: '<Root>/DynamicsController' */
    DynamicsController_Start();

    /* End of Start for SubSystem: '<Root>/DynamicsController' */

    /* Start for S-Function (idletask): '<Root>/Idle Task' incorporates:
     *  SubSystem: '<Root>/接收上位机的数据'
     */
    /* Start for function-call system: '<Root>/接收上位机的数据' */

    /* Start for Atomic SubSystem: '<S5>/获取用户命令' */
    PID_DoubleJoints_u_k_Start();

    /* End of Start for SubSystem: '<S5>/获取用户命令' */

    /* Start for DataStoreMemory: '<S5>/消息使能' */
    PID_DoubleJoints_DW.PTX = PID_DoubleJoints_P._InitialValue_g;
    for (i = 0; i < 6; i++) {
      /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
      Motor_Position[i] = PID_DoubleJoints_P.DataStoreMemory1_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory10' */
      J7[i] = PID_DoubleJoints_P.DataStoreMemory10_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory11' */
      Motor_Current[i] = PID_DoubleJoints_P.DataStoreMemory11_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory13' */
      J1[i] = PID_DoubleJoints_P.DataStoreMemory13_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory2' */
      Motor_Velocity[i] = PID_DoubleJoints_P.DataStoreMemory2_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory3' */
      J2[i] = PID_DoubleJoints_P.DataStoreMemory3_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory4' */
      J3[i] = PID_DoubleJoints_P.DataStoreMemory4_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory5' */
      J4[i] = PID_DoubleJoints_P.DataStoreMemory5_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory6' */
      J5[i] = PID_DoubleJoints_P.DataStoreMemory6_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory7' */
      J6[i] = PID_DoubleJoints_P.DataStoreMemory7_InitialValue[i];
    }

    /* Start for DataStoreMemory: '<Root>/Data Store Memory8' */
    memcpy(&Send_GUIdata[0], &PID_DoubleJoints_P.DataStoreMemory8_InitialValue[0],
           18U * sizeof(real_T));

    /* Start for DataStoreMemory: '<Root>/Data Store Memory9' */
    StartRobot = PID_DoubleJoints_P.DataStoreMemory9_InitialValue;

    /* user code (Initialize function Body) */

    /* System '<Root>' */
    MO_config_eCAN_B_mbx (1U, 26, 769, 0);
    MO_config_eCAN_B_mbx (1U, 27, 770, 0);
    MO_config_eCAN_B_mbx (1U, 28, 771, 0);
    MO_config_eCAN_A_mbx (1U, 29, 772, 0);
    MO_config_eCAN_A_mbx (1U, 30, 773, 0);
    MO_config_eCAN_A_mbx (1U, 31, 774, 0);
    DELAY_US(3000000);

    /* SystemInitialize for Atomic SubSystem: '<Root>/DynamicsController' */
    DynamicsController_Init();

    /* End of SystemInitialize for SubSystem: '<Root>/DynamicsController' */

    /* SystemInitialize for Atomic SubSystem: '<Root>/SendDataToGUI' */
    PID_DoubleJo_SendDataToGUI_Init();

    /* End of SystemInitialize for SubSystem: '<Root>/SendDataToGUI' */
  }
}

/* Model terminate function */
void PID_DoubleJoints_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
