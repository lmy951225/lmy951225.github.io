/*
 * File: SingleJoint_Algorithm2.c
 *
 * Code generated for Simulink model 'SingleJoint_Algorithm2'.
 *
 * Model version                  : 1.147
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Jan  9 09:56:27 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SingleJoint_Algorithm2.h"
#include "SingleJoint_Algorithm2_private.h"

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
int32_T Motor_Position[6];             /* '<Root>/Data Store Memory1' */
int32_T Motor_Current[6];              /* '<Root>/Data Store Memory11' */
int32_T Motor_Velocity[6];             /* '<Root>/Data Store Memory2' */
uint16_T StartRobot;                   /* '<Root>/Data Store Memory9' */
uint16_T One_TXD;                      /* '<S7>/Data Store Memory2' */

/* Block signals (default storage) */
B_SingleJoint_Algorithm2_T SingleJoint_Algorithm2_B;

/* Block states (default storage) */
DW_SingleJoint_Algorithm2_T SingleJoint_Algorithm2_DW;

/* Real-time model */
RT_MODEL_SingleJoint_Algorith_T SingleJoint_Algorithm2_M_;
RT_MODEL_SingleJoint_Algorith_T *const SingleJoint_Algorithm2_M =
  &SingleJoint_Algorithm2_M_;

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
      SingleJoint_Algorithm2_u_f();

      /* End of Outputs for SubSystem: '<S5>/获取用户命令' */

      /* Outputs for Enabled SubSystem: '<S5>/Subsystem' incorporates:
       *  EnablePort: '<S66>/Enable'
       */
      /* RelationalOperator: '<S63>/Compare' incorporates:
       *  Constant: '<S63>/Constant'
       */
      if (SingleJoint_Algorithm2_B.Switch[0] ==
          SingleJoint_Algorithm2_P.ux88_const) {
        /* SwitchCase: '<S66>/Switch Case' */
        switch ((int32_T)SingleJoint_Algorithm2_B.Switch[1]) {
         case 1L:
          /* Outputs for IfAction SubSystem: '<S66>/Joint1' incorporates:
           *  ActionPort: '<S68>/Action Port'
           */
          /* DataStoreWrite: '<S68>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J1[i] = (int16_T)SingleJoint_Algorithm2_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S68>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S66>/Joint1' */
          break;

         case 2L:
          /* Outputs for IfAction SubSystem: '<S66>/Joint2' incorporates:
           *  ActionPort: '<S69>/Action Port'
           */
          /* DataStoreWrite: '<S69>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J2[i] = (int16_T)SingleJoint_Algorithm2_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S69>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S66>/Joint2' */
          break;

         case 3L:
          /* Outputs for IfAction SubSystem: '<S66>/Joint3' incorporates:
           *  ActionPort: '<S70>/Action Port'
           */
          /* DataStoreWrite: '<S70>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J3[i] = (int16_T)SingleJoint_Algorithm2_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S70>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S66>/Joint3' */
          break;

         case 4L:
          /* Outputs for IfAction SubSystem: '<S66>/Joint4' incorporates:
           *  ActionPort: '<S71>/Action Port'
           */
          /* DataStoreWrite: '<S71>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J4[i] = (int16_T)SingleJoint_Algorithm2_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S71>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S66>/Joint4' */
          break;

         case 5L:
          /* Outputs for IfAction SubSystem: '<S66>/Joint5' incorporates:
           *  ActionPort: '<S72>/Action Port'
           */
          /* DataStoreWrite: '<S72>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J5[i] = (int16_T)SingleJoint_Algorithm2_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S72>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S66>/Joint5' */
          break;

         case 6L:
          /* Outputs for IfAction SubSystem: '<S66>/Joint6' incorporates:
           *  ActionPort: '<S73>/Action Port'
           */
          /* DataStoreWrite: '<S73>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J6[i] = (int16_T)SingleJoint_Algorithm2_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S73>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S66>/Joint6' */
          break;

         case 7L:
          /* Outputs for IfAction SubSystem: '<S66>/Joint7' incorporates:
           *  ActionPort: '<S74>/Action Port'
           */
          /* DataStoreWrite: '<S74>/Data Store Write2' incorporates:
           *  DataTypeConversion: '<S5>/Data Type Conversion'
           *  DataTypeConversion: '<S5>/Data Type Conversion3'
           */
          for (i = 0; i < 6; i++) {
            J7[i] = (int16_T)SingleJoint_Algorithm2_B.Switch[i + 2];
          }

          /* End of DataStoreWrite: '<S74>/Data Store Write2' */
          /* End of Outputs for SubSystem: '<S66>/Joint7' */
          break;
        }

        /* End of SwitchCase: '<S66>/Switch Case' */
      }

      /* End of RelationalOperator: '<S63>/Compare' */
      /* End of Outputs for SubSystem: '<S5>/Subsystem' */

      /* DataTypeConversion: '<S5>/Data Type Conversion4' incorporates:
       *  Constant: '<S62>/Constant'
       *  Constant: '<S64>/Constant'
       *  Constant: '<S65>/Constant'
       *  DataStoreRead: '<S5>/Data Store Read'
       *  DataStoreWrite: '<S5>/Data Store Write2'
       *  Logic: '<S5>/Logical Operator'
       *  RelationalOperator: '<S62>/Compare'
       *  RelationalOperator: '<S64>/Compare'
       *  RelationalOperator: '<S65>/Compare'
       */
      StartRobot = (uint16_T)((SingleJoint_Algorithm2_B.Switch[0] ==
        SingleJoint_Algorithm2_P.ux0080_const) && SingleJoint_Algorithm2_DW.PTX &&
        (SingleJoint_Algorithm2_B.Switch[2] ==
         SingleJoint_Algorithm2_P.CompareToConstant1_const) &&
        (SingleJoint_Algorithm2_B.Switch[3] ==
         SingleJoint_Algorithm2_P.CompareToConstant2_const));
    }

    /* End of Outputs for S-Function (idletask): '<Root>/Idle Task' */
  }
}

/* Start for atomic system: '<S2>/CANA_284_24' */
void SingleJoint_A_CANA_284_24_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S46>/eCAN Receive1' */

  /* Configure mailbox 24 to receive messages with the ID: 644 */
  config_eCAN_A_mbx (0U, 24, 644, 0);

  /* Initialize SingleJoint_Algorithm2_B.eCANReceive1_o2[0] */
  {
    SingleJoint_Algorithm2_B.eCANReceive1_o2[0] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive1_o2[1] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive1_o2[2] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive1_o2[3] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive1_o2[4] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive1_o2[5] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive1_o2[6] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive1_o2[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S46>/eCAN Receive1' */
}

/* Output and update for atomic system: '<S2>/CANA_284_24' */
void SingleJoint_Algorit_CANA_284_24(void)
{
  /* S-Function (c280xcanrcv): '<S46>/eCAN Receive1' */
  {
    struct ECAN_REGS ECanaShadow;
    if (ECanaRegs.CANRMP.bit.RMP24) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanaShadow.CANRMP.all = 0x0;
      ECanaShadow.CANRMP.bit.RMP24 = 1;/* request clear RMP for this mailbox only*/
      ECanaRegs.CANRMP.all = ECanaShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      SingleJoint_Algorithm2_B.eCANReceive1_o2[0] =
        ECanaMboxes.MBOX24.MDL.byte.BYTE3;
      SingleJoint_Algorithm2_B.eCANReceive1_o2[1] =
        ECanaMboxes.MBOX24.MDL.byte.BYTE2;
      SingleJoint_Algorithm2_B.eCANReceive1_o2[2] =
        ECanaMboxes.MBOX24.MDL.byte.BYTE1;
      SingleJoint_Algorithm2_B.eCANReceive1_o2[3] =
        ECanaMboxes.MBOX24.MDL.byte.BYTE0;
      SingleJoint_Algorithm2_B.eCANReceive1_o2[4] =
        ECanaMboxes.MBOX24.MDH.byte.BYTE7;
      SingleJoint_Algorithm2_B.eCANReceive1_o2[5] =
        ECanaMboxes.MBOX24.MDH.byte.BYTE6;
      SingleJoint_Algorithm2_B.eCANReceive1_o2[6] =
        ECanaMboxes.MBOX24.MDH.byte.BYTE5;
      SingleJoint_Algorithm2_B.eCANReceive1_o2[7] =
        ECanaMboxes.MBOX24.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S46>/Subsystem1' */

      /* DataStoreWrite: '<S52>/Data Store Write1' incorporates:
       *  ArithShift: '<S52>/Shift Arithmetic4'
       *  DataTypeConversion: '<S52>/Data Type Conversion6'
       *  DataTypeConversion: '<S52>/Data Type Conversion7'
       *  Sum: '<S52>/Add1'
       */
      Motor_Velocity[3L] = ((int16_T)SingleJoint_Algorithm2_B.eCANReceive1_o2[3]
                            << 8U) + (int16_T)
        SingleJoint_Algorithm2_B.eCANReceive1_o2[2];

      /* DataStoreWrite: '<S52>/Data Store Write2' incorporates:
       *  ArithShift: '<S52>/Shift Arithmetic'
       *  ArithShift: '<S52>/Shift Arithmetic1'
       *  ArithShift: '<S52>/Shift Arithmetic2'
       *  DataTypeConversion: '<S52>/Data Type Conversion'
       *  DataTypeConversion: '<S52>/Data Type Conversion1'
       *  DataTypeConversion: '<S52>/Data Type Conversion2'
       *  DataTypeConversion: '<S52>/Data Type Conversion3'
       *  Sum: '<S52>/Add'
       */
      Motor_Position[3L] = ((((int32_T)SingleJoint_Algorithm2_B.eCANReceive1_o2
        [5] << 8U) + SingleJoint_Algorithm2_B.eCANReceive1_o2[4]) + ((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive1_o2[6] << 16U)) + ((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive1_o2[7] << 24U);

      /* DataStoreWrite: '<S52>/Data Store Write3' incorporates:
       *  ArithShift: '<S52>/Shift Arithmetic3'
       *  DataTypeConversion: '<S52>/Data Type Conversion4'
       *  DataTypeConversion: '<S52>/Data Type Conversion5'
       *  Sum: '<S52>/Add2'
       */
      Motor_Current[3L] = ((int16_T)SingleJoint_Algorithm2_B.eCANReceive1_o2[1] <<
                           8U) + (int16_T)
        SingleJoint_Algorithm2_B.eCANReceive1_o2[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S46>/eCAN Receive1' */
}

/* Start for atomic system: '<S2>/CANA_285_25' */
void SingleJoint_A_CANA_285_25_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S47>/eCAN Receive' */

  /* Configure mailbox 25 to receive messages with the ID: 645 */
  config_eCAN_A_mbx (0U, 25, 645, 0);

  /* Initialize SingleJoint_Algorithm2_B.eCANReceive_o2_l[0] */
  {
    SingleJoint_Algorithm2_B.eCANReceive_o2_l[0] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_l[1] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_l[2] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_l[3] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_l[4] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_l[5] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_l[6] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_l[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S47>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANA_285_25' */
void SingleJoint_Algorit_CANA_285_25(void)
{
  /* S-Function (c280xcanrcv): '<S47>/eCAN Receive' */
  {
    struct ECAN_REGS ECanaShadow;
    if (ECanaRegs.CANRMP.bit.RMP25) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanaShadow.CANRMP.all = 0x0;
      ECanaShadow.CANRMP.bit.RMP25 = 1;/* request clear RMP for this mailbox only*/
      ECanaRegs.CANRMP.all = ECanaShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      SingleJoint_Algorithm2_B.eCANReceive_o2_l[0] =
        ECanaMboxes.MBOX25.MDL.byte.BYTE3;
      SingleJoint_Algorithm2_B.eCANReceive_o2_l[1] =
        ECanaMboxes.MBOX25.MDL.byte.BYTE2;
      SingleJoint_Algorithm2_B.eCANReceive_o2_l[2] =
        ECanaMboxes.MBOX25.MDL.byte.BYTE1;
      SingleJoint_Algorithm2_B.eCANReceive_o2_l[3] =
        ECanaMboxes.MBOX25.MDL.byte.BYTE0;
      SingleJoint_Algorithm2_B.eCANReceive_o2_l[4] =
        ECanaMboxes.MBOX25.MDH.byte.BYTE7;
      SingleJoint_Algorithm2_B.eCANReceive_o2_l[5] =
        ECanaMboxes.MBOX25.MDH.byte.BYTE6;
      SingleJoint_Algorithm2_B.eCANReceive_o2_l[6] =
        ECanaMboxes.MBOX25.MDH.byte.BYTE5;
      SingleJoint_Algorithm2_B.eCANReceive_o2_l[7] =
        ECanaMboxes.MBOX25.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S47>/Subsystem' */

      /* DataStoreWrite: '<S53>/Data Store Write1' incorporates:
       *  ArithShift: '<S53>/Shift Arithmetic4'
       *  DataTypeConversion: '<S53>/Data Type Conversion4'
       *  DataTypeConversion: '<S53>/Data Type Conversion6'
       *  Sum: '<S53>/Add1'
       */
      Motor_Velocity[4L] = ((int16_T)SingleJoint_Algorithm2_B.eCANReceive_o2_l[3]
                            << 8U) + (int16_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_l[2];

      /* DataStoreWrite: '<S53>/Data Store Write2' incorporates:
       *  ArithShift: '<S53>/Shift Arithmetic'
       *  ArithShift: '<S53>/Shift Arithmetic1'
       *  ArithShift: '<S53>/Shift Arithmetic2'
       *  DataTypeConversion: '<S53>/Data Type Conversion'
       *  DataTypeConversion: '<S53>/Data Type Conversion1'
       *  DataTypeConversion: '<S53>/Data Type Conversion2'
       *  DataTypeConversion: '<S53>/Data Type Conversion3'
       *  Sum: '<S53>/Add'
       */
      Motor_Position[4L] = ((((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_l[5] << 8U) +
        SingleJoint_Algorithm2_B.eCANReceive_o2_l[4]) + ((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_l[6] << 16U)) + ((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_l[7] << 24U);

      /* DataStoreWrite: '<S53>/Data Store Write3' incorporates:
       *  ArithShift: '<S53>/Shift Arithmetic3'
       *  DataTypeConversion: '<S53>/Data Type Conversion5'
       *  DataTypeConversion: '<S53>/Data Type Conversion7'
       *  Sum: '<S53>/Add2'
       */
      Motor_Current[4L] = ((int16_T)SingleJoint_Algorithm2_B.eCANReceive_o2_l[1]
                           << 8U) + (int16_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_l[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S47>/eCAN Receive' */
}

/* Start for atomic system: '<S2>/CANA_286_26' */
void SingleJoint_A_CANA_286_26_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S48>/eCAN Receive' */

  /* Configure mailbox 26 to receive messages with the ID: 646 */
  config_eCAN_A_mbx (0U, 26, 646, 0);

  /* Initialize SingleJoint_Algorithm2_B.eCANReceive_o2_e[0] */
  {
    SingleJoint_Algorithm2_B.eCANReceive_o2_e[0] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_e[1] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_e[2] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_e[3] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_e[4] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_e[5] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_e[6] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_e[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S48>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANA_286_26' */
void SingleJoint_Algorit_CANA_286_26(void)
{
  /* S-Function (c280xcanrcv): '<S48>/eCAN Receive' */
  {
    struct ECAN_REGS ECanaShadow;
    if (ECanaRegs.CANRMP.bit.RMP26) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanaShadow.CANRMP.all = 0x0;
      ECanaShadow.CANRMP.bit.RMP26 = 1;/* request clear RMP for this mailbox only*/
      ECanaRegs.CANRMP.all = ECanaShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      SingleJoint_Algorithm2_B.eCANReceive_o2_e[0] =
        ECanaMboxes.MBOX26.MDL.byte.BYTE3;
      SingleJoint_Algorithm2_B.eCANReceive_o2_e[1] =
        ECanaMboxes.MBOX26.MDL.byte.BYTE2;
      SingleJoint_Algorithm2_B.eCANReceive_o2_e[2] =
        ECanaMboxes.MBOX26.MDL.byte.BYTE1;
      SingleJoint_Algorithm2_B.eCANReceive_o2_e[3] =
        ECanaMboxes.MBOX26.MDL.byte.BYTE0;
      SingleJoint_Algorithm2_B.eCANReceive_o2_e[4] =
        ECanaMboxes.MBOX26.MDH.byte.BYTE7;
      SingleJoint_Algorithm2_B.eCANReceive_o2_e[5] =
        ECanaMboxes.MBOX26.MDH.byte.BYTE6;
      SingleJoint_Algorithm2_B.eCANReceive_o2_e[6] =
        ECanaMboxes.MBOX26.MDH.byte.BYTE5;
      SingleJoint_Algorithm2_B.eCANReceive_o2_e[7] =
        ECanaMboxes.MBOX26.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S48>/Subsystem' */

      /* DataStoreWrite: '<S54>/Data Store Write1' incorporates:
       *  ArithShift: '<S54>/Shift Arithmetic4'
       *  DataTypeConversion: '<S54>/Data Type Conversion4'
       *  DataTypeConversion: '<S54>/Data Type Conversion7'
       *  Sum: '<S54>/Add1'
       */
      Motor_Velocity[5L] = ((int16_T)SingleJoint_Algorithm2_B.eCANReceive_o2_e[3]
                            << 8U) + (int16_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_e[2];

      /* DataStoreWrite: '<S54>/Data Store Write2' incorporates:
       *  ArithShift: '<S54>/Shift Arithmetic'
       *  ArithShift: '<S54>/Shift Arithmetic1'
       *  ArithShift: '<S54>/Shift Arithmetic2'
       *  DataTypeConversion: '<S54>/Data Type Conversion'
       *  DataTypeConversion: '<S54>/Data Type Conversion1'
       *  DataTypeConversion: '<S54>/Data Type Conversion2'
       *  DataTypeConversion: '<S54>/Data Type Conversion3'
       *  Sum: '<S54>/Add'
       */
      Motor_Position[5L] = ((((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_e[5] << 8U) +
        SingleJoint_Algorithm2_B.eCANReceive_o2_e[4]) + ((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_e[6] << 16U)) + ((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_e[7] << 24U);

      /* DataStoreWrite: '<S54>/Data Store Write3' incorporates:
       *  ArithShift: '<S54>/Shift Arithmetic3'
       *  DataTypeConversion: '<S54>/Data Type Conversion5'
       *  DataTypeConversion: '<S54>/Data Type Conversion6'
       *  Sum: '<S54>/Add2'
       */
      Motor_Current[5L] = ((int16_T)SingleJoint_Algorithm2_B.eCANReceive_o2_e[1]
                           << 8U) + (int16_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_e[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S48>/eCAN Receive' */
}

/* Start for atomic system: '<S2>/CANB_281_21' */
void SingleJoint_A_CANB_281_21_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S49>/eCAN Receive' */

  /* Configure mailbox 21 to receive messages with the ID: 641 */
  config_eCAN_B_mbx (0U, 21, 641, 0);

  /* Initialize SingleJoint_Algorithm2_B.eCANReceive_o2_j[0] */
  {
    SingleJoint_Algorithm2_B.eCANReceive_o2_j[0] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_j[1] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_j[2] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_j[3] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_j[4] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_j[5] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_j[6] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_j[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S49>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANB_281_21' */
void SingleJoint_Algorit_CANB_281_21(void)
{
  /* S-Function (c280xcanrcv): '<S49>/eCAN Receive' */
  {
    struct ECAN_REGS ECanbShadow;
    if (ECanbRegs.CANRMP.bit.RMP21) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanbShadow.CANRMP.all = 0x0;
      ECanbShadow.CANRMP.bit.RMP21 = 1;/* request clear RMP for this mailbox only*/
      ECanbRegs.CANRMP.all = ECanbShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      SingleJoint_Algorithm2_B.eCANReceive_o2_j[0] =
        ECanbMboxes.MBOX21.MDL.byte.BYTE3;
      SingleJoint_Algorithm2_B.eCANReceive_o2_j[1] =
        ECanbMboxes.MBOX21.MDL.byte.BYTE2;
      SingleJoint_Algorithm2_B.eCANReceive_o2_j[2] =
        ECanbMboxes.MBOX21.MDL.byte.BYTE1;
      SingleJoint_Algorithm2_B.eCANReceive_o2_j[3] =
        ECanbMboxes.MBOX21.MDL.byte.BYTE0;
      SingleJoint_Algorithm2_B.eCANReceive_o2_j[4] =
        ECanbMboxes.MBOX21.MDH.byte.BYTE7;
      SingleJoint_Algorithm2_B.eCANReceive_o2_j[5] =
        ECanbMboxes.MBOX21.MDH.byte.BYTE6;
      SingleJoint_Algorithm2_B.eCANReceive_o2_j[6] =
        ECanbMboxes.MBOX21.MDH.byte.BYTE5;
      SingleJoint_Algorithm2_B.eCANReceive_o2_j[7] =
        ECanbMboxes.MBOX21.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S49>/Subsystem' */

      /* DataStoreWrite: '<S55>/Data Store Write1' incorporates:
       *  ArithShift: '<S55>/Shift Arithmetic4'
       *  DataTypeConversion: '<S55>/Data Type Conversion1'
       *  DataTypeConversion: '<S55>/Data Type Conversion2'
       *  Sum: '<S55>/Add1'
       */
      Motor_Velocity[0L] = ((int16_T)SingleJoint_Algorithm2_B.eCANReceive_o2_j[3]
                            << 8U) + (int16_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_j[2];

      /* DataStoreWrite: '<S55>/Data Store Write2' incorporates:
       *  ArithShift: '<S55>/Shift Arithmetic'
       *  ArithShift: '<S55>/Shift Arithmetic1'
       *  ArithShift: '<S55>/Shift Arithmetic2'
       *  DataTypeConversion: '<S55>/Data Type Conversion3'
       *  DataTypeConversion: '<S55>/Data Type Conversion6'
       *  DataTypeConversion: '<S55>/Data Type Conversion7'
       *  DataTypeConversion: '<S55>/Data Type Conversion8'
       *  Sum: '<S55>/Add'
       */
      Motor_Position[0L] = ((((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_j[5] << 8U) +
        SingleJoint_Algorithm2_B.eCANReceive_o2_j[4]) + ((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_j[6] << 16U)) + ((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_j[7] << 24U);

      /* DataStoreWrite: '<S55>/Data Store Write3' incorporates:
       *  ArithShift: '<S55>/Shift Arithmetic3'
       *  DataTypeConversion: '<S55>/Data Type Conversion4'
       *  DataTypeConversion: '<S55>/Data Type Conversion5'
       *  Sum: '<S55>/Add2'
       */
      Motor_Current[0L] = ((int16_T)SingleJoint_Algorithm2_B.eCANReceive_o2_j[1]
                           << 8U) + (int16_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_j[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S49>/eCAN Receive' */
}

/* Start for atomic system: '<S2>/CANB_282_22' */
void SingleJoint_A_CANB_282_22_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S50>/eCAN Receive' */

  /* Configure mailbox 22 to receive messages with the ID: 642 */
  config_eCAN_B_mbx (0U, 22, 642, 0);

  /* Initialize SingleJoint_Algorithm2_B.eCANReceive_o2_i[0] */
  {
    SingleJoint_Algorithm2_B.eCANReceive_o2_i[0] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_i[1] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_i[2] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_i[3] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_i[4] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_i[5] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_i[6] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2_i[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S50>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANB_282_22' */
void SingleJoint_Algorit_CANB_282_22(void)
{
  /* S-Function (c280xcanrcv): '<S50>/eCAN Receive' */
  {
    struct ECAN_REGS ECanbShadow;
    if (ECanbRegs.CANRMP.bit.RMP22) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanbShadow.CANRMP.all = 0x0;
      ECanbShadow.CANRMP.bit.RMP22 = 1;/* request clear RMP for this mailbox only*/
      ECanbRegs.CANRMP.all = ECanbShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      SingleJoint_Algorithm2_B.eCANReceive_o2_i[0] =
        ECanbMboxes.MBOX22.MDL.byte.BYTE3;
      SingleJoint_Algorithm2_B.eCANReceive_o2_i[1] =
        ECanbMboxes.MBOX22.MDL.byte.BYTE2;
      SingleJoint_Algorithm2_B.eCANReceive_o2_i[2] =
        ECanbMboxes.MBOX22.MDL.byte.BYTE1;
      SingleJoint_Algorithm2_B.eCANReceive_o2_i[3] =
        ECanbMboxes.MBOX22.MDL.byte.BYTE0;
      SingleJoint_Algorithm2_B.eCANReceive_o2_i[4] =
        ECanbMboxes.MBOX22.MDH.byte.BYTE7;
      SingleJoint_Algorithm2_B.eCANReceive_o2_i[5] =
        ECanbMboxes.MBOX22.MDH.byte.BYTE6;
      SingleJoint_Algorithm2_B.eCANReceive_o2_i[6] =
        ECanbMboxes.MBOX22.MDH.byte.BYTE5;
      SingleJoint_Algorithm2_B.eCANReceive_o2_i[7] =
        ECanbMboxes.MBOX22.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S50>/Subsystem' */

      /* DataStoreWrite: '<S56>/Data Store Write1' incorporates:
       *  ArithShift: '<S56>/Shift Arithmetic4'
       *  DataTypeConversion: '<S56>/Data Type Conversion6'
       *  DataTypeConversion: '<S56>/Data Type Conversion7'
       *  Sum: '<S56>/Add1'
       */
      Motor_Velocity[1L] = ((int16_T)SingleJoint_Algorithm2_B.eCANReceive_o2_i[3]
                            << 8U) + (int16_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_i[2];

      /* DataStoreWrite: '<S56>/Data Store Write2' incorporates:
       *  ArithShift: '<S56>/Shift Arithmetic'
       *  ArithShift: '<S56>/Shift Arithmetic1'
       *  ArithShift: '<S56>/Shift Arithmetic2'
       *  DataTypeConversion: '<S56>/Data Type Conversion'
       *  DataTypeConversion: '<S56>/Data Type Conversion1'
       *  DataTypeConversion: '<S56>/Data Type Conversion2'
       *  DataTypeConversion: '<S56>/Data Type Conversion3'
       *  Sum: '<S56>/Add'
       */
      Motor_Position[1L] = ((((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_i[5] << 8U) +
        SingleJoint_Algorithm2_B.eCANReceive_o2_i[4]) + ((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_i[6] << 16U)) + ((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2_i[7] << 24U);

      /* DataStoreWrite: '<S56>/Data Store Write3' incorporates:
       *  ArithShift: '<S56>/Shift Arithmetic3'
       *  DataTypeConversion: '<S56>/Data Type Conversion4'
       *  DataTypeConversion: '<S56>/Data Type Conversion5'
       *  Sum: '<S56>/Add2'
       */
      Motor_Current[1L] = ((int32_T)SingleJoint_Algorithm2_B.eCANReceive_o2_i[1]
                           << 8U) + SingleJoint_Algorithm2_B.eCANReceive_o2_i[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S50>/eCAN Receive' */
}

/* Start for atomic system: '<S2>/CANB_283_23' */
void SingleJoint_A_CANB_283_23_Start(void)
{
  /* Start for S-Function (c280xcanrcv): '<S51>/eCAN Receive' */

  /* Configure mailbox 23 to receive messages with the ID: 643 */
  config_eCAN_B_mbx (0U, 23, 643, 0);

  /* Initialize SingleJoint_Algorithm2_B.eCANReceive_o2[0] */
  {
    SingleJoint_Algorithm2_B.eCANReceive_o2[0] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2[1] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2[2] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2[3] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2[4] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2[5] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2[6] = (uint8_T)0.0;
    SingleJoint_Algorithm2_B.eCANReceive_o2[7] = (uint8_T)0.0;
  }

  /* End of Start for S-Function (c280xcanrcv): '<S51>/eCAN Receive' */
}

/* Output and update for atomic system: '<S2>/CANB_283_23' */
void SingleJoint_Algorit_CANB_283_23(void)
{
  /* S-Function (c280xcanrcv): '<S51>/eCAN Receive' */
  {
    struct ECAN_REGS ECanbShadow;
    if (ECanbRegs.CANRMP.bit.RMP23) {
      /* reenable the mailbox to receive the next message */
      EALLOW;
      ECanbShadow.CANRMP.all = 0x0;
      ECanbShadow.CANRMP.bit.RMP23 = 1;/* request clear RMP for this mailbox only*/
      ECanbRegs.CANRMP.all = ECanbShadow.CANRMP.all;/* 32-bit register access is reliable only                         */
      EDIS;
      SingleJoint_Algorithm2_B.eCANReceive_o2[0] =
        ECanbMboxes.MBOX23.MDL.byte.BYTE3;
      SingleJoint_Algorithm2_B.eCANReceive_o2[1] =
        ECanbMboxes.MBOX23.MDL.byte.BYTE2;
      SingleJoint_Algorithm2_B.eCANReceive_o2[2] =
        ECanbMboxes.MBOX23.MDL.byte.BYTE1;
      SingleJoint_Algorithm2_B.eCANReceive_o2[3] =
        ECanbMboxes.MBOX23.MDL.byte.BYTE0;
      SingleJoint_Algorithm2_B.eCANReceive_o2[4] =
        ECanbMboxes.MBOX23.MDH.byte.BYTE7;
      SingleJoint_Algorithm2_B.eCANReceive_o2[5] =
        ECanbMboxes.MBOX23.MDH.byte.BYTE6;
      SingleJoint_Algorithm2_B.eCANReceive_o2[6] =
        ECanbMboxes.MBOX23.MDH.byte.BYTE5;
      SingleJoint_Algorithm2_B.eCANReceive_o2[7] =
        ECanbMboxes.MBOX23.MDH.byte.BYTE4;

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<S51>/Subsystem' */

      /* DataStoreWrite: '<S57>/Data Store Write1' incorporates:
       *  ArithShift: '<S57>/Shift Arithmetic4'
       *  DataTypeConversion: '<S57>/Data Type Conversion6'
       *  DataTypeConversion: '<S57>/Data Type Conversion7'
       *  Sum: '<S57>/Add1'
       */
      Motor_Velocity[2L] = ((int16_T)SingleJoint_Algorithm2_B.eCANReceive_o2[3] <<
                            8U) + (int16_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2[2];

      /* DataStoreWrite: '<S57>/Data Store Write2' incorporates:
       *  ArithShift: '<S57>/Shift Arithmetic'
       *  ArithShift: '<S57>/Shift Arithmetic1'
       *  ArithShift: '<S57>/Shift Arithmetic2'
       *  DataTypeConversion: '<S57>/Data Type Conversion'
       *  DataTypeConversion: '<S57>/Data Type Conversion1'
       *  DataTypeConversion: '<S57>/Data Type Conversion2'
       *  DataTypeConversion: '<S57>/Data Type Conversion3'
       *  Sum: '<S57>/Add'
       */
      Motor_Position[2L] = ((((int32_T)SingleJoint_Algorithm2_B.eCANReceive_o2[5]
        << 8U) + SingleJoint_Algorithm2_B.eCANReceive_o2[4]) + ((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2[6] << 16U)) + ((int32_T)
        SingleJoint_Algorithm2_B.eCANReceive_o2[7] << 24U);

      /* DataStoreWrite: '<S57>/Data Store Write3' incorporates:
       *  ArithShift: '<S57>/Shift Arithmetic3'
       *  DataTypeConversion: '<S57>/Data Type Conversion4'
       *  DataTypeConversion: '<S57>/Data Type Conversion5'
       *  Sum: '<S57>/Add2'
       */
      Motor_Current[2L] = ((int32_T)SingleJoint_Algorithm2_B.eCANReceive_o2[1] <<
                           8U) + SingleJoint_Algorithm2_B.eCANReceive_o2[0];
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<S51>/eCAN Receive' */
}

/* Start for atomic system: '<Root>/GetMotorData' */
void SingleJoint__GetMotorData_Start(void)
{
  /* Start for Atomic SubSystem: '<S2>/CANB_281_21' */
  SingleJoint_A_CANB_281_21_Start();

  /* End of Start for SubSystem: '<S2>/CANB_281_21' */

  /* Start for Atomic SubSystem: '<S2>/CANB_282_22' */
  SingleJoint_A_CANB_282_22_Start();

  /* End of Start for SubSystem: '<S2>/CANB_282_22' */

  /* Start for Atomic SubSystem: '<S2>/CANB_283_23' */
  SingleJoint_A_CANB_283_23_Start();

  /* End of Start for SubSystem: '<S2>/CANB_283_23' */

  /* Start for Atomic SubSystem: '<S2>/CANA_284_24' */
  SingleJoint_A_CANA_284_24_Start();

  /* End of Start for SubSystem: '<S2>/CANA_284_24' */

  /* Start for Atomic SubSystem: '<S2>/CANA_285_25' */
  SingleJoint_A_CANA_285_25_Start();

  /* End of Start for SubSystem: '<S2>/CANA_285_25' */

  /* Start for Atomic SubSystem: '<S2>/CANA_286_26' */
  SingleJoint_A_CANA_286_26_Start();

  /* End of Start for SubSystem: '<S2>/CANA_286_26' */
}

/* Output and update for atomic system: '<Root>/GetMotorData' */
void SingleJoint_Algori_GetMotorData(void)
{
  /* Outputs for Atomic SubSystem: '<S2>/CANB_281_21' */
  SingleJoint_Algorit_CANB_281_21();

  /* End of Outputs for SubSystem: '<S2>/CANB_281_21' */

  /* Outputs for Atomic SubSystem: '<S2>/CANB_282_22' */
  SingleJoint_Algorit_CANB_282_22();

  /* End of Outputs for SubSystem: '<S2>/CANB_282_22' */

  /* Outputs for Atomic SubSystem: '<S2>/CANB_283_23' */
  SingleJoint_Algorit_CANB_283_23();

  /* End of Outputs for SubSystem: '<S2>/CANB_283_23' */

  /* Outputs for Atomic SubSystem: '<S2>/CANA_284_24' */
  SingleJoint_Algorit_CANA_284_24();

  /* End of Outputs for SubSystem: '<S2>/CANA_284_24' */

  /* Outputs for Atomic SubSystem: '<S2>/CANA_285_25' */
  SingleJoint_Algorit_CANA_285_25();

  /* End of Outputs for SubSystem: '<S2>/CANA_285_25' */

  /* Outputs for Atomic SubSystem: '<S2>/CANA_286_26' */
  SingleJoint_Algorit_CANA_286_26();

  /* End of Outputs for SubSystem: '<S2>/CANA_286_26' */
}

/* Start for atomic system: '<S5>/获取用户命令' */
void SingleJoint_Algorithm_u_k_Start(void)
{
  /* Start for S-Function (c28xsci_rx): '<S67>/ ' */

  /* Initialize SingleJoint_Algorithm2_B._o1[0] */
  {
    SingleJoint_Algorithm2_B._o1[0] = (uint16_T)0.0;
    SingleJoint_Algorithm2_B._o1[1] = (uint16_T)0.0;
    SingleJoint_Algorithm2_B._o1[2] = (uint16_T)0.0;
    SingleJoint_Algorithm2_B._o1[3] = (uint16_T)0.0;
    SingleJoint_Algorithm2_B._o1[4] = (uint16_T)0.0;
    SingleJoint_Algorithm2_B._o1[5] = (uint16_T)0.0;
    SingleJoint_Algorithm2_B._o1[6] = (uint16_T)0.0;
    SingleJoint_Algorithm2_B._o1[7] = (uint16_T)0.0;
    SingleJoint_Algorithm2_B._o1[8] = (uint16_T)0.0;
  }
}

/* Output and update for atomic system: '<S5>/获取用户命令' */
void SingleJoint_Algorithm2_u_f(void)
{
  boolean_T rtb_RelationalOperator;
  int16_T i;
  boolean_T tmp;

  /* S-Function (c28xsci_rx): '<S67>/ ' */
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
    memcpy( &SingleJoint_Algorithm2_B._o1[0], recbuff, 9);
   RXERRA:
    asm(" NOP");
    SingleJoint_Algorithm2_B._o2 = errFlg;
  }

  /* RelationalOperator: '<S75>/Relational Operator' incorporates:
   *  Sum: '<S75>/Add'
   */
  rtb_RelationalOperator = (((((((SingleJoint_Algorithm2_B._o1[0] +
    SingleJoint_Algorithm2_B._o1[1]) + SingleJoint_Algorithm2_B._o1[2]) +
    SingleJoint_Algorithm2_B._o1[3]) + SingleJoint_Algorithm2_B._o1[4]) +
    SingleJoint_Algorithm2_B._o1[5]) + SingleJoint_Algorithm2_B._o1[6]) +
    SingleJoint_Algorithm2_B._o1[7] == SingleJoint_Algorithm2_B._o1[8]);

  /* Switch: '<S75>/Switch' incorporates:
   *  Constant: '<S75>/Constant'
   */
  for (i = 0; i < 9; i++) {
    if (rtb_RelationalOperator) {
      SingleJoint_Algorithm2_B.Switch[i] = SingleJoint_Algorithm2_B._o1[i];
    } else {
      SingleJoint_Algorithm2_B.Switch[i] =
        SingleJoint_Algorithm2_P.Constant_Value_p[i];
    }
  }

  /* End of Switch: '<S75>/Switch' */

  /* Switch: '<S67>/Switch' incorporates:
   *  Constant: '<S67>/Constant'
   *  Constant: '<S67>/Constant1'
   */
  if (SingleJoint_Algorithm2_B._o2 > SingleJoint_Algorithm2_P.Switch_Threshold_m)
  {
    tmp = SingleJoint_Algorithm2_P.Constant_Value_a0;
  } else {
    tmp = SingleJoint_Algorithm2_P.Constant1_Value_a;
  }

  /* End of Switch: '<S67>/Switch' */

  /* Logic: '<S67>/Logical Operator' incorporates:
   *  DataStoreWrite: '<S67>/Data Store Write1'
   */
  SingleJoint_Algorithm2_DW.PTX = (rtb_RelationalOperator && tmp);
}

/* System initialize for atomic system: '<Root>/SendDataToGUI' */
void SingleJoint__SendDataToGUI_Init(void)
{
  /* InitializeConditions for UnitDelay: '<S59>/Output' */
  SingleJoint_Algorithm2_DW.Output_DSTATE =
    SingleJoint_Algorithm2_P.Output_InitialCondition;
}

/* Output and update for atomic system: '<Root>/SendDataToGUI' */
void SingleJoint_Algor_SendDataToGUI(void)
{
  uint16_T rtb_DataTypeConversion12[18];
  int16_T i;
  uint16_T rtb_DataTypeConversion12_o;
  real_T tmp;
  boolean_T tmp_0;

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant1'
   *  UnitDelay: '<S59>/Output'
   */
  if (SingleJoint_Algorithm2_DW.Output_DSTATE >
      SingleJoint_Algorithm2_P.Switch_Threshold_my) {
    tmp_0 = SingleJoint_Algorithm2_P.Constant1_Value_p;
  } else {
    tmp_0 = SingleJoint_Algorithm2_P.Constant_Value_e;
  }

  /* End of Switch: '<S3>/Switch' */

  /* Outputs for Enabled SubSystem: '<S3>/  ' incorporates:
   *  EnablePort: '<S58>/Enable'
   */
  if (tmp_0) {
    /* SignalConversion: '<S58>/TmpSignal ConversionAtSCI TransmitInport1' incorporates:
     *  Constant: '<S58>/Constant1'
     */
    SingleJoint_Algorithm2_B.TmpSignalConversionAtSCITransmi[0] =
      SingleJoint_Algorithm2_P.Constant1_Value_o;
    for (i = 0; i < 18; i++) {
      /* DataTypeConversion: '<S58>/Data Type Conversion12' incorporates:
       *  DataStoreRead: '<S58>/Data Store Read4'
       */
      tmp = floor(Send_GUIdata[i]);
      if (rtIsNaN(tmp) || rtIsInf(tmp)) {
        tmp = 0.0;
      } else {
        tmp = fmod(tmp, 65536.0);
      }

      rtb_DataTypeConversion12_o = tmp < 0.0 ? (uint16_T)-(int16_T)(uint16_T)
        -tmp : (uint16_T)tmp;

      /* SignalConversion: '<S58>/TmpSignal ConversionAtSCI TransmitInport1' */
      SingleJoint_Algorithm2_B.TmpSignalConversionAtSCITransmi[i + 1] =
        rtb_DataTypeConversion12_o;

      /* DataTypeConversion: '<S58>/Data Type Conversion12' */
      rtb_DataTypeConversion12[i] = rtb_DataTypeConversion12_o;
    }

    /* SignalConversion: '<S58>/TmpSignal ConversionAtSCI TransmitInport1' incorporates:
     *  Constant: '<S58>/Constant1'
     *  Sum: '<S58>/校验码填充'
     */
    SingleJoint_Algorithm2_B.TmpSignalConversionAtSCITransmi[19] =
      (((((((((((((((((SingleJoint_Algorithm2_P.Constant1_Value_o +
                       rtb_DataTypeConversion12[0]) + rtb_DataTypeConversion12[1])
                     + rtb_DataTypeConversion12[2]) + rtb_DataTypeConversion12[3])
                   + rtb_DataTypeConversion12[4]) + rtb_DataTypeConversion12[5])
                 + rtb_DataTypeConversion12[6]) + rtb_DataTypeConversion12[7]) +
               rtb_DataTypeConversion12[8]) + rtb_DataTypeConversion12[9]) +
             rtb_DataTypeConversion12[10]) + rtb_DataTypeConversion12[11]) +
           rtb_DataTypeConversion12[12]) + rtb_DataTypeConversion12[13]) +
         rtb_DataTypeConversion12[14]) + rtb_DataTypeConversion12[15]) +
       rtb_DataTypeConversion12[16]) + rtb_DataTypeConversion12[17];

    /* S-Function (c28xsci_tx): '<S58>/SCI Transmit' */
    {
      scia_xmit((char*)
                &SingleJoint_Algorithm2_B.TmpSignalConversionAtSCITransmi[0], 40,
                2);
    }
  }

  /* End of Outputs for SubSystem: '<S3>/  ' */

  /* Sum: '<S60>/FixPt Sum1' incorporates:
   *  Constant: '<S60>/FixPt Constant'
   *  UnitDelay: '<S59>/Output'
   */
  SingleJoint_Algorithm2_DW.Output_DSTATE =
    (SingleJoint_Algorithm2_DW.Output_DSTATE +
     SingleJoint_Algorithm2_P.FixPtConstant_Value) & 255U;

  /* Switch: '<S61>/FixPt Switch' incorporates:
   *  Constant: '<S61>/Constant'
   *  UnitDelay: '<S59>/Output'
   */
  if (SingleJoint_Algorithm2_DW.Output_DSTATE >
      SingleJoint_Algorithm2_P._uplimit) {
    SingleJoint_Algorithm2_DW.Output_DSTATE =
      SingleJoint_Algorithm2_P.Constant_Value_o;
  }

  /* End of Switch: '<S61>/FixPt Switch' */
}

/* Model step function */
void SingleJoint_Algorithm2_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/GetMotorData' */
  SingleJoint_Algori_GetMotorData();

  /* End of Outputs for SubSystem: '<Root>/GetMotorData' */

  /* Outputs for Atomic SubSystem: '<Root>/AdaptionController' */
  DynamicsController();

  /* End of Outputs for SubSystem: '<Root>/AdaptionController' */

  /* Outputs for Atomic SubSystem: '<Root>/SendDataToGUI' */
  SingleJoint_Algor_SendDataToGUI();

  /* End of Outputs for SubSystem: '<Root>/SendDataToGUI' */
}

/* Model initialize function */
void SingleJoint_Algorithm2_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(SingleJoint_Algorithm2_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &SingleJoint_Algorithm2_B), 0,
                sizeof(B_SingleJoint_Algorithm2_T));

  /* states (dwork) */
  (void) memset((void *)&SingleJoint_Algorithm2_DW, 0,
                sizeof(DW_SingleJoint_Algorithm2_T));

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
  (void) memset(&Motor_Position, 0,
                6U*sizeof(int32_T));
  (void) memset(&Motor_Current, 0,
                6U*sizeof(int32_T));
  (void) memset(&Motor_Velocity, 0,
                6U*sizeof(int32_T));
  StartRobot = 0U;
  One_TXD = 0U;

  {
    int16_T i;

    /* Start for Atomic SubSystem: '<Root>/GetMotorData' */
    SingleJoint__GetMotorData_Start();

    /* End of Start for SubSystem: '<Root>/GetMotorData' */

    /* Start for Atomic SubSystem: '<Root>/AdaptionController' */
    DynamicsController_Start();

    /* End of Start for SubSystem: '<Root>/AdaptionController' */

    /* Start for S-Function (idletask): '<Root>/Idle Task' incorporates:
     *  SubSystem: '<Root>/接收上位机的数据'
     */
    /* Start for function-call system: '<Root>/接收上位机的数据' */

    /* Start for Atomic SubSystem: '<S5>/获取用户命令' */
    SingleJoint_Algorithm_u_k_Start();

    /* End of Start for SubSystem: '<S5>/获取用户命令' */

    /* Start for DataStoreMemory: '<S5>/消息使能' */
    SingleJoint_Algorithm2_DW.PTX = SingleJoint_Algorithm2_P._InitialValue;
    for (i = 0; i < 6; i++) {
      /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
      Motor_Position[i] =
        SingleJoint_Algorithm2_P.DataStoreMemory1_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory10' */
      J7[i] = SingleJoint_Algorithm2_P.DataStoreMemory10_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory11' */
      Motor_Current[i] =
        SingleJoint_Algorithm2_P.DataStoreMemory11_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory13' */
      J1[i] = SingleJoint_Algorithm2_P.DataStoreMemory13_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory2' */
      Motor_Velocity[i] =
        SingleJoint_Algorithm2_P.DataStoreMemory2_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory3' */
      J2[i] = SingleJoint_Algorithm2_P.DataStoreMemory3_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory4' */
      J3[i] = SingleJoint_Algorithm2_P.DataStoreMemory4_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory5' */
      J4[i] = SingleJoint_Algorithm2_P.DataStoreMemory5_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory6' */
      J5[i] = SingleJoint_Algorithm2_P.DataStoreMemory6_InitialValue[i];

      /* Start for DataStoreMemory: '<Root>/Data Store Memory7' */
      J6[i] = SingleJoint_Algorithm2_P.DataStoreMemory7_InitialValue[i];
    }

    /* Start for DataStoreMemory: '<Root>/Data Store Memory8' */
    memcpy(&Send_GUIdata[0],
           &SingleJoint_Algorithm2_P.DataStoreMemory8_InitialValue[0], 18U *
           sizeof(real_T));

    /* Start for DataStoreMemory: '<Root>/Data Store Memory9' */
    StartRobot = SingleJoint_Algorithm2_P.DataStoreMemory9_InitialValue;

    /* user code (Initialize function Body) */

    /* System '<Root>' */
    MO_config_eCAN_B_mbx (1U, 26, 769, 0);
    MO_config_eCAN_B_mbx (1U, 27, 770, 0);
    MO_config_eCAN_B_mbx (1U, 28, 771, 0);
    MO_config_eCAN_A_mbx (1U, 29, 772, 0);
    MO_config_eCAN_A_mbx (1U, 30, 773, 0);
    MO_config_eCAN_A_mbx (1U, 31, 774, 0);
    DELAY_US(3000000);

    /* SystemInitialize for Atomic SubSystem: '<Root>/AdaptionController' */
    DynamicsController_Init();

    /* End of SystemInitialize for SubSystem: '<Root>/AdaptionController' */

    /* SystemInitialize for Atomic SubSystem: '<Root>/SendDataToGUI' */
    SingleJoint__SendDataToGUI_Init();

    /* End of SystemInitialize for SubSystem: '<Root>/SendDataToGUI' */
  }
}

/* Model terminate function */
void SingleJoint_Algorithm2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
