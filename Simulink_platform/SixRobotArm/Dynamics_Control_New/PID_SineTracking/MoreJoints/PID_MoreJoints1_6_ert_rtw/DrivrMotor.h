/*
 * File: DrivrMotor.h
 *
 * Code generated for Simulink model 'PID_MoreJoints1_6'.
 *
 * Model version                  : 1.339
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Jan  8 15:53:53 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DrivrMotor_h_
#define RTW_HEADER_DrivrMotor_h_
#include <math.h>
#ifndef PID_MoreJoints1_6_COMMON_INCLUDES_
# define PID_MoreJoints1_6_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* PID_MoreJoints1_6_COMMON_INCLUDES_ */

#include "PID_MoreJoints1_6_types.h"
#include "rt_nonfinite.h"

/* Parameters for system: '<S26>/J1_TF' */
struct P_J1_TF_PID_MoreJoints1_6_T_ {
  uint16_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S36>/Constant1'
                                        */
  uint16_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S36>/Constant3'
                                        */
  uint16_T Constant8_Value;            /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S36>/Constant8'
                                        */
};

/* Parameters for system: '<S25>/J1_BG' */
struct P_J1_BG_PID_MoreJoints1_6_T_ {
  uint16_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S30>/Constant1'
                                        */
  uint16_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S30>/Constant2'
                                        */
  uint16_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S30>/Constant3'
                                        */
  uint16_T Constant8_Value;            /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S30>/Constant8'
                                        */
};

extern void PID_MoreJoints1_6_J1_TF(uint16_T rtu_Current, uint16_T rty_MSG[8],
  P_J1_TF_PID_MoreJoints1_6_T *localP);
extern void PID_MoreJoints1_6_J1_BG(uint16_T rty_MSG[8],
  P_J1_BG_PID_MoreJoints1_6_T *localP);
extern void PID_MoreJoints1_6_J1_UM1(void);
extern void PID_MoreJoints1_6_J2_UM1(void);
extern void PID_MoreJoints1_6_J3_UM1(void);
extern void PID_MoreJoints1_6_J4_UM1(void);
extern void PID_MoreJoints1_6_J5_UM1(void);
extern void PID_MoreJoints1_6_J6_UM1(void);
extern void PID_Mo_StartRobotSubsystem_Init(void);
extern void PID_MoreJoi_StartRobotSubsystem(void);
extern void PID_MoreJoints1_6_u_Init(void);
extern void PID_MoreJoints1_6_u(void);
extern void DrivrMotor_Init(void);
extern void DrivrMotor_Start(void);
extern void DrivrMotor(void);

#endif                                 /* RTW_HEADER_DrivrMotor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
