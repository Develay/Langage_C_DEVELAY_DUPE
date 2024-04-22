/**
  ******************************************************************************
  * @file    main.c
  * @author  Nirgal
  * @date    03-July-2019
  * @brief   Default main function.
  ******************************************************************************
*/
#include "stm32f1xx_hal.h"
#include "stm32f1_sys.h"
#include "macro_types.h"
#include "stm32f1_gpio.h"

int main(void)
{
	//Initialisation de la couche logicielle HAL (Hardware Abstraction Layer)
	//Cette ligne doit rester la première étape de la fonction main().
	HAL_Init();

	//Initialisation UART2
	UART_init(UART2_ID,115200);

	//Initialisation du port du bouton bleu (carte Nucleo)
	BSP_GPIO_PinCfg(BLUE_BUTTON_GPIO, BLUE_BUTTON_PIN, GPIO_MODE_INPUT, GPIO_PULLUP, GPIO_SPEED_FREQ_HIGH);

	//Création de l'émetteur IR

	//Démarrage de l'émetteur

	while(1)
	{
		//Si appui sur le bouton on allume l'émetteur
		if( !HAL_GPIO_ReadPin(BLUE_BUTTON_GPIO,BLUE_BUTTON_PIN) )
		{

		}

		//Si on reçoit une donnée, on l'envoi via l'émetteur
		if( UART_data_ready(UART2_ID) )
		{

		}
	}
}
