/*
 * File: ert_main.c
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

#include "ZeroForceDrag_MoreJoints.h"
#include "rtwtypes.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

  enableTimer0Interrupt();
  ZeroForceDrag_MoreJoints_step();

  /* Get model outputs here */
  disableTimer0Interrupt();
  OverrunFlag--;
}

volatile boolean_T stopRequested = false;
int main(void)
{
  volatile boolean_T runModel = true;
  float modelBaseRate = 0.001;
  float systemClock = 150;
  c2000_flash_init();
  init_board();

#ifdef MW_EXEC_PROFILER_ON

  config_profilerTimer();

#endif

  ;
  rtmSetErrorStatus(ZeroForceDrag_MoreJoints_M, 0);
  ZeroForceDrag_MoreJoints_initialize();
  configureTimer0(modelBaseRate, systemClock);
  runModel =
    rtmGetErrorStatus(ZeroForceDrag_MoreJoints_M) == (NULL);
  enableTimer0Interrupt();
  globalInterruptEnable();
  while (runModel) {
    stopRequested = !(
                      rtmGetErrorStatus(ZeroForceDrag_MoreJoints_M) == (NULL));
    runModel = !(stopRequested);
    idletask_num0();
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  ZeroForceDrag_MoreJoints_terminate();
  globalInterruptDisable();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
