#include "systick_hdr.h"
#include "GP_Driver.h"
//#include "stm32f10x.h"                  // Device header



int main(void){
	GPIO_INIT(PA,0, O50, O_GP_PP);
	
	__disable_irq();
	SYSTICK_INIT(72000-1, FCLK, INT);
	__enable_irq();


	while(1){
		
		
	}
}

void SysTick_Handler(void){
	T_PIN(PA,0);
}
