/*
 * File: PID_SingleJoint_data.c
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

#include "PID_SingleJoint.h"
#include "PID_SingleJoint_private.h"

/* Block parameters (default storage) */
P_PID_SingleJoint_T PID_SingleJoint_P = {
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

  /* Mask Parameter: _uplimit
   * Referenced by: '<S166>/FixPt Switch'
   */
  10U,

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

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S180>/Constant'
   */
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Computed Parameter: Switch_Threshold
   * Referenced by: '<S172>/Switch'
   */
  0U,

  /* Computed Parameter: Constant1_Value
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

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S166>/Constant'
   */
  0U,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S164>/Output'
   */
  0U,

  /* Computed Parameter: Switch_Threshold_e
   * Referenced by: '<S3>/Switch'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S165>/FixPt Constant'
   */
  1U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
