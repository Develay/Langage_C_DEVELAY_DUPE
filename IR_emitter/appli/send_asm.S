.syntax unified
.cpu cortex-m3
.fpu softvfp
.thumb

.data

	.equ BIT_TIME,	...
	.equ NB_BITS,	8

.text

.global send_asm
send_asm:
	//R0: parameter 1: GPIO BSRR register address
	//R1: parameter 2: GPIO_PIN_X: Pin is set by writing this value with BSRR
	//R2: parameter 3: Byte to send
	LSL R3, ..., ...	//we will use R3 to store the value to write to BSRR to reset the pin, same as to set but on bit 16 to 31
	...					//R4 will count remaining bits to process
	...					//R5 will be used as bitmask to test bit values, starting with a mask for bit 0
	loop:
		MOV R6, ...		//R6 will count down the delay BIT_TIME
		TST R2, R5
		... write0		//jump to write0 if current bit is O, else continue to write1
		write1:
			STR ..., [R0]	//bit high: set pin
			B delay
		write0:
			STR ..., [R0]	//bit low: reset pin
			B delay
		delay:
			...				//Count down bit time
			BNE delay
		...					//shift bitmask to next bit
		...					//Decrease remaining bits counter
		BNE loop			//Loop if bit counter is different from 0
	BX LR						//return
