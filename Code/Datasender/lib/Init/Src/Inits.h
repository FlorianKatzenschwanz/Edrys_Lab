#include "main.h"
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_can.h"
#include "stm32f4xx_hal_i2s.h"
#include "stm32f4xx_hal_uart.h"


extern CAN_HandleTypeDef hcan1;
extern I2S_HandleTypeDef hi2s1;
extern UART_HandleTypeDef huart3;
extern CAN_FilterTypeDef sFilterConfig;
extern CAN_RxHeaderTypeDef RXHeader;
extern IWDG_HandleTypeDef hiwdg;


void Initialize(void);
void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan);
void SystemClock_Config(void);
void MX_CAN1_Init(void);
void MX_I2S1_Init(void);
void MX_IWDG_Init(void);
void MX_USART3_UART_Init(void);
void MX_GPIO_Init(void);
