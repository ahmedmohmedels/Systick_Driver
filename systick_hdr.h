#define SysTick_base		(unsigned long)0xE000E010
#define	SysTick_CTRL		(*((volatile unsigned long*)(SysTick_base + 0x00)))
#define	SysTick_LOAD		(*((volatile unsigned long*)(SysTick_base + 0x04)))
#define	SysTick_VAL			(*((volatile unsigned long*)(SysTick_base + 0x08)))

//speed
#define FCLK			1
#define FCLK_8		0

//interrupt
#define NO_INT	0
#define INT			1




void SYSTICK_INIT(unsigned long initval,unsigned short speed, unsigned short interrupt);
void SYSTICK_START();
void SYSTICK_STOP();
unsigned long SYSTICK_VAL();

void SYSTICK_DELAYms(unsigned short n);
