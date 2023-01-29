/*
 * File: NAMO_DAC.h
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

#ifndef RTW_HEADER_NAMO_DAC_h_
#define RTW_HEADER_NAMO_DAC_h_
#include "STM32_Config.h"

/**
 * @brief  DAC information
 */
typedef struct {
  void (* CpltTrans)(void);
  void (* HalfTrans)(void);
  void (* ErrorIt)(void);
  void (* UnderIt)(void);
} DAC_ConfTypeDef;

/* DAC informations */
extern DAC_ConfTypeDef* G_DAC_Conf;

/* DAC handler */
extern DAC_HandleTypeDef* G_DAC_Handler;

/* DAC handler declarations. */
extern DAC_HandleTypeDef hdac;

/* DAC information */
extern DAC_ConfTypeDef DAC_Conf;

#endif                                 /* RTW_HEADER_NAMO_DAC_h_ */

/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] NAMO_DAC.h
 */
