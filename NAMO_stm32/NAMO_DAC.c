/*
 * File: NAMO_DAC.c
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
#include "NAMO_DAC.h"

/* DAC information */
DAC_ConfTypeDef* G_DAC_Conf;

/* DAC handler */
DAC_HandleTypeDef* G_DAC_Handler;

/* DAC information */
DAC_ConfTypeDef DAC_Conf;

/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] NAMO_DAC.c
 */