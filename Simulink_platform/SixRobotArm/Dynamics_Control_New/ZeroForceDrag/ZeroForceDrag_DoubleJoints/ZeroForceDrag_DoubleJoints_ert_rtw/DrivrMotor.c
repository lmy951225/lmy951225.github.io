/*
 * File: DrivrMotor.c
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

#include "DrivrMotor.h"

/* Include model header file for global data */
#include "ZeroForceDrag_DoubleJoints.h"
#include "ZeroForceDrag_DoubleJoints_private.h"
#define ZeroForceDra_IN_NO_ACTIVE_CHILD (0U)
#define ZeroForceDrag_Double_IN_State01 (1U)
#define ZeroForceDrag_Double_IN_State03 (2U)
#define ZeroForceDrag_Double_IN_State04 (3U)
#define ZeroForceDrag_Double_IN_State05 (4U)
#define ZeroForceDrag_Double_IN_State06 (5U)

/* Output and update for atomic system: '<S20>/J1_UM1' */
void ZeroForceDrag_DoubleJoin_J1_UM1(void)
{
  /* DataTypeConversion: '<S35>/Data Type Conversion' incorporates:
   *  ArithShift: '<S35>/Shift Arithmetic1'
   *  ArithShift: '<S35>/Shift Arithmetic2'
   *  ArithShift: '<S35>/Shift Arithmetic3'
   *  ArithShift: '<S35>/Shift Arithmetic4'
   *  Constant: '<S35>/Constant1'
   *  Constant: '<S35>/Constant2'
   *  Constant: '<S35>/Constant3'
   *  Constant: '<S35>/Constant8'
   */
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_j[0] =
    ZeroForceDrag_DoubleJoints_P.Constant8_Value;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_j[1] =
    ZeroForceDrag_DoubleJoints_P.Constant1_Value_j;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_j[2] =
    ZeroForceDrag_DoubleJoints_P.Constant2_Value;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_j[3] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_j[4] =
    ZeroForceDrag_DoubleJoints_P.Constant3_Value;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_j[5] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_j[6] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_j[7] = 0U;
}

/* Output and update for atomic system: '<S20>/J2_UM1' */
void ZeroForceDrag_DoubleJoin_J2_UM1(void)
{
  /* DataTypeConversion: '<S36>/Data Type Conversion' incorporates:
   *  ArithShift: '<S36>/Shift Arithmetic1'
   *  ArithShift: '<S36>/Shift Arithmetic2'
   *  ArithShift: '<S36>/Shift Arithmetic3'
   *  ArithShift: '<S36>/Shift Arithmetic4'
   *  Constant: '<S36>/Constant1'
   *  Constant: '<S36>/Constant2'
   *  Constant: '<S36>/Constant3'
   *  Constant: '<S36>/Constant8'
   */
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_a[0] =
    ZeroForceDrag_DoubleJoints_P.Constant8_Value_i;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_a[1] =
    ZeroForceDrag_DoubleJoints_P.Constant1_Value_d;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_a[2] =
    ZeroForceDrag_DoubleJoints_P.Constant2_Value_a;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_a[3] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_a[4] =
    ZeroForceDrag_DoubleJoints_P.Constant3_Value_c;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_a[5] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_a[6] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_a[7] = 0U;
}

/* Output and update for atomic system: '<S20>/J3_UM1' */
void ZeroForceDrag_DoubleJoin_J3_UM1(void)
{
  /* DataTypeConversion: '<S37>/Data Type Conversion' incorporates:
   *  ArithShift: '<S37>/Shift Arithmetic1'
   *  ArithShift: '<S37>/Shift Arithmetic2'
   *  ArithShift: '<S37>/Shift Arithmetic3'
   *  ArithShift: '<S37>/Shift Arithmetic4'
   *  Constant: '<S37>/Constant1'
   *  Constant: '<S37>/Constant2'
   *  Constant: '<S37>/Constant3'
   *  Constant: '<S37>/Constant8'
   */
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_e[0] =
    ZeroForceDrag_DoubleJoints_P.Constant8_Value_l;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_e[1] =
    ZeroForceDrag_DoubleJoints_P.Constant1_Value_i;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_e[2] =
    ZeroForceDrag_DoubleJoints_P.Constant2_Value_h;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_e[3] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_e[4] =
    ZeroForceDrag_DoubleJoints_P.Constant3_Value_p;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_e[5] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_e[6] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_e[7] = 0U;
}

/* Output and update for atomic system: '<S20>/J4_UM1' */
void ZeroForceDrag_DoubleJoin_J4_UM1(void)
{
  /* DataTypeConversion: '<S38>/Data Type Conversion' incorporates:
   *  ArithShift: '<S38>/Shift Arithmetic1'
   *  ArithShift: '<S38>/Shift Arithmetic2'
   *  ArithShift: '<S38>/Shift Arithmetic3'
   *  ArithShift: '<S38>/Shift Arithmetic4'
   *  Constant: '<S38>/Constant1'
   *  Constant: '<S38>/Constant2'
   *  Constant: '<S38>/Constant3'
   *  Constant: '<S38>/Constant8'
   */
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_m[0] =
    ZeroForceDrag_DoubleJoints_P.Constant8_Value_p;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_m[1] =
    ZeroForceDrag_DoubleJoints_P.Constant1_Value_np;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_m[2] =
    ZeroForceDrag_DoubleJoints_P.Constant2_Value_o;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_m[3] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_m[4] =
    ZeroForceDrag_DoubleJoints_P.Constant3_Value_i;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_m[5] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_m[6] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_m[7] = 0U;
}

/* Output and update for atomic system: '<S20>/J5_UM1' */
void ZeroForceDrag_DoubleJoin_J5_UM1(void)
{
  /* DataTypeConversion: '<S39>/Data Type Conversion' incorporates:
   *  ArithShift: '<S39>/Shift Arithmetic1'
   *  ArithShift: '<S39>/Shift Arithmetic2'
   *  ArithShift: '<S39>/Shift Arithmetic3'
   *  ArithShift: '<S39>/Shift Arithmetic4'
   *  Constant: '<S39>/Constant1'
   *  Constant: '<S39>/Constant2'
   *  Constant: '<S39>/Constant3'
   *  Constant: '<S39>/Constant8'
   */
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_b[0] =
    ZeroForceDrag_DoubleJoints_P.Constant8_Value_m;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_b[1] =
    ZeroForceDrag_DoubleJoints_P.Constant1_Value_b;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_b[2] =
    ZeroForceDrag_DoubleJoints_P.Constant2_Value_i;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_b[3] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_b[4] =
    ZeroForceDrag_DoubleJoints_P.Constant3_Value_j;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_b[5] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_b[6] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion_b[7] = 0U;
}

/* Output and update for atomic system: '<S20>/J6_UM1' */
void ZeroForceDrag_DoubleJoin_J6_UM1(void)
{
  /* DataTypeConversion: '<S40>/Data Type Conversion' incorporates:
   *  ArithShift: '<S40>/Shift Arithmetic1'
   *  ArithShift: '<S40>/Shift Arithmetic2'
   *  ArithShift: '<S40>/Shift Arithmetic3'
   *  ArithShift: '<S40>/Shift Arithmetic4'
   *  Constant: '<S40>/Constant1'
   *  Constant: '<S40>/Constant2'
   *  Constant: '<S40>/Constant3'
   *  Constant: '<S40>/Constant8'
   */
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion[0] =
    ZeroForceDrag_DoubleJoints_P.Constant8_Value_b;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion[1] =
    ZeroForceDrag_DoubleJoints_P.Constant1_Value_p;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion[2] =
    ZeroForceDrag_DoubleJoints_P.Constant2_Value_b;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion[3] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion[4] =
    ZeroForceDrag_DoubleJoints_P.Constant3_Value_jx;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion[5] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion[6] = 0U;
  ZeroForceDrag_DoubleJoints_B.DataTypeConversion[7] = 0U;
}

/* System initialize for enable system: '<S22>/StartRobotSubsystem' */
void ZeroFo_StartRobotSubsystem_Init(void)
{
  /* SystemInitialize for Outport: '<S41>/Out1' */
  ZeroForceDrag_DoubleJoints_B.In1 = ZeroForceDrag_DoubleJoints_P.Out1_Y0;
}

/* Output and update for enable system: '<S22>/StartRobotSubsystem' */
void ZeroForceDr_StartRobotSubsystem(void)
{
  /* Outputs for Enabled SubSystem: '<S22>/StartRobotSubsystem' incorporates:
   *  EnablePort: '<S41>/Enable'
   */
  if (ZeroForceDrag_DoubleJoints_B.StartRobot_a > 0U) {
    /* user code (Output function Body) */

    /* System '<S22>/StartRobotSubsystem' */
    qibaozha_joint1();
    qibaozha_joint2();
    qibaozha_joint3();
    qibaozha_joint4();
    qibaozha_joint5();
    qibaozha_joint6();
    DELAY_US(500000);

    /* Inport: '<S41>/In1' incorporates:
     *  Constant: '<S22>/Constant'
     */
    ZeroForceDrag_DoubleJoints_B.In1 =
      ZeroForceDrag_DoubleJoints_P.Constant_Value_f;
  }

  /* End of Outputs for SubSystem: '<S22>/StartRobotSubsystem' */
}

/*
 * Output and update for atomic system:
 *    '<S19>/J1_TF'
 *    '<S19>/J2_TF'
 *    '<S19>/J3_TF'
 *    '<S19>/J4_TF'
 *    '<S19>/J5_TF'
 *    '<S19>/J6_TF'
 */
void ZeroForceDrag_DoubleJoint_J1_TF(uint16_T rtu_Current, uint16_T rty_MSG[8],
  P_J1_TF_ZeroForceDrag_DoubleJ_T *localP)
{
  /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
   *  ArithShift: '<S29>/Shift Arithmetic1'
   *  ArithShift: '<S29>/Shift Arithmetic2'
   *  ArithShift: '<S29>/Shift Arithmetic3'
   *  ArithShift: '<S29>/Shift Arithmetic4'
   *  Constant: '<S29>/Constant1'
   *  Constant: '<S29>/Constant3'
   *  Constant: '<S29>/Constant8'
   *  DataTypeConversion: '<S29>/Data Type Conversion1'
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
 *    '<S18>/J1_BG'
 *    '<S18>/J2_BG'
 *    '<S18>/J3_BG'
 *    '<S18>/J4_BG'
 *    '<S18>/J5_BG'
 *    '<S18>/J6_BG'
 */
void ZeroForceDrag_DoubleJoint_J1_BG(uint16_T rty_MSG[8],
  P_J1_BG_ZeroForceDrag_DoubleJ_T *localP)
{
  /* DataTypeConversion: '<S23>/Data Type Conversion' incorporates:
   *  ArithShift: '<S23>/Shift Arithmetic1'
   *  ArithShift: '<S23>/Shift Arithmetic2'
   *  ArithShift: '<S23>/Shift Arithmetic3'
   *  ArithShift: '<S23>/Shift Arithmetic4'
   *  Constant: '<S23>/Constant1'
   *  Constant: '<S23>/Constant2'
   *  Constant: '<S23>/Constant3'
   *  Constant: '<S23>/Constant8'
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
void ZeroForceDrag_DoubleJoin_u_Init(void)
{
  ZeroForceDrag_DoubleJoints_DW.is_active_c5_ZeroForceDrag_Doub = 0U;
  ZeroForceDrag_DoubleJoints_DW.is_c5_ZeroForceDrag_DoubleJoint =
    ZeroForceDra_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S10>/Chart2' incorporates:
   *  SubSystem: '<S17>/start_arm'
   */

  /* SystemInitialize for Enabled SubSystem: '<S22>/StartRobotSubsystem' */
  ZeroFo_StartRobotSubsystem_Init();

  /* End of SystemInitialize for SubSystem: '<S22>/StartRobotSubsystem' */
}

/* Output and update for atomic system: '<S7>/驱动器指令' */
void ZeroForceDrag_DoubleJoints_u(void)
{
  uint16_T rtb_DataTypeConversion_ky[8];
  uint16_T rtb_DataTypeConversion_n[8];
  uint16_T rtb_DataTypeConversion_ld[8];
  uint16_T rtb_DataTypeConversion_fb[8];
  uint16_T rtb_DataTypeConversion_d[8];
  uint16_T rtb_DataTypeConversion[8];
  int16_T i;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  real_T tmp_3;
  real_T tmp_4;

  /* DataTypeConversion: '<S10>/Data Type Conversion7' */
  tmp_4 = floor(ZeroForceDrag_DoubleJoints_B.Saturation2);
  if (rtIsNaN(tmp_4) || rtIsInf(tmp_4)) {
    tmp_4 = 0.0;
  } else {
    tmp_4 = fmod(tmp_4, 65536.0);
  }

  tmp_3 = floor(ZeroForceDrag_DoubleJoints_B.Saturation1);
  if (rtIsNaN(tmp_3) || rtIsInf(tmp_3)) {
    tmp_3 = 0.0;
  } else {
    tmp_3 = fmod(tmp_3, 65536.0);
  }

  tmp_2 = floor(ZeroForceDrag_DoubleJoints_B.Saturation3);
  if (rtIsNaN(tmp_2) || rtIsInf(tmp_2)) {
    tmp_2 = 0.0;
  } else {
    tmp_2 = fmod(tmp_2, 65536.0);
  }

  tmp_1 = floor(ZeroForceDrag_DoubleJoints_B.Saturation4);
  if (rtIsNaN(tmp_1) || rtIsInf(tmp_1)) {
    tmp_1 = 0.0;
  } else {
    tmp_1 = fmod(tmp_1, 65536.0);
  }

  tmp_0 = floor(ZeroForceDrag_DoubleJoints_B.Saturation5);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 65536.0);
  }

  tmp = floor(ZeroForceDrag_DoubleJoints_B.Saturation6);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  /* Chart: '<S10>/Chart2' incorporates:
   *  DataStoreRead: '<S10>/Data Store Read'
   *  DataTypeConversion: '<S10>/Data Type Conversion7'
   *  Reshape: '<S18>/Reshape6'
   *  Reshape: '<S19>/Reshape6'
   *  Reshape: '<S20>/Reshape1'
   */
  if (ZeroForceDrag_DoubleJoints_DW.is_active_c5_ZeroForceDrag_Doub == 0U) {
    ZeroForceDrag_DoubleJoints_DW.is_active_c5_ZeroForceDrag_Doub = 1U;
    ZeroForceDrag_DoubleJoints_DW.is_c5_ZeroForceDrag_DoubleJoint =
      ZeroForceDrag_Double_IN_State05;
    ZeroForceDrag_DoubleJoints_DW.start = 0U;
  } else {
    switch (ZeroForceDrag_DoubleJoints_DW.is_c5_ZeroForceDrag_DoubleJoint) {
     case ZeroForceDrag_Double_IN_State01:
      if (ZeroForceDrag_DoubleJoints_DW.bx > 0U) {
        ZeroForceDrag_DoubleJoints_DW.is_c5_ZeroForceDrag_DoubleJoint =
          ZeroForceDrag_Double_IN_State06;

        /* Outputs for Function Call SubSystem: '<S17>/UM1' */
        /* Outputs for Atomic SubSystem: '<S20>/J1_UM1' */
        ZeroForceDrag_DoubleJoin_J1_UM1();

        /* End of Outputs for SubSystem: '<S20>/J1_UM1' */

        /* Outputs for Atomic SubSystem: '<S20>/J2_UM1' */
        ZeroForceDrag_DoubleJoin_J2_UM1();

        /* End of Outputs for SubSystem: '<S20>/J2_UM1' */

        /* Outputs for Atomic SubSystem: '<S20>/J3_UM1' */
        ZeroForceDrag_DoubleJoin_J3_UM1();

        /* End of Outputs for SubSystem: '<S20>/J3_UM1' */

        /* Outputs for Atomic SubSystem: '<S20>/J4_UM1' */
        ZeroForceDrag_DoubleJoin_J4_UM1();

        /* End of Outputs for SubSystem: '<S20>/J4_UM1' */

        /* Outputs for Atomic SubSystem: '<S20>/J5_UM1' */
        ZeroForceDrag_DoubleJoin_J5_UM1();

        /* End of Outputs for SubSystem: '<S20>/J5_UM1' */

        /* Outputs for Atomic SubSystem: '<S20>/J6_UM1' */
        ZeroForceDrag_DoubleJoin_J6_UM1();

        /* End of Outputs for SubSystem: '<S20>/J6_UM1' */

        /* DataStoreWrite: '<S20>/Data Store Write' incorporates:
         *  Constant: '<S20>/Constant'
         */
        TXD = ZeroForceDrag_DoubleJoints_P.Constant_Value_bn;

        /* End of Outputs for SubSystem: '<S17>/UM1' */
        for (i = 0; i < 8; i++) {
          /* Outputs for Function Call SubSystem: '<S17>/UM1' */
          ZeroForceDrag_DoubleJoints_B.MSG[i] =
            ZeroForceDrag_DoubleJoints_B.DataTypeConversion_j[i];
          ZeroForceDrag_DoubleJoints_B.MSG[i + 8] =
            ZeroForceDrag_DoubleJoints_B.DataTypeConversion_a[i];
          ZeroForceDrag_DoubleJoints_B.MSG[i + 16] =
            ZeroForceDrag_DoubleJoints_B.DataTypeConversion_e[i];
          ZeroForceDrag_DoubleJoints_B.MSG[i + 24] =
            ZeroForceDrag_DoubleJoints_B.DataTypeConversion_m[i];
          ZeroForceDrag_DoubleJoints_B.MSG[i + 32] =
            ZeroForceDrag_DoubleJoints_B.DataTypeConversion_b[i];
          ZeroForceDrag_DoubleJoints_B.MSG[i + 40] =
            ZeroForceDrag_DoubleJoints_B.DataTypeConversion[i];

          /* End of Outputs for SubSystem: '<S17>/UM1' */
        }
      } else {
        /* DataTypeConversion: '<S10>/Data Type Conversion1' */
        tmp_4 = floor(ZeroForceDrag_DoubleJoints_B.u);
        if (rtIsNaN(tmp_4) || rtIsInf(tmp_4)) {
          tmp_4 = 0.0;
        } else {
          tmp_4 = fmod(tmp_4, 65536.0);
        }

        /* Outputs for Function Call SubSystem: '<S17>/check' */
        /* Switch: '<S21>/Switch' incorporates:
         *  Constant: '<S21>/Constant'
         *  Constant: '<S21>/Constant1'
         *  DataTypeConversion: '<S10>/Data Type Conversion1'
         */
        if ((tmp_4 < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp_4 : (uint16_T)
             tmp_4) > ZeroForceDrag_DoubleJoints_P.Switch_Threshold) {
          ZeroForceDrag_DoubleJoints_DW.bx =
            ZeroForceDrag_DoubleJoints_P.Constant_Value;
        } else {
          ZeroForceDrag_DoubleJoints_DW.bx =
            ZeroForceDrag_DoubleJoints_P.Constant1_Value;
        }

        /* End of Switch: '<S21>/Switch' */
        /* End of Outputs for SubSystem: '<S17>/check' */
      }
      break;

     case ZeroForceDrag_Double_IN_State03:
      ZeroForceDrag_DoubleJoints_DW.is_c5_ZeroForceDrag_DoubleJoint =
        ZeroForceDrag_Double_IN_State04;
      break;

     case ZeroForceDrag_Double_IN_State04:
      /* Outputs for Function Call SubSystem: '<S17>/TF' */
      /* Outputs for Atomic SubSystem: '<S19>/J1_TF' */
      ZeroForceDrag_DoubleJoint_J1_TF(tmp_4 < 0.0 ? (uint16_T)-(int16_T)
        (uint16_T)-tmp_4 : (uint16_T)tmp_4, rtb_DataTypeConversion_ky,
        &ZeroForceDrag_DoubleJoints_P.J1_TF);

      /* End of Outputs for SubSystem: '<S19>/J1_TF' */

      /* Outputs for Atomic SubSystem: '<S19>/J2_TF' */
      ZeroForceDrag_DoubleJoint_J1_TF(tmp_3 < 0.0 ? (uint16_T)-(int16_T)
        (uint16_T)-tmp_3 : (uint16_T)tmp_3, rtb_DataTypeConversion_n,
        &ZeroForceDrag_DoubleJoints_P.J2_TF);

      /* End of Outputs for SubSystem: '<S19>/J2_TF' */

      /* Outputs for Atomic SubSystem: '<S19>/J3_TF' */
      ZeroForceDrag_DoubleJoint_J1_TF(tmp_2 < 0.0 ? (uint16_T)-(int16_T)
        (uint16_T)-tmp_2 : (uint16_T)tmp_2, rtb_DataTypeConversion_ld,
        &ZeroForceDrag_DoubleJoints_P.J3_TF);

      /* End of Outputs for SubSystem: '<S19>/J3_TF' */

      /* Outputs for Atomic SubSystem: '<S19>/J4_TF' */
      ZeroForceDrag_DoubleJoint_J1_TF(tmp_1 < 0.0 ? (uint16_T)-(int16_T)
        (uint16_T)-tmp_1 : (uint16_T)tmp_1, rtb_DataTypeConversion_fb,
        &ZeroForceDrag_DoubleJoints_P.J4_TF);

      /* End of Outputs for SubSystem: '<S19>/J4_TF' */

      /* Outputs for Atomic SubSystem: '<S19>/J5_TF' */
      ZeroForceDrag_DoubleJoint_J1_TF(tmp_0 < 0.0 ? (uint16_T)-(int16_T)
        (uint16_T)-tmp_0 : (uint16_T)tmp_0, rtb_DataTypeConversion_d,
        &ZeroForceDrag_DoubleJoints_P.J5_TF);

      /* End of Outputs for SubSystem: '<S19>/J5_TF' */

      /* Outputs for Atomic SubSystem: '<S19>/J6_TF' */
      ZeroForceDrag_DoubleJoint_J1_TF(tmp < 0.0 ? (uint16_T)-(int16_T)(uint16_T)
        -tmp : (uint16_T)tmp, rtb_DataTypeConversion,
        &ZeroForceDrag_DoubleJoints_P.J6_TF);

      /* End of Outputs for SubSystem: '<S19>/J6_TF' */

      /* DataStoreWrite: '<S19>/Data Store Write' incorporates:
       *  Constant: '<S19>/Constant2'
       *  DataTypeConversion: '<S10>/Data Type Conversion7'
       */
      TXD = ZeroForceDrag_DoubleJoints_P.Constant2_Value_p;

      /* End of Outputs for SubSystem: '<S17>/TF' */
      for (i = 0; i < 8; i++) {
        /* Outputs for Function Call SubSystem: '<S17>/TF' */
        ZeroForceDrag_DoubleJoints_B.MSG[i] = rtb_DataTypeConversion_ky[i];
        ZeroForceDrag_DoubleJoints_B.MSG[i + 8] = rtb_DataTypeConversion_n[i];
        ZeroForceDrag_DoubleJoints_B.MSG[i + 16] = rtb_DataTypeConversion_ld[i];
        ZeroForceDrag_DoubleJoints_B.MSG[i + 24] = rtb_DataTypeConversion_fb[i];
        ZeroForceDrag_DoubleJoints_B.MSG[i + 32] = rtb_DataTypeConversion_d[i];
        ZeroForceDrag_DoubleJoints_B.MSG[i + 40] = rtb_DataTypeConversion[i];

        /* End of Outputs for SubSystem: '<S17>/TF' */
      }
      break;

     case ZeroForceDrag_Double_IN_State05:
      if (ZeroForceDrag_DoubleJoints_DW.start > 0U) {
        ZeroForceDrag_DoubleJoints_DW.is_c5_ZeroForceDrag_DoubleJoint =
          ZeroForceDrag_Double_IN_State01;
        ZeroForceDrag_DoubleJoints_DW.bx = 0U;
      } else {
        ZeroForceDrag_DoubleJoints_B.StartRobot_a = StartRobot;

        /* Outputs for Function Call SubSystem: '<S17>/start_arm' */
        /* Outputs for Enabled SubSystem: '<S22>/StartRobotSubsystem' */
        ZeroForceDr_StartRobotSubsystem();

        /* End of Outputs for SubSystem: '<S22>/StartRobotSubsystem' */
        /* End of Outputs for SubSystem: '<S17>/start_arm' */
        ZeroForceDrag_DoubleJoints_DW.start = ZeroForceDrag_DoubleJoints_B.In1;
      }
      break;

     default:
      ZeroForceDrag_DoubleJoints_DW.is_c5_ZeroForceDrag_DoubleJoint =
        ZeroForceDrag_Double_IN_State03;

      /* Outputs for Function Call SubSystem: '<S17>/BG' */
      /* Outputs for Atomic SubSystem: '<S18>/J1_BG' */
      ZeroForceDrag_DoubleJoint_J1_BG(rtb_DataTypeConversion_ky,
        &ZeroForceDrag_DoubleJoints_P.J1_BG);

      /* End of Outputs for SubSystem: '<S18>/J1_BG' */

      /* Outputs for Atomic SubSystem: '<S18>/J2_BG' */
      ZeroForceDrag_DoubleJoint_J1_BG(rtb_DataTypeConversion_n,
        &ZeroForceDrag_DoubleJoints_P.J2_BG);

      /* End of Outputs for SubSystem: '<S18>/J2_BG' */

      /* Outputs for Atomic SubSystem: '<S18>/J3_BG' */
      ZeroForceDrag_DoubleJoint_J1_BG(rtb_DataTypeConversion_ld,
        &ZeroForceDrag_DoubleJoints_P.J3_BG);

      /* End of Outputs for SubSystem: '<S18>/J3_BG' */

      /* Outputs for Atomic SubSystem: '<S18>/J4_BG' */
      ZeroForceDrag_DoubleJoint_J1_BG(rtb_DataTypeConversion_fb,
        &ZeroForceDrag_DoubleJoints_P.J4_BG);

      /* End of Outputs for SubSystem: '<S18>/J4_BG' */

      /* Outputs for Atomic SubSystem: '<S18>/J5_BG' */
      ZeroForceDrag_DoubleJoint_J1_BG(rtb_DataTypeConversion_d,
        &ZeroForceDrag_DoubleJoints_P.J5_BG);

      /* End of Outputs for SubSystem: '<S18>/J5_BG' */

      /* Outputs for Atomic SubSystem: '<S18>/J6_BG' */
      ZeroForceDrag_DoubleJoint_J1_BG(rtb_DataTypeConversion,
        &ZeroForceDrag_DoubleJoints_P.J6_BG);

      /* End of Outputs for SubSystem: '<S18>/J6_BG' */

      /* DataStoreWrite: '<S18>/Data Store Write' incorporates:
       *  Constant: '<S18>/Constant6'
       */
      TXD = ZeroForceDrag_DoubleJoints_P.Constant6_Value;

      /* End of Outputs for SubSystem: '<S17>/BG' */
      for (i = 0; i < 8; i++) {
        /* Outputs for Function Call SubSystem: '<S17>/BG' */
        ZeroForceDrag_DoubleJoints_B.MSG[i] = rtb_DataTypeConversion_ky[i];
        ZeroForceDrag_DoubleJoints_B.MSG[i + 8] = rtb_DataTypeConversion_n[i];
        ZeroForceDrag_DoubleJoints_B.MSG[i + 16] = rtb_DataTypeConversion_ld[i];
        ZeroForceDrag_DoubleJoints_B.MSG[i + 24] = rtb_DataTypeConversion_fb[i];
        ZeroForceDrag_DoubleJoints_B.MSG[i + 32] = rtb_DataTypeConversion_d[i];
        ZeroForceDrag_DoubleJoints_B.MSG[i + 40] = rtb_DataTypeConversion[i];

        /* End of Outputs for SubSystem: '<S17>/BG' */
      }
      break;
    }
  }

  /* End of Chart: '<S10>/Chart2' */

  /* DataTypeConversion: '<S10>/Data Type Conversion12' */
  for (i = 0; i < 48; i++) {
    ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[i] =
      ZeroForceDrag_DoubleJoints_B.MSG[i] & 255U;
  }

  /* End of DataTypeConversion: '<S10>/Data Type Conversion12' */
}

/* System initialize for atomic system: '<S1>/DriveMotor' */
void DrivrMotor_Init(void)
{
  /* SystemInitialize for Atomic SubSystem: '<S7>/驱动器指令' */
  ZeroForceDrag_DoubleJoin_u_Init();

  /* End of SystemInitialize for SubSystem: '<S7>/驱动器指令' */
}

/* Start for atomic system: '<S1>/DriveMotor' */
void DrivrMotor_Start(void)
{
  /* Start for Enabled SubSystem: '<S7>/BottomDriver' */

  /* Start for S-Function (c280xcanxmt): '<S12>/eCANB _302_8' */
  {
    /* Configure mailbox 8 to transmit messages with the ID: 770 */
    config_eCAN_B_mbx (1U, 8, 770, 0);
  }

  /* Start for S-Function (c280xcanxmt): '<S13>/eCANB _303_9' */
  {
    /* Configure mailbox 9 to transmit messages with the ID: 771 */
    config_eCAN_B_mbx (1U, 9, 771, 0);
  }

  /* End of Start for SubSystem: '<S7>/BottomDriver' */

  /* Start for DataStoreMemory: '<S7>/Data Store Memory1' */
  TXD = ZeroForceDrag_DoubleJoints_P.DataStoreMemory1_InitialValue_a;
}

/* Output and update for atomic system: '<S1>/DriveMotor' */
void DrivrMotor(void)
{
  /* Saturate: '<S7>/Saturation2' incorporates:
   *  DataStoreRead: '<S1>/Tau1~6'
   */
  if (Tau[0] > ZeroForceDrag_DoubleJoints_P.Saturation2_UpperSat) {
    ZeroForceDrag_DoubleJoints_B.Saturation2 =
      ZeroForceDrag_DoubleJoints_P.Saturation2_UpperSat;
  } else if (Tau[0] < ZeroForceDrag_DoubleJoints_P.Saturation2_LowerSat) {
    ZeroForceDrag_DoubleJoints_B.Saturation2 =
      ZeroForceDrag_DoubleJoints_P.Saturation2_LowerSat;
  } else {
    ZeroForceDrag_DoubleJoints_B.Saturation2 = Tau[0];
  }

  /* End of Saturate: '<S7>/Saturation2' */

  /* Saturate: '<S7>/Saturation1' incorporates:
   *  DataStoreRead: '<S1>/Tau1~6'
   */
  if (Tau[1] > ZeroForceDrag_DoubleJoints_P.Saturation1_UpperSat) {
    ZeroForceDrag_DoubleJoints_B.Saturation1 =
      ZeroForceDrag_DoubleJoints_P.Saturation1_UpperSat;
  } else if (Tau[1] < ZeroForceDrag_DoubleJoints_P.Saturation1_LowerSat) {
    ZeroForceDrag_DoubleJoints_B.Saturation1 =
      ZeroForceDrag_DoubleJoints_P.Saturation1_LowerSat;
  } else {
    ZeroForceDrag_DoubleJoints_B.Saturation1 = Tau[1];
  }

  /* End of Saturate: '<S7>/Saturation1' */

  /* Saturate: '<S7>/Saturation3' incorporates:
   *  DataStoreRead: '<S1>/Tau1~6'
   */
  if (Tau[2] > ZeroForceDrag_DoubleJoints_P.Saturation3_UpperSat) {
    ZeroForceDrag_DoubleJoints_B.Saturation3 =
      ZeroForceDrag_DoubleJoints_P.Saturation3_UpperSat;
  } else if (Tau[2] < ZeroForceDrag_DoubleJoints_P.Saturation3_LowerSat) {
    ZeroForceDrag_DoubleJoints_B.Saturation3 =
      ZeroForceDrag_DoubleJoints_P.Saturation3_LowerSat;
  } else {
    ZeroForceDrag_DoubleJoints_B.Saturation3 = Tau[2];
  }

  /* End of Saturate: '<S7>/Saturation3' */

  /* Saturate: '<S7>/Saturation4' incorporates:
   *  DataStoreRead: '<S1>/Tau1~6'
   */
  if (Tau[3] > ZeroForceDrag_DoubleJoints_P.Saturation4_UpperSat) {
    ZeroForceDrag_DoubleJoints_B.Saturation4 =
      ZeroForceDrag_DoubleJoints_P.Saturation4_UpperSat;
  } else if (Tau[3] < ZeroForceDrag_DoubleJoints_P.Saturation4_LowerSat) {
    ZeroForceDrag_DoubleJoints_B.Saturation4 =
      ZeroForceDrag_DoubleJoints_P.Saturation4_LowerSat;
  } else {
    ZeroForceDrag_DoubleJoints_B.Saturation4 = Tau[3];
  }

  /* End of Saturate: '<S7>/Saturation4' */

  /* Saturate: '<S7>/Saturation5' incorporates:
   *  DataStoreRead: '<S1>/Tau1~6'
   */
  if (Tau[4] > ZeroForceDrag_DoubleJoints_P.Saturation5_UpperSat) {
    ZeroForceDrag_DoubleJoints_B.Saturation5 =
      ZeroForceDrag_DoubleJoints_P.Saturation5_UpperSat;
  } else if (Tau[4] < ZeroForceDrag_DoubleJoints_P.Saturation5_LowerSat) {
    ZeroForceDrag_DoubleJoints_B.Saturation5 =
      ZeroForceDrag_DoubleJoints_P.Saturation5_LowerSat;
  } else {
    ZeroForceDrag_DoubleJoints_B.Saturation5 = Tau[4];
  }

  /* End of Saturate: '<S7>/Saturation5' */

  /* Saturate: '<S7>/Saturation6' incorporates:
   *  DataStoreRead: '<S1>/Tau1~6'
   */
  if (Tau[5] > ZeroForceDrag_DoubleJoints_P.Saturation6_UpperSat) {
    ZeroForceDrag_DoubleJoints_B.Saturation6 =
      ZeroForceDrag_DoubleJoints_P.Saturation6_UpperSat;
  } else if (Tau[5] < ZeroForceDrag_DoubleJoints_P.Saturation6_LowerSat) {
    ZeroForceDrag_DoubleJoints_B.Saturation6 =
      ZeroForceDrag_DoubleJoints_P.Saturation6_LowerSat;
  } else {
    ZeroForceDrag_DoubleJoints_B.Saturation6 = Tau[5];
  }

  /* End of Saturate: '<S7>/Saturation6' */

  /* Outputs for Atomic SubSystem: '<S7>/驱动器指令' */
  ZeroForceDrag_DoubleJoints_u();

  /* End of Outputs for SubSystem: '<S7>/驱动器指令' */

  /* Outputs for Enabled SubSystem: '<S7>/BottomDriver' incorporates:
   *  EnablePort: '<S9>/Enable'
   */
  /* DataStoreRead: '<S7>/Data Store Read4' */
  if (TXD > 0U) {
    /* DataStoreWrite: '<S9>/Data Store Write' incorporates:
     *  Constant: '<S9>/Constant'
     */
    TXD = ZeroForceDrag_DoubleJoints_P.Constant_Value_b;

    /* S-Function (c280xcanxmt): '<S12>/eCANB _302_8' */
    {
      ECanbMboxes.MBOX8.MDH.byte.BYTE4 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[15];
      ECanbMboxes.MBOX8.MDH.byte.BYTE5 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[14];
      ECanbMboxes.MBOX8.MDH.byte.BYTE6 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[13];
      ECanbMboxes.MBOX8.MDH.byte.BYTE7 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[12];
      ECanbMboxes.MBOX8.MDL.byte.BYTE0 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[11];
      ECanbMboxes.MBOX8.MDL.byte.BYTE1 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[10];
      ECanbMboxes.MBOX8.MDL.byte.BYTE2 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[9];
      ECanbMboxes.MBOX8.MDL.byte.BYTE3 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[8];
      ECanbMboxes.MBOX8.MSGCTRL.bit.DLC = 8;
      ECanbRegs.CANTRS.all = (((uint32_T) 0x00000001) << 8);
      EDIS;
    }

    /* S-Function (c280xcanxmt): '<S13>/eCANB _303_9' */
    {
      ECanbMboxes.MBOX9.MDH.byte.BYTE4 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[23];
      ECanbMboxes.MBOX9.MDH.byte.BYTE5 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[22];
      ECanbMboxes.MBOX9.MDH.byte.BYTE6 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[21];
      ECanbMboxes.MBOX9.MDH.byte.BYTE7 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[20];
      ECanbMboxes.MBOX9.MDL.byte.BYTE0 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[19];
      ECanbMboxes.MBOX9.MDL.byte.BYTE1 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[18];
      ECanbMboxes.MBOX9.MDL.byte.BYTE2 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[17];
      ECanbMboxes.MBOX9.MDL.byte.BYTE3 =
        ZeroForceDrag_DoubleJoints_B.DataTypeConversion12[16];
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
