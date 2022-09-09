/*
 * bit_manipulation.h
 *
 * Created: 9/5/2022 5:40:46 PM
 *  Author: Mahmoud
 */ 


#ifndef BIT_MANIPULATION_H_
#define BIT_MANIPULATION_H_

#define SET_BIT(Reg,n) Reg|=(1<<n)
#define CLR_BIT(Reg,n) Reg&=~(1<<n)
#define GET_BIT(Reg,n) ((Reg>>n)&1)
#define TOGG_BIT(Reg,n) Reg^=(1<<n)


#endif /* BIT_MANIPULATION_H_ */