/*
 * IR_emitter.c
 *
 *  Created on: 19 Apr. 2024
 *      Author: jjousse
 */


#include "IR_emitter.h"

// PRIVATE TYPES ---------------------------------------------------------------



// PRIVATE FUNCTIONS DECLARATIONS ----------------------------------------------



extern void send_asm(uint32_t * gpiox_bsrr, uint32_t gpio_pin_x, uint32_t send_buffer);

// PRIVATE CONSTANTS -----------------------------------------------------------



// PRIVATE FUNCTIONS DEFINITIONS -----------------------------------------------

// Action functions ************************************************************


// *****************************************************************************

void run(IR_emitter *this, Event event)
{

}

// PUBLIC FUNCTIONS DEFINITIONS ------------------------------------------------

extern IR_emitter *IR_emitter_new(GPIO_TypeDef * GPIO_port, uint16_t GPIO_pin)
{
	IR_emitter *this;
	this = ...

	this->state = ...
	this->gpio = ...
	this->pin = ...
	this->send_buffer = 0;

	return this;
}


