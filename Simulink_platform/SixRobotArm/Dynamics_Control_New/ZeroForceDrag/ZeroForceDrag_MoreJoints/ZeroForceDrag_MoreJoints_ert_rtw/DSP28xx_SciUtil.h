/*
 * File: DSP28xx_SciUtil.h
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

#ifndef RTW_HEADER_DSP28xx_SciUtil_h_
#define RTW_HEADER_DSP28xx_SciUtil_h_
#include "DSP2833x_Device.h"
#include <string.h>
#define NOERROR                        0                         /* no error*/
#define TIMEOUT                        1                         /* waiting timeout*/
#define DATAERR                        2                         /* data error (checksum error)*/
#define PRTYERR                        3                         /* parity error*/
#define FRAMERR                        4                         /* frame error*/
#define OVRNERR                        5                         /* overrun error*/
#define BRKDTERR                       6                         /* brake-detect error*/
#define RCVMAXRETRY                    10
#define RCVMAXCNTS                     1000
#define RCVMAXCNTL                     50000
#define SHORTLOOP                      0
#define LONGLOOP                       1

int scia_rcv(unsigned int *rcvBuff, int buffLen, int loopMode, int typeLen);
int byteswap_L8cmp(unsigned int* outdata, char* recdata, int inportWidth, int
                   typeLen);
void scia_xmit(char* pmsg, int msglen, int typeLen);

#endif                                 /* RTW_HEADER_DSP28xx_SciUtil_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
