/*
 * File: PID_ThreeJoints_private.h
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

#ifndef RTW_HEADER_PID_ThreeJoints_private_h_
#define RTW_HEADER_PID_ThreeJoints_private_h_
#include "rtwtypes.h"
#include "can_message.h"
#include "can_message.h"
#include "PID_ThreeJoints.h"

void config_eCAN_B_mbx (uint16_T mbxType, uint16_T mbxNo, uint32_T msgID,
  uint16_T msgType);
void config_eCAN_A_mbx (uint16_T mbxType, uint16_T mbxNo, uint32_T msgID,
  uint16_T msgType);
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
void idle_num0_task_fcn(void);
extern void PID_ThreeJoin_CANA_284_24_Start(void);
extern void PID_ThreeJoints_CANA_284_24(void);
extern void PID_ThreeJoin_CANA_285_25_Start(void);
extern void PID_ThreeJoints_CANA_285_25(void);
extern void PID_ThreeJoin_CANA_286_26_Start(void);
extern void PID_ThreeJoints_CANA_286_26(void);
extern void PID_ThreeJoin_CANB_281_21_Start(void);
extern void PID_ThreeJoints_CANB_281_21(void);
extern void PID_ThreeJoin_CANB_282_22_Start(void);
extern void PID_ThreeJoints_CANB_282_22(void);
extern void PID_ThreeJoin_CANB_283_23_Start(void);
extern void PID_ThreeJoints_CANB_283_23(void);
extern void PID_ThreeJoi_GetMotorData_Start(void);
extern void PID_ThreeJoints_GetMotorData(void);
extern void PID_ThreeJoints_u_o_Start(void);
extern void PID_ThreeJoints_u_k(void);
extern void PID_ThreeJoi_SendDataToGUI_Init(void);
extern void PID_ThreeJoints_SendDataToGUI(void);

#endif                                 /* RTW_HEADER_PID_ThreeJoints_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
