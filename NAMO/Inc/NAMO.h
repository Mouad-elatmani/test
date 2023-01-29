/*
 * File: NAMO.h
 *
 * Code generated for Simulink model :NAMO.
 *
 * Model version      : 1.1
 * Simulink Coder version    : 9.5 (R2021a) 14-Nov-2020
 * TLC version       : 9.5 (Feb 18 2021)
 * C/C++ source code generated on  : Sat Jan 28 18:58:30 2023
 *
 * Target selection: stm32.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 *
 *
 *
 * ******************************************************************************
 * * attention
 * *
 * * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
 * * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
 * * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
 * * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
 * * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
 * * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
 * *
 * ******************************************************************************
 */

#ifndef RTW_HEADER_NAMO_h_
#define RTW_HEADER_NAMO_h_
#include <math.h>
#include "STM32_Config.h"
#include "NAMO_External_Functions.h"
#include "NAMO_ADC.h"
#include "NAMO_DAC.h"
#ifndef NAMO_COMMON_INCLUDES_
#define NAMO_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* NAMO_COMMON_INCLUDES_ */

#include "NAMO_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T ADC_Read;                     /* '<Root>/ADC_Read' */
  uint16_T DataTypeConversion;         /* '<Root>/Data Type Conversion' */
} B_NAMO;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DigitalFilter_states[8];      /* '<S1>/Digital Filter' */
} DW_NAMO;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: [0.0204814268338890694 0.0747507992749067013 0.136262843363643138 0.198939865359615831 0.219856527512179711 0.198939865359615831 0.136262843363643138 0.0747507992749067013 0.0204814268338890694]
   * Referenced by: '<S1>/Digital Filter'
   */
  real_T DigitalFilter_Coefficients[9];
} ConstP_NAMO;

/* Real-time Model Data Structure */
struct tag_RTM_NAMO {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
extern B_NAMO NAMO_B;

/* Block states (default storage) */
extern DW_NAMO NAMO_DW;

/* Constant parameters (default storage) */
extern const ConstP_NAMO NAMO_ConstP;

/* Model entry point functions */
extern void NAMO_initialize(void);
extern void NAMO_step(void);

/* Real-time Model object */
extern RT_MODEL_NAMO *const NAMO_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Check Signal Attributes' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'NAMO'
 * '<S1>'   : 'NAMO/Digital Filter Design'
 * '<S2>'   : 'NAMO/Digital Filter Design/Check Signal Attributes'
 */
#endif                                 /* RTW_HEADER_NAMO_h_ */

/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] NAMO.h
 */
