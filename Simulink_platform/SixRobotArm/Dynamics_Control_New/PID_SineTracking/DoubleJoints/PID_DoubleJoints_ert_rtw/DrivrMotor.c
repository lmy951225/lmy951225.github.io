/*
 * File: DrivrMotor.c
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

#include "DrivrMotor.h"

/* Include model header file for global data */
#include "PID_DoubleJoints.h"
#include "PID_DoubleJoints_private.h"
#define PID_DoubleJo_IN_NO_ACTIVE_CHILD (0U)
#define PID_DoubleJoints_IN_State01    (1U)
#define PID_DoubleJoints_IN_State03    (2U)
#define PID_DoubleJoints_IN_State04    (3U)
#define PID_DoubleJoints_IN_State05    (4U)
#define PID_DoubleJoints_IN_State06    (5U)

/* Output and update for atomic system: '<S27>/J1_UM1' */
void PID_DoubleJoints_J1_UM1(void)
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
  PID_DoubleJoints_B.DataTypeConversion_h[0] =
    PID_DoubleJoints_P.Constant8_Value;
  PID_DoubleJoints_B.DataTypeConversion_h[1] =
    PID_DoubleJoints_P.Constant1_Value_pe;
  PID_DoubleJoints_B.DataTypeConversion_h[2] =
    PID_DoubleJoints_P.Constant2_Value_h;
  PID_DoubleJoints_B.DataTypeConversion_h[3] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_h[4] =
    PID_DoubleJoints_P.Constant3_Value_j;
  PID_DoubleJoints_B.DataTypeConversion_h[5] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_h[6] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_h[7] = 0U;
}

/* Output and update for atomic system: '<S27>/J2_UM1' */
void PID_DoubleJoints_J2_UM1(void)
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
  PID_DoubleJoints_B.DataTypeConversion_l[0] =
    PID_DoubleJoints_P.Constant8_Value_g;
  PID_DoubleJoints_B.DataTypeConversion_l[1] =
    PID_DoubleJoints_P.Constant1_Value_at;
  PID_DoubleJoints_B.DataTypeConversion_l[2] =
    PID_DoubleJoints_P.Constant2_Value_n;
  PID_DoubleJoints_B.DataTypeConversion_l[3] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_l[4] =
    PID_DoubleJoints_P.Constant3_Value_m;
  PID_DoubleJoints_B.DataTypeConversion_l[5] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_l[6] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_l[7] = 0U;
}

/* Output and update for atomic system: '<S27>/J3_UM1' */
void PID_DoubleJoints_J3_UM1(void)
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
  PID_DoubleJoints_B.DataTypeConversion_b[0] =
    PID_DoubleJoints_P.Constant8_Value_j;
  PID_DoubleJoints_B.DataTypeConversion_b[1] =
    PID_DoubleJoints_P.Constant1_Value_n;
  PID_DoubleJoints_B.DataTypeConversion_b[2] =
    PID_DoubleJoints_P.Constant2_Value_a;
  PID_DoubleJoints_B.DataTypeConversion_b[3] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_b[4] =
    PID_DoubleJoints_P.Constant3_Value_a;
  PID_DoubleJoints_B.DataTypeConversion_b[5] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_b[6] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_b[7] = 0U;
}

/* Output and update for atomic system: '<S27>/J4_UM1' */
void PID_DoubleJoints_J4_UM1(void)
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
  PID_DoubleJoints_B.DataTypeConversion_o[0] =
    PID_DoubleJoints_P.Constant8_Value_p;
  PID_DoubleJoints_B.DataTypeConversion_o[1] =
    PID_DoubleJoints_P.Constant1_Value_aw;
  PID_DoubleJoints_B.DataTypeConversion_o[2] =
    PID_DoubleJoints_P.Constant2_Value_c;
  PID_DoubleJoints_B.DataTypeConversion_o[3] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_o[4] =
    PID_DoubleJoints_P.Constant3_Value_b;
  PID_DoubleJoints_B.DataTypeConversion_o[5] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_o[6] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_o[7] = 0U;
}

/* Output and update for atomic system: '<S27>/J5_UM1' */
void PID_DoubleJoints_J5_UM1(void)
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
  PID_DoubleJoints_B.DataTypeConversion_k[0] =
    PID_DoubleJoints_P.Constant8_Value_d;
  PID_DoubleJoints_B.DataTypeConversion_k[1] =
    PID_DoubleJoints_P.Constant1_Value_d;
  PID_DoubleJoints_B.DataTypeConversion_k[2] =
    PID_DoubleJoints_P.Constant2_Value_e;
  PID_DoubleJoints_B.DataTypeConversion_k[3] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_k[4] =
    PID_DoubleJoints_P.Constant3_Value_o;
  PID_DoubleJoints_B.DataTypeConversion_k[5] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_k[6] = 0U;
  PID_DoubleJoints_B.DataTypeConversion_k[7] = 0U;
}

/* Output and update for atomic system: '<S27>/J6_UM1' */
void PID_DoubleJoints_J6_UM1(void)
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
  PID_DoubleJoints_B.DataTypeConversion[0] =
    PID_DoubleJoints_P.Constant8_Value_dl;
  PID_DoubleJoints_B.DataTypeConversion[1] =
    PID_DoubleJoints_P.Constant1_Value_l;
  PID_DoubleJoints_B.DataTypeConversion[2] =
    PID_DoubleJoints_P.Constant2_Value_f;
  PID_DoubleJoints_B.DataTypeConversion[3] = 0U;
  PID_DoubleJoints_B.DataTypeConversion[4] =
    PID_DoubleJoints_P.Constant3_Value_af;
  PID_DoubleJoints_B.DataTypeConversion[5] = 0U;
  PID_DoubleJoints_B.DataTypeConversion[6] = 0U;
  PID_DoubleJoints_B.DataTypeConversion[7] = 0U;
}

/* System initialize for enable system: '<S29>/StartRobotSubsystem' */
void PID_Do_StartRobotSubsystem_Init(void)
{
  /* SystemInitialize for Outport: '<S48>/Out1' */
  PID_DoubleJoints_B.In1 = PID_DoubleJoints_P.Out1_Y0;
}

/* Output and update for enable system: '<S29>/StartRobotSubsystem' */
void PID_DoubleJ_StartRobotSubsystem(void)
{
  /* Outputs for Enabled SubSystem: '<S29>/StartRobotSubsystem' incorporates:
   *  EnablePort: '<S48>/Enable'
   */
  if (PID_DoubleJoints_B.StartRobot_h > 0U) {
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
    PID_DoubleJoints_B.In1 = PID_DoubleJoints_P.Constant_Value_a;
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
void PID_DoubleJoints_J1_TF(uint16_T rtu_Current, uint16_T rty_MSG[8],
  P_J1_TF_PID_DoubleJoints_T *localP)
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
void PID_DoubleJoints_J1_BG(uint16_T rty_MSG[8], P_J1_BG_PID_DoubleJoints_T
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
void PID_DoubleJoints_u_Init(void)
{
  PID_DoubleJoints_DW.is_active_c5_PID_DoubleJoints = 0U;
  PID_DoubleJoints_DW.is_c5_PID_DoubleJoints = PID_DoubleJo_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S17>/Chart2' incorporates:
   *  SubSystem: '<S24>/start_arm'
   */

  /* SystemInitialize for Enabled SubSystem: '<S29>/StartRobotSubsystem' */
  PID_Do_StartRobotSubsystem_Init();

  /* End of SystemInitialize for SubSystem: '<S29>/StartRobotSubsystem' */
}

/* Output and update for atomic system: '<S7>/驱动器指令' */
void PID_DoubleJoints_u(void)
{
  uint16_T rtb_DataTypeConversion_in[8];
  uint16_T rtb_DataTypeConversion_l[8];
  uint16_T rtb_DataTypeConversion_nz[8];
  uint16_T rtb_DataTypeConversion_n5[8];
  uint16_T rtb_DataTypeConversion_m[8];
  uint16_T rtb_DataTypeConversion[8];
  int16_T i;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  real_T tmp_3;
  real_T tmp_4;

  /* DataTypeConversion: '<S17>/Data Type Conversion7' */
  tmp_4 = floor(PID_DoubleJoints_B.Saturation2);
  if (rtIsNaN(tmp_4) || rtIsInf(tmp_4)) {
    tmp_4 = 0.0;
  } else {
    tmp_4 = fmod(tmp_4, 65536.0);
  }

  tmp_3 = floor(PID_DoubleJoints_B.Saturation1);
  if (rtIsNaN(tmp_3) || rtIsInf(tmp_3)) {
    tmp_3 = 0.0;
  } else {
    tmp_3 = fmod(tmp_3, 65536.0);
  }

  tmp_2 = floor(PID_DoubleJoints_B.Saturation3);
  if (rtIsNaN(tmp_2) || rtIsInf(tmp_2)) {
    tmp_2 = 0.0;
  } else {
    tmp_2 = fmod(tmp_2, 65536.0);
  }

  tmp_1 = floor(PID_DoubleJoints_B.Saturation4);
  if (rtIsNaN(tmp_1) || rtIsInf(tmp_1)) {
    tmp_1 = 0.0;
  } else {
    tmp_1 = fmod(tmp_1, 65536.0);
  }

  tmp_0 = floor(PID_DoubleJoints_B.Saturation5);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 65536.0);
  }

  tmp = floor(PID_DoubleJoints_B.Saturation6);
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
  if (PID_DoubleJoints_DW.is_active_c5_PID_DoubleJoints == 0U) {
    PID_DoubleJoints_DW.is_active_c5_PID_DoubleJoints = 1U;
    PID_DoubleJoints_DW.is_c5_PID_DoubleJoints = PID_DoubleJoints_IN_State05;
    PID_DoubleJoints_DW.start = 0U;
  } else {
    switch (PID_DoubleJoints_DW.is_c5_PID_DoubleJoints) {
     case PID_DoubleJoints_IN_State01:
      if (PID_DoubleJoints_DW.bx > 0U) {
        PID_DoubleJoints_DW.is_c5_PID_DoubleJoints = PID_DoubleJoints_IN_State06;

        /* Outputs for Function Call SubSystem: '<S24>/UM1' */
        /* Outputs for Atomic SubSystem: '<S27>/J1_UM1' */
        PID_DoubleJoints_J1_UM1();

        /* End of Outputs for SubSystem: '<S27>/J1_UM1' */

        /* Outputs for Atomic SubSystem: '<S27>/J2_UM1' */
        PID_DoubleJoints_J2_UM1();

        /* End of Outputs for SubSystem: '<S27>/J2_UM1' */

        /* Outputs for Atomic SubSystem: '<S27>/J3_UM1' */
        PID_DoubleJoints_J3_UM1();

        /* End of Outputs for SubSystem: '<S27>/J3_UM1' */

        /* Outputs for Atomic SubSystem: '<S27>/J4_UM1' */
        PID_DoubleJoints_J4_UM1();

        /* End of Outputs for SubSystem: '<S27>/J4_UM1' */

        /* Outputs for Atomic SubSystem: '<S27>/J5_UM1' */
        PID_DoubleJoints_J5_UM1();

        /* End of Outputs for SubSystem: '<S27>/J5_UM1' */

        /* Outputs for Atomic SubSystem: '<S27>/J6_UM1' */
        PID_DoubleJoints_J6_UM1();

        /* End of Outputs for SubSystem: '<S27>/J6_UM1' */

        /* DataStoreWrite: '<S27>/Data Store Write' incorporates:
         *  Constant: '<S27>/Constant'
         */
        TXD = PID_DoubleJoints_P.Constant_Value_d;

        /* End of Outputs for SubSystem: '<S24>/UM1' */
        for (i = 0; i < 8; i++) {
          /* Outputs for Function Call SubSystem: '<S24>/UM1' */
          PID_DoubleJoints_B.MSG[i] = PID_DoubleJoints_B.DataTypeConversion_h[i];
          PID_DoubleJoints_B.MSG[i + 8] =
            PID_DoubleJoints_B.DataTypeConversion_l[i];
          PID_DoubleJoints_B.MSG[i + 16] =
            PID_DoubleJoints_B.DataTypeConversion_b[i];
          PID_DoubleJoints_B.MSG[i + 24] =
            PID_DoubleJoints_B.DataTypeConversion_o[i];
          PID_DoubleJoints_B.MSG[i + 32] =
            PID_DoubleJoints_B.DataTypeConversion_k[i];
          PID_DoubleJoints_B.MSG[i + 40] =
            PID_DoubleJoints_B.DataTypeConversion[i];

          /* End of Outputs for SubSystem: '<S24>/UM1' */
        }
      } else {
        /* DataTypeConversion: '<S17>/Data Type Conversion1' */
        tmp_4 = floor(PID_DoubleJoints_B.u);
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
             tmp_4) > PID_DoubleJoints_P.Switch_Threshold) {
          PID_DoubleJoints_DW.bx = PID_DoubleJoints_P.Constant_Value_f;
        } else {
          PID_DoubleJoints_DW.bx = PID_DoubleJoints_P.Constant1_Value_a;
        }

        /* End of Switch: '<S28>/Switch' */
        /* End of Outputs for SubSystem: '<S24>/check' */
      }
      break;

     case PID_DoubleJoints_IN_State03:
      PID_DoubleJoints_DW.is_c5_PID_DoubleJoints = PID_DoubleJoints_IN_State04;
      break;

     case PID_DoubleJoints_IN_State04:
      /* Outputs for Function Call SubSystem: '<S24>/TF' */
      /* Outputs for Atomic SubSystem: '<S26>/J1_TF' */
      PID_DoubleJoints_J1_TF(tmp_4 < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp_4 :
        (uint16_T)tmp_4, rtb_DataTypeConversion_in, &PID_DoubleJoints_P.J1_TF);

      /* End of Outputs for SubSystem: '<S26>/J1_TF' */

      /* Outputs for Atomic SubSystem: '<S26>/J2_TF' */
      PID_DoubleJoints_J1_TF(tmp_3 < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp_3 :
        (uint16_T)tmp_3, rtb_DataTypeConversion_l, &PID_DoubleJoints_P.J2_TF);

      /* End of Outputs for SubSystem: '<S26>/J2_TF' */

      /* Outputs for Atomic SubSystem: '<S26>/J3_TF' */
      PID_DoubleJoints_J1_TF(tmp_2 < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp_2 :
        (uint16_T)tmp_2, rtb_DataTypeConversion_nz, &PID_DoubleJoints_P.J3_TF);

      /* End of Outputs for SubSystem: '<S26>/J3_TF' */

      /* Outputs for Atomic SubSystem: '<S26>/J4_TF' */
      PID_DoubleJoints_J1_TF(tmp_1 < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp_1 :
        (uint16_T)tmp_1, rtb_DataTypeConversion_n5, &PID_DoubleJoints_P.J4_TF);

      /* End of Outputs for SubSystem: '<S26>/J4_TF' */

      /* Outputs for Atomic SubSystem: '<S26>/J5_TF' */
      PID_DoubleJoints_J1_TF(tmp_0 < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp_0 :
        (uint16_T)tmp_0, rtb_DataTypeConversion_m, &PID_DoubleJoints_P.J5_TF);

      /* End of Outputs for SubSystem: '<S26>/J5_TF' */

      /* Outputs for Atomic SubSystem: '<S26>/J6_TF' */
      PID_DoubleJoints_J1_TF(tmp < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp :
        (uint16_T)tmp, rtb_DataTypeConversion, &PID_DoubleJoints_P.J6_TF);

      /* End of Outputs for SubSystem: '<S26>/J6_TF' */

      /* DataStoreWrite: '<S26>/Data Store Write' incorporates:
       *  Constant: '<S26>/Constant2'
       *  DataTypeConversion: '<S17>/Data Type Conversion7'
       */
      TXD = PID_DoubleJoints_P.Constant2_Value_k;

      /* End of Outputs for SubSystem: '<S24>/TF' */
      for (i = 0; i < 8; i++) {
        /* Outputs for Function Call SubSystem: '<S24>/TF' */
        PID_DoubleJoints_B.MSG[i] = rtb_DataTypeConversion_in[i];
        PID_DoubleJoints_B.MSG[i + 8] = rtb_DataTypeConversion_l[i];
        PID_DoubleJoints_B.MSG[i + 16] = rtb_DataTypeConversion_nz[i];
        PID_DoubleJoints_B.MSG[i + 24] = rtb_DataTypeConversion_n5[i];
        PID_DoubleJoints_B.MSG[i + 32] = rtb_DataTypeConversion_m[i];
        PID_DoubleJoints_B.MSG[i + 40] = rtb_DataTypeConversion[i];

        /* End of Outputs for SubSystem: '<S24>/TF' */
      }
      break;

     case PID_DoubleJoints_IN_State05:
      if (PID_DoubleJoints_DW.start > 0U) {
        PID_DoubleJoints_DW.is_c5_PID_DoubleJoints = PID_DoubleJoints_IN_State01;
        PID_DoubleJoints_DW.bx = 0U;
      } else {
        PID_DoubleJoints_B.StartRobot_h = StartRobot;

        /* Outputs for Function Call SubSystem: '<S24>/start_arm' */
        /* Outputs for Enabled SubSystem: '<S29>/StartRobotSubsystem' */
        PID_DoubleJ_StartRobotSubsystem();

        /* End of Outputs for SubSystem: '<S29>/StartRobotSubsystem' */
        /* End of Outputs for SubSystem: '<S24>/start_arm' */
        PID_DoubleJoints_DW.start = PID_DoubleJoints_B.In1;
      }
      break;

     default:
      PID_DoubleJoints_DW.is_c5_PID_DoubleJoints = PID_DoubleJoints_IN_State03;

      /* Outputs for Function Call SubSystem: '<S24>/BG' */
      /* Outputs for Atomic SubSystem: '<S25>/J1_BG' */
      PID_DoubleJoints_J1_BG(rtb_DataTypeConversion_in,
        &PID_DoubleJoints_P.J1_BG);

      /* End of Outputs for SubSystem: '<S25>/J1_BG' */

      /* Outputs for Atomic SubSystem: '<S25>/J2_BG' */
      PID_DoubleJoints_J1_BG(rtb_DataTypeConversion_l, &PID_DoubleJoints_P.J2_BG);

      /* End of Outputs for SubSystem: '<S25>/J2_BG' */

      /* Outputs for Atomic SubSystem: '<S25>/J3_BG' */
      PID_DoubleJoints_J1_BG(rtb_DataTypeConversion_nz,
        &PID_DoubleJoints_P.J3_BG);

      /* End of Outputs for SubSystem: '<S25>/J3_BG' */

      /* Outputs for Atomic SubSystem: '<S25>/J4_BG' */
      PID_DoubleJoints_J1_BG(rtb_DataTypeConversion_n5,
        &PID_DoubleJoints_P.J4_BG);

      /* End of Outputs for SubSystem: '<S25>/J4_BG' */

      /* Outputs for Atomic SubSystem: '<S25>/J5_BG' */
      PID_DoubleJoints_J1_BG(rtb_DataTypeConversion_m, &PID_DoubleJoints_P.J5_BG);

      /* End of Outputs for SubSystem: '<S25>/J5_BG' */

      /* Outputs for Atomic SubSystem: '<S25>/J6_BG' */
      PID_DoubleJoints_J1_BG(rtb_DataTypeConversion, &PID_DoubleJoints_P.J6_BG);

      /* End of Outputs for SubSystem: '<S25>/J6_BG' */

      /* DataStoreWrite: '<S25>/Data Store Write' incorporates:
       *  Constant: '<S25>/Constant6'
       */
      TXD = PID_DoubleJoints_P.Constant6_Value;

      /* End of Outputs for SubSystem: '<S24>/BG' */
      for (i = 0; i < 8; i++) {
        /* Outputs for Function Call SubSystem: '<S24>/BG' */
        PID_DoubleJoints_B.MSG[i] = rtb_DataTypeConversion_in[i];
        PID_DoubleJoints_B.MSG[i + 8] = rtb_DataTypeConversion_l[i];
        PID_DoubleJoints_B.MSG[i + 16] = rtb_DataTypeConversion_nz[i];
        PID_DoubleJoints_B.MSG[i + 24] = rtb_DataTypeConversion_n5[i];
        PID_DoubleJoints_B.MSG[i + 32] = rtb_DataTypeConversion_m[i];
        PID_DoubleJoints_B.MSG[i + 40] = rtb_DataTypeConversion[i];

        /* End of Outputs for SubSystem: '<S24>/BG' */
      }
      break;
    }
  }

  /* End of Chart: '<S17>/Chart2' */

  /* DataTypeConversion: '<S17>/Data Type Conversion12' */
  for (i = 0; i < 48; i++) {
    PID_DoubleJoints_B.DataTypeConversion12[i] = PID_DoubleJoints_B.MSG[i] &
      255U;
  }

  /* End of DataTypeConversion: '<S17>/Data Type Conversion12' */
}

/* System initialize for atomic system: '<S1>/DriveMotor' */
void DrivrMotor_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S7>/驱动器指令' */
  PID_DoubleJoints_u_Init();

  /* End of SystemInitialize for SubSystem: '<S7>/驱动器指令' */
}

/* Start for atomic system: '<S1>/DriveMotor' */
void DrivrMotor_Start(void)
{
  /* Start for Enabled SubSystem: '<S7>/BottomDriver' */

  /* Start for S-Function (c280xcanxmt): '<S19>/eCANB _302_8' */
  {
    /* Configure mailbox 8 to transmit messages with the ID: 770 */
    config_eCAN_B_mbx (1U, 8, 770, 0);
  }

  /* Start for S-Function (c280xcanxmt): '<S20>/eCANB _303_9' */
  {
    /* Configure mailbox 9 to transmit messages with the ID: 771 */
    config_eCAN_B_mbx (1U, 9, 771, 0);
  }

  /* End of Start for SubSystem: '<S7>/BottomDriver' */

  /* Start for DataStoreMemory: '<S7>/Data Store Memory1' */
  TXD = PID_DoubleJoints_P.DataStoreMemory1_InitialValue_m;
}

/* Output and update for atomic system: '<S1>/DriveMotor' */
void DrivrMotor(void)
{
  /* Saturate: '<S7>/Saturation2' */
  if (PID_DoubleJoints_B.Add[0] > PID_DoubleJoints_P.Saturation2_UpperSat) {
    PID_DoubleJoints_B.Saturation2 = PID_DoubleJoints_P.Saturation2_UpperSat;
  } else if (PID_DoubleJoints_B.Add[0] < PID_DoubleJoints_P.Saturation2_LowerSat)
  {
    PID_DoubleJoints_B.Saturation2 = PID_DoubleJoints_P.Saturation2_LowerSat;
  } else {
    PID_DoubleJoints_B.Saturation2 = PID_DoubleJoints_B.Add[0];
  }

  /* End of Saturate: '<S7>/Saturation2' */

  /* Saturate: '<S7>/Saturation1' */
  if (PID_DoubleJoints_B.Add[1] > PID_DoubleJoints_P.Saturation1_UpperSat) {
    PID_DoubleJoints_B.Saturation1 = PID_DoubleJoints_P.Saturation1_UpperSat;
  } else if (PID_DoubleJoints_B.Add[1] < PID_DoubleJoints_P.Saturation1_LowerSat)
  {
    PID_DoubleJoints_B.Saturation1 = PID_DoubleJoints_P.Saturation1_LowerSat;
  } else {
    PID_DoubleJoints_B.Saturation1 = PID_DoubleJoints_B.Add[1];
  }

  /* End of Saturate: '<S7>/Saturation1' */

  /* Saturate: '<S7>/Saturation3' */
  if (PID_DoubleJoints_B.Add[2] > PID_DoubleJoints_P.Saturation3_UpperSat) {
    PID_DoubleJoints_B.Saturation3 = PID_DoubleJoints_P.Saturation3_UpperSat;
  } else if (PID_DoubleJoints_B.Add[2] < PID_DoubleJoints_P.Saturation3_LowerSat)
  {
    PID_DoubleJoints_B.Saturation3 = PID_DoubleJoints_P.Saturation3_LowerSat;
  } else {
    PID_DoubleJoints_B.Saturation3 = PID_DoubleJoints_B.Add[2];
  }

  /* End of Saturate: '<S7>/Saturation3' */

  /* Saturate: '<S7>/Saturation4' */
  if (PID_DoubleJoints_B.Add[3] > PID_DoubleJoints_P.Saturation4_UpperSat) {
    PID_DoubleJoints_B.Saturation4 = PID_DoubleJoints_P.Saturation4_UpperSat;
  } else if (PID_DoubleJoints_B.Add[3] < PID_DoubleJoints_P.Saturation4_LowerSat)
  {
    PID_DoubleJoints_B.Saturation4 = PID_DoubleJoints_P.Saturation4_LowerSat;
  } else {
    PID_DoubleJoints_B.Saturation4 = PID_DoubleJoints_B.Add[3];
  }

  /* End of Saturate: '<S7>/Saturation4' */

  /* Saturate: '<S7>/Saturation5' */
  if (PID_DoubleJoints_B.Add[4] > PID_DoubleJoints_P.Saturation5_UpperSat) {
    PID_DoubleJoints_B.Saturation5 = PID_DoubleJoints_P.Saturation5_UpperSat;
  } else if (PID_DoubleJoints_B.Add[4] < PID_DoubleJoints_P.Saturation5_LowerSat)
  {
    PID_DoubleJoints_B.Saturation5 = PID_DoubleJoints_P.Saturation5_LowerSat;
  } else {
    PID_DoubleJoints_B.Saturation5 = PID_DoubleJoints_B.Add[4];
  }

  /* End of Saturate: '<S7>/Saturation5' */

  /* Saturate: '<S7>/Saturation6' */
  if (PID_DoubleJoints_B.Add[5] > PID_DoubleJoints_P.Saturation6_UpperSat) {
    PID_DoubleJoints_B.Saturation6 = PID_DoubleJoints_P.Saturation6_UpperSat;
  } else if (PID_DoubleJoints_B.Add[5] < PID_DoubleJoints_P.Saturation6_LowerSat)
  {
    PID_DoubleJoints_B.Saturation6 = PID_DoubleJoints_P.Saturation6_LowerSat;
  } else {
    PID_DoubleJoints_B.Saturation6 = PID_DoubleJoints_B.Add[5];
  }

  /* End of Saturate: '<S7>/Saturation6' */

  /* Outputs for Atomic SubSystem: '<S7>/驱动器指令' */
  PID_DoubleJoints_u();

  /* End of Outputs for SubSystem: '<S7>/驱动器指令' */

  /* Outputs for Enabled SubSystem: '<S7>/BottomDriver' incorporates:
   *  EnablePort: '<S16>/Enable'
   */
  /* DataStoreRead: '<S7>/Data Store Read4' */
  if (TXD > 0U) {
    /* DataStoreWrite: '<S16>/Data Store Write' incorporates:
     *  Constant: '<S16>/Constant'
     */
    TXD = PID_DoubleJoints_P.Constant_Value_n;

    /* S-Function (c280xcanxmt): '<S19>/eCANB _302_8' */
    {
      ECanbMboxes.MBOX8.MDH.byte.BYTE4 =
        PID_DoubleJoints_B.DataTypeConversion12[15];
      ECanbMboxes.MBOX8.MDH.byte.BYTE5 =
        PID_DoubleJoints_B.DataTypeConversion12[14];
      ECanbMboxes.MBOX8.MDH.byte.BYTE6 =
        PID_DoubleJoints_B.DataTypeConversion12[13];
      ECanbMboxes.MBOX8.MDH.byte.BYTE7 =
        PID_DoubleJoints_B.DataTypeConversion12[12];
      ECanbMboxes.MBOX8.MDL.byte.BYTE0 =
        PID_DoubleJoints_B.DataTypeConversion12[11];
      ECanbMboxes.MBOX8.MDL.byte.BYTE1 =
        PID_DoubleJoints_B.DataTypeConversion12[10];
      ECanbMboxes.MBOX8.MDL.byte.BYTE2 =
        PID_DoubleJoints_B.DataTypeConversion12[9];
      ECanbMboxes.MBOX8.MDL.byte.BYTE3 =
        PID_DoubleJoints_B.DataTypeConversion12[8];
      ECanbMboxes.MBOX8.MSGCTRL.bit.DLC = 8;
      ECanbRegs.CANTRS.all = (((uint32_T) 0x00000001) << 8);
      EDIS;
    }

    /* S-Function (c280xcanxmt): '<S20>/eCANB _303_9' */
    {
      ECanbMboxes.MBOX9.MDH.byte.BYTE4 =
        PID_DoubleJoints_B.DataTypeConversion12[23];
      ECanbMboxes.MBOX9.MDH.byte.BYTE5 =
        PID_DoubleJoints_B.DataTypeConversion12[22];
      ECanbMboxes.MBOX9.MDH.byte.BYTE6 =
        PID_DoubleJoints_B.DataTypeConversion12[21];
      ECanbMboxes.MBOX9.MDH.byte.BYTE7 =
        PID_DoubleJoints_B.DataTypeConversion12[20];
      ECanbMboxes.MBOX9.MDL.byte.BYTE0 =
        PID_DoubleJoints_B.DataTypeConversion12[19];
      ECanbMboxes.MBOX9.MDL.byte.BYTE1 =
        PID_DoubleJoints_B.DataTypeConversion12[18];
      ECanbMboxes.MBOX9.MDL.byte.BYTE2 =
        PID_DoubleJoints_B.DataTypeConversion12[17];
      ECanbMboxes.MBOX9.MDL.byte.BYTE3 =
        PID_DoubleJoints_B.DataTypeConversion12[16];
      ECanbMboxes.MBOX9.MSGCTRL.bit.DLC = 8;
      ECanbRegs.CANTRS.all = (((uint32_T) 0x00000001) << 9);
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
