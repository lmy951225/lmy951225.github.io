/*
 * File: DrivrMotor.h
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

#ifndef RTW_HEADER_DrivrMotor_h_
#define RTW_HEADER_DrivrMotor_h_
#include <math.h>
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
#include "rt_nonfinite.h"

/* Parameters for system: '<S19>/J1_TF' */
struct P_J1_TF_ZeroForceDrag_ThreeJo_T_ {
  uint16_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S29>/Constant1'
                                        */
  uint16_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S29>/Constant3'
                                        */
  uint16_T Constant8_Value;            /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S29>/Constant8'
                                        */
};

/* Parameters for system: '<S18>/J1_BG' */
struct P_J1_BG_ZeroForceDrag_ThreeJo_T_ {
  uint16_T Constant1_Value;            /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S23>/Constant1'
                                        */
  uint16_T Constant2_Value;            /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S23>/Constant2'
                                        */
  uint16_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S23>/Constant3'
                                        */
  uint16_T Constant8_Value;            /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S23>/Constant8'
                                        */
};

extern void ZeroForceDrag_ThreeJoints_J1_TF(uint16_T rtu_Current, uint16_T
  rty_MSG[8], P_J1_TF_ZeroForceDrag_ThreeJo_T *localP);
extern void ZeroForceDrag_ThreeJoints_J1_BG(uint16_T rty_MSG[8],
  P_J1_BG_ZeroForceDrag_ThreeJo_T *localP);
extern void ZeroForceDrag_ThreeJoint_J1_UM1(void);
extern void ZeroForceDrag_ThreeJoint_J2_UM1(void);
extern void ZeroForceDrag_ThreeJoint_J3_UM1(void);
extern void ZeroForceDrag_ThreeJoint_J4_UM1(void);
extern void ZeroForceDrag_ThreeJoint_J5_UM1(void);
extern void ZeroForceDrag_ThreeJoint_J6_UM1(void);
extern void ZeroFo_StartRobotSubsystem_Init(void);
extern void ZeroForceDr_StartRobotSubsystem(void);
extern void ZeroForceDrag_ThreeJoint_u_Init(void);
extern void ZeroForceDrag_ThreeJoints_u(void);
extern void DrivrMotor_Init(void);
extern void DrivrMotor_Start(void);
extern void DrivrMotor(void);

#endif                                 /* RTW_HEADER_DrivrMotor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
