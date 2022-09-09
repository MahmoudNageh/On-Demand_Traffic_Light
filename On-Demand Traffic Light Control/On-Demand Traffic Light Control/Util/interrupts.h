/*
 * interrupts.h
 *
 * Created: 9/5/2022 5:40:58 PM
 *  Author: Mahmoud
 */ 


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_

/************************************************************************/
/*						    Interrupt Bits Macros			    		*/
/************************************************************************/

// MCUCR
#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3

// MCUCSR
#define ISC2 6

// GICR
#define INT2 5
#define INT0 6
#define INT1 7

// GIFR
#define INTF2 5
#define INTF0 6
#define INTF1 7

// SREG
#define GIE 7

/************************************************************************/
/*							Interrupts	Vectors				     		*/
/************************************************************************/

#define EXT_INT_0		__vector_1
#define EXT_INT_1		__vector_2
#define EXT_INT_2		__vector_3
#define TIMER_2_COMP	__vector_4
#define TIMER_2_OVF		__vector_5
#define TIMER_1_CAPT	__vector_6
#define TIMER_1_COMPA	__vector_7
#define TIMER_1_COMPB	__vector_8
#define TIMER_1_OVF		__vector_9
#define TIMER0_COMP		__vector_10
#define TIMER0_OVF		__vector_11
#define STC				__vector_12
#define RXC				__vector_13
#define UDRE			__vector_14
#define TXC				__vector_15
#define ADC				__vector_16
#define EE_RDY			__vector_17
#define ANA_COMP		__vector_18
#define TWI				__vector_19
#define SPM_RDY			__vector_20

#define ISR(INT_VECT) void INT_VECT(void) __attribute__((signal,used));\
void INT_VECT(void)


#endif /* INTERRUPTS_H_ */