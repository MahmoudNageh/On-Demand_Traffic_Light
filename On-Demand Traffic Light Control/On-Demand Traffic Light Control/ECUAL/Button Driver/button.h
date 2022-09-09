/*
 * button.h
 *
 * Created: 9/5/2022 5:38:53 PM
 *  Author: Mahmoud
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO Driver/dio.h"

// Button State Macros
#define LOW		0
#define HIGH	1

/************************************************************************/
/*						All Driver Function Prototypes                  */
/************************************************************************/

/* Description	: Button PIN Direction Initialization 
 * INPUTS		: (2) 8-bit Inputs: PIN Number, PORT Number
 * RETURN		: non return void ( Will be set for Error Handling in the future )
 */
void BUTTON_init(uint8_t buttonPin, uint8_t buttonPort);


/* Description	: Button Read PIN Value 
 * INPUTS		: (2) 8-bit Inputs: PIN Number, PORT Number --- (1) 8-bit Pointer: Value
 * RETURN		: non return void ( Will be set for Error Handling in the future )
 */
void BUTTON_read(uint8_t buttonPin, uint8_t buttonPort, uint8_t *value);


#endif /* BUTTON_H_ */