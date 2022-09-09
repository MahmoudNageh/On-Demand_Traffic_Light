/*
 * button.c
 *
 * Created: 9/5/2022 5:39:07 PM
 *  Author: Mahmoud
 */ 

#include "button.h"

/************************************************************************/
/*			Function Definitions                            */
/************************************************************************/

/* Description	: Button PIN Direction Initialization 
 * INPUTS		: (2) 8-bit Inputs: PIN Number, PORT Number
 * RETURN		: non return void ( Will be set for Error Handling in the future )
 */
void BUTTON_init(uint8_t buttonPin, uint8_t buttonPort)
{
	DIO_init(buttonPin,buttonPort, INPUT);
}


/* Description	: Button Read PIN Value 
 * INPUTS		: (2) 8-bit Inputs: PIN Number, PORT Number --- (1) 8-bit Pointer: Value
 * RETURN		: non return void ( Will be set for Error Handling in the future )
 */
void BUTTON_read(uint8_t buttonPin, uint8_t buttonPort, uint8_t *value)
{
	DIO_read(buttonPin, buttonPort, value);
}
