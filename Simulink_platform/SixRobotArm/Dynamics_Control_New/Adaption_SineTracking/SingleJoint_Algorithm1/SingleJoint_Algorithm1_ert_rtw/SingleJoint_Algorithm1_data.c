/*
 * File: SingleJoint_Algorithm1_data.c
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

#include "SingleJoint_Algorithm1.h"
#include "SingleJoint_Algorithm1_private.h"

/* Block parameters (default storage) */
P_SingleJoint_Algorithm1_T SingleJoint_Algorithm1_P = {
  /* Mask Parameter: ref_signal_Amplitude
   * Referenced by: '<S17>/ref_signal'
   */
  1.0,

  /* Mask Parameter: AdapitionController_Freq
   * Referenced by: '<S17>/ref_signal'
   */
  0.25,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S15>/UD'
   */
  0.0,

  /* Mask Parameter: DiscreteDerivative2_ICPrevScale
   * Referenced by: '<S16>/UD'
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
   * Referenced by: '<S17>/ref_signal'
   */
  0.0,

  /* Mask Parameter: DriverOneMotor_SelectJoint
   * Referenced by: '<S7>/Constant1'
   */
  3.0,

  /* Mask Parameter: ux88_const
   * Referenced by: '<S62>/Constant'
   */
  136U,

  /* Mask Parameter: ux0080_const
   * Referenced by: '<S61>/Constant'
   */
  128U,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S63>/Constant'
   */
  1U,

  /* Mask Parameter: CompareToConstant2_const
   * Referenced by: '<S64>/Constant'
   */
  1U,

  /* Mask Parameter: GetAngle_JJoint
   * Referenced by: '<S1>/GetAngle'
   */
  3U,

  /* Mask Parameter: _uplimit
   * Referenced by: '<S60>/FixPt Switch'
   */
  10U,

  /* Expression: -1
   * Referenced by: '<S10>/lambda8'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S10>/lambda9'
   */
  -1.0,

  /* Expression: -1
   * Referenced by: '<S10>/lambda10'
   */
  -1.0,

  /* Computed Parameter: e1_Y0
   * Referenced by: '<S17>/e1'
   */
  0.0,

  /* Computed Parameter: _Y0
   * Referenced by: '<S17>/理想位置'
   */
  0.0,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S15>/TSamp'
   */
  1000.0,

  /* Computed Parameter: TSamp_WtEt_c
   * Referenced by: '<S16>/TSamp'
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
   * Referenced by: '<S1>/Gain6'
   */
  57.295779513082323,

  /* Expression: 101
   * Referenced by: '<S1>/Gain8'
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
   * Referenced by: '<S29>/MSG'
   */
  0U,

  /* Computed Parameter: MSG_Y0_j
   * Referenced by: '<S27>/MSG'
   */
  0U,

  /* Computed Parameter: MSG_Y0_i
   * Referenced by: '<S28>/MSG'
   */
  0U,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S32>/Out1'
   */
  0U,

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S31>/Constant'
   */
  1U,

  /* Computed Parameter: Constant1_Value
   * Referenced by: '<S30>/Constant1'
   */
  0U,

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S30>/Constant'
   */
  1U,

  /* Computed Parameter: bx_Y0
   * Referenced by: '<S30>/bx'
   */
  0U,

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S30>/Switch'
   */
  0U,

  /* Computed Parameter: Constant_Value_b
   * Referenced by: '<S74>/Constant'
   */
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Computed Parameter: Switch_Threshold_i
   * Referenced by: '<S66>/Switch'
   */
  0U,

  /* Computed Parameter: Constant1_Value_d
   * Referenced by: '<S57>/Constant1'
   */
  90U,

  /* Computed Parameter: DataStoreMemory9_InitialValue
   * Referenced by: '<Root>/Data Store Memory9'
   */
  0U,

  /* Expression: true
   * Referenced by: '<S66>/Constant1'
   */
  1,

  /* Expression: false
   * Referenced by: '<S66>/Constant'
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

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S22>/Constant'
   */
  0U,

  /* Computed Parameter: Constant1_Value_j
   * Referenced by: '<S29>/Constant1'
   */
  77U,

  /* Computed Parameter: Constant2_Value
   * Referenced by: '<S29>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value
   * Referenced by: '<S29>/Constant3'
   */
  1U,

  /* Computed Parameter: Constant8_Value
   * Referenced by: '<S29>/Constant8'
   */
  85U,

  /* Computed Parameter: Constant_Value_o
   * Referenced by: '<S29>/Constant'
   */
  1U,

  /* Computed Parameter: Constant1_Value_e
   * Referenced by: '<S27>/Constant1'
   */
  71U,

  /* Computed Parameter: Constant2_Value_e
   * Referenced by: '<S27>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant3_Value_b
   * Referenced by: '<S27>/Constant3'
   */
  0U,

  /* Computed Parameter: Constant8_Value_c
   * Referenced by: '<S27>/Constant8'
   */
  66U,

  /* Computed Parameter: Constant6_Value
   * Referenced by: '<S27>/Constant6'
   */
  1U,

  /* Computed Parameter: Constant1_Value_p
   * Referenced by: '<S28>/Constant1'
   */
  70U,

  /* Computed Parameter: Constant3_Value_h
   * Referenced by: '<S28>/Constant3'
   */
  0U,

  /* Computed Parameter: Constant8_Value_cv
   * Referenced by: '<S28>/Constant8'
   */
  84U,

  /* Computed Parameter: Constant2_Value_d
   * Referenced by: '<S28>/Constant2'
   */
  1U,

  /* Computed Parameter: DataStoreMemory2_InitialValue_m
   * Referenced by: '<S7>/Data Store Memory2'
   */
  0U,

  /* Computed Parameter: Constant_Value_d
   * Referenced by: '<S60>/Constant'
   */
  0U,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S58>/Output'
   */
  0U,

  /* Computed Parameter: Switch_Threshold_o
   * Referenced by: '<S3>/Switch'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S59>/FixPt Constant'
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
  ,

  /* End of '<S1>/GetAngle' */

  /* Start of '<S10>/Subsystem3' */
  {
    /* Expression: 0
     * Referenced by: '<S14>/Delay2'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S14>/Delay3'
     */
    0.0,

    /* Expression: 0.002
     * Referenced by: '<S14>/Kc2'
     */
    0.002,

    /* Expression: 1000
     * Referenced by: '<S14>/Saturation2'
     */
    1000.0,

    /* Expression: -1000
     * Referenced by: '<S14>/Saturation2'
     */
    -1000.0,

    /* Computed Parameter: Delay2_DelayLength
     * Referenced by: '<S14>/Delay2'
     */
    1U,

    /* Computed Parameter: Delay3_DelayLength
     * Referenced by: '<S14>/Delay3'
     */
    1U
  }
  ,

  /* End of '<S10>/Subsystem3' */

  /* Start of '<S10>/Subsystem2' */
  {
    /* Expression: 0
     * Referenced by: '<S13>/Delay2'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S13>/Delay3'
     */
    0.0,

    /* Expression: 0.002
     * Referenced by: '<S13>/Kc2'
     */
    0.002,

    /* Expression: 1000
     * Referenced by: '<S13>/Saturation2'
     */
    1000.0,

    /* Expression: -1000
     * Referenced by: '<S13>/Saturation2'
     */
    -1000.0,

    /* Computed Parameter: Delay2_DelayLength
     * Referenced by: '<S13>/Delay2'
     */
    1U,

    /* Computed Parameter: Delay3_DelayLength
     * Referenced by: '<S13>/Delay3'
     */
    1U
  }
  ,

  /* End of '<S10>/Subsystem2' */

  /* Start of '<S10>/Subsystem1' */
  {
    /* Expression: 0
     * Referenced by: '<S12>/Delay2'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S12>/Delay3'
     */
    0.0,

    /* Expression: 0.002
     * Referenced by: '<S12>/Kc2'
     */
    0.002,

    /* Expression: 1000
     * Referenced by: '<S12>/Saturation2'
     */
    1000.0,

    /* Expression: -1000
     * Referenced by: '<S12>/Saturation2'
     */
    -1000.0,

    /* Computed Parameter: Delay2_DelayLength
     * Referenced by: '<S12>/Delay2'
     */
    1U,

    /* Computed Parameter: Delay3_DelayLength
     * Referenced by: '<S12>/Delay3'
     */
    1U
  }
  /* End of '<S10>/Subsystem1' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
