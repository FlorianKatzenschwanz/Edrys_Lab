#include "main.h"
#include "../lib/Init/Src/Inits.h"

int main(void)
{

 Initialize();

  int16_t signal[10];
  int nsamples = sizeof(signal) / sizeof(signal[0]);
  signal[0] = 0;
  signal[1] = 32767;
  signal[2] = 0;
  signal[3] = -32768;

  uint16_t id = 0x600;
  signal[4] = id;
  signal[5] = 100;
  signal[6] = 200;
  signal[7] = 1000;
  signal[8] = 20000;

  while (1)
  {

	  HAL_I2S_Transmit(&hi2s1, (uint16_t*)signal, nsamples, 1000);
    HAL_IWDG_Refresh(&hiwdg);
	  }
}

void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}