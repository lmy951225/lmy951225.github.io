/*
 * File: DrivrMotor.c
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

#include "DrivrMotor.h"

/* Include model header file for global data */
#include "PID_SingleJoint.h"
#include "PID_SingleJoint_private.h"
#define PID_SingleJo_IN_NO_ACTIVE_CHILD (0U)
#define PID_SingleJoint_IN_State01     (1U)
#define PID_SingleJoint_IN_State03     (2U)
#define PID_SingleJoint_IN_State04     (3U)
#define PID_SingleJoint_IN_State05     (4U)
#define PID_SingleJoint_IN_State06     (5U)

/* Output and update for atomic system: '<S27>/J1_UM1' */
void PID_SingleJoint_J1_UM1(void)
{
  /* DataTypeConversion: '<S42>/Data Type Conversion' incorporates:
   *  ArithShift: '<S42>/Shift Arithmetic1'
   *  ArithShift: '<S42>/Shift Arithmetic2'
   *  ArithShift: '<S42>/Shift Arithmetic3'
   *  ArithShift: '<S42>/Shift Arithmetic4'
   *  Constant: '<S42>/Constant1'
   *  Constant: '<S42>/Constant2'
   *  Constant: '<S42>/Constant3'
   *  Constant: '<S42>/Constant8'
   */
  DynamicsController_B.DataTypeConversion_dd[0] =
    DynamicsController_P.Constant8_Value;
  DynamicsController_B.DataTypeConversion_dd[1] =
    DynamicsController_P.Constant1_Value_d;
  DynamicsController_B.DataTypeConversion_dd[2] =
    DynamicsController_P.Constant2_Value_e;
  DynamicsController_B.DataTypeConversion_dd[3] = 0U;
  DynamicsController_B.DataTypeConversion_dd[4] =
    DynamicsController_P.Constant3_Value;
  DynamicsController_B.DataTypeConversion_dd[5] = 0U;
  DynamicsController_B.DataTypeConversion_dd[6] = 0U;
  DynamicsController_B.DataTypeConversion_dd[7] = 0U;
}

/* Output and update for atomic system: '<S27>/J2_UM1' */
void PID_SingleJoint_J2_UM1(void)
{
  /* DataTypeConversion: '<S43>/Data Type Conversion' incorporates:
   *  ArithShift: '<S43>/Shift Arithmetic1'
   *  ArithShift: '<S43>/Shift Arithmetic2'
   *  ArithShift: '<S43>/Shift Arithmetic3'
   *  ArithShift: '<S43>/Shift Arithmetic4'
   *  Constant: '<S43>/Constant1'
   *  Constant: '<S43>/Constant2'
   *  Constant: '<S43>/Constant3'
   *  Constant: '<S43>/Constant8'
   */
  DynamicsController_B.DataTypeConversion_m[0] =
    DynamicsController_P.Constant8_Value_i;
  DynamicsController_B.DataTypeConversion_m[1] =
    DynamicsController_P.Constant1_Value_m;
  DynamicsController_B.DataTypeConversion_m[2] =
    DynamicsController_P.Constant2_Value_i;
  DynamicsController_B.DataTypeConversion_m[3] = 0U;
  DynamicsController_B.DataTypeConversion_m[4] =
    DynamicsController_P.Constant3_Value_a;
  DynamicsController_B.DataTypeConversion_m[5] = 0U;
  DynamicsController_B.DataTypeConversion_m[6] = 0U;
  DynamicsController_B.DataTypeConversion_m[7] = 0U;
}

/* Output and update for atomic system: '<S27>/J3_UM1' */
void PID_SingleJoint_J3_UM1(void)
{
  /* DataTypeConversion: '<S44>/Data Type Conversion' incorporates:
   *  ArithShift: '<S44>/Shift Arithmetic1'
   *  ArithShift: '<S44>/Shift Arithmetic2'
   *  ArithShift: '<S44>/Shift Arithmetic3'
   *  ArithShift: '<S44>/Shift Arithmetic4'
   *  Constant: '<S44>/Constant1'
   *  Constant: '<S44>/Constant2'
   *  Constant: '<S44>/Constant3'
   *  Constant: '<S44>/Constant8'
   */
  DynamicsController_B.DataTypeConversion_b[0] =
    DynamicsController_P.Constant8_Value_k;
  DynamicsController_B.DataTypeConversion_b[1] =
    DynamicsController_P.Constant1_Value_o;
  DynamicsController_B.DataTypeConversion_b[2] =
    DynamicsController_P.Constant2_Value_a;
  DynamicsController_B.DataTypeConversion_b[3] = 0U;
  DynamicsController_B.DataTypeConversion_b[4] =
    DynamicsController_P.Constant3_Value_ar;
  DynamicsController_B.DataTypeConversion_b[5] = 0U;
  DynamicsController_B.DataTypeConversion_b[6] = 0U;
  DynamicsController_B.DataTypeConversion_b[7] = 0U;
}

/* Output and update for atomic system: '<S27>/J4_UM1' */
void PID_SingleJoint_J4_UM1(void)
{
  /* DataTypeConversion: '<S45>/Data Type Conversion' incorporates:
   *  ArithShift: '<S45>/Shift Arithmetic1'
   *  ArithShift: '<S45>/Shift Arithmetic2'
   *  ArithShift: '<S45>/Shift Arithmetic3'
   *  ArithShift: '<S45>/Shift Arithmetic4'
   *  Constant: '<S45>/Constant1'
   *  Constant: '<S45>/Constant2'
   *  Constant: '<S45>/Constant3'
   *  Constant: '<S45>/Constant8'
   */
  DynamicsController_B.DataTypeConversion_d[0] =
    DynamicsController_P.Constant8_Value_m;
  DynamicsController_B.DataTypeConversion_d[1] =
    DynamicsController_P.Constant1_Value_h;
  DynamicsController_B.DataTypeConversion_d[2] =
    DynamicsController_P.Constant2_Value_n;
  DynamicsController_B.DataTypeConversion_d[3] = 0U;
  DynamicsController_B.DataTypeConversion_d[4] =
    DynamicsController_P.Constant3_Value_o;
  DynamicsController_B.DataTypeConversion_d[5] = 0U;
  DynamicsController_B.DataTypeConversion_d[6] = 0U;
  DynamicsController_B.DataTypeConversion_d[7] = 0U;
}

/* Output and update for atomic system: '<S27>/J5_UM1' */
void PID_SingleJoint_J5_UM1(void)
{
  /* DataTypeConversion: '<S46>/Data Type Conversion' incorporates:
   *  ArithShift: '<S46>/Shift Arithmetic1'
   *  ArithShift: '<S46>/Shift Arithmetic2'
   *  ArithShift: '<S46>/Shift Arithmetic3'
   *  ArithShift: '<S46>/Shift Arithmetic4'
   *  Constant: '<S46>/Constant1'
   *  Constant: '<S46>/Constant2'
   *  Constant: '<S46>/Constant3'
   *  Constant: '<S46>/Constant8'
   */
  DynamicsController_B.DataTypeConversion_n[0] =
    DynamicsController_P.Constant8_Value_g;
  DynamicsController_B.DataTypeConversion_n[1] =
    DynamicsController_P.Constant1_Value_b;
  DynamicsController_B.DataTypeConversion_n[2] =
    DynamicsController_P.Constant2_Value_c;
  DynamicsController_B.DataTypeConversion_n[3] = 0U;
  DynamicsController_B.DataTypeConversion_n[4] =
    DynamicsController_P.Constant3_Value_k;
  DynamicsController_B.DataTypeConversion_n[5] = 0U;
  DynamicsController_B.DataTypeConversion_n[6] = 0U;
  DynamicsController_B.DataTypeConversion_n[7] = 0U;
}

/* Output and update for atomic system: '<S27>/J6_UM1' */
void PID_SingleJoint_J6_UM1(void)
{
  /* DataTypeConversion: '<S47>/Data Type Conversion' incorporates:
   *  ArithShift: '<S47>/Shift Arithmetic1'
   *  ArithShift: '<S47>/Shift Arithmetic2'
   *  ArithShift: '<S47>/Shift Arithmetic3'
   *  ArithShift: '<S47>/Shift Arithmetic4'
   *  Constant: '<S47>/Constant1'
   *  Constant: '<S47>/Constant2'
   *  Constant: '<S47>/Constant3'
   *  Constant: '<S47>/Constant8'
   */
  DynamicsController_B.DataTypeConversion[0] =
    DynamicsController_P.Constant8_Value_kv;
  DynamicsController_B.DataTypeConversion[1] =
    DynamicsController_P.Constant1_Value_ov;
  DynamicsController_B.DataTypeConversion[2] =
    DynamicsController_P.Constant2_Value_f;
  DynamicsController_B.DataTypeConversion[3] = 0U;
  DynamicsController_B.DataTypeConversion[4] =
    DynamicsController_P.Constant3_Value_h;
  DynamicsController_B.DataTypeConversion[5] = 0U;
  DynamicsController_B.DataTypeConversion[6] = 0U;
  DynamicsController_B.DataTypeConversion[7] = 0U;
}

/* System initialize for enable system: '<S29>/StartRobotSubsystem' */
void PID_Si_StartRobotSubsystem_Init(void)
{
  /* SystemInitialize for Outport: '<S48>/Out1' */
  DynamicsController_B.In1 = DynamicsController_P.Out1_Y0;
}

/* Output and update for enable system: '<S29>/StartRobotSubsystem' */
void PID_SingleJ_StartRobotSubsystem(void)
{
  /* Outputs for Enabled SubSystem: '<S29>/StartRobotSubsystem' incorporates:
   *  EnablePort: '<S48>/Enable'
   */
  if (DynamicsController_B.StartRobot_k > 0U) {
    /* user code (Output function Body) */

    /* System '<S29>/StartRobotSubsystem' */
    qibaozha_joint1();
    qibaozha_joint2();
    qibaozha_joint3();
    qibaozha_joint4();
    qibaozha_joint5();
    qibaozha_joint6();
    DELAY_US(500000);

    /* Inport: '<S48>/In1' incorporates:
     *  Constant: '<S29>/Constant'
     */
    DynamicsController_B.In1 = DynamicsController_P.Constant_Value_o;
  }

  /* End of Outputs for SubSystem: '<S29>/StartRobotSubsystem' */
}

/*
 * Output and update for atomic system:
 *    '<S26>/J1_TF'
 *    '<S26>/J2_TF'
 *    '<S26>/J3_TF'
 *    '<S26>/J4_TF'
 *    '<S26>/J5_TF'
 *    '<S26>/J6_TF'
 */
void PID_SingleJoint_J1_TF(uint16_T rtu_Current, uint16_T rty_MSG[8],
  P_J1_TF_PID_SingleJoint_T *localP)
{
  /* DataTypeConversion: '<S36>/Data Type Conversion' incorporates:
   *  ArithShift: '<S36>/Shift Arithmetic1'
   *  ArithShift: '<S36>/Shift Arithmetic2'
   *  ArithShift: '<S36>/Shift Arithmetic3'
   *  ArithShift: '<S36>/Shift Arithmetic4'
   *  Constant: '<S36>/Constant1'
   *  Constant: '<S36>/Constant3'
   *  Constant: '<S36>/Constant8'
   *  DataTypeConversion: '<S36>/Data Type Conversion1'
   */
  rty_MSG[0] = localP->Constant8_Value;
  rty_MSG[1] = localP->Constant1_Value;
  rty_MSG[2] = rtu_Current & 255U;
  rty_MSG[3] = rtu_Current >> 8U;
  rty_MSG[4] = localP->Constant3_Value;
  rty_MSG[5] = 0U;
  rty_MSG[6] = 0U;
  rty_MSG[7] = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S25>/J1_BG'
 *    '<S25>/J2_BG'
 *    '<S25>/J3_BG'
 *    '<S25>/J4_BG'
 *    '<S25>/J5_BG'
 *    '<S25>/J6_BG'
 */
void PID_SingleJoint_J1_BG(uint16_T rty_MSG[8], P_J1_BG_PID_SingleJoint_T
  *localP)
{
  /* DataTypeConversion: '<S30>/Data Type Conversion' incorporates:
   *  ArithShift: '<S30>/Shift Arithmetic1'
   *  ArithShift: '<S30>/Shift Arithmetic2'
   *  ArithShift: '<S30>/Shift Arithmetic3'
   *  ArithShift: '<S30>/Shift Arithmetic4'
   *  Constant: '<S30>/Constant1'
   *  Constant: '<S30>/Constant2'
   *  Constant: '<S30>/Constant3'
   *  Constant: '<S30>/Constant8'
   */
  rty_MSG[0] = localP->Constant8_Value;
  rty_MSG[1] = localP->Constant1_Value;
  rty_MSG[2] = localP->Constant2_Value;
  rty_MSG[3] = 0U;
  rty_MSG[4] = localP->Constant3_Value;
  rty_MSG[5] = 0U;
  rty_MSG[6] = 0U;
  rty_MSG[7] = 0U;
}

/* System initialize for atomic system: '<S7>/驱动器指令' */
void PID_SingleJoint_u_Init(void)
{
  DynamicsController_DW.is_active_c5_PID_SingleJoint = 0U;
  DynamicsController_DW.is_c5_PID_SingleJoint = PID_SingleJo_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S17>/Chart2' incorporates:
   *  SubSystem: '<S24>/start_arm'
   */

  /* SystemInitialize for Enabled SubSystem: '<S29>/StartRobotSubsystem' */
  PID_Si_StartRobotSubsystem_Init();

  /* End of SystemInitialize for SubSystem: '<S29>/StartRobotSubsystem' */
}

/* Output and update for atomic system: '<S7>/驱动器指令' */
void PID_SingleJoint_u(void)
{
  uint16_T rtb_DataTypeConversion_ck[8];
  uint16_T rtb_DataTypeConversion_ob[8];
  uint16_T rtb_DataTypeConversion_jr[8];
  uint16_T rtb_DataTypeConversion_n[8];
  uint16_T rtb_DataTypeConversion_jg[8];
  uint16_T rtb_DataTypeConversion_m0[8];
  int16_T i;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  real_T tmp_3;
  real_T tmp_4;

  /* DataTypeConversion: '<S17>/Data Type Conversion7' */
  tmp_4 = floor(DynamicsController_B.Saturation2);
  if (rtIsNaN(tmp_4) || rtIsInf(tmp_4)) {
    tmp_4 = 0.0;
  } else {
    tmp_4 = fmod(tmp_4, 65536.0);
  }

  tmp_3 = floor(DynamicsController_B.Saturation1);
  if (rtIsNaN(tmp_3) || rtIsInf(tmp_3)) {
    tmp_3 = 0.0;
  } else {
    tmp_3 = fmod(tmp_3, 65536.0);
  }

  tmp_2 = floor(DynamicsController_B.Saturation3);
  if (rtIsNaN(tmp_2) || rtIsInf(tmp_2)) {
    tmp_2 = 0.0;
  } else {
    tmp_2 = fmod(tmp_2, 65536.0);
  }

  tmp_1 = floor(DynamicsController_B.Saturation4);
  if (rtIsNaN(tmp_1) || rtIsInf(tmp_1)) {
    tmp_1 = 0.0;
  } else {
    tmp_1 = fmod(tmp_1, 65536.0);
  }

  tmp_0 = floor(DynamicsController_B.Saturation5);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 65536.0);
  }

  tmp = floor(DynamicsController_B.Saturation6);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  /* Chart: '<S17>/Chart2' incorporates:
   *  DataStoreRead: '<S17>/Data Store Read'
   *  DataTypeConversion: '<S17>/Data Type Conversion7'
   *  Reshape: '<S25>/Reshape6'
   *  Reshape: '<S26>/Reshape6'
   *  Reshape: '<S27>/Reshape1'
   */
  if (DynamicsController_DW.is_active_c5_PID_SingleJoint == 0U) {
    DynamicsController_DW.is_active_c5_PID_SingleJoint = 1U;
    DynamicsController_DW.is_c5_PID_SingleJoint = PID_SingleJoint_IN_State05;
    DynamicsController_DW.start = 0U;
  } else {
    switch (DynamicsController_DW.is_c5_PID_SingleJoint) {
     case PID_SingleJoint_IN_State01:
      if (DynamicsController_DW.bx > 0U) {
        DynamicsController_DW.is_c5_PID_SingleJoint = PID_SingleJoint_IN_State06;

        /* Outputs for Function Call SubSystem: '<S24>/UM1' */
        /* Outputs for Atomic SubSystem: '<S27>/J1_UM1' */
        PID_SingleJoint_J1_UM1();

        /* End of Outputs for SubSystem: '<S27>/J1_UM1' */

        /* Outputs for Atomic SubSystem: '<S27>/J2_UM1' */
        PID_SingleJoint_J2_UM1();

        /* End of Outputs for SubSystem: '<S27>/J2_UM1' */

        /* Outputs for Atomic SubSystem: '<S27>/J3_UM1' */
        PID_SingleJoint_J3_UM1();

        /* End of Outputs for SubSystem: '<S27>/J3_UM1' */

        /* Outputs for Atomic SubSystem: '<S27>/J4_UM1' */
        PID_SingleJoint_J4_UM1();

        /* End of Outputs for SubSystem: '<S27>/J4_UM1' */

        /* Outputs for Atomic SubSystem: '<S27>/J5_UM1' */
        PID_SingleJoint_J5_UM1();

        /* End of Outputs for SubSystem: '<S27>/J5_UM1' */

        /* Outputs for Atomic SubSystem: '<S27>/J6_UM1' */
        PID_SingleJoint_J6_UM1();

        /* End of Outputs for SubSystem: '<S27>/J6_UM1' */

        /* DataStoreWrite: '<S27>/Data Store Write' incorporates:
         *  Constant: '<S27>/Constant'
         */
        TXD = DynamicsController_P.Constant_Value_b;

        /* End of Outputs for SubSystem: '<S24>/UM1' */
        for (i = 0; i < 8; i++) {
          /* Outputs for Function Call SubSystem: '<S24>/UM1' */
          DynamicsController_B.MSG[i] =
            DynamicsController_B.DataTypeConversion_dd[i];
          DynamicsController_B.MSG[i + 8] =
            DynamicsController_B.DataTypeConversion_m[i];
          DynamicsController_B.MSG[i + 16] =
            DynamicsController_B.DataTypeConversion_b[i];
          DynamicsController_B.MSG[i + 24] =
            DynamicsController_B.DataTypeConversion_d[i];
          DynamicsController_B.MSG[i + 32] =
            DynamicsController_B.DataTypeConversion_n[i];
          DynamicsController_B.MSG[i + 40] =
            DynamicsController_B.DataTypeConversion[i];

          /* End of Outputs for SubSystem: '<S24>/UM1' */
        }
      } else {
        /* DataTypeConversion: '<S17>/Data Type Conversion1' */
        tmp_4 = floor(DynamicsController_B.u_f);
        if (rtIsNaN(tmp_4) || rtIsInf(tmp_4)) {
          tmp_4 = 0.0;
        } else {
          tmp_4 = fmod(tmp_4, 65536.0);
        }

        /* Outputs for Function Call SubSystem: '<S24>/check' */
        /* Switch: '<S28>/Switch' incorporates:
         *  Constant: '<S28>/Constant'
         *  Constant: '<S28>/Constant1'
         *  DataTypeConversion: '<S17>/Data Type Conversion1'
         */
        if ((tmp_4 < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp_4 : (uint16_T)
             tmp_4) > DynamicsController_P.Switch_Threshold) {
          DynamicsController_DW.bx = DynamicsController_P.Constant_Value_n;
        } else {
          DynamicsController_DW.bx = DynamicsController_P.Constant1_Value_f;
        }

        /* End of Switch: '<S28>/Switch' */
        /* End of Outputs for SubSystem: '<S24>/check' */
      }
      break;

     case PID_SingleJoint_IN_State03:
      DynamicsController_DW.is_c5_PID_SingleJoint = PID_SingleJoint_IN_State04;
      break;

     case PID_SingleJoint_IN_State04:
      /* Outputs for Function Call SubSystem: '<S24>/TF' */
      /* Outputs for Atomic SubSystem: '<S26>/J1_TF' */
      PID_SingleJoint_J1_TF(tmp_4 < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp_4 :
                            (uint16_T)tmp_4, rtb_DataTypeConversion_ck,
                            &DynamicsController_P.J1_TF);

      /* End of Outputs for SubSystem: '<S26>/J1_TF' */

      /* Outputs for Atomic SubSystem: '<S26>/J2_TF' */
      PID_SingleJoint_J1_TF(tmp_3 < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp_3 :
                            (uint16_T)tmp_3, rtb_DataTypeConversion_ob,
                            &DynamicsController_P.J2_TF);

      /* End of Outputs for SubSystem: '<S26>/J2_TF' */

      /* Outputs for Atomic SubSystem: '<S26>/J3_TF' */
      PID_SingleJoint_J1_TF(tmp_2 < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp_2 :
                            (uint16_T)tmp_2, rtb_DataTypeConversion_jr,
                            &DynamicsController_P.J3_TF);

      /* End of Outputs for SubSystem: '<S26>/J3_TF' */

      /* Outputs for Atomic SubSystem: '<S26>/J4_TF' */
      PID_SingleJoint_J1_TF(tmp_1 < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp_1 :
                            (uint16_T)tmp_1, rtb_DataTypeConversion_n,
                            &DynamicsController_P.J4_TF);

      /* End of Outputs for SubSystem: '<S26>/J4_TF' */

      /* Outputs for Atomic SubSystem: '<S26>/J5_TF' */
      PID_SingleJoint_J1_TF(tmp_0 < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp_0 :
                            (uint16_T)tmp_0, rtb_DataTypeConversion_jg,
                            &DynamicsController_P.J5_TF);

      /* End of Outputs for SubSystem: '<S26>/J5_TF' */

      /* Outputs for Atomic SubSystem: '<S26>/J6_TF' */
      PID_SingleJoint_J1_TF(tmp < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp :
                            (uint16_T)tmp, rtb_DataTypeConversion_m0,
                            &DynamicsController_P.J6_TF);

      /* End of Outputs for SubSystem: '<S26>/J6_TF' */

      /* DataStoreWrite: '<S26>/Data Store Write' incorporates:
       *  Constant: '<S26>/Constant2'
       *  DataTypeConversion: '<S17>/Data Type Conversion7'
       */
      TXD = DynamicsController_P.Constant2_Value_id;

      /* End of Outputs for SubSystem: '<S24>/TF' */
      for (i = 0; i < 8; i++) {
        /* Outputs for Function Call SubSystem: '<S24>/TF' */
        DynamicsController_B.MSG[i] = rtb_DataTypeConversion_ck[i];
        DynamicsController_B.MSG[i + 8] = rtb_DataTypeConversion_ob[i];
        DynamicsController_B.MSG[i + 16] = rtb_DataTypeConversion_jr[i];
        DynamicsController_B.MSG[i + 24] = rtb_DataTypeConversion_n[i];
        DynamicsController_B.MSG[i + 32] = rtb_DataTypeConversion_jg[i];
        DynamicsController_B.MSG[i + 40] = rtb_DataTypeConversion_m0[i];

        /* End of Outputs for SubSystem: '<S24>/TF' */
      }
      break;

     case PID_SingleJoint_IN_State05:
      if (DynamicsController_DW.start > 0U) {
        DynamicsController_DW.is_c5_PID_SingleJoint = PID_SingleJoint_IN_State01;
        DynamicsController_DW.bx = 0U;
      } else {
        DynamicsController_B.StartRobot_k = StartRobot;

        /* Outputs for Function Call SubSystem: '<S24>/start_arm' */
        /* Outputs for Enabled SubSystem: '<S29>/StartRobotSubsystem' */
        PID_SingleJ_StartRobotSubsystem();

        /* End of Outputs for SubSystem: '<S29>/StartRobotSubsystem' */
        /* End of Outputs for SubSystem: '<S24>/start_arm' */
        DynamicsController_DW.start = DynamicsController_B.In1;
      }
      break;

     default:
      DynamicsController_DW.is_c5_PID_SingleJoint = PID_SingleJoint_IN_State03;

      /* Outputs for Function Call SubSystem: '<S24>/BG' */
      /* Outputs for Atomic SubSystem: '<S25>/J1_BG' */
      PID_SingleJoint_J1_BG(rtb_DataTypeConversion_ck,
                            &DynamicsController_P.J1_BG);

      /* End of Outputs for SubSystem: '<S25>/J1_BG' */

      /* Outputs for Atomic SubSystem: '<S25>/J2_BG' */
      PID_SingleJoint_J1_BG(rtb_DataTypeConversion_ob,
                            &DynamicsController_P.J2_BG);

      /* End of Outputs for SubSystem: '<S25>/J2_BG' */

      /* Outputs for Atomic SubSystem: '<S25>/J3_BG' */
      PID_SingleJoint_J1_BG(rtb_DataTypeConversion_jr,
                            &DynamicsController_P.J3_BG);

      /* End of Outputs for SubSystem: '<S25>/J3_BG' */

      /* Outputs for Atomic SubSystem: '<S25>/J4_BG' */
      PID_SingleJoint_J1_BG(rtb_DataTypeConversion_n,
                            &DynamicsController_P.J4_BG);

      /* End of Outputs for SubSystem: '<S25>/J4_BG' */

      /* Outputs for Atomic SubSystem: '<S25>/J5_BG' */
      PID_SingleJoint_J1_BG(rtb_DataTypeConversion_jg,
                            &DynamicsController_P.J5_BG);

      /* End of Outputs for SubSystem: '<S25>/J5_BG' */

      /* Outputs for Atomic SubSystem: '<S25>/J6_BG' */
      PID_SingleJoint_J1_BG(rtb_DataTypeConversion_m0,
                            &DynamicsController_P.J6_BG);

      /* End of Outputs for SubSystem: '<S25>/J6_BG' */

      /* DataStoreWrite: '<S25>/Data Store Write' incorporates:
       *  Constant: '<S25>/Constant6'
       */
      TXD = DynamicsController_P.Constant6_Value;

      /* End of Outputs for SubSystem: '<S24>/BG' */
      for (i = 0; i < 8; i++) {
        /* Outputs for Function Call SubSystem: '<S24>/BG' */
        DynamicsController_B.MSG[i] = rtb_DataTypeConversion_ck[i];
        DynamicsController_B.MSG[i + 8] = rtb_DataTypeConversion_ob[i];
        DynamicsController_B.MSG[i + 16] = rtb_DataTypeConversion_jr[i];
        DynamicsController_B.MSG[i + 24] = rtb_DataTypeConversion_n[i];
        DynamicsController_B.MSG[i + 32] = rtb_DataTypeConversion_jg[i];
        DynamicsController_B.MSG[i + 40] = rtb_DataTypeConversion_m0[i];

        /* End of Outputs for SubSystem: '<S24>/BG' */
      }
      break;
    }
  }

  /* End of Chart: '<S17>/Chart2' */

  /* DataTypeConversion: '<S17>/Data Type Conversion12' */
  for (i = 0; i < 48; i++) {
    DynamicsController_B.DataTypeConversion12[i] = DynamicsController_B.MSG[i] &
      255U;
  }

  /* End of DataTypeConversion: '<S17>/Data Type Conversion12' */
}

/* System initialize for atomic system: '<S1>/DriveMotor' */
void DrivrMotor_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S7>/驱动器指令' */
  PID_SingleJoint_u_Init();

  /* End of SystemInitialize for SubSystem: '<S7>/驱动器指令' */
}

/* Start for atomic system: '<S1>/DriveMotor' */
void DrivrMotor_Start(void)
{
  /* Start for Enabled SubSystem: '<S7>/BottomDriver' */

  /* Start for S-Function (c280xcanxmt): '<S22>/eCANA_305_11' */
  {
    /* Configure mailbox 11 to transmit messages with the ID: 773 */
    config_eCAN_A_mbx (1U, 11, 773, 0);
  }

  /* End of Start for SubSystem: '<S7>/BottomDriver' */

  /* Start for DataStoreMemory: '<S7>/Data Store Memory1' */
  TXD = DynamicsController_P.DataStoreMemory1_InitialValue;
}

/* Output and update for atomic system: '<S1>/DriveMotor' */
void DrivrMotor(void)
{
  /* Saturate: '<S7>/Saturation2' */
  if (DynamicsController_B.Add[0] > DynamicsController_P.Saturation2_UpperSat) {
    DynamicsController_B.Saturation2 = DynamicsController_P.Saturation2_UpperSat;
  } else if (DynamicsController_B.Add[0] <
             DynamicsController_P.Saturation2_LowerSat) {
    DynamicsController_B.Saturation2 = DynamicsController_P.Saturation2_LowerSat;
  } else {
    DynamicsController_B.Saturation2 = DynamicsController_B.Add[0];
  }

  /* End of Saturate: '<S7>/Saturation2' */

  /* Saturate: '<S7>/Saturation1' */
  if (DynamicsController_B.Add[1] > DynamicsController_P.Saturation1_UpperSat) {
    DynamicsController_B.Saturation1 = DynamicsController_P.Saturation1_UpperSat;
  } else if (DynamicsController_B.Add[1] <
             DynamicsController_P.Saturation1_LowerSat) {
    DynamicsController_B.Saturation1 = DynamicsController_P.Saturation1_LowerSat;
  } else {
    DynamicsController_B.Saturation1 = DynamicsController_B.Add[1];
  }

  /* End of Saturate: '<S7>/Saturation1' */

  /* Saturate: '<S7>/Saturation3' */
  if (DynamicsController_B.Add[2] > DynamicsController_P.Saturation3_UpperSat) {
    DynamicsController_B.Saturation3 = DynamicsController_P.Saturation3_UpperSat;
  } else if (DynamicsController_B.Add[2] <
             DynamicsController_P.Saturation3_LowerSat) {
    DynamicsController_B.Saturation3 = DynamicsController_P.Saturation3_LowerSat;
  } else {
    DynamicsController_B.Saturation3 = DynamicsController_B.Add[2];
  }

  /* End of Saturate: '<S7>/Saturation3' */

  /* Saturate: '<S7>/Saturation4' */
  if (DynamicsController_B.Add[3] > DynamicsController_P.Saturation4_UpperSat) {
    DynamicsController_B.Saturation4 = DynamicsController_P.Saturation4_UpperSat;
  } else if (DynamicsController_B.Add[3] <
             DynamicsController_P.Saturation4_LowerSat) {
    DynamicsController_B.Saturation4 = DynamicsController_P.Saturation4_LowerSat;
  } else {
    DynamicsController_B.Saturation4 = DynamicsController_B.Add[3];
  }

  /* End of Saturate: '<S7>/Saturation4' */

  /* Saturate: '<S7>/Saturation5' */
  if (DynamicsController_B.Add[4] > DynamicsController_P.Saturation5_UpperSat) {
    DynamicsController_B.Saturation5 = DynamicsController_P.Saturation5_UpperSat;
  } else if (DynamicsController_B.Add[4] <
             DynamicsController_P.Saturation5_LowerSat) {
    DynamicsController_B.Saturation5 = DynamicsController_P.Saturation5_LowerSat;
  } else {
    DynamicsController_B.Saturation5 = DynamicsController_B.Add[4];
  }

  /* End of Saturate: '<S7>/Saturation5' */

  /* Saturate: '<S7>/Saturation6' */
  if (DynamicsController_B.Add[5] > DynamicsController_P.Saturation6_UpperSat) {
    DynamicsController_B.Saturation6 = DynamicsController_P.Saturation6_UpperSat;
  } else if (DynamicsController_B.Add[5] <
             DynamicsController_P.Saturation6_LowerSat) {
    DynamicsController_B.Saturation6 = DynamicsController_P.Saturation6_LowerSat;
  } else {
    DynamicsController_B.Saturation6 = DynamicsController_B.Add[5];
  }

  /* End of Saturate: '<S7>/Saturation6' */

  /* Outputs for Atomic SubSystem: '<S7>/驱动器指令' */
  PID_SingleJoint_u();

  /* End of Outputs for SubSystem: '<S7>/驱动器指令' */

  /* Outputs for Enabled SubSystem: '<S7>/BottomDriver' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  /* DataStoreRead: '<S7>/Data Store Read4' */
  if (TXD > 0U) {
    /* DataStoreWrite: '<S16>/Data Store Write' incorporates:
     *  Constant: '<S16>/Constant'
     */
    TXD = DynamicsController_P.Constant_Value_c;

    /* S-Function (c280xcanxmt): '<S22>/eCANA_305_11' */
    {
      ECanaMboxes.MBOX11.MDH.byte.BYTE4 =
        DynamicsController_B.DataTypeConversion12[39];
      ECanaMboxes.MBOX11.MDH.byte.BYTE5 =
        DynamicsController_B.DataTypeConversion12[38];
      ECanaMboxes.MBOX11.MDH.byte.BYTE6 =
        DynamicsController_B.DataTypeConversion12[37];
      ECanaMboxes.MBOX11.MDH.byte.BYTE7 =
        DynamicsController_B.DataTypeConversion12[36];
      ECanaMboxes.MBOX11.MDL.byte.BYTE0 =
        DynamicsController_B.DataTypeConversion12[35];
      ECanaMboxes.MBOX11.MDL.byte.BYTE1 =
        DynamicsController_B.DataTypeConversion12[34];
      ECanaMboxes.MBOX11.MDL.byte.BYTE2 =
        DynamicsController_B.DataTypeConversion12[33];
      ECanaMboxes.MBOX11.MDL.byte.BYTE3 =
        DynamicsController_B.DataTypeConversion12[32];
      ECanaMboxes.MBOX11.MSGCTRL.bit.DLC = 8;
      ECanaRegs.CANTRS.all = (((uint32_T) 0x00000001) << 11);
      EDIS;
    }
  }

  /* End of DataStoreRead: '<S7>/Data Store Read4' */
  /* End of Outputs for SubSystem: '<S7>/BottomDriver' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
