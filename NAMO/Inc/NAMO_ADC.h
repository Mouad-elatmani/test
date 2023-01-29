/*
 * File: NAMO_ADC.h
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

#ifndef RTW_HEADER_NAMO_ADC_h_
#define RTW_HEADER_NAMO_ADC_h_
#include "STM32_Config.h"
#define ADC1_DMA_BUFF_SIZE             0

/**
 * @brief  ADC information
 */
typedef struct {
  uint16_t* regularBuffer;           /*!< Regular buffer for converted value. */
  uint32_t regularCount;               /*!< Number of regular channel. */
  uint32_t regularRank;                /*!< Regular current rank. */
  uint16_t* injectedBuffer;         /*!< Injected buffer for converted value. */
  uint32_t injectedCount;              /*!< Number of injected channel. */
  uint32_t injectedRank;               /*!< Injected current rank. */
  uint32_t dmaBuffSize;                /*!< Buffer size for DMA acquisition. */
  uint8_t dmaUsed;                     /*!< DMA acquisition mode. */
  uint8_t IntEndOfAllConv;       /*!< EOS/JEOS Int at end of all conversions. */
  void (* ItEOCFcn)(void);
  void (* ItJEOCFcn)(void);
  void (* ItAWDFcn)(void);
  void (* ItOVRFcn)(void);
  void (* ItDMAFullFcn)(void);
  void (* ItDMAHalfFullFcn)(void);
} ADC_ConfTypeDef;

/* Pointer to ADC informations. */
extern ADC_ConfTypeDef* G_ADC_Conf;

/* Pointer to ADC handler. */
extern ADC_HandleTypeDef* G_ADC_Handler;

/* ADC1 handler. */
extern ADC_HandleTypeDef hadc1;

/* ADC1 Regular channel Converted value buffer */
extern uint16_t ADC1_RegularConvertedValue[1];

/* ADC1 informations. */
extern ADC_ConfTypeDef ADC1_Conf;

/* ADC1 polling timeout value. Number of Solver loop. (can be changed)*/
extern uint32_t G_ADC1_PollTimeOut;

#endif                                 /* RTW_HEADER_NAMO_ADC_h_ */

/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] NAMO_ADC.h
 */
