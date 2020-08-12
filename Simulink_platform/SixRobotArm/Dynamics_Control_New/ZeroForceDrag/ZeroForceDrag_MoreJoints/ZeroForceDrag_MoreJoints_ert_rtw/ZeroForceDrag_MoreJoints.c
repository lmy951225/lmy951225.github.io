/*
 * File: ZeroForceDrag_MoreJoints.c
 *
 * Code generated for Simulink model 'ZeroForceDrag_MoreJoints'.
 *
 * Model version                  : 1.171
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jan  7 21:52:39 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ZeroForceDrag_MoreJoints.h"
#include "ZeroForceDrag_MoreJoints_private.h"

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
real_T q[6];                           /* '<S1>/各个关节内转子采集 到的实际角度' */
real_T dq[6];                          /* '<S1>/各个关节内转子采集 到的实际角速度' */
real_T Tau[6];                         /* '<S1>/驱动各个关节 运动的力矩' */
int32_T Motor_Position[6];             /* '<Root>/Data Store Memory1' */
int32_T Motor_Current[6];              /* '<Root>/Data Store Memory11' */
int32_T Motor_Velocity[6];             /* '<Root>/Data Store Memory2' */
uint16_T StartRobot;                   /* '<Root>/Data Store Memory9' */
uint16_T TXD;                          /* '<S7>/Data Store Memory1' */

/* Block signals (default storage) */
B_ZeroForceDrag_MoreJoints_T ZeroForceDrag_MoreJoints_B;

/* Block states (default storage) */
DW_ZeroForceDrag_MoreJoints_T ZeroForceDrag_MoreJoints_DW;

/* Real-time model */
RT_MODEL_ZeroForceDrag_MoreJo_T ZeroForceDrag_MoreJoints_M_;
RT_MODEL_ZeroForceDrag_MoreJo_T *const ZeroForceDrag_MoreJoints_M =
  &ZeroForceDrag_MoreJoints_M_;

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
      ZeroForceDrag_MoreJoints_u_h();

      /* End of Outputs for SubSystem: '<S5>/获取用户命令' */

      /* Outputs for Enabled SubSystem: '<S5>/Subsystem' incorporates:
       *  EnablePort: '<S146>/Enable'
       */
      /* RelationalOperator: '<S143>/Compare' incorporates:
       *  Constant: '<S143>/Constant'
       */
      if (ZeroForceDrag_MoreJoints_B.Switch[0] ==
          ZeroForceDrag_MoreJoints_P.ux88_const) {
        /* SwitchCase: '<S146>/Switch Case' */
        switch ((int32_T)ZeroForceDrag_MoreJoints_B.Switch[1]) {
         case 1L:
          /* Outputs for IfAction SubSystem: '<S146>/Joint1' incorporates:
           *  ActionPort: '<S148>/Action Port'
           */
          /* DataStoreWrite: '<S148>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J1[i] = (int16_T)ZeroForceDrag_MoreJoints_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S148>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S146>/Joint1' */
          break;

         case 2L:
          /* Outputs for IfAction SubSystem: '<S146>/Joint2' incorporates:
           *  ActionPort: '<S149>/Action Port'
           */
          /* DataStoreWrite: '<S149>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J2[i] = (int16_T)ZeroForceDrag_MoreJoints_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S149>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S146>/Joint2' */
          break;

         case 3L:
          /* Outputs for IfAction SubSystem: '<S146>/Joint3' incorporates:
           *  ActionPort: '<S150>/Action Port'
           */
          /* DataStoreWrite: '<S150>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J3[i] = (int16_T)ZeroForceDrag_MoreJoints_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S150>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S146>/Joint3' */
          break;

         case 4L:
          /* Outputs for IfAction SubSystem: '<S146>/Joint4' incorporates:
           *  ActionPort: '<S151>/Action Port'
           */
          /* DataStoreWrite: '<S151>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J4[i] = (int16_T)ZeroForceDrag_MoreJoints_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S151>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S146>/Joint4' */
          break;

         case 5L:
          /* Outputs for IfAction SubSystem: '<S146>/Joint5' incorporates:
           *  ActionPort: '<S152>/Action Port'
           */
          /* DataStoreWrite: '<S152>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J5[i] = (int16_T)ZeroForceDrag_MoreJoints_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S152>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S146>/Joint5' */
          break;

         case 6L:
          /* Outputs for IfAction SubSystem: '<S146>/Joint6' incorporates:
           *  ActionPort: '<S153>/Action Port'
           */
          /* DataStoreWrite: '<S153>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J6[i] = (int16_T)ZeroForceDrag_MoreJoints_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S153>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S146>/Joint6' */
          break;

         case 7L:
          /* Outputs for IfAction SubSystem: '<S146>/Joint7' incorporates:
           *  ActionPort: '<S154>/Action Port'
           */
          /* DataStoreWrite: '<S154>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J7[i] = (int16_T)ZeroForceDrag_MoreJoints_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S154>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S146>/Joint7' */
          break;
        }

        /* End of SwitchCase: '<S146>/Switch Case' */
      }

      /* End of RelationalOperator: '<S143>/Compare' */
      /* End of Outputs for SubSystem: '<S5>/Subsystem' */

      /* DataTypeConversion: '<S5>/Data Type Conversion4' incorporates:
       *  Constant: '<S142>/Constant'
       *  Constant: '<S144>/Constant'
       *  Constant: '<S145>/Constant'
       *  DataStoreRead: '<S5>/Data Store Read'
       *  DataStoreWrite: '<S5>/Data Store Write2'
       *  Logic: '<S5>/Logical Operator'
       *  RelationalOperator: '<S142>/Compare'
       *  RelationalOperator: '<S144>/Compare'
       *  RelationalOperator: '<S145>/Compare'
       */
      StartRobot = (uint16_T)((ZeroForceDrag_MoreJoints_B.Switch[0] ==
        ZeroForceDrag_MoreJoints_P.ux0080_const) &&
        ZeroForceDrag_MoreJoints_DW.PTX && (ZeroForceDrag_MoreJoints_B.Switch[2]
        == ZeroForceDrag_MoreJoints_P.CompareToConstant1_const) &&
        (ZeroForceDrag_MoreJoints_B.Switch[3] ==
         ZeroForceDrag_MoreJoints_P.CompareToConstant2_const));
    }

    /* End of Outputs for S-Function (idletask): '<Root>/Idle Task' */
  }
}

/* Start for atomic system: '<S2>/CANA_284_24' */
void ZeroForceDrag_CANA_284_24_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S126>/eCAN Receive1' */

  /* Configure mailbox 24 to receive messages with the ID: 644 */
  config_eCAN_A_mbx (0U, 24, 644, 0);

  /* Initialize ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[0] */
  {
    ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[0] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[1] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[2] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[3] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[4] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[5] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[6] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S126>/eCAN Receive1' */
}

/* Output and update for atomic system: '<S2>/CANA_284_24' */
void ZeroForceDrag_MoreJ_CANA_284_24(void)
{
  /* S-Function (c280xcanrcv): '<S126>/eCAN Receive1' */
  {
    struct ECAN_REGS ECanaShadow;
    if (ECanaRegs.CANRMP.bit.RMP24) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanaShadow.CANRMP.all = 0x0;
      ECanaShadow.CANRMP.bit.RMP24 = 1;/* request clear RMP for this mailbox only*/
      ECanaRegs.CANRMP.all = ECanaShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[0] =
        ECanaMboxes.MBOX24.MDL.byte.BYTE3;
      ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[1] =
        ECanaMboxes.MBOX24.MDL.byte.BYTE2;
      ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[2] =
        ECanaMboxes.MBOX24.MDL.byte.BYTE1;
      ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[3] =
        ECanaMboxes.MBOX24.MDL.byte.BYTE0;
      ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[4] =
        ECanaMboxes.MBOX24.MDH.byte.BYTE7;
      ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[5] =
        ECanaMboxes.MBOX24.MDH.byte.BYTE6;
      ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[6] =
        ECanaMboxes.MBOX24.MDH.byte.BYTE5;
      ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[7] =
        ECanaMboxes.MBOX24.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S126>/Subsystem1' */

      /* DataStoreWrite: '<S132>/Data Store Write1' incorporates:
       *  ArithShift: '<S132>/Shift Arithmetic4'
       *  DataTypeConversion: '<S132>/Data Type Conversion6'
       *  DataTypeConversion: '<S132>/Data Type Conversion7'
       *  Sum: '<S132>/Add1'
       */
      Motor_Velocity[3L] = ((int16_T)ZeroForceDrag_MoreJoints_B.eCANReceive1_o2
                            [3] << 8U) + (int16_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[2];

      /* DataStoreWrite: '<S132>/Data Store Write2' incorporates:
       *  ArithShift: '<S132>/Shift Arithmetic'
       *  ArithShift: '<S132>/Shift Arithmetic1'
       *  ArithShift: '<S132>/Shift Arithmetic2'
       *  DataTypeConversion: '<S132>/Data Type Conversion'
       *  DataTypeConversion: '<S132>/Data Type Conversion1'
       *  DataTypeConversion: '<S132>/Data Type Conversion2'
       *  DataTypeConversion: '<S132>/Data Type Conversion3'
       *  Sum: '<S132>/Add'
       */
      Motor_Position[3L] = ((((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[5] << 8U) +
        ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[4]) + ((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[6] << 16U)) + ((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[7] << 24U);

      /* DataStoreWrite: '<S132>/Data Store Write3' incorporates:
       *  ArithShift: '<S132>/Shift Arithmetic3'
       *  DataTypeConversion: '<S132>/Data Type Conversion4'
       *  DataTypeConversion: '<S132>/Data Type Conversion5'
       *  Sum: '<S132>/Add2'
       */
      Motor_Current[3L] = ((int16_T)ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[1]
                           << 8U) + (int16_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive1_o2[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S126>/eCAN Receive1' */
}

/* Start for atomic system: '<S2>/CANA_285_25' */
void ZeroForceDrag_CANA_285_25_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S127>/eCAN Receive' */

  /* Configure mailbox 25 to receive messages with the ID: 645 */
  config_eCAN_A_mbx (0U, 25, 645, 0);

  /* Initialize ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[0] */
  {
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[0] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[1] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[2] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[3] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[4] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[5] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[6] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S127>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANA_285_25' */
void ZeroForceDrag_MoreJ_CANA_285_25(void)
{
  /* S-Function (c280xcanrcv): '<S127>/eCAN Receive' */
  {
    struct ECAN_REGS ECanaShadow;
    if (ECanaRegs.CANRMP.bit.RMP25) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanaShadow.CANRMP.all = 0x0;
      ECanaShadow.CANRMP.bit.RMP25 = 1;/* request clear RMP for this mailbox only*/
      ECanaRegs.CANRMP.all = ECanaShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[0] =
        ECanaMboxes.MBOX25.MDL.byte.BYTE3;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[1] =
        ECanaMboxes.MBOX25.MDL.byte.BYTE2;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[2] =
        ECanaMboxes.MBOX25.MDL.byte.BYTE1;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[3] =
        ECanaMboxes.MBOX25.MDL.byte.BYTE0;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[4] =
        ECanaMboxes.MBOX25.MDH.byte.BYTE7;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[5] =
        ECanaMboxes.MBOX25.MDH.byte.BYTE6;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[6] =
        ECanaMboxes.MBOX25.MDH.byte.BYTE5;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[7] =
        ECanaMboxes.MBOX25.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S127>/Subsystem' */

      /* DataStoreWrite: '<S133>/Data Store Write1' incorporates:
       *  ArithShift: '<S133>/Shift Arithmetic4'
       *  DataTypeConversion: '<S133>/Data Type Conversion4'
       *  DataTypeConversion: '<S133>/Data Type Conversion6'
       *  Sum: '<S133>/Add1'
       */
      Motor_Velocity[4L] = ((int16_T)
                            ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[3] <<
                            8U) + (int16_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[2];

      /* DataStoreWrite: '<S133>/Data Store Write2' incorporates:
       *  ArithShift: '<S133>/Shift Arithmetic'
       *  ArithShift: '<S133>/Shift Arithmetic1'
       *  ArithShift: '<S133>/Shift Arithmetic2'
       *  DataTypeConversion: '<S133>/Data Type Conversion'
       *  DataTypeConversion: '<S133>/Data Type Conversion1'
       *  DataTypeConversion: '<S133>/Data Type Conversion2'
       *  DataTypeConversion: '<S133>/Data Type Conversion3'
       *  Sum: '<S133>/Add'
       */
      Motor_Position[4L] = ((((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[5] << 8U) +
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[4]) + ((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[6] << 16U)) + ((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[7] << 24U);

      /* DataStoreWrite: '<S133>/Data Store Write3' incorporates:
       *  ArithShift: '<S133>/Shift Arithmetic3'
       *  DataTypeConversion: '<S133>/Data Type Conversion5'
       *  DataTypeConversion: '<S133>/Data Type Conversion7'
       *  Sum: '<S133>/Add2'
       */
      Motor_Current[4L] = ((int16_T)
                           ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[1] << 8U)
        + (int16_T)ZeroForceDrag_MoreJoints_B.eCANReceive_o2_hx[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S127>/eCAN Receive' */
}

/* Start for atomic system: '<S2>/CANA_286_26' */
void ZeroForceDrag_CANA_286_26_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S128>/eCAN Receive' */

  /* Configure mailbox 26 to receive messages with the ID: 646 */
  config_eCAN_A_mbx (0U, 26, 646, 0);

  /* Initialize ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[0] */
  {
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[0] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[1] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[2] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[3] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[4] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[5] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[6] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S128>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANA_286_26' */
void ZeroForceDrag_MoreJ_CANA_286_26(void)
{
  /* S-Function (c280xcanrcv): '<S128>/eCAN Receive' */
  {
    struct ECAN_REGS ECanaShadow;
    if (ECanaRegs.CANRMP.bit.RMP26) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanaShadow.CANRMP.all = 0x0;
      ECanaShadow.CANRMP.bit.RMP26 = 1;/* request clear RMP for this mailbox only*/
      ECanaRegs.CANRMP.all = ECanaShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[0] =
        ECanaMboxes.MBOX26.MDL.byte.BYTE3;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[1] =
        ECanaMboxes.MBOX26.MDL.byte.BYTE2;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[2] =
        ECanaMboxes.MBOX26.MDL.byte.BYTE1;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[3] =
        ECanaMboxes.MBOX26.MDL.byte.BYTE0;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[4] =
        ECanaMboxes.MBOX26.MDH.byte.BYTE7;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[5] =
        ECanaMboxes.MBOX26.MDH.byte.BYTE6;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[6] =
        ECanaMboxes.MBOX26.MDH.byte.BYTE5;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[7] =
        ECanaMboxes.MBOX26.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S128>/Subsystem' */

      /* DataStoreWrite: '<S134>/Data Store Write1' incorporates:
       *  ArithShift: '<S134>/Shift Arithmetic4'
       *  DataTypeConversion: '<S134>/Data Type Conversion4'
       *  DataTypeConversion: '<S134>/Data Type Conversion7'
       *  Sum: '<S134>/Add1'
       */
      Motor_Velocity[5L] = ((int16_T)
                            ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[3] << 8U)
        + (int16_T)ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[2];

      /* DataStoreWrite: '<S134>/Data Store Write2' incorporates:
       *  ArithShift: '<S134>/Shift Arithmetic'
       *  ArithShift: '<S134>/Shift Arithmetic1'
       *  ArithShift: '<S134>/Shift Arithmetic2'
       *  DataTypeConversion: '<S134>/Data Type Conversion'
       *  DataTypeConversion: '<S134>/Data Type Conversion1'
       *  DataTypeConversion: '<S134>/Data Type Conversion2'
       *  DataTypeConversion: '<S134>/Data Type Conversion3'
       *  Sum: '<S134>/Add'
       */
      Motor_Position[5L] = ((((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[5] << 8U) +
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[4]) + ((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[6] << 16U)) + ((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[7] << 24U);

      /* DataStoreWrite: '<S134>/Data Store Write3' incorporates:
       *  ArithShift: '<S134>/Shift Arithmetic3'
       *  DataTypeConversion: '<S134>/Data Type Conversion5'
       *  DataTypeConversion: '<S134>/Data Type Conversion6'
       *  Sum: '<S134>/Add2'
       */
      Motor_Current[5L] = ((int16_T)ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n
                           [1] << 8U) + (int16_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_n[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S128>/eCAN Receive' */
}

/* Start for atomic system: '<S2>/CANB_281_21' */
void ZeroForceDrag_CANB_281_21_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S129>/eCAN Receive' */

  /* Configure mailbox 21 to receive messages with the ID: 641 */
  config_eCAN_B_mbx (0U, 21, 641, 0);

  /* Initialize ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[0] */
  {
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[0] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[1] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[2] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[3] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[4] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[5] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[6] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S129>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANB_281_21' */
void ZeroForceDrag_MoreJ_CANB_281_21(void)
{
  /* S-Function (c280xcanrcv): '<S129>/eCAN Receive' */
  {
    struct ECAN_REGS ECanbShadow;
    if (ECanbRegs.CANRMP.bit.RMP21) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanbShadow.CANRMP.all = 0x0;
      ECanbShadow.CANRMP.bit.RMP21 = 1;/* request clear RMP for this mailbox only*/
      ECanbRegs.CANRMP.all = ECanbShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[0] =
        ECanbMboxes.MBOX21.MDL.byte.BYTE3;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[1] =
        ECanbMboxes.MBOX21.MDL.byte.BYTE2;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[2] =
        ECanbMboxes.MBOX21.MDL.byte.BYTE1;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[3] =
        ECanbMboxes.MBOX21.MDL.byte.BYTE0;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[4] =
        ECanbMboxes.MBOX21.MDH.byte.BYTE7;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[5] =
        ECanbMboxes.MBOX21.MDH.byte.BYTE6;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[6] =
        ECanbMboxes.MBOX21.MDH.byte.BYTE5;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[7] =
        ECanbMboxes.MBOX21.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S129>/Subsystem' */

      /* DataStoreWrite: '<S135>/Data Store Write1' incorporates:
       *  ArithShift: '<S135>/Shift Arithmetic4'
       *  DataTypeConversion: '<S135>/Data Type Conversion1'
       *  DataTypeConversion: '<S135>/Data Type Conversion2'
       *  Sum: '<S135>/Add1'
       */
      Motor_Velocity[0L] = ((int16_T)
                            ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[3] << 8U)
        + (int16_T)ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[2];

      /* DataStoreWrite: '<S135>/Data Store Write2' incorporates:
       *  ArithShift: '<S135>/Shift Arithmetic'
       *  ArithShift: '<S135>/Shift Arithmetic1'
       *  ArithShift: '<S135>/Shift Arithmetic2'
       *  DataTypeConversion: '<S135>/Data Type Conversion3'
       *  DataTypeConversion: '<S135>/Data Type Conversion6'
       *  DataTypeConversion: '<S135>/Data Type Conversion7'
       *  DataTypeConversion: '<S135>/Data Type Conversion8'
       *  Sum: '<S135>/Add'
       */
      Motor_Position[0L] = ((((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[5] << 8U) +
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[4]) + ((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[6] << 16U)) + ((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[7] << 24U);

      /* DataStoreWrite: '<S135>/Data Store Write3' incorporates:
       *  ArithShift: '<S135>/Shift Arithmetic3'
       *  DataTypeConversion: '<S135>/Data Type Conversion4'
       *  DataTypeConversion: '<S135>/Data Type Conversion5'
       *  Sum: '<S135>/Add2'
       */
      Motor_Current[0L] = ((int16_T)ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h
                           [1] << 8U) + (int16_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_h[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S129>/eCAN Receive' */
}

/* Start for atomic system: '<S2>/CANB_282_22' */
void ZeroForceDrag_CANB_282_22_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S130>/eCAN Receive' */

  /* Configure mailbox 22 to receive messages with the ID: 642 */
  config_eCAN_B_mbx (0U, 22, 642, 0);

  /* Initialize ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[0] */
  {
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[0] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[1] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[2] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[3] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[4] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[5] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[6] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S130>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANB_282_22' */
void ZeroForceDrag_MoreJ_CANB_282_22(void)
{
  /* S-Function (c280xcanrcv): '<S130>/eCAN Receive' */
  {
    struct ECAN_REGS ECanbShadow;
    if (ECanbRegs.CANRMP.bit.RMP22) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanbShadow.CANRMP.all = 0x0;
      ECanbShadow.CANRMP.bit.RMP22 = 1;/* request clear RMP for this mailbox only*/
      ECanbRegs.CANRMP.all = ECanbShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[0] =
        ECanbMboxes.MBOX22.MDL.byte.BYTE3;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[1] =
        ECanbMboxes.MBOX22.MDL.byte.BYTE2;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[2] =
        ECanbMboxes.MBOX22.MDL.byte.BYTE1;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[3] =
        ECanbMboxes.MBOX22.MDL.byte.BYTE0;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[4] =
        ECanbMboxes.MBOX22.MDH.byte.BYTE7;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[5] =
        ECanbMboxes.MBOX22.MDH.byte.BYTE6;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[6] =
        ECanbMboxes.MBOX22.MDH.byte.BYTE5;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[7] =
        ECanbMboxes.MBOX22.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S130>/Subsystem' */

      /* DataStoreWrite: '<S136>/Data Store Write1' incorporates:
       *  ArithShift: '<S136>/Shift Arithmetic4'
       *  DataTypeConversion: '<S136>/Data Type Conversion6'
       *  DataTypeConversion: '<S136>/Data Type Conversion7'
       *  Sum: '<S136>/Add1'
       */
      Motor_Velocity[1L] = ((int16_T)
                            ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[3] << 8U)
        + (int16_T)ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[2];

      /* DataStoreWrite: '<S136>/Data Store Write2' incorporates:
       *  ArithShift: '<S136>/Shift Arithmetic'
       *  ArithShift: '<S136>/Shift Arithmetic1'
       *  ArithShift: '<S136>/Shift Arithmetic2'
       *  DataTypeConversion: '<S136>/Data Type Conversion'
       *  DataTypeConversion: '<S136>/Data Type Conversion1'
       *  DataTypeConversion: '<S136>/Data Type Conversion2'
       *  DataTypeConversion: '<S136>/Data Type Conversion3'
       *  Sum: '<S136>/Add'
       */
      Motor_Position[1L] = ((((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[5] << 8U) +
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[4]) + ((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[6] << 16U)) + ((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[7] << 24U);

      /* DataStoreWrite: '<S136>/Data Store Write3' incorporates:
       *  ArithShift: '<S136>/Shift Arithmetic3'
       *  DataTypeConversion: '<S136>/Data Type Conversion4'
       *  DataTypeConversion: '<S136>/Data Type Conversion5'
       *  Sum: '<S136>/Add2'
       */
      Motor_Current[1L] = ((int32_T)ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m
                           [1] << 8U) +
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2_m[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S130>/eCAN Receive' */
}

/* Start for atomic system: '<S2>/CANB_283_23' */
void ZeroForceDrag_CANB_283_23_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S131>/eCAN Receive' */

  /* Configure mailbox 23 to receive messages with the ID: 643 */
  config_eCAN_B_mbx (0U, 23, 643, 0);

  /* Initialize ZeroForceDrag_MoreJoints_B.eCANReceive_o2[0] */
  {
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2[0] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2[1] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2[2] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2[3] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2[4] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2[5] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2[6] = (uint8_T)0.0;
    ZeroForceDrag_MoreJoints_B.eCANReceive_o2[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S131>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANB_283_23' */
void ZeroForceDrag_MoreJ_CANB_283_23(void)
{
  /* S-Function (c280xcanrcv): '<S131>/eCAN Receive' */
  {
    struct ECAN_REGS ECanbShadow;
    if (ECanbRegs.CANRMP.bit.RMP23) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanbShadow.CANRMP.all = 0x0;
      ECanbShadow.CANRMP.bit.RMP23 = 1;/* request clear RMP for this mailbox only*/
      ECanbRegs.CANRMP.all = ECanbShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2[0] =
        ECanbMboxes.MBOX23.MDL.byte.BYTE3;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2[1] =
        ECanbMboxes.MBOX23.MDL.byte.BYTE2;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2[2] =
        ECanbMboxes.MBOX23.MDL.byte.BYTE1;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2[3] =
        ECanbMboxes.MBOX23.MDL.byte.BYTE0;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2[4] =
        ECanbMboxes.MBOX23.MDH.byte.BYTE7;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2[5] =
        ECanbMboxes.MBOX23.MDH.byte.BYTE6;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2[6] =
        ECanbMboxes.MBOX23.MDH.byte.BYTE5;
      ZeroForceDrag_MoreJoints_B.eCANReceive_o2[7] =
        ECanbMboxes.MBOX23.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S131>/Subsystem' */

      /* DataStoreWrite: '<S137>/Data Store Write1' incorporates:
       *  ArithShift: '<S137>/Shift Arithmetic4'
       *  DataTypeConversion: '<S137>/Data Type Conversion6'
       *  DataTypeConversion: '<S137>/Data Type Conversion7'
       *  Sum: '<S137>/Add1'
       */
      Motor_Velocity[2L] = ((int16_T)ZeroForceDrag_MoreJoints_B.eCANReceive_o2[3]
                            << 8U) + (int16_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2[2];

      /* DataStoreWrite: '<S137>/Data Store Write2' incorporates:
       *  ArithShift: '<S137>/Shift Arithmetic'
       *  ArithShift: '<S137>/Shift Arithmetic1'
       *  ArithShift: '<S137>/Shift Arithmetic2'
       *  DataTypeConversion: '<S137>/Data Type Conversion'
       *  DataTypeConversion: '<S137>/Data Type Conversion1'
       *  DataTypeConversion: '<S137>/Data Type Conversion2'
       *  DataTypeConversion: '<S137>/Data Type Conversion3'
       *  Sum: '<S137>/Add'
       */
      Motor_Position[2L] = ((((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2[5] << 8U) +
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2[4]) + ((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2[6] << 16U)) + ((int32_T)
        ZeroForceDrag_MoreJoints_B.eCANReceive_o2[7] << 24U);

      /* DataStoreWrite: '<S137>/Data Store Write3' incorporates:
       *  ArithShift: '<S137>/Shift Arithmetic3'
       *  DataTypeConversion: '<S137>/Data Type Conversion4'
       *  DataTypeConversion: '<S137>/Data Type Conversion5'
       *  Sum: '<S137>/Add2'
       */
      Motor_Current[2L] = ((int32_T)ZeroForceDrag_MoreJoints_B.eCANReceive_o2[1]
                           << 8U) + ZeroForceDrag_MoreJoints_B.eCANReceive_o2[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S131>/eCAN Receive' */
}

/* Start for atomic system: '<Root>/GetMotorData' */
void ZeroForceDra_GetMotorData_Start(void)
{
  /* Start for Atomic SubSystem: '<S2>/CANB_281_21' */
  ZeroForceDrag_CANB_281_21_Start();

  /* End of Start for SubSystem: '<S2>/CANB_281_21' */

  /* Start for Atomic SubSystem: '<S2>/CANB_282_22' */
  ZeroForceDrag_CANB_282_22_Start();

  /* End of Start for SubSystem: '<S2>/CANB_282_22' */

  /* Start for Atomic SubSystem: '<S2>/CANB_283_23' */
  ZeroForceDrag_CANB_283_23_Start();

  /* End of Start for SubSystem: '<S2>/CANB_283_23' */

  /* Start for Atomic SubSystem: '<S2>/CANA_284_24' */
  ZeroForceDrag_CANA_284_24_Start();

  /* End of Start for SubSystem: '<S2>/CANA_284_24' */

  /* Start for Atomic SubSystem: '<S2>/CANA_285_25' */
  ZeroForceDrag_CANA_285_25_Start();

  /* End of Start for SubSystem: '<S2>/CANA_285_25' */

  /* Start for Atomic SubSystem: '<S2>/CANA_286_26' */
  ZeroForceDrag_CANA_286_26_Start();

  /* End of Start for SubSystem: '<S2>/CANA_286_26' */
}

/* Output and update for atomic system: '<Root>/GetMotorData' */
void ZeroForceDrag_More_GetMotorData(void)
{
  /* Outputs for Atomic SubSystem: '<S2>/CANB_281_21' */
  ZeroForceDrag_MoreJ_CANB_281_21();

  /* End of Outputs for SubSystem: '<S2>/CANB_281_21' */

  /* Outputs for Atomic SubSystem: '<S2>/CANB_282_22' */
  ZeroForceDrag_MoreJ_CANB_282_22();

  /* End of Outputs for SubSystem: '<S2>/CANB_282_22' */

  /* Outputs for Atomic SubSystem: '<S2>/CANB_283_23' */
  ZeroForceDrag_MoreJ_CANB_283_23();

  /* End of Outputs for SubSystem: '<S2>/CANB_283_23' */

  /* Outputs for Atomic SubSystem: '<S2>/CANA_284_24' */
  ZeroForceDrag_MoreJ_CANA_284_24();

  /* End of Outputs for SubSystem: '<S2>/CANA_284_24' */

  /* Outputs for Atomic SubSystem: '<S2>/CANA_285_25' */
  ZeroForceDrag_MoreJ_CANA_285_25();

  /* End of Outputs for SubSystem: '<S2>/CANA_285_25' */

  /* Outputs for Atomic SubSystem: '<S2>/CANA_286_26' */
  ZeroForceDrag_MoreJ_CANA_286_26();

  /* End of Outputs for SubSystem: '<S2>/CANA_286_26' */
}

/* Start for atomic system: '<S5>/获取用户命令' */
void ZeroForceDrag_MoreJoi_u_h_Start(void)
{
  /* Start for S-Function (c28xsci_rx): '<S147>/ ' */

  /* Initialize ZeroForceDrag_MoreJoints_B._o1[0] */
  {
    ZeroForceDrag_MoreJoints_B._o1[0] = (uint16_T)0.0;
    ZeroForceDrag_MoreJoints_B._o1[1] = (uint16_T)0.0;
    ZeroForceDrag_MoreJoints_B._o1[2] = (uint16_T)0.0;
    ZeroForceDrag_MoreJoints_B._o1[3] = (uint16_T)0.0;
    ZeroForceDrag_MoreJoints_B._o1[4] = (uint16_T)0.0;
    ZeroForceDrag_MoreJoints_B._o1[5] = (uint16_T)0.0;
    ZeroForceDrag_MoreJoints_B._o1[6] = (uint16_T)0.0;
    ZeroForceDrag_MoreJoints_B._o1[7] = (uint16_T)0.0;
    ZeroForceDrag_MoreJoints_B._o1[8] = (uint16_T)0.0;
  }
}

/* Output and update for atomic system: '<S5>/获取用户命令' */
void ZeroForceDrag_MoreJoints_u_h(void)
{
  boolean_T rtb_RelationalOperator;
  int16_T i;
  boolean_T tmp;

  /* S-Function (c28xsci_rx): '<S147>/ ' */
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
    memcpy( &ZeroForceDrag_MoreJoints_B._o1[0], recbuff, 9);
   RXERRA:
    asm(" NOP");
    ZeroForceDrag_MoreJoints_B._o2 = errFlg;
  }

  /* RelationalOperator: '<S155>/Relational Operator' incorporates:
   *  Sum: '<S155>/Add'
   */
  rtb_RelationalOperator = (((((((ZeroForceDrag_MoreJoints_B._o1[0] +
    ZeroForceDrag_MoreJoints_B._o1[1]) + ZeroForceDrag_MoreJoints_B._o1[2]) +
    ZeroForceDrag_MoreJoints_B._o1[3]) + ZeroForceDrag_MoreJoints_B._o1[4]) +
    ZeroForceDrag_MoreJoints_B._o1[5]) + ZeroForceDrag_MoreJoints_B._o1[6]) +
    ZeroForceDrag_MoreJoints_B._o1[7] == ZeroForceDrag_MoreJoints_B._o1[8]);

  /* Switch: '<S155>/Switch' incorporates:
   *  Constant: '<S155>/Constant'
   */
  for (i = 0; i < 9; i++) {
    if (rtb_RelationalOperator) {
      ZeroForceDrag_MoreJoints_B.Switch[i] = ZeroForceDrag_MoreJoints_B._o1[i];
    } else {
      ZeroForceDrag_MoreJoints_B.Switch[i] =
        ZeroForceDrag_MoreJoints_P.Constant_Value_p[i];
    }
  }

  /* End of Switch: '<S155>/Switch' */

  /* Switch: '<S147>/Switch' incorporates:
   *  Constant: '<S147>/Constant'
   *  Constant: '<S147>/Constant1'
   */
  if (ZeroForceDrag_MoreJoints_B._o2 >
      ZeroForceDrag_MoreJoints_P.Switch_Threshold_o) {
    tmp = ZeroForceDrag_MoreJoints_P.Constant_Value_f;
  } else {
    tmp = ZeroForceDrag_MoreJoints_P.Constant1_Value_ks;
  }

  /* End of Switch: '<S147>/Switch' */

  /* Logic: '<S147>/Logical Operator' incorporates:
   *  DataStoreWrite: '<S147>/Data Store Write1'
   */
  ZeroForceDrag_MoreJoints_DW.PTX = (rtb_RelationalOperator && tmp);
}

/* System initialize for atomic system: '<Root>/SendDataToGUI' */
void ZeroForceDra_SendDataToGUI_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S139>/Output' */
  ZeroForceDrag_MoreJoints_DW.Output_DSTATE =
    ZeroForceDrag_MoreJoints_P.Output_InitialCondition;
}

/* Output and update for atomic system: '<Root>/SendDataToGUI' */
void ZeroForceDrag_Mor_SendDataToGUI(void)
{
  uint16_T rtb_DataTypeConversion12[18];
  int16_T i;
  uint16_T rtb_DataTypeConversion12_o;
  real_T tmp;
  boolean_T tmp_0;

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant1'
   *  UnitDelay: '<S139>/Output'
   */
  if (ZeroForceDrag_MoreJoints_DW.Output_DSTATE >
      ZeroForceDrag_MoreJoints_P.Switch_Threshold_f) {
    tmp_0 = ZeroForceDrag_MoreJoints_P.Constant1_Value_i;
  } else {
    tmp_0 = ZeroForceDrag_MoreJoints_P.Constant_Value_b;
  }

  /* End of Switch: '<S3>/Switch' */

  /* Outputs for Enabled SubSystem: '<S3>/  ' incorporates:
   *  EnablePort: '<S138>/Enable'
   */
  if (tmp_0) {
    /* SignalConversion: '<S138>/TmpSignal ConversionAtSCI TransmitInport1' incorporates:
     *  Constant: '<S138>/Constant1'
     */
    ZeroForceDrag_MoreJoints_B.TmpSignalConversionAtSCITransmi[0] =
      ZeroForceDrag_MoreJoints_P.Constant1_Value_k;
    for (i = 0; i < 18; i++) {
      /* DataTypeConversion: '<S138>/Data Type Conversion12' incorporates:
       *  DataStoreRead: '<S138>/Data Store Read4'
       */
      tmp = floor(Send_GUIdata[i]);
      if (rtIsNaN(tmp) || rtIsInf(tmp)) {
        tmp = 0.0;
      } else {
        tmp = fmod(tmp, 65536.0);
      }

      rtb_DataTypeConversion12_o = tmp < 0.0 ? (uint16_T)-(int16_T)(uint16_T)
        -tmp : (uint16_T)tmp;

      /* SignalConversion: '<S138>/TmpSignal ConversionAtSCI TransmitInport1' */
      ZeroForceDrag_MoreJoints_B.TmpSignalConversionAtSCITransmi[i + 1] =
        rtb_DataTypeConversion12_o;

      /* DataTypeConversion: '<S138>/Data Type Conversion12' */
      rtb_DataTypeConversion12[i] = rtb_DataTypeConversion12_o;
    }

    /* SignalConversion: '<S138>/TmpSignal ConversionAtSCI TransmitInport1' incorporates:
     *  Constant: '<S138>/Constant1'
     *  Sum: '<S138>/校验码填充'
     */
    ZeroForceDrag_MoreJoints_B.TmpSignalConversionAtSCITransmi[19] =
      (((((((((((((((((ZeroForceDrag_MoreJoints_P.Constant1_Value_k +
                       rtb_DataTypeConversion12[0]) + rtb_DataTypeConversion12[1])
                     + rtb_DataTypeConversion12[2]) + rtb_DataTypeConversion12[3])
                   + rtb_DataTypeConversion12[4]) + rtb_DataTypeConversion12[5])
                 + rtb_DataTypeConversion12[6]) + rtb_DataTypeConversion12[7]) +
               rtb_DataTypeConversion12[8]) + rtb_DataTypeConversion12[9]) +
             rtb_DataTypeConversion12[10]) + rtb_DataTypeConversion12[11]) +
           rtb_DataTypeConversion12[12]) + rtb_DataTypeConversion12[13]) +
         rtb_DataTypeConversion12[14]) + rtb_DataTypeConversion12[15]) +
       rtb_DataTypeConversion12[16]) + rtb_DataTypeConversion12[17];

    /* S-Function (c28xsci_tx): '<S138>/SCI Transmit' */
    {
      scia_xmit((char*)
                &ZeroForceDrag_MoreJoints_B.TmpSignalConversionAtSCITransmi[0],
                40, 2);
    }
  }

  /* End of Outputs for SubSystem: '<S3>/  ' */

  /* Sum: '<S140>/FixPt Sum1' incorporates:
   *  Constant: '<S140>/FixPt Constant'
   *  UnitDelay: '<S139>/Output'
   */
  ZeroForceDrag_MoreJoints_DW.Output_DSTATE =
    (ZeroForceDrag_MoreJoints_DW.Output_DSTATE +
     ZeroForceDrag_MoreJoints_P.FixPtConstant_Value) & 255U;

  /* Switch: '<S141>/FixPt Switch' incorporates:
   *  Constant: '<S141>/Constant'
   *  UnitDelay: '<S139>/Output'
   */
  if (ZeroForceDrag_MoreJoints_DW.Output_DSTATE >
      ZeroForceDrag_MoreJoints_P._uplimit) {
    ZeroForceDrag_MoreJoints_DW.Output_DSTATE =
      ZeroForceDrag_MoreJoints_P.Constant_Value_fh;
  }

  /* End of Switch: '<S141>/FixPt Switch' */
}

/* Model step function */
void ZeroForceDrag_MoreJoints_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/GetMotorData' */
  ZeroForceDrag_More_GetMotorData();

  /* End of Outputs for SubSystem: '<Root>/GetMotorData' */

  /* Outputs for Atomic SubSystem: '<Root>/DynamicCalculation' */
  DynamicsController();

  /* End of Outputs for SubSystem: '<Root>/DynamicCalculation' */

  /* Outputs for Atomic SubSystem: '<Root>/SendDataToGUI' */
  ZeroForceDrag_Mor_SendDataToGUI();

  /* End of Outputs for SubSystem: '<Root>/SendDataToGUI' */
}

/* Model initialize function */
void ZeroForceDrag_MoreJoints_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(ZeroForceDrag_MoreJoints_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &ZeroForceDrag_MoreJoints_B), 0,
                sizeof(B_ZeroForceDrag_MoreJoints_T));

  /* states (dwork) */
  (void) memset((void *)&ZeroForceDrag_MoreJoints_DW, 0,
                sizeof(DW_ZeroForceDrag_MoreJoints_T));

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
  (void) memset(&q, 0,
                6U*sizeof(real_T));
  (void) memset(&dq, 0,
                6U*sizeof(real_T));
  (void) memset(&Tau, 0,
                6U*sizeof(real_T));
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
    ZeroForceDra_GetMotorData_Start();

    /* End of Start for SubSystem: '<Root>/GetMotorData' */

    /* Start for Atomic SubSystem: '<Root>/DynamicCalculation' */
    DynamicsController_Start();

    /* End of Start for SubSystem: '<Root>/DynamicCalculation' */

    /* Start for S-Function (idletask): '<Root>/Idle Task' incorporates:
     *  SubSystem: '<Root>/接收上位机的数据'
     */
    /* Start for function-call system: '<Root>/接收上位机的数据' */

    /* Start for Atomic SubSystem: '<S5>/获取用户命令' */
    ZeroForceDrag_MoreJoi_u_h_Start();

    /* End of Start for SubSystem: '<S5>/获取用户命令' */

    /* Start for DataStoreMemory: '<S5>/消息使能' */
    ZeroForceDrag_MoreJoints_DW.PTX = ZeroForceDrag_MoreJoints_P._InitialValue_k;
    for (i = 0; i < 6; i++) {
      /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
      Motor_Position[i] =
        ZeroForceDrag_MoreJoints_P.DataStoreMemory1_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory10' */
      J7[i] = ZeroForceDrag_MoreJoints_P.DataStoreMemory10_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory11' */
      Motor_Current[i] =
        ZeroForceDrag_MoreJoints_P.DataStoreMemory11_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory13' */
      J1[i] = ZeroForceDrag_MoreJoints_P.DataStoreMemory13_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory2' */
      Motor_Velocity[i] =
        ZeroForceDrag_MoreJoints_P.DataStoreMemory2_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory3' */
      J2[i] = ZeroForceDrag_MoreJoints_P.DataStoreMemory3_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory4' */
      J3[i] = ZeroForceDrag_MoreJoints_P.DataStoreMemory4_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory5' */
      J4[i] = ZeroForceDrag_MoreJoints_P.DataStoreMemory5_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory6' */
      J5[i] = ZeroForceDrag_MoreJoints_P.DataStoreMemory6_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory7' */
      J6[i] = ZeroForceDrag_MoreJoints_P.DataStoreMemory7_InitialValue[i];
    }

    /* Start for DataStoreMemory: '<Root>/Data Store Memory8' */
    memcpy(&Send_GUIdata[0],
           &ZeroForceDrag_MoreJoints_P.DataStoreMemory8_InitialValue[0], 18U *
           sizeof(real_T));

    /* Start for DataStoreMemory: '<Root>/Data Store Memory9' */
    StartRobot = ZeroForceDrag_MoreJoints_P.DataStoreMemory9_InitialValue;

    /* user code (Initialize function Body) */

    /* System '<Root>' */
    MO_config_eCAN_B_mbx (1U, 26, 769, 0);
    MO_config_eCAN_B_mbx (1U, 27, 770, 0);
    MO_config_eCAN_B_mbx (1U, 28, 771, 0);
    MO_config_eCAN_A_mbx (1U, 29, 772, 0);
    MO_config_eCAN_A_mbx (1U, 30, 773, 0);
    MO_config_eCAN_A_mbx (1U, 31, 774, 0);
    DELAY_US(3000000);

    /* SystemInitialize for Atomic SubSystem: '<Root>/DynamicCalculation' */
    DynamicsController_Init();

    /* End of SystemInitialize for SubSystem: '<Root>/DynamicCalculation' */

    /* SystemInitialize for Atomic SubSystem: '<Root>/SendDataToGUI' */
    ZeroForceDra_SendDataToGUI_Init();

    /* End of SystemInitialize for SubSystem: '<Root>/SendDataToGUI' */
  }
}

/* Model terminate function */
void ZeroForceDrag_MoreJoints_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
