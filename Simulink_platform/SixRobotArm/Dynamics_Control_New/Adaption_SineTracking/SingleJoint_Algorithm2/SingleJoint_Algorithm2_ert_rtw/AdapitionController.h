/*
 * File: AdapitionController.h
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

#ifndef RTW_HEADER_AdapitionController_h_
#define RTW_HEADER_AdapitionController_h_
#include <math.h>
#ifndef SingleJoint_Algorithm2_COMMON_INCLUDES_
# define SingleJoint_Algorithm2_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* SingleJoint_Algorithm2_COMMON_INCLUDES_ */

#include "SingleJoint_Algorithm2_types.h"

extern void SingleJoint_Algor_SolveTau_Init(void);
extern void SingleJoint_Algorithm2_SolveTau(void);
extern void SingleJoint_Algorithm2_adaptive(void);
extern void SingleJoint_Algorithm2_im1(real_T rtu_tau, const real_T rtu_eta1[3]);
extern void SingleJoint_Algorithm2_im2(void);
extern void SingleJoint_Alg_Controller_Init(void);
extern void SingleJoint_Algorith_Controller(void);
extern void SingleJoint_Algorith_Error_Init(void);
extern void SingleJoint_Algorit_Error_Start(void);
extern void SingleJoint_Algorithm2_Error(void);
extern void AdaptiveAlgorithm_Init(void);
extern void AdaptiveAlgorithm_Start(void);
extern void AdaptiveAlgorithm(void);

#endif                                 /* RTW_HEADER_AdapitionController_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
