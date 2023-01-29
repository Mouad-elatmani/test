/*
 * File: NAMO.c
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
#include "NAMO_private.h"

/* Block signals (default storage) */
B_NAMO NAMO_B;

/* Block states (default storage) */
DW_NAMO NAMO_DW;

/* Real-time model */
static RT_MODEL_NAMO NAMO_M_;
RT_MODEL_NAMO *const NAMO_M = &NAMO_M_;

/* Model step function */
void NAMO_step(void)
{
  real_T acc1;
  real_T zCurr;
  real_T zNext;
  int32_T n;

  {
    uint16_t i;

    /* Read regular ADC1 value */
    for (i=0; i<1; i++) {
      if (HAL_ADC_PollForConversion(&hadc1, G_ADC1_PollTimeOut) == HAL_OK) {
        ADC1_RegularConvertedValue[i] = (uint16_t)HAL_ADC_GetValue(&hadc1);
      }
    }
  }

  /* Get regular rank1 output value from ADC1 regular value buffer */
  NAMO_B.ADC_Read = ADC1_RegularConvertedValue[0];

  /* Re-Start ADC1 conversion */
  HAL_ADC_Start(&hadc1);
  acc1 = 0.0;

  /* load input sample */
  zNext = NAMO_B.ADC_Read;
  for (n = 0; n < 8; n++) {
    /* shift state */
    zCurr = zNext;
    zNext = NAMO_DW.DigitalFilter_states[n];
    NAMO_DW.DigitalFilter_states[n] = zCurr;

    /* compute one tap */
    acc1 += NAMO_ConstP.DigitalFilter_Coefficients[n] * zCurr;
  }

  /* compute last tap */
  /* store output sample */
  acc1 = floor(NAMO_ConstP.DigitalFilter_Coefficients[n] * zNext + acc1);
  if (rtIsNaN(acc1) || rtIsInf(acc1)) {
    acc1 = 0.0;
  } else {
    acc1 = fmod(acc1, 65536.0);
  }

  NAMO_B.DataTypeConversion = (uint16_T)(acc1 < 0.0 ? (int32_T)(uint16_T)
    -(int16_T)(uint16_T)-acc1 : (int32_T)(uint16_T)acc1);

  {
    HAL_DAC_SetValue(&hdac, DAC_CHANNEL_1, DAC_ALIGN_12B_R,
                     NAMO_B.DataTypeConversion);
    HAL_DAC_Start(&hdac, DAC_CHANNEL_1);
  }
}

/* Model initialize function */
void NAMO_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* user code (Start function Header) */
    {
      /* ADC1 initialization. */
      /* Store ADC1 informations and its handler. */
      G_ADC_Conf = &ADC1_Conf;
      G_ADC_Handler = &hadc1;
      ADC1_Conf.regularBuffer = ADC1_RegularConvertedValue;
      ADC1_Conf.regularCount = 1;
    }

    {
      /* DAC initialization */
      /* Store DAC data information and its handler */
      G_DAC_Conf = &DAC_Conf;
      G_DAC_Handler = &hdac;

      /* Interrupt vector initialization */
      DAC_Conf.CpltTrans = NULL;
      DAC_Conf.HalfTrans = NULL;
      DAC_Conf.ErrorIt = NULL;
      DAC_Conf.UnderIt = NULL;
    }

    /* user code (Start function Body) */
    {
      /* ADC1 Start. */
      /* Start ADC1 conversion. */
      HAL_ADC_Start(&hadc1);
    }

    {
    }
  }
}

/* File trailer for Real-Time Workshop generated code.
 *
 * [EOF] NAMO.c
 */
