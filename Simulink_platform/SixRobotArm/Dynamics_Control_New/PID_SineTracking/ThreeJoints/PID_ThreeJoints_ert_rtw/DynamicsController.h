/*
 * File: DynamicsController.h
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

#ifndef RTW_HEADER_DynamicsController_h_
#define RTW_HEADER_DynamicsController_h_
#ifndef PID_ThreeJoints_COMMON_INCLUDES_
# define PID_ThreeJoints_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* PID_ThreeJoints_COMMON_INCLUDES_ */

#include "PID_ThreeJoints_types.h"

/* Child system includes */
#include "Compensate.h"
#include "DrivrMotor.h"
#include "GetAngleVelocity.h"
#include "PID_Controller.h"
#include "SineSignal.h"

extern void DynamicsController_Init(void);
extern void DynamicsController_Start(void);
extern void DynamicsController(void);

#endif                                 /* RTW_HEADER_DynamicsController_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
