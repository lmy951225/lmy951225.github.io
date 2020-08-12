/*
 * File: SingleJoint_Algorithm2_data.c
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

/* Block parameters (default storage) */
P_SingleJoint_Algorithm2_T SingleJoint_Algorithm2_P = {
  /* Mask Parameter: ref_signal_Amplitude
   * Referenced by: '<S18>/ref_signal'
   */
  1.0,

  /* Mask Parameter: AdapitionController_Freq
   * Referenced by: '<S18>/ref_signal'
   */
  0.25,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S16>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative1_ICPrevScale
   * Referenced by: '<S17>/UD'
   */
  0.0,

  /* Mask Parameter: GetAngle_InitAngle
   * Referenced by: '<S1>/GetAngle'
   */
  -90.0,

  /* Mask Parameter: GetAngleSpeed_JJoint
   * Referenced by: '<S1>/GetAngleSpeed'
   */
  3.0,

  /* Mask Parameter: ref_signal_Phase
   * Referenced by: '<S18>/ref_signal'
   */
  0.0,

  /* Mask Parameter: DriverOneMotor_SelectJoint
   * Referenced by: '<S7>/Constant1'
   */
  3.0,

  /* Mask Parameter: ux88_const
   * Referenced by: '<S63>/Constant'
   */
  136U,

  /* Mask Parameter: ux0080_const
   * Referenced by: '<S62>/Constant'
   */
  128U,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S64>/Constant'
   */
  1U,

  /* Mask Parameter: CompareToConstant2_const
   * Referenced by: '<S65>/Constant'
   */
  1U,

  /* Mask Parameter: GetAngle_JJoint
   * Referenced by: '<S1>/GetAngle'
   */
  3U,

  /* Mask Parameter: _uplimit
   * Referenced by: '<S61>/FixPt Switch'
   */
  10U,

  /* Expression: -1
   * Referenced by: '<S12>/6'
   */
  -1.0,

  /* Computed Parameter: DiscreteTimeIntegrator2_gainval
   * Referenced by: '<S12>/Discrete-Time Integrator2'
   */
  0.001,

  /* Expression: 0
   * Referenced by: '<S12>/Discrete-Time Integrator2'
   */
  0.0,

  /* Expression: [1000;1000;1000;1000;1000;1000;1000;]
   * Referenced by: '<S12>/Discrete-Time Integrator2'
   */
  { 1000.0, 1000.0, 1000.0, 1000.0, 1000.0, 1000.0, 1000.0 },

  /* Expression: [-1000;-1000;-1000;-1000;-1000;-1000;-1000;]
   * Referenced by: '<S12>/Discrete-Time Integrator2'
   */
  { -1000.0, -1000.0, -1000.0, -1000.0, -1000.0, -1000.0, -1000.0 },

  /* Expression: 0
   * Referenced by: '<S13>/Constant9'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S13>/Constant10'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S13>/Constant11'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S13>/Constant4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S13>/Constant5'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S13>/Constant1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S13>/Constant2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S13>/Constant3'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S13>/Constant8'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S13>/Constant6'
   */
  0.0,

  /* Expression: 1.75
   * Referenced by: '<S13>/Constant7'
   */
  1.75,

  /* Expression: 0
   * Referenced by: '<S14>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S14>/Constant1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S14>/Constant2'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S14>/Constant3'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S14>/Constant4'
   */
  0.0,

  /* Expression: -2.15
   * Referenced by: '<S14>/Constant5'
   */
  -2.15,

  /* Expression: 0
   * Referenced by: '<S14>/Constant6'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S14>/Constant7'
   */
  1.0,

  /* Expression: -1.75
   * Referenced by: '<S14>/Constant8'
   */
  -1.75,

  /* Expression: 0
   * Referenced by: '<S14>/Constant9'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S14>/Constant10'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S14>/Constant11'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S15>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Constant1'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S15>/Constant2'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S15>/Constant3'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S15>/Constant4'
   */
  0.0,

  /* Expression: -2.15
   * Referenced by: '<S15>/Constant5'
   */
  -2.15,

  /* Expression: 0
   * Referenced by: '<S15>/Constant6'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S15>/Constant7'
   */
  1.0,

  /* Expression: -1.75
   * Referenced by: '<S15>/Constant8'
   */
  -1.75,

  /* Expression: 0
   * Referenced by: '<S15>/Constant9'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Constant10'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S15>/Constant11'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S15>/Constant12'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Constant13'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S10>/Unit Delay2'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S10>/Unit Delay1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S10>/Unit Delay'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator1_gainval
   * Referenced by: '<S10>/Discrete-Time Integrator1'
   */
  0.001,

  /* Expression: 0
   * Referenced by: '<S10>/Discrete-Time Integrator1'
   */
  0.0,

  /* Expression: [1000 1000 1000;1000 1000 1000;1000 1000 1000;]
   * Referenced by: '<S10>/Discrete-Time Integrator1'
   */
  { 1000.0, 1000.0, 1000.0, 1000.0, 1000.0, 1000.0, 1000.0, 1000.0, 1000.0 },

  /* Expression: [-1000 -1000 -1000;-1000 -1000 -1000;-1000 -1000 -1000;]
   * Referenced by: '<S10>/Discrete-Time Integrator1'
   */
  { -1000.0, -1000.0, -1000.0, -1000.0, -1000.0, -1000.0, -1000.0, -1000.0,
    -1000.0 },

  /* Computed Parameter: DiscreteTimeIntegrator3_gainval
   * Referenced by: '<S10>/Discrete-Time Integrator3'
   */
  0.001,

  /* Expression: 0
   * Referenced by: '<S10>/Discrete-Time Integrator3'
   */
  0.0,

  /* Expression: [1000;1000;1000;]
   * Referenced by: '<S10>/Discrete-Time Integrator3'
   */
  { 1000.0, 1000.0, 1000.0 },

  /* Expression: [-1000;-1000;-1000;]
   * Referenced by: '<S10>/Discrete-Time Integrator3'
   */
  { -1000.0, -1000.0, -1000.0 },

  /* Computed Parameter: e1_Y0
   * Referenced by: '<S18>/e1'
   */
  0.0,

  /* Computed Parameter: qd_Y0
   * Referenced by: '<S18>/qd'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S16>/TSamp'
   */
  1000.0,

  /* Computed Parameter: TSamp_WtEt_i
   * Referenced by: '<S17>/TSamp'
   */
  1000.0,

  /* Expression: pi/3
   * Referenced by: '<S6>/限幅'
   */
  1.0471975511965976,

  /* Expression: 0
   * Referenced by: '<S6>/限幅'
   */
  0.0,

  /* Expression: 500
   * Referenced by: '<S7>/限幅'
   */
  500.0,

  /* Expression: -500
   * Referenced by: '<S7>/限幅'
   */
  -500.0,

  /* Expression: 180/pi
   * Referenced by: '<S1>/Gain6'
   */
  57.295779513082323,

  /* Expression: 101
   * Referenced by: '<S1>/Gain8'
   */
  101.0,

  /* Expression: 30
   * Referenced by: '<S1>/Constant'
   */
  30.0,

  /* Expression: pi/180
   * Referenced by: '<S1>/Gain11'
   */
  0.017453292519943295,

  /* Expression: 0.1
   * Referenced by: '<S1>/1'
   */
  0.1,

  /* Expression: 0.01
   * Referenced by: '<S1>/gain1'
   */
  0.01,

  /* Expression: 0.1
   * Referenced by: '<S1>/gain'
   */
  0.1,

  /* Expression: 180/pi
   * Referenced by: '<S1>/Gain12'
   */
  57.295779513082323,

  /* Expression: 101
   * Referenced by: '<S1>/Gain5'
   */
  101.0,

  /* Expression: 180/pi
   * Referenced by: '<S1>/Gain13'
   */
  57.295779513082323,

  /* Expression: 101
   * Referenced by: '<S1>/Gain10'
   */
  101.0,

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

  /* Computed Parameter: MSG_Y0
   * Referenced by: '<S30>/MSG'
   */
  0U,

  /* Computed Parameter: MSG_Y0_p
   * Referenced by: '<S28>/MSG'
   */
  0U,

  /* Computed Parameter: MSG_Y0_m
   * Referenced by: '<S29>/MSG'
   */
  0U,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S33>/Out1'
   */
  0U,

  /* Computed Parameter: Constant_Value_a
   * Referenced by: '<S32>/Constant'
   */
  1U,

  /* Computed Parameter: Constant1_Value_i
   * Referenced by: '<S31>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_i
   * Referenced by: '<S31>/Constant'
   */
  1U,

  /* Computed Parameter: bx_Y0
   * Referenced by: '<S31>/bx'
   */
  0U,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S31>/Switch'
   */
  0U,

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S75>/Constant'
   */
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Computed Parameter: Switch_Threshold_m
   * Referenced by: '<S67>/Switch'
   */
  0U,

  /* Computed Parameter: Constant1_Value_o
   * Referenced by: '<S58>/Constant1'
   */
  90U,

  /* Computed Parameter: DataStoreMemory9_InitialValue
   * Referenced by: '<Root>/Data Store Memory9'
   */
  0U,

  /* Expression: true
   * Referenced by: '<S67>/Constant1'
   */
  1,

  /* Expression: false
   * Referenced by: '<S67>/Constant'
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

  /* Computed Parameter: Constant_Value_c
   * Referenced by: '<S23>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_ou
   * Referenced by: '<S30>/Constant1'
   */
  77U,

  /* Computed Parameter: Constant2_Value_k
   * Referenced by: '<S30>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_h
   * Referenced by: '<S30>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant8_Value_m
   * Referenced by: '<S30>/Constant8'
   */
  85U,

  /* Computed Parameter: Constant_Value_cs
   * Referenced by: '<S30>/Constant'
   */
  1U,

  /* Computed Parameter: Constant1_Value_a3
   * Referenced by: '<S28>/Constant1'
   */
  71U,

  /* Computed Parameter: Constant2_Value_cz
   * Referenced by: '<S28>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_k
   * Referenced by: '<S28>/Constant3'
   */
  0U,

  /* Computed Parameter: Constant8_Value_i
   * Referenced by: '<S28>/Constant8'
   */
  66U,

  /* Computed Parameter: Constant6_Value_e
   * Referenced by: '<S28>/Constant6'
   */
  1U,

  /* Computed Parameter: Constant1_Value_k
   * Referenced by: '<S29>/Constant1'
   */
  70U,

  /* Computed Parameter: Constant3_Value_a
   * Referenced by: '<S29>/Constant3'
   */
  0U,

  /* Computed Parameter: Constant8_Value_k
   * Referenced by: '<S29>/Constant8'
   */
  84U,

  /* Computed Parameter: Constant2_Value_ov
   * Referenced by: '<S29>/Constant2'
   */
  1U,

  /* Computed Parameter: DataStoreMemory2_InitialValue_c
   * Referenced by: '<S7>/Data Store Memory2'
   */
  0U,

  /* Computed Parameter: Constant_Value_o
   * Referenced by: '<S61>/Constant'
   */
  0U,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S59>/Output'
   */
  0U,

  /* Computed Parameter: Switch_Threshold_my
   * Referenced by: '<S3>/Switch'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S60>/FixPt Constant'
   */
  1U,

  /* Start of '<S1>/GetAngleSpeed' */
  {
    /* Expression: 2*pi/60
     * Referenced by: '<S9>/Gain3'
     */
    0.10471975511965977,

    /* Expression: 1/101
     * Referenced by: '<S9>/Gain9'
     */
    0.0099009900990099011,

    /* Computed Parameter: Merge1_InitialOutput
     * Referenced by: '<S9>/Merge1'
     */
    0
  }
  ,

  /* End of '<S1>/GetAngleSpeed' */

  /* Start of '<S1>/GetAngle' */
  {
    /* Expression: 1
     * Referenced by: '<S8>/Constant4'
     */
    1.0,

    /* Expression: -1
     * Referenced by: '<S8>/Constant3'
     */
    -1.0,

    /* Expression: pi/180
     * Referenced by: '<S8>/Gain4'
     */
    0.017453292519943295,

    /* Expression: 2*pi/8080000
     * Referenced by: '<S8>/Gain1'
     */
    7.776219439578696E-7,

    /* Computed Parameter: Merge_InitialOutput
     * Referenced by: '<S8>/Merge'
     */
    0
  }
  /* End of '<S1>/GetAngle' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
