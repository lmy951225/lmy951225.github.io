/*
 * File: Compensate.h
 *
 * Code generated for Simulink model 'PID_DoubleJoints'.
 *
 * Model version                  : 1.214
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan  8 11:21:57 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Compensate_h_
#define RTW_HEADER_Compensate_h_
#include <math.h>
#ifndef PID_DoubleJoints_COMMON_INCLUDES_
# define PID_DoubleJoints_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* PID_DoubleJoints_COMMON_INCLUDES_ */

#include "PID_DoubleJoints_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"

extern void Compensate(void);

#endif                                 /* RTW_HEADER_Compensate_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
