/*
 * File: PID_MoreJoints1_6_private.h
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

#ifndef RTW_HEADER_PID_MoreJoints1_6_private_h_
#define RTW_HEADER_PID_MoreJoints1_6_private_h_
#include "rtwtypes.h"
#include "can_message.h"
#include "can_message.h"
#include "PID_MoreJoints1_6.h"

void config_eCAN_B_mbx (uint16_T mbxType, uint16_T mbxNo, uint32_T msgID,
  uint16_T msgType);
void config_eCAN_A_mbx (uint16_T mbxType, uint16_T mbxNo, uint32_T msgID,
  uint16_T msgType);
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
void idle_num0_task_fcn(void);
extern void PID_MoreJoint_CANA_284_24_Start(void);
extern void PID_MoreJoints1_6_CANA_284_24(void);
extern void PID_MoreJoint_CANA_285_25_Start(void);
extern void PID_MoreJoints1_6_CANA_285_25(void);
extern void PID_MoreJoint_CANA_286_26_Start(void);
extern void PID_MoreJoints1_6_CANA_286_26(void);
extern void PID_MoreJoint_CANB_281_21_Start(void);
extern void PID_MoreJoints1_6_CANB_281_21(void);
extern void PID_MoreJoint_CANB_282_22_Start(void);
extern void PID_MoreJoints1_6_CANB_282_22(void);
extern void PID_MoreJoint_CANB_283_23_Start(void);
extern void PID_MoreJoints1_6_CANB_283_23(void);
extern void PID_MoreJoin_GetMotorData_Start(void);
extern void PID_MoreJoints1_6_GetMotorData(void);
extern void PID_MoreJoints1_6_u_j_Start(void);
extern void PID_MoreJoints1_6_u_k(void);
extern void PID_MoreJoin_SendDataToGUI_Init(void);
extern void PID_MoreJoints1_6_SendDataToGUI(void);

#endif                                 /* RTW_HEADER_PID_MoreJoints1_6_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
