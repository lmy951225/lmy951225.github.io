/*
 * File: DynamicsController.h
 *
 * Code generated for Simulink model 'ZeroForceDrag_ThreeJoints'.
 *
 * Model version                  : 1.166
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jan  7 20:06:33 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DynamicsController_h_
#define RTW_HEADER_DynamicsController_h_
#ifndef ZeroForceDrag_ThreeJoints_COMMON_INCLUDES_
# define ZeroForceDrag_ThreeJoints_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* ZeroForceDrag_ThreeJoints_COMMON_INCLUDES_ */

#include "ZeroForceDrag_ThreeJoints_types.h"

/* Child system includes */
#include "Compensate.h"
#include "DrivrMotor.h"
#include "GetAngleVelocity.h"

extern void DynamicsController_Init(void);
extern void DynamicsController_Start(void);
extern void DynamicsController(void);

#endif                                 /* RTW_HEADER_DynamicsController_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */