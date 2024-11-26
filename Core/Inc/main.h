/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LCD_DB0_Pin GPIO_PIN_0
#define LCD_DB0_GPIO_Port GPIOA
#define LCD_DB1_Pin GPIO_PIN_1
#define LCD_DB1_GPIO_Port GPIOA
#define LCD_DB2_Pin GPIO_PIN_2
#define LCD_DB2_GPIO_Port GPIOA
#define LCD_DB3_Pin GPIO_PIN_3
#define LCD_DB3_GPIO_Port GPIOA
#define LCD_DB4_Pin GPIO_PIN_4
#define LCD_DB4_GPIO_Port GPIOA
#define LCD_DB5_Pin GPIO_PIN_5
#define LCD_DB5_GPIO_Port GPIOA
#define LCD_DB6_Pin GPIO_PIN_6
#define LCD_DB6_GPIO_Port GPIOA
#define LCD_DB7_Pin GPIO_PIN_7
#define LCD_DB7_GPIO_Port GPIOA
#define load_cell_Pin GPIO_PIN_0
#define load_cell_GPIO_Port GPIOB
#define mode_set_Pin GPIO_PIN_2
#define mode_set_GPIO_Port GPIOB
#define mode_set_EXTI_IRQn EXTI2_IRQn
#define LCD_RS_Pin GPIO_PIN_12
#define LCD_RS_GPIO_Port GPIOB
#define LCD_RW_Pin GPIO_PIN_13
#define LCD_RW_GPIO_Port GPIOB
#define LCD_E_Pin GPIO_PIN_14
#define LCD_E_GPIO_Port GPIOB
#define inc_Pin GPIO_PIN_3
#define inc_GPIO_Port GPIOB
#define inc_EXTI_IRQn EXTI3_IRQn
#define dec_Pin GPIO_PIN_4
#define dec_GPIO_Port GPIOB
#define dec_EXTI_IRQn EXTI4_IRQn

/* USER CODE BEGIN Private defines */


/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
