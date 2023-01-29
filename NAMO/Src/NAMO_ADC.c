/*
 * File: NAMO_ADC.c
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

#include "NAMO.h"
#include "NAMO_ADC.h"

/* Pointer to ADC informations. */
ADC_ConfTypeDef* G_ADC_Conf;

/* Pointer to ADC handler. */
ADC_HandleTypeDef* G_ADC_Handler;

/* ADC1 Regular channel Converted value buffer */
uint16_t ADC1_RegularConvertedValue[1];

/* ADC1 informations. */
ADC_ConfTypeDef ADC1_Conf = {
  /* Regular channels. */
  NULL, 0, 0,

  /* Injected channels. */
  NULL, 0, ADC_INJECTED_RANK_1,

  /* Dma. */
  0, false,

  /* End of conversion. */
  false,

  /* Interrupts callbacks. */
  NULL, NULL, NULL, NULL, NULL, NULL
};

/* ADC1 polling timeout value. Number of Solver loop. (can be changed)*/
uint32_t G_ADC1_PollTimeOut = 10;

/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] NAMO_ADC.c
 */
