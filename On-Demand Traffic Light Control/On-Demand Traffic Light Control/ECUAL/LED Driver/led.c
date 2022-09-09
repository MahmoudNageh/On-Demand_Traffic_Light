/*
 * led.c
 *
 * Created: 9/5/2022 5:39:42 PM
 *  Author: Mahmoud
 */ 

#include "led.h"

/************************************************************************/
/*			Function Definitions                            */
/************************************************************************/

/* Description	: LED PIN Initialization 
 * INPUTS		: (2) 8-bit Inputs: PIN Number, PORT Number
 * RETURN		: non return void ( Will be set for Error Handling in the future )
 */
void LED_init(uint8_t ledPin, uint8_t ledPort)
{
	DIO_init(ledPin, ledPort, OUTPUT);
}


/* Description	: LED PIN Turn On 
 * INPUTS		: (2) 8-bit Inputs: PIN Number, PORT Number
 * RETURN		: non return void ( Will be set for Error Handling in the future )
 */
void LED_on(uint8_t ledPin, uint8_t ledPort)
{
	DIO_write(ledPin, ledPort, HIGH);
}


/* Description	: LED PIN Turn Off
 * INPUTS		: (2) 8-bit Inputs: PIN Number, PORT Number
 * RETURN		: non return void ( Will be set for Error Handling in the future )
 */
void LED_off(uint8_t ledPin, uint8_t ledPort)
{
	DIO_write(ledPin, ledPort, LOW);
}


/* Description	: LED PIN Toggle 
 * INPUTS		: (2) 8-bit Inputs: PIN Number, PORT Number
 * RETURN		: non return void ( Will be set for Error Handling in the future )
 */
void LED_toggle(uint8_t ledPin, uint8_t ledPort)
{
	DIO_toggle(ledPin, ledPort);
}
