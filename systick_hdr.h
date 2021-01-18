/*
** SysTick_Driver 
** Eng: Ahmed Mohamed Elsmahy
** This Driver Written for STM32F103C8 Microcontroller
** For more info: whatsapp/ +201091822055
*/

#define uint_32					 unsigned long
#define SysTick_base		(uint_32)0xE000E010
#define	SysTick_CTRL		(*((volatile uint_32*)(SysTick_base + 0x00)))
#define	SysTick_LOAD		(*((volatile uint_32*)(SysTick_base + 0x04)))
#define	SysTick_VAL			(*((volatile uint_32*)(SysTick_base + 0x08)))

//speed
#define FCLK			1
#define FCLK_8		0

//interrupt
#define NO_INT	0
#define INT			1


void SYSTICK_INIT(uint_32 initval,unsigned short speed, unsigned short interrupt);
void SYSTICK_START();
void SYSTICK_STOP();
uint_32 SYSTICK_VAL();

void SYSTICK_DELAYms(unsigned short n);
