#include "systick_hdr.h"


void SYSTICK_INIT(unsigned long initval,unsigned short speed, unsigned short interrupt){
	SysTick_CTRL = 0x00;
	SysTick_LOAD = initval;
	SysTick_VAL = 0x00;
	SysTick_CTRL |= 0x01 + ( interrupt << 1) + (speed << 2);
}
void SYSTICK_START(){
	SysTick_CTRL |= 0x01;
}
void SYSTICK_STOP(){
	SysTick_CTRL &= ~0x01;
}
unsigned long SYSTICK_VAL(){
	return SysTick_VAL & 0x00FFFFFF;
}

void SYSTICK_DELAYms(unsigned short n){
	for(; n > 0; n--){
		SYSTICK_INIT(72000,FCLK,NO_INT);//1ms delay
		while(!(SysTick_CTRL & 0x10000));
	}
}
