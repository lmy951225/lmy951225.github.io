/*
 * File: PID_ThreeJoints_data.c
 *
 * Code generated for Simulink model 'PID_ThreeJoints'.
 *
 * Model version                  : 1.259
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan  8 15:03:58 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PID_ThreeJoints.h"
#include "PID_ThreeJoints_private.h"

/* Block parameters (default storage) */
P_PID_ThreeJoints_T PID_ThreeJoints_P = {
  /* Mask Parameter: GetAngle_InitAngle
   * Referenced by: '<S8>/GetAngle'
   */
  0.0,

  /* Mask Parameter: GetAngle1_InitAngle
   * Referenced by: '<S8>/GetAngle1'
   */
  0.0,

  /* Mask Parameter: GetAngle2_InitAngle
   * Referenced by: '<S8>/GetAngle2'
   */
  0.0,

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
   * Referenced by: '<S168>/Constant'
   */
  136U,

  /* Mask Parameter: ux0080_const
   * Referenced by: '<S167>/Constant'
   */
  128U,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S169>/Constant'
   */
  1U,

  /* Mask Parameter: CompareToConstant2_const
   * Referenced by: '<S170>/Constant'
   */
  1U,

  /* Mask Parameter: GetAngle_JJoint
   * Referenced by: '<S8>/GetAngle'
   */
  1U,

  /* Mask Parameter: GetAngle1_JJoint
   * Referenced by: '<S8>/GetAngle1'
   */
  2U,

  /* Mask Parameter: GetAngle2_JJoint
   * Referenced by: '<S8>/GetAngle2'
   */
  3U,

  /* Mask Parameter: GetAngle3_JJoint
   * Referenced by: '<S8>/GetAngle3'
   */
  4U,

  /* Mask Parameter: GetAngle4_JJoint
   * Referenced by: '<S8>/GetAngle4'
   */
  5U,

  /* Mask Parameter: GetAngle5_JJoint
   * Referenced by: '<S8>/GetAngle5'
   */
  6U,

  /* Mask Parameter: _uplimit
   * Referenced by: '<S166>/FixPt Switch'
   */
  10U,

  /* Expression: -120
   * Referenced by: '<S6>/Constant1'
   */
  -120.0,

  /* Expression: -360
   * Referenced by: '<S6>/Constant'
   */
  -360.0,

  /* Expression: -20
   * Referenced by: '<S6>/Constant2'
   */
  -20.0,

  /* Expression: 101
   * Referenced by: '<S6>/Gain9'
   */
  101.0,

  /* Expression: 101
   * Referenced by: '<S6>/Gain5'
   */
  101.0,

  /* Expression: -20
   * Referenced by: '<S6>/Constant5'
   */
  -20.0,

  /* Expression: 101
   * Referenced by: '<S6>/Gain4'
   */
  101.0,

  /* Expression: 160
   * Referenced by: '<S6>/Constant3'
   */
  160.0,

  /* Expression: 20
   * Referenced by: '<S6>/Constant4'
   */
  20.0,

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
   * Referenced by: '<S1>/Gain5'
   */
  57.295779513082323,

  /* Expression: 101
   * Referenced by: '<S1>/Gain7'
   */
  101.0,

  /* Expression: 180/pi
   * Referenced by: '<S1>/Gain6'
   */
  57.295779513082323,

  /* Expression: 101
   * Referenced by: '<S1>/Gain8'
   */
  101.0,

  /* Expression: zeros(1,6)
   * Referenced by: '<S1>/各个关节内转子 理想的角度'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: zeros(1,6)
   * Referenced by: '<S1>/各个关节内转子采集 到的实际角度'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: zeros(1,6)
   * Referenced by: '<S1>/各个关节内转子采集 到的实际角速度'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: zeros(1,6)
   * Referenced by: '<S1>/各个关节的内转子 位置跟踪误差'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: zeros(6,2)
   * Referenced by: '<S1>/驱动各个关节 运动的力矩'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

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

  /* Computed Parameter: Constant1_Value_b
   * Referenced by: '<S28>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S28>/Constant'
   */
  1U,

  /* Computed Parameter: bx_Y0
   * Referenced by: '<S28>/bx'
   */
  0U,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S28>/Switch'
   */
  0U,

  /* Computed Parameter: MSG_Y0
   * Referenced by: '<S27>/MSG'
   */
  0U,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S48>/Out1'
   */
  0U,

  /* Computed Parameter: Constant_Value_j
   * Referenced by: '<S29>/Constant'
   */
  1U,

  /* Computed Parameter: MSG_Y0_o
   * Referenced by: '<S26>/MSG'
   */
  0U,

  /* Computed Parameter: MSG_Y0_k
   * Referenced by: '<S25>/MSG'
   */
  0U,

  /* Computed Parameter: Constant_Value_mw
   * Referenced by: '<S180>/Constant'
   */
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Computed Parameter: Switch_Threshold_a
   * Referenced by: '<S172>/Switch'
   */
  0U,

  /* Computed Parameter: Constant1_Value_d
   * Referenced by: '<S163>/Constant1'
   */
  90U,

  /* Computed Parameter: DataStoreMemory9_InitialValue
   * Referenced by: '<Root>/Data Store Memory9'
   */
  0U,

  /* Expression: true
   * Referenced by: '<S172>/Constant1'
   */
  1,

  /* Expression: false
   * Referenced by: '<S172>/Constant'
   */
  0,

  /* Expression: true
   * Referenced by: '<S5>/消息使能'
   */
  1,

  /* Expression: true
   * Referenced by: '<S3>/Constant'
   */
  1,

  /* Expression: false
   * Referenced by: '<S3>/Constant1'
   */
  0,

  /* Computed Parameter: Constant_Value_jx
   * Referenced by: '<S16>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_ps
   * Referenced by: '<S42>/Constant1'
   */
  77U,

  /* Computed Parameter: Constant2_Value_o
   * Referenced by: '<S42>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_a
   * Referenced by: '<S42>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant8_Value
   * Referenced by: '<S42>/Constant8'
   */
  85U,

  /* Computed Parameter: Constant1_Value_j
   * Referenced by: '<S43>/Constant1'
   */
  77U,

  /* Computed Parameter: Constant2_Value_f
   * Referenced by: '<S43>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_ar
   * Referenced by: '<S43>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant8_Value_o
   * Referenced by: '<S43>/Constant8'
   */
  85U,

  /* Computed Parameter: Constant1_Value_m
   * Referenced by: '<S44>/Constant1'
   */
  77U,

  /* Computed Parameter: Constant2_Value_p
   * Referenced by: '<S44>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_ak
   * Referenced by: '<S44>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant8_Value_m
   * Referenced by: '<S44>/Constant8'
   */
  85U,

  /* Computed Parameter: Constant1_Value_mi
   * Referenced by: '<S45>/Constant1'
   */
  77U,

  /* Computed Parameter: Constant2_Value_h
   * Referenced by: '<S45>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_o
   * Referenced by: '<S45>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant8_Value_p
   * Referenced by: '<S45>/Constant8'
   */
  85U,

  /* Computed Parameter: Constant1_Value_mid
   * Referenced by: '<S46>/Constant1'
   */
  77U,

  /* Computed Parameter: Constant2_Value_l
   * Referenced by: '<S46>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_f
   * Referenced by: '<S46>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant8_Value_a
   * Referenced by: '<S46>/Constant8'
   */
  85U,

  /* Computed Parameter: Constant1_Value_e
   * Referenced by: '<S47>/Constant1'
   */
  77U,

  /* Computed Parameter: Constant2_Value_b
   * Referenced by: '<S47>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_d
   * Referenced by: '<S47>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant8_Value_c
   * Referenced by: '<S47>/Constant8'
   */
  85U,

  /* Computed Parameter: Constant_Value_b
   * Referenced by: '<S27>/Constant'
   */
  1U,

  /* Computed Parameter: Constant2_Value_n
   * Referenced by: '<S26>/Constant2'
   */
  1U,

  /* Computed Parameter: Constant6_Value
   * Referenced by: '<S25>/Constant6'
   */
  1U,

  /* Computed Parameter: DataStoreMemory1_InitialValue_d
   * Referenced by: '<S7>/Data Store Memory1'
   */
  0U,

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S166>/Constant'
   */
  0U,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S164>/Output'
   */
  0U,

  /* Computed Parameter: Switch_Threshold_h
   * Referenced by: '<S3>/Switch'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S165>/FixPt Constant'
   */
  1U,

  /* Start of '<S1>/关节四正弦信号发生器' */
  {
    /* Mask Parameter: Subsystem_Freq
     * Referenced by: '<S15>/Subsystem'
     */
    0.25,

    /* Expression: 30
     * Referenced by: '<S15>/Constant3'
     */
    30.0,

    /* Expression: pi/180
     * Referenced by: '<S15>/Gain14'
     */
    0.017453292519943295,

    /* Start of '<S10>/Subsystem' */
    {
      /* Mask Parameter: ref_signal_Amplitude
       * Referenced by: '<S150>/ref_signal'
       */
      1.0,

      /* Mask Parameter: ref_signal_Phase
       * Referenced by: '<S150>/ref_signal'
       */
      0.0,

      /* Computed Parameter: _Y0
       * Referenced by: '<S150>/外转子理想 正弦信号'
       */
      0.0,

      /* Computed Parameter: _Y0_a
       * Referenced by: '<S150>/电机外转子 跟踪误差'
       */
      0.0,

      /* Expression: pi/3
       * Referenced by: '<S150>/限幅'
       */
      1.0471975511965976,

      /* Expression: 0
       * Referenced by: '<S150>/限幅'
       */
      0.0
    }
    /* End of '<S10>/Subsystem' */
  }
  ,

  /* End of '<S1>/关节四正弦信号发生器' */

  /* Start of '<S1>/关节六正弦信号发生器' */
  {
    /* Mask Parameter: Subsystem_Freq
     * Referenced by: '<S14>/Subsystem'
     */
    0.25,

    /* Expression: 30
     * Referenced by: '<S14>/Constant3'
     */
    30.0,

    /* Expression: pi/180
     * Referenced by: '<S14>/Gain14'
     */
    0.017453292519943295,

    /* Start of '<S10>/Subsystem' */
    {
      /* Mask Parameter: ref_signal_Amplitude
       * Referenced by: '<S149>/ref_signal'
       */
      1.0,

      /* Mask Parameter: ref_signal_Phase
       * Referenced by: '<S149>/ref_signal'
       */
      0.0,

      /* Computed Parameter: _Y0
       * Referenced by: '<S149>/外转子理想 正弦信号'
       */
      0.0,

      /* Computed Parameter: _Y0_a
       * Referenced by: '<S149>/电机外转子 跟踪误差'
       */
      0.0,

      /* Expression: pi/3
       * Referenced by: '<S149>/限幅'
       */
      1.0471975511965976,

      /* Expression: 0
       * Referenced by: '<S149>/限幅'
       */
      0.0
    }
    /* End of '<S10>/Subsystem' */
  }
  ,

  /* End of '<S1>/关节六正弦信号发生器' */

  /* Start of '<S1>/关节五正弦信号发生器' */
  {
    /* Mask Parameter: Subsystem_Freq
     * Referenced by: '<S13>/Subsystem'
     */
    0.25,

    /* Expression: 30
     * Referenced by: '<S13>/Constant3'
     */
    30.0,

    /* Expression: pi/180
     * Referenced by: '<S13>/Gain14'
     */
    0.017453292519943295,

    /* Start of '<S10>/Subsystem' */
    {
      /* Mask Parameter: ref_signal_Amplitude
       * Referenced by: '<S148>/ref_signal'
       */
      1.0,

      /* Mask Parameter: ref_signal_Phase
       * Referenced by: '<S148>/ref_signal'
       */
      0.0,

      /* Computed Parameter: _Y0
       * Referenced by: '<S148>/外转子理想 正弦信号'
       */
      0.0,

      /* Computed Parameter: _Y0_a
       * Referenced by: '<S148>/电机外转子 跟踪误差'
       */
      0.0,

      /* Expression: pi/3
       * Referenced by: '<S148>/限幅'
       */
      1.0471975511965976,

      /* Expression: 0
       * Referenced by: '<S148>/限幅'
       */
      0.0
    }
    /* End of '<S10>/Subsystem' */
  }
  ,

  /* End of '<S1>/关节五正弦信号发生器' */

  /* Start of '<S1>/关节二正弦信号发生器' */
  {
    /* Mask Parameter: Subsystem_Freq
     * Referenced by: '<S12>/Subsystem'
     */
    0.25,

    /* Expression: 30
     * Referenced by: '<S12>/Constant3'
     */
    30.0,

    /* Expression: pi/180
     * Referenced by: '<S12>/Gain14'
     */
    0.017453292519943295,

    /* Start of '<S10>/Subsystem' */
    {
      /* Mask Parameter: ref_signal_Amplitude
       * Referenced by: '<S147>/ref_signal'
       */
      1.0,

      /* Mask Parameter: ref_signal_Phase
       * Referenced by: '<S147>/ref_signal'
       */
      0.0,

      /* Computed Parameter: _Y0
       * Referenced by: '<S147>/外转子理想 正弦信号'
       */
      0.0,

      /* Computed Parameter: _Y0_a
       * Referenced by: '<S147>/电机外转子 跟踪误差'
       */
      0.0,

      /* Expression: pi/3
       * Referenced by: '<S147>/限幅'
       */
      1.0471975511965976,

      /* Expression: 0
       * Referenced by: '<S147>/限幅'
       */
      0.0
    }
    /* End of '<S10>/Subsystem' */
  }
  ,

  /* End of '<S1>/关节二正弦信号发生器' */

  /* Start of '<S1>/关节三正弦信号发生器' */
  {
    /* Mask Parameter: Subsystem_Freq
     * Referenced by: '<S11>/Subsystem'
     */
    0.25,

    /* Expression: 30
     * Referenced by: '<S11>/Constant3'
     */
    30.0,

    /* Expression: pi/180
     * Referenced by: '<S11>/Gain14'
     */
    0.017453292519943295,

    /* Start of '<S10>/Subsystem' */
    {
      /* Mask Parameter: ref_signal_Amplitude
       * Referenced by: '<S146>/ref_signal'
       */
      1.0,

      /* Mask Parameter: ref_signal_Phase
       * Referenced by: '<S146>/ref_signal'
       */
      0.0,

      /* Computed Parameter: _Y0
       * Referenced by: '<S146>/外转子理想 正弦信号'
       */
      0.0,

      /* Computed Parameter: _Y0_a
       * Referenced by: '<S146>/电机外转子 跟踪误差'
       */
      0.0,

      /* Expression: pi/3
       * Referenced by: '<S146>/限幅'
       */
      1.0471975511965976,

      /* Expression: 0
       * Referenced by: '<S146>/限幅'
       */
      0.0
    }
    /* End of '<S10>/Subsystem' */
  }
  ,

  /* End of '<S1>/关节三正弦信号发生器' */

  /* Start of '<S1>/关节一正弦信号发生器' */
  {
    /* Mask Parameter: Subsystem_Freq
     * Referenced by: '<S10>/Subsystem'
     */
    0.25,

    /* Expression: 30
     * Referenced by: '<S10>/Constant3'
     */
    30.0,

    /* Expression: pi/180
     * Referenced by: '<S10>/Gain14'
     */
    0.017453292519943295,

    /* Start of '<S10>/Subsystem' */
    {
      /* Mask Parameter: ref_signal_Amplitude
       * Referenced by: '<S145>/ref_signal'
       */
      1.0,

      /* Mask Parameter: ref_signal_Phase
       * Referenced by: '<S145>/ref_signal'
       */
      0.0,

      /* Computed Parameter: _Y0
       * Referenced by: '<S145>/外转子理想 正弦信号'
       */
      0.0,

      /* Computed Parameter: _Y0_a
       * Referenced by: '<S145>/电机外转子 跟踪误差'
       */
      0.0,

      /* Expression: pi/3
       * Referenced by: '<S145>/限幅'
       */
      1.0471975511965976,

      /* Expression: 0
       * Referenced by: '<S145>/限幅'
       */
      0.0
    }
    /* End of '<S10>/Subsystem' */
  }
  ,

  /* End of '<S1>/关节一正弦信号发生器' */

  /* Start of '<S9>/PID_Controller6' */
  {
    /* Mask Parameter: DiscreteDerivative1_ICPrevScale
     * Referenced by: '<S144>/UD'
     */
    0.0,

    /* Computed Parameter: TSamp_WtEt
     * Referenced by: '<S144>/TSamp'
     */
    1000.0,

    /* Computed Parameter: DiscreteTimeIntegrator_gainval
     * Referenced by: '<S138>/Discrete-Time Integrator'
     */
    0.001,

    /* Expression: 0
     * Referenced by: '<S138>/Discrete-Time Integrator'
     */
    0.0,

    /* Expression: 1000
     * Referenced by: '<S138>/Discrete-Time Integrator'
     */
    1000.0,

    /* Expression: -1000
     * Referenced by: '<S138>/Discrete-Time Integrator'
     */
    -1000.0
  }
  ,

  /* End of '<S9>/PID_Controller6' */

  /* Start of '<S9>/PID_Controller5' */
  {
    /* Mask Parameter: DiscreteDerivative1_ICPrevScale
     * Referenced by: '<S143>/UD'
     */
    0.0,

    /* Computed Parameter: TSamp_WtEt
     * Referenced by: '<S143>/TSamp'
     */
    1000.0,

    /* Computed Parameter: DiscreteTimeIntegrator_gainval
     * Referenced by: '<S137>/Discrete-Time Integrator'
     */
    0.001,

    /* Expression: 0
     * Referenced by: '<S137>/Discrete-Time Integrator'
     */
    0.0,

    /* Expression: 1000
     * Referenced by: '<S137>/Discrete-Time Integrator'
     */
    1000.0,

    /* Expression: -1000
     * Referenced by: '<S137>/Discrete-Time Integrator'
     */
    -1000.0
  }
  ,

  /* End of '<S9>/PID_Controller5' */

  /* Start of '<S9>/PID_Controller4' */
  {
    /* Mask Parameter: DiscreteDerivative1_ICPrevScale
     * Referenced by: '<S142>/UD'
     */
    0.0,

    /* Computed Parameter: TSamp_WtEt
     * Referenced by: '<S142>/TSamp'
     */
    1000.0,

    /* Computed Parameter: DiscreteTimeIntegrator_gainval
     * Referenced by: '<S136>/Discrete-Time Integrator'
     */
    0.001,

    /* Expression: 0
     * Referenced by: '<S136>/Discrete-Time Integrator'
     */
    0.0,

    /* Expression: 1000
     * Referenced by: '<S136>/Discrete-Time Integrator'
     */
    1000.0,

    /* Expression: -1000
     * Referenced by: '<S136>/Discrete-Time Integrator'
     */
    -1000.0
  }
  ,

  /* End of '<S9>/PID_Controller4' */

  /* Start of '<S9>/PID_Controller3' */
  {
    /* Mask Parameter: DiscreteDerivative1_ICPrevScale
     * Referenced by: '<S141>/UD'
     */
    0.0,

    /* Computed Parameter: TSamp_WtEt
     * Referenced by: '<S141>/TSamp'
     */
    1000.0,

    /* Computed Parameter: DiscreteTimeIntegrator_gainval
     * Referenced by: '<S135>/Discrete-Time Integrator'
     */
    0.001,

    /* Expression: 0
     * Referenced by: '<S135>/Discrete-Time Integrator'
     */
    0.0,

    /* Expression: 1000
     * Referenced by: '<S135>/Discrete-Time Integrator'
     */
    1000.0,

    /* Expression: -1000
     * Referenced by: '<S135>/Discrete-Time Integrator'
     */
    -1000.0
  }
  ,

  /* End of '<S9>/PID_Controller3' */

  /* Start of '<S9>/PID_Controller2' */
  {
    /* Mask Parameter: DiscreteDerivative1_ICPrevScale
     * Referenced by: '<S140>/UD'
     */
    0.0,

    /* Computed Parameter: TSamp_WtEt
     * Referenced by: '<S140>/TSamp'
     */
    1000.0,

    /* Computed Parameter: DiscreteTimeIntegrator_gainval
     * Referenced by: '<S134>/Discrete-Time Integrator'
     */
    0.001,

    /* Expression: 0
     * Referenced by: '<S134>/Discrete-Time Integrator'
     */
    0.0,

    /* Expression: 1000
     * Referenced by: '<S134>/Discrete-Time Integrator'
     */
    1000.0,

    /* Expression: -1000
     * Referenced by: '<S134>/Discrete-Time Integrator'
     */
    -1000.0
  }
  ,

  /* End of '<S9>/PID_Controller2' */

  /* Start of '<S9>/PID_Controller1' */
  {
    /* Mask Parameter: DiscreteDerivative1_ICPrevScale
     * Referenced by: '<S139>/UD'
     */
    0.0,

    /* Computed Parameter: TSamp_WtEt
     * Referenced by: '<S139>/TSamp'
     */
    1000.0,

    /* Computed Parameter: DiscreteTimeIntegrator_gainval
     * Referenced by: '<S133>/Discrete-Time Integrator'
     */
    0.001,

    /* Expression: 0
     * Referenced by: '<S133>/Discrete-Time Integrator'
     */
    0.0,

    /* Expression: 1000
     * Referenced by: '<S133>/Discrete-Time Integrator'
     */
    1000.0,

    /* Expression: -1000
     * Referenced by: '<S133>/Discrete-Time Integrator'
     */
    -1000.0
  }
  ,

  /* End of '<S9>/PID_Controller1' */

  /* Start of '<S8>/GetAngleSpeed5' */
  {
    /* Expression: 2*pi/60
     * Referenced by: '<S60>/Gain3'
     */
    0.10471975511965977,

    /* Expression: 1/101
     * Referenced by: '<S60>/Gain9'
     */
    0.0099009900990099011,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S60>/Merge1'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngleSpeed5' */

  /* Start of '<S8>/GetAngleSpeed4' */
  {
    /* Expression: 2*pi/60
     * Referenced by: '<S59>/Gain3'
     */
    0.10471975511965977,

    /* Expression: 1/101
     * Referenced by: '<S59>/Gain9'
     */
    0.0099009900990099011,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S59>/Merge1'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngleSpeed4' */

  /* Start of '<S8>/GetAngleSpeed3' */
  {
    /* Expression: 2*pi/60
     * Referenced by: '<S58>/Gain3'
     */
    0.10471975511965977,

    /* Expression: 1/101
     * Referenced by: '<S58>/Gain9'
     */
    0.0099009900990099011,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S58>/Merge1'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngleSpeed3' */

  /* Start of '<S8>/GetAngleSpeed2' */
  {
    /* Expression: 2*pi/60
     * Referenced by: '<S57>/Gain3'
     */
    0.10471975511965977,

    /* Expression: 1/101
     * Referenced by: '<S57>/Gain9'
     */
    0.0099009900990099011,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S57>/Merge1'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngleSpeed2' */

  /* Start of '<S8>/GetAngleSpeed1' */
  {
    /* Expression: 2*pi/60
     * Referenced by: '<S56>/Gain3'
     */
    0.10471975511965977,

    /* Expression: 1/101
     * Referenced by: '<S56>/Gain9'
     */
    0.0099009900990099011,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S56>/Merge1'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngleSpeed1' */

  /* Start of '<S8>/GetAngleSpeed' */
  {
    /* Expression: 2*pi/60
     * Referenced by: '<S55>/Gain3'
     */
    0.10471975511965977,

    /* Expression: 1/101
     * Referenced by: '<S55>/Gain9'
     */
    0.0099009900990099011,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S55>/Merge1'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngleSpeed' */

  /* Start of '<S8>/GetAngle5' */
  {
    /* Expression: 1
     * Referenced by: '<S54>/Constant4'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S54>/Constant3'
     */
    -1.0,

    /* Expression: pi/180
     * Referenced by: '<S54>/Gain4'
     */
    0.017453292519943295,

    /* Expression: 2*pi/8080000
     * Referenced by: '<S54>/Gain1'
     */
    7.776219439578696E-7,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S54>/Merge'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngle5' */

  /* Start of '<S8>/GetAngle4' */
  {
    /* Expression: 1
     * Referenced by: '<S53>/Constant4'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S53>/Constant3'
     */
    -1.0,

    /* Expression: pi/180
     * Referenced by: '<S53>/Gain4'
     */
    0.017453292519943295,

    /* Expression: 2*pi/8080000
     * Referenced by: '<S53>/Gain1'
     */
    7.776219439578696E-7,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S53>/Merge'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngle4' */

  /* Start of '<S8>/GetAngle3' */
  {
    /* Expression: 1
     * Referenced by: '<S52>/Constant4'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S52>/Constant3'
     */
    -1.0,

    /* Expression: pi/180
     * Referenced by: '<S52>/Gain4'
     */
    0.017453292519943295,

    /* Expression: 2*pi/8080000
     * Referenced by: '<S52>/Gain1'
     */
    7.776219439578696E-7,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S52>/Merge'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngle3' */

  /* Start of '<S8>/GetAngle2' */
  {
    /* Expression: 1
     * Referenced by: '<S51>/Constant4'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S51>/Constant3'
     */
    -1.0,

    /* Expression: pi/180
     * Referenced by: '<S51>/Gain4'
     */
    0.017453292519943295,

    /* Expression: 2*pi/8080000
     * Referenced by: '<S51>/Gain1'
     */
    7.776219439578696E-7,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S51>/Merge'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngle2' */

  /* Start of '<S8>/GetAngle1' */
  {
    /* Expression: 1
     * Referenced by: '<S50>/Constant4'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S50>/Constant3'
     */
    -1.0,

    /* Expression: pi/180
     * Referenced by: '<S50>/Gain4'
     */
    0.017453292519943295,

    /* Expression: 2*pi/8080000
     * Referenced by: '<S50>/Gain1'
     */
    7.776219439578696E-7,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S50>/Merge'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngle1' */

  /* Start of '<S8>/GetAngle' */
  {
    /* Expression: 1
     * Referenced by: '<S49>/Constant4'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S49>/Constant3'
     */
    -1.0,

    /* Expression: pi/180
     * Referenced by: '<S49>/Gain4'
     */
    0.017453292519943295,

    /* Expression: 2*pi/8080000
     * Referenced by: '<S49>/Gain1'
     */
    7.776219439578696E-7,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S49>/Merge'
     */
    0
  }
  ,

  /* End of '<S8>/GetAngle' */

  /* Start of '<S25>/J6_BG' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S35>/Constant1'
     */
    71U,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S35>/Constant2'
     */
    0U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S35>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S35>/Constant8'
     */
    66U
  }
  ,

  /* End of '<S25>/J6_BG' */

  /* Start of '<S25>/J5_BG' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S34>/Constant1'
     */
    71U,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S34>/Constant2'
     */
    0U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S34>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S34>/Constant8'
     */
    66U
  }
  ,

  /* End of '<S25>/J5_BG' */

  /* Start of '<S25>/J4_BG' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S33>/Constant1'
     */
    71U,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S33>/Constant2'
     */
    0U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S33>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S33>/Constant8'
     */
    66U
  }
  ,

  /* End of '<S25>/J4_BG' */

  /* Start of '<S25>/J3_BG' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S32>/Constant1'
     */
    71U,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S32>/Constant2'
     */
    0U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S32>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S32>/Constant8'
     */
    66U
  }
  ,

  /* End of '<S25>/J3_BG' */

  /* Start of '<S25>/J2_BG' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S31>/Constant1'
     */
    71U,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S31>/Constant2'
     */
    0U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S31>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S31>/Constant8'
     */
    66U
  }
  ,

  /* End of '<S25>/J2_BG' */

  /* Start of '<S25>/J1_BG' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S30>/Constant1'
     */
    71U,

    /* Computed Parameter: Constant2_Value
     * Referenced by: '<S30>/Constant2'
     */
    0U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S30>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S30>/Constant8'
     */
    66U
  }
  ,

  /* End of '<S25>/J1_BG' */

  /* Start of '<S26>/J6_TF' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S41>/Constant1'
     */
    70U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S41>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S41>/Constant8'
     */
    84U
  }
  ,

  /* End of '<S26>/J6_TF' */

  /* Start of '<S26>/J5_TF' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S40>/Constant1'
     */
    70U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S40>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S40>/Constant8'
     */
    84U
  }
  ,

  /* End of '<S26>/J5_TF' */

  /* Start of '<S26>/J4_TF' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S39>/Constant1'
     */
    70U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S39>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S39>/Constant8'
     */
    84U
  }
  ,

  /* End of '<S26>/J4_TF' */

  /* Start of '<S26>/J3_TF' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S38>/Constant1'
     */
    70U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S38>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S38>/Constant8'
     */
    84U
  }
  ,

  /* End of '<S26>/J3_TF' */

  /* Start of '<S26>/J2_TF' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S37>/Constant1'
     */
    70U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S37>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S37>/Constant8'
     */
    84U
  }
  ,

  /* End of '<S26>/J2_TF' */

  /* Start of '<S26>/J1_TF' */
  {
    /* Computed Parameter: Constant1_Value
     * Referenced by: '<S36>/Constant1'
     */
    70U,

    /* Computed Parameter: Constant3_Value
     * Referenced by: '<S36>/Constant3'
     */
    0U,

    /* Computed Parameter: Constant8_Value
     * Referenced by: '<S36>/Constant8'
     */
    84U
  }
  /* End of '<S26>/J1_TF' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
