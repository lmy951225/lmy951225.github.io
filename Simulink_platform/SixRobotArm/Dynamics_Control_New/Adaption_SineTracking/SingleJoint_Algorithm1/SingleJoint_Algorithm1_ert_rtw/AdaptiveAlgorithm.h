/*
 * File: AdaptiveAlgorithm.h
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

#ifndef RTW_HEADER_AdaptiveAlgorithm_h_
#define RTW_HEADER_AdaptiveAlgorithm_h_
#include <math.h>
#ifndef SingleJoint_Algorithm1_COMMON_INCLUDES_
# define SingleJoint_Algorithm1_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* SingleJoint_Algorithm1_COMMON_INCLUDES_ */

#include "SingleJoint_Algorithm1_types.h"

/* Block states (default storage) for system '<S10>/Subsystem1' */
typedef struct {
  real_T Delay2_DSTATE;                /* '<S12>/Delay2' */
  real_T Delay3_DSTATE;                /* '<S12>/Delay3' */
} DW_Subsystem1_SingleJoint_Alg_T;

/* Parameters for system: '<S10>/Subsystem1' */
struct P_Subsystem1_SingleJoint_Algo_T_ {
  real_T Delay2_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S12>/Delay2'
                                        */
  real_T Delay3_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S12>/Delay3'
                                        */
  real_T Kc2_Value;                    /* Expression: 0.002
                                        * Referenced by: '<S12>/Kc2'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 1000
                                        * Referenced by: '<S12>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -1000
                                        * Referenced by: '<S12>/Saturation2'
                                        */
  uint16_T Delay2_DelayLength;         /* Computed Parameter: Delay2_DelayLength
                                        * Referenced by: '<S12>/Delay2'
                                        */
  uint16_T Delay3_DelayLength;         /* Computed Parameter: Delay3_DelayLength
                                        * Referenced by: '<S12>/Delay3'
                                        */
};

extern void SingleJoint_Alg_Subsystem1_Init(DW_Subsystem1_SingleJoint_Alg_T
  *localDW, P_Subsystem1_SingleJoint_Algo_T *localP);
extern real_T SingleJoint_Algorith_Subsystem1(real_T rtu_In1,
  DW_Subsystem1_SingleJoint_Alg_T *localDW, P_Subsystem1_SingleJoint_Algo_T
  *localP);
extern void SingleJoint_Alg_Controller_Init(void);
extern void SingleJoint_Algorith_Controller(void);
extern void SingleJoint_Algo_Subsystem_Init(void);
extern void SingleJoint_Alg_Subsystem_Start(void);
extern void SingleJoint_Algorithm_Subsystem(void);
extern void SingleJoint_Algorith_Error_Init(void);
extern void SingleJoint_Algorit_Error_Start(void);
extern void SingleJoint_Algorithm1_Error(void);
extern void AdaptiveAlgorithm_Init(void);
extern void AdaptiveAlgorithm_Start(void);
extern void AdaptiveAlgorithm(void);

#endif                                 /* RTW_HEADER_AdaptiveAlgorithm_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
