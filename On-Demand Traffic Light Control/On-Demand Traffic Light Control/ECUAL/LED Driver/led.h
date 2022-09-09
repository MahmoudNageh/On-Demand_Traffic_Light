/*
 * led.h
 *
 * Created: 9/5/2022 5:39:48 PM
 *  Author: Mahmoud
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO Driver/dio.h"


/************************************************************************/
/*						All Driver Function Prototypes                  */
/************************************************************************/

/* Description	: LED PIN Initialization 
 * INPUTS		: (2) 8-bit Inputs: PIN Number, PORT Number
 * RETURN		: non return void ( Will be set for Error Handling in the future )
 */
void LED_init(uint8_t ledPin, uint8_t ledPort);


/* Description	: LED PIN Turn On 
 * INPUTS		: (2) 8-bit Inputs: PIN Number, PORT Number
 * RETURN		: non return void ( Will be set for Error Handling in the future )
 */
void LED_on(uint8_t ledPin, uint8_t ledPort);


/* Description	: LED PIN Turn Off
 * INPUTS		: (2) 8-bit Inputs: PIN Number, PORT Number
 * RETURN		: non return void ( Will be set for Error Handling in the future )
 */
void LED_off(uint8_t ledPin, uint8_t ledPort);


/* Description	: LED PIN Toggle 
 * INPUTS		: (2) 8-bit Inputs: PIN Number, PORT Number
 * RETURN		: non return void ( Will be set for Error Handling in the future )
 */
void LED_toggle(uint8_t ledPin, uint8_t ledPort);


#endif /* LED_H_ */