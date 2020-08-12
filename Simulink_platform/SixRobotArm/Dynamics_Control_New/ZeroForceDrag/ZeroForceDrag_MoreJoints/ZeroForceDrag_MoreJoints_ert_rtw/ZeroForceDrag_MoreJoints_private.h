/*
 * File: ZeroForceDrag_MoreJoints_private.h
 *
 * Code generated for Simulink model 'ZeroForceDrag_MoreJoints'.
 *
 * Model version                  : 1.171
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Tue Jan  7 21:52:39 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ZeroForceDrag_MoreJoints_private_h_
#define RTW_HEADER_ZeroForceDrag_MoreJoints_private_h_
#include "rtwtypes.h"
#include "can_message.h"
#include "can_message.h"
#include "ZeroForceDrag_MoreJoints.h"

void config_eCAN_B_mbx (uint16_T mbxType, uint16_T mbxNo, uint32_T msgID,
  uint16_T msgType);
void config_eCAN_A_mbx (uint16_T mbxType, uint16_T mbxNo, uint32_T msgID,
  uint16_T msgType);
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
void idle_num0_task_fcn(void);
extern void ZeroForceDrag_CANA_284_24_Start(void);
extern void ZeroForceDrag_MoreJ_CANA_284_24(void);
extern void ZeroForceDrag_CANA_285_25_Start(void);
extern void ZeroForceDrag_MoreJ_CANA_285_25(void);
extern void ZeroForceDrag_CANA_286_26_Start(void);
extern void ZeroForceDrag_MoreJ_CANA_286_26(void);
extern void ZeroForceDrag_CANB_281_21_Start(void);
extern void ZeroForceDrag_MoreJ_CANB_281_21(void);
extern void ZeroForceDrag_CANB_282_22_Start(void);
extern void ZeroForceDrag_MoreJ_CANB_282_22(void);
extern void ZeroForceDrag_CANB_283_23_Start(void);
extern void ZeroForceDrag_MoreJ_CANB_283_23(void);
extern void ZeroForceDra_GetMotorData_Start(void);
extern void ZeroForceDrag_More_GetMotorData(void);
extern void ZeroForceDrag_MoreJoi_u_h_Start(void);
extern void ZeroForceDrag_MoreJoints_u_h(void);
extern void ZeroForceDra_SendDataToGUI_Init(void);
extern void ZeroForceDrag_Mor_SendDataToGUI(void);

#endif                                 /* RTW_HEADER_ZeroForceDrag_MoreJoints_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
