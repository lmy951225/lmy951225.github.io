/*
 * File: DrivrMotor.h
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

#ifndef RTW_HEADER_DrivrMotor_h_
#define RTW_HEADER_DrivrMotor_h_
#include <math.h>
#ifndef PID_SingleJoint_COMMON_INCLUDES_
# define PID_SingleJoint_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "can_message.h"
#include "c2000BoardSupport.h"
#include "DSP2833x_Device.h"
#include "DSP28xx_SciUtil.h"
#endif                                 /* PID_SingleJoint_COMMON_INCLUDES_ */

#include "PID_SingleJoint_types.h"
#include "rt_nonfinite.h"

/* Parameters for system: '<S26>/J1_TF' */
struct P_J1_TF_PID_SingleJoint_T_ {
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
struct P_J1_BG_PID_SingleJoint_T_ {
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

extern void PID_SingleJoint_J1_TF(uint16_T rtu_Current, uint16_T rty_MSG[8],
  P_J1_TF_PID_SingleJoint_T *localP);
extern void PID_SingleJoint_J1_BG(uint16_T rty_MSG[8], P_J1_BG_PID_SingleJoint_T
  *localP);
extern void PID_SingleJoint_J1_UM1(void);
extern void PID_SingleJoint_J2_UM1(void);
extern void PID_SingleJoint_J3_UM1(void);
extern void PID_SingleJoint_J4_UM1(void);
extern void PID_SingleJoint_J5_UM1(void);
extern void PID_SingleJoint_J6_UM1(void);
extern void PID_Si_StartRobotSubsystem_Init(void);
extern void PID_SingleJ_StartRobotSubsystem(void);
extern void PID_SingleJoint_u_Init(void);
extern void PID_SingleJoint_u(void);
extern void DrivrMotor_Init(void);
extern void DrivrMotor_Start(void);
extern void DrivrMotor(void);

#endif                                 /* RTW_HEADER_DrivrMotor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
