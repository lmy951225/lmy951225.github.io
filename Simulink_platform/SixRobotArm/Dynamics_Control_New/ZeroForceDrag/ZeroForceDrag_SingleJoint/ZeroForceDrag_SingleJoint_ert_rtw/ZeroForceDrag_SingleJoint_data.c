/*
 * File: ZeroForceDrag_SingleJoint_data.c
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

#include "ZeroForceDrag_SingleJoint.h"
#include "ZeroForceDrag_SingleJoint_private.h"

/* Block parameters (default storage) */
P_ZeroForceDrag_SingleJoint_T ZeroForceDrag_SingleJoint_P = {
  /* Mask Parameter: GetAngle1_InitAngle
   * Referenced by: '<S8>/GetAngle1'
   */
  0.0,

  /* Mask Parameter: GetAngle2_InitAngle
   * Referenced by: '<S8>/GetAngle2'
   */
  -90.0,

  /* Mask Parameter: GetAngle3_InitAngle
   * Referenced by: '<S8>/GetAngle3'
   */
  0.0,

  /* Mask Parameter: GetAngle4_InitAngle
   * Referenced by: '<S8>/GetAngle4'
   */
  0.0,

  /* Mask Parameter: GetAngle5_InitAngle
   * Referenced by: '<S8>/GetAngle5'
   */
  0.0,

  /* Mask Parameter: GetAngle6_InitAngle
   * Referenced by: '<S8>/GetAngle6'
   */
  0.0,

  /* Mask Parameter: GetAngleSpeed_JJoint
   * Referenced by: '<S8>/GetAngleSpeed'
   */
  1.0,

  /* Mask Parameter: GetAngleSpeed1_JJoint
   * Referenced by: '<S8>/GetAngleSpeed1'
   */
  2.0,

  /* Mask Parameter: GetAngleSpeed2_JJoint
   * Referenced by: '<S8>/GetAngleSpeed2'
   */
  3.0,

  /* Mask Parameter: GetAngleSpeed3_JJoint
   * Referenced by: '<S8>/GetAngleSpeed3'
   */
  4.0,

  /* Mask Parameter: GetAngleSpeed4_JJoint
   * Referenced by: '<S8>/GetAngleSpeed4'
   */
  5.0,

  /* Mask Parameter: GetAngleSpeed5_JJoint
   * Referenced by: '<S8>/GetAngleSpeed5'
   */
  6.0,

  /* Mask Parameter: ux88_const
   * Referenced by: '<S131>/Constant'
   */
  136U,

  /* Mask Parameter: ux0080_const
   * Referenced by: '<S130>/Constant'
   */
  128U,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S132>/Constant'
   */
  1U,

  /* Mask Parameter: CompareToConstant2_const
   * Referenced by: '<S133>/Constant'
   */
  1U,

  /* Mask Parameter: GetAngle1_JJoint
   * Referenced by: '<S8>/GetAngle1'
   */
  1U,

  /* Mask Parameter: GetAngle2_JJoint
   * Referenced by: '<S8>/GetAngle2'
   */
  2U,

  /* Mask Parameter: GetAngle3_JJoint
   * Referenced by: '<S8>/GetAngle3'
   */
  3U,

  /* Mask Parameter: GetAngle4_JJoint
   * Referenced by: '<S8>/GetAngle4'
   */
  4U,

  /* Mask Parameter: GetAngle5_JJoint
   * Referenced by: '<S8>/GetAngle5'
   */
  5U,

  /* Mask Parameter: GetAngle6_JJoint
   * Referenced by: '<S8>/GetAngle6'
   */
  6U,

  /* Mask Parameter: _uplimit
   * Referenced by: '<S129>/FixPt Switch'
   */
  10U,

  /* Expression: 101
   * Referenced by: '<S6>/Gain9'
   */
  101.0,

  /* Expression: 101
   * Referenced by: '<S6>/Gain4'
   */
  101.0,

  /* Expression: 101
   * Referenced by: '<S6>/Gain5'
   */
  101.0,

  /* Expression: 101
   * Referenced by: '<S6>/Gain2'
   */
  101.0,

  /* Expression: 101
   * Referenced by: '<S6>/Gain1'
   */
  101.0,

  /* Expression: 101
   * Referenced by: '<S6>/Gain3'
   */
  101.0,

  /* Expression: 900
   * Referenced by: '<S7>/Saturation2'
   */
  900.0,

  /* Expression: -900
   * Referenced by: '<S7>/Saturation2'
   */
  -900.0,

  /* Expression: 900
   * Referenced by: '<S7>/Saturation1'
   */
  900.0,

  /* Expression: -900
   * Referenced by: '<S7>/Saturation1'
   */
  -900.0,

  /* Expression: 900
   * Referenced by: '<S7>/Saturation3'
   */
  900.0,

  /* Expression: -900
   * Referenced by: '<S7>/Saturation3'
   */
  -900.0,

  /* Expression: 900
   * Referenced by: '<S7>/Saturation4'
   */
  900.0,

  /* Expression: -900
   * Referenced by: '<S7>/Saturation4'
   */
  -900.0,

  /* Expression: 900
   * Referenced by: '<S7>/Saturation5'
   */
  900.0,

  /* Expression: -900
   * Referenced by: '<S7>/Saturation5'
   */
  -900.0,

  /* Expression: 900
   * Referenced by: '<S7>/Saturation6'
   */
  900.0,

  /* Expression: -900
   * Referenced by: '<S7>/Saturation6'
   */
  -900.0,

  /* Expression: 180/pi
   * Referenced by: '<S1>/Gain'
   */
  57.295779513082323,

  /* Expression: zeros(1,6)
   * Referenced by: '<S1>/各个关节外转子采集 到的实际角度-初始角度'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: zeros(1,6)
   * Referenced by: '<S1>/各个关节外转子采集 到的实际角速度'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: zeros(1,6)
   * Referenced by: '<S1>/给定各关节 初始角度'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: zeros(1,6)
   * Referenced by: '<S1>/驱动各个关节 运动的力矩'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 0 0 0 0]
   * Referenced by: '<Root>/Data Store Memory10'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 0 0 0 0]
   * Referenced by: '<Root>/Data Store Memory13'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 0 0 0 0]
   * Referenced by: '<Root>/Data Store Memory3'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 0 0 0 0]
   * Referenced by: '<Root>/Data Store Memory4'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 0 0 0 0]
   * Referenced by: '<Root>/Data Store Memory5'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 0 0 0 0]
   * Referenced by: '<Root>/Data Store Memory6'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0 0 0 0 0 0]
   * Referenced by: '<Root>/Data Store Memory7'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: zeros(1,18)
   * Referenced by: '<Root>/Data Store Memory8'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0 },

  /* Computed Parameter: DataStoreMemory1_InitialValue
   * Referenced by: '<Root>/Data Store Memory1'
   */
  { 0, 0, 0, 0, 0, 0 },

  /* Computed Parameter: DataStoreMemory11_InitialValue
   * Referenced by: '<Root>/Data Store Memory11'
   */
  { 0, 0, 0, 0, 0, 0 },

  /* Computed Parameter: DataStoreMemory2_InitialValue
   * Referenced by: '<Root>/Data Store Memory2'
   */
  { 0, 0, 0, 0, 0, 0 },

  /* Computed Parameter: Constant1_Value
   * Referenced by: '<S21>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S21>/Constant'
   */
  1U,

  /* Computed Parameter: bx_Y0
   * Referenced by: '<S21>/bx'
   */
  0U,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S21>/Switch'
   */
  0U,

  /* Computed Parameter: MSG_Y0
   * Referenced by: '<S20>/MSG'
   */
  0U,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S41>/Out1'
   */
  0U,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S22>/Constant'
   */
  1U,

  /* Computed Parameter: MSG_Y0_j
   * Referenced by: '<S19>/MSG'
   */
  0U,

  /* Computed Parameter: MSG_Y0_p
   * Referenced by: '<S18>/MSG'
   */
  0U,

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S143>/Constant'
   */
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Computed Parameter: Switch_Threshold_o
   * Referenced by: '<S135>/Switch'
   */
  0U,

  /* Computed Parameter: Constant1_Value_k
   * Referenced by: '<S126>/Constant1'
   */
  90U,

  /* Computed Parameter: DataStoreMemory9_InitialValue
   * Referenced by: '<Root>/Data Store Memory9'
   */
  0U,

  /* Expression: true
   * Referenced by: '<S135>/Constant1'
   */
  1,

  /* Expression: false
   * Referenced by: '<S135>/Constant'
   */
  0,

  /* Expression: true
   * Referenced by: '<S4>/消息使能'
   */
  1,

  /* Expression: true
   * Referenced by: '<S2>/Constant'
   */
  1,

  /* Expression: false
   * Referenced by: '<S2>/Constant1'
   */
  0,

  /* Computed Parameter: Constant_Value_j
   * Referenced by: '<S9>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_p
   * Referenced by: '<S35>/Constant1'
   */
  77U,

  /* Computed Parameter: Constant2_Value
   * Referenced by: '<S35>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value
   * Referenced by: '<S35>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant8_Value
   * Referenced by: '<S35>/Constant8'
   */
  85U,

  /* Computed Parameter: Constant1_Value_i
   * Referenced by: '<S36>/Constant1'
   */
  77U,

  /* Computed Parameter: Constant2_Value_j
   * Referenced by: '<S36>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_m
   * Referenced by: '<S36>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant8_Value_m
   * Referenced by: '<S36>/Constant8'
   */
  85U,

  /* Computed Parameter: Constant1_Value_c
   * Referenced by: '<S37>/Constant1'
   */
  77U,

  /* Computed Parameter: Constant2_Value_o
   * Referenced by: '<S37>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_c
   * Referenced by: '<S37>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant8_Value_c
   * Referenced by: '<S37>/Constant8'
   */
  85U,

  /* Computed Parameter: Constant1_Value_g
   * Referenced by: '<S38>/Constant1'
   */
  77U,

  /* Computed Parameter: Constant2_Value_d
   * Referenced by: '<S38>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_i
   * Referenced by: '<S38>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant8_Value_b
   * Referenced by: '<S38>/Constant8'
   */
  85U,

  /* Computed Parameter: Constant1_Value_l
   * Referenced by: '<S39>/Constant1'
   */
  77U,

  /* Computed Parameter: Constant2_Value_k
   * Referenced by: '<S39>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_e
   * Referenced by: '<S39>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant8_Value_i
   * Referenced by: '<S39>/Constant8'
   */
  85U,

  /* Computed Parameter: Constant1_Value_h
   * Referenced by: '<S40>/Constant1'
   */
  77U,

  /* Computed Parameter: Constant2_Value_l
   * Referenced by: '<S40>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_b
   * Referenced by: '<S40>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant8_Value_i2
   * Referenced by: '<S40>/Constant8'
   */
  85U,

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S20>/Constant'
   */
  1U,

  /* Computed Parameter: Constant2_Value_n
   * Referenced by: '<S19>/Constant2'
   */
  1U,

  /* Computed Parameter: Constant6_Value
   * Referenced by: '<S18>/Constant6'
   */
  1U,

  /* Computed Parameter: DataStoreMemory1_InitialValue_p
   * Referenced by: '<S7>/Data Store Memory1'
   */
  0U,

  /* Computed Parameter: Constant_Value_b
   * Referenced by: '<S129>/Constant'
   */
  0U,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S127>/Output'
   */
  0U,

  /* Computed Parameter: Switch_Threshold_d
   * Referenced by: '<S2>/Switch'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S128>/FixPt Constant'
   */
  1U,

  /* Start of '<S8>/GetAngleSpeed5' */
  {
    /* Expression: 2*pi/60
     * Referenced by: '<S53>/Gain3'
     */
    0.10471975511965977,

    /* Expression: 1/101
     * Referenced by: '<S53>/Gain9'
     */
    0.0099009900990099011,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S53>/Merge1'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngleSpeed5' */

  /* Start of '<S8>/GetAngleSpeed4' */
  {
    /* Expression: 2*pi/60
     * Referenced by: '<S52>/Gain3'
     */
    0.10471975511965977,

    /* Expression: 1/101
     * Referenced by: '<S52>/Gain9'
     */
    0.0099009900990099011,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S52>/Merge1'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngleSpeed4' */

  /* Start of '<S8>/GetAngleSpeed3' */
  {
    /* Expression: 2*pi/60
     * Referenced by: '<S51>/Gain3'
     */
    0.10471975511965977,

    /* Expression: 1/101
     * Referenced by: '<S51>/Gain9'
     */
    0.0099009900990099011,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S51>/Merge1'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngleSpeed3' */

  /* Start of '<S8>/GetAngleSpeed2' */
  {
    /* Expression: 2*pi/60
     * Referenced by: '<S50>/Gain3'
     */
    0.10471975511965977,

    /* Expression: 1/101
     * Referenced by: '<S50>/Gain9'
     */
    0.0099009900990099011,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S50>/Merge1'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngleSpeed2' */

  /* Start of '<S8>/GetAngleSpeed1' */
  {
    /* Expression: 2*pi/60
     * Referenced by: '<S49>/Gain3'
     */
    0.10471975511965977,

    /* Expression: 1/101
     * Referenced by: '<S49>/Gain9'
     */
    0.0099009900990099011,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S49>/Merge1'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngleSpeed1' */

  /* Start of '<S8>/GetAngleSpeed' */
  {
    /* Expression: 2*pi/60
     * Referenced by: '<S48>/Gain3'
     */
    0.10471975511965977,

    /* Expression: 1/101
     * Referenced by: '<S48>/Gain9'
     */
    0.0099009900990099011,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S48>/Merge1'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngleSpeed' */

  /* Start of '<S8>/GetAngle6' */
  {
    /* Expression: 1
     * Referenced by: '<S47>/Constant4'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S47>/Constant3'
     */
    -1.0,

    /* Expression: pi/180
     * Referenced by: '<S47>/Gain4'
     */
    0.017453292519943295,

    /* Expression: 2*pi/8080000
     * Referenced by: '<S47>/Gain1'
     */
    7.776219439578696E-7,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S47>/Merge'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngle6' */

  /* Start of '<S8>/GetAngle5' */
  {
    /* Expression: 1
     * Referenced by: '<S46>/Constant4'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S46>/Constant3'
     */
    -1.0,

    /* Expression: pi/180
     * Referenced by: '<S46>/Gain4'
     */
    0.017453292519943295,

    /* Expression: 2*pi/8080000
     * Referenced by: '<S46>/Gain1'
     */
    7.776219439578696E-7,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S46>/Merge'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngle5' */

  /* Start of '<S8>/GetAngle4' */
  {
    /* Expression: 1
     * Referenced by: '<S45>/Constant4'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S45>/Constant3'
     */
    -1.0,

    /* Expression: pi/180
     * Referenced by: '<S45>/Gain4'
     */
    0.017453292519943295,

    /* Expression: 2*pi/8080000
     * Referenced by: '<S45>/Gain1'
     */
    7.776219439578696E-7,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S45>/Merge'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngle4' */

  /* Start of '<S8>/GetAngle3' */
  {
    /* Expression: 1
     * Referenced by: '<S44>/Constant4'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S44>/Constant3'
     */
    -1.0,

    /* Expression: pi/180
     * Referenced by: '<S44>/Gain4'
     */
    0.017453292519943295,

    /* Expression: 2*pi/8080000
     * Referenced by: '<S44>/Gain1'
     */
    7.776219439578696E-7,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S44>/Merge'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngle3' */

  /* Start of '<S8>/GetAngle2' */
  {
    /* Expression: 1
     * Referenced by: '<S43>/Constant4'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S43>/Constant3'
     */
    -1.0,

    /* Expression: pi/180
     * Referenced by: '<S43>/Gain4'
     */
    0.017453292519943295,

    /* Expression: 2*pi/8080000
     * Referenced by: '<S43>/Gain1'
     */
    7.776219439578696E-7,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S43>/Merge'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngle2' */

  /* Start of '<S8>/GetAngle1' */
  {
    /* Expression: 1
     * Referenced by: '<S42>/Constant4'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S42>/Constant3'
     */
    -1.0,

    /* Expression: pi/180
     * Referenced by: '<S42>/Gain4'
     */
    0.017453292519943295,

    /* Expression: 2*pi/8080000
     * Referenced by: '<S42>/Gain1'
     */
    7.776219439578696E-7,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S42>/Merge'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngle1' */

  /* Start of '<S18>/J6_BG' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S28>/Constant1'
     */
    71U,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S28>/Constant2'
     */
    0U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S28>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S28>/Constant8'
     */
    66U
  }
  ,

  /* End of '<S18>/J6_BG' */

  /* Start of '<S18>/J5_BG' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S27>/Constant1'
     */
    71U,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S27>/Constant2'
     */
    0U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S27>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S27>/Constant8'
     */
    66U
  }
  ,

  /* End of '<S18>/J5_BG' */

  /* Start of '<S18>/J4_BG' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S26>/Constant1'
     */
    71U,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S26>/Constant2'
     */
    0U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S26>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S26>/Constant8'
     */
    66U
  }
  ,

  /* End of '<S18>/J4_BG' */

  /* Start of '<S18>/J3_BG' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S25>/Constant1'
     */
    71U,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S25>/Constant2'
     */
    0U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S25>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S25>/Constant8'
     */
    66U
  }
  ,

  /* End of '<S18>/J3_BG' */

  /* Start of '<S18>/J2_BG' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S24>/Constant1'
     */
    71U,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S24>/Constant2'
     */
    0U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S24>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S24>/Constant8'
     */
    66U
  }
  ,

  /* End of '<S18>/J2_BG' */

  /* Start of '<S18>/J1_BG' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S23>/Constant1'
     */
    71U,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S23>/Constant2'
     */
    0U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S23>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S23>/Constant8'
     */
    66U
  }
  ,

  /* End of '<S18>/J1_BG' */

  /* Start of '<S19>/J6_TF' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S34>/Constant1'
     */
    70U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S34>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S34>/Constant8'
     */
    84U
  }
  ,

  /* End of '<S19>/J6_TF' */

  /* Start of '<S19>/J5_TF' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S33>/Constant1'
     */
    70U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S33>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S33>/Constant8'
     */
    84U
  }
  ,

  /* End of '<S19>/J5_TF' */

  /* Start of '<S19>/J4_TF' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S32>/Constant1'
     */
    70U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S32>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S32>/Constant8'
     */
    84U
  }
  ,

  /* End of '<S19>/J4_TF' */

  /* Start of '<S19>/J3_TF' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S31>/Constant1'
     */
    70U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S31>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S31>/Constant8'
     */
    84U
  }
  ,

  /* End of '<S19>/J3_TF' */

  /* Start of '<S19>/J2_TF' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S30>/Constant1'
     */
    70U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S30>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S30>/Constant8'
     */
    84U
  }
  ,

  /* End of '<S19>/J2_TF' */

  /* Start of '<S19>/J1_TF' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S29>/Constant1'
     */
    70U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S29>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S29>/Constant8'
     */
    84U
  }
  /* End of '<S19>/J1_TF' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
