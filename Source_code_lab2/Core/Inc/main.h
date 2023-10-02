/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#define col0_Pin GPIO_PIN_2
#define col0_GPIO_Port GPIOA
#define col1_Pin GPIO_PIN_3
#define col1_GPIO_Port GPIOA
#define dot_Pin GPIO_PIN_4
#define dot_GPIO_Port GPIOA
#define led_Pin GPIO_PIN_5
#define led_GPIO_Port GPIOA
#define en0_Pin GPIO_PIN_6
#define en0_GPIO_Port GPIOA
#define en1_Pin GPIO_PIN_7
#define en1_GPIO_Port GPIOA
#define a_Pin GPIO_PIN_0
#define a_GPIO_Port GPIOB
#define b_Pin GPIO_PIN_1
#define b_GPIO_Port GPIOB
#define c_Pin GPIO_PIN_2
#define c_GPIO_Port GPIOB
#define row2_Pin GPIO_PIN_10
#define row2_GPIO_Port GPIOB
#define row3_Pin GPIO_PIN_11
#define row3_GPIO_Port GPIOB
#define row4_Pin GPIO_PIN_12
#define row4_GPIO_Port GPIOB
#define row5_Pin GPIO_PIN_13
#define row5_GPIO_Port GPIOB
#define row6_Pin GPIO_PIN_14
#define row6_GPIO_Port GPIOB
#define row7_Pin GPIO_PIN_15
#define row7_GPIO_Port GPIOB
#define en2_Pin GPIO_PIN_8
#define en2_GPIO_Port GPIOA
#define en3_Pin GPIO_PIN_9
#define en3_GPIO_Port GPIOA
#define col2_Pin GPIO_PIN_10
#define col2_GPIO_Port GPIOA
#define col3_Pin GPIO_PIN_11
#define col3_GPIO_Port GPIOA
#define col4_Pin GPIO_PIN_12
#define col4_GPIO_Port GPIOA
#define col5_Pin GPIO_PIN_13
#define col5_GPIO_Port GPIOA
#define col6_Pin GPIO_PIN_14
#define col6_GPIO_Port GPIOA
#define col7_Pin GPIO_PIN_15
#define col7_GPIO_Port GPIOA
#define d_Pin GPIO_PIN_3
#define d_GPIO_Port GPIOB
#define e_Pin GPIO_PIN_4
#define e_GPIO_Port GPIOB
#define f_Pin GPIO_PIN_5
#define f_GPIO_Port GPIOB
#define g_Pin GPIO_PIN_6
#define g_GPIO_Port GPIOB
#define row0_Pin GPIO_PIN_8
#define row0_GPIO_Port GPIOB
#define row1_Pin GPIO_PIN_9
#define row1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
