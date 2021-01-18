/*
** GPIO_Driver 
** Eng: Ahmed Mohamed Elsmahy
** This Driver Written for STM32F103C8 Microcontroller
** For more info: whatsapp/ +201091822055
*/
#define GPIOA_base		(unsigned long)0x40010800
#define GPIOB_base		(unsigned long)0x40010C00
#define GPIOC_base		(unsigned long)0x40011000


#define GPIOA_CRL 		(*((volatile unsigned long*) (GPIOA_base+0x00)))
#define GPIOA_CRH 		(*((volatile unsigned long*) (GPIOA_base+0x04)))
#define GPIOA_IDR 		(*((volatile unsigned long*) (GPIOA_base+0x08)))
#define GPIOA_ODR 		(*((volatile unsigned long*) (GPIOA_base+0x0C)))
#define GPIOA_BSRR 		(*((volatile unsigned long*) (GPIOA_base+0x10)))
#define GPIOA_BRR 		(*((volatile unsigned long*) (GPIOA_base+0x14)))
#define GPIOA_LCKR 		(*((volatile unsigned long*) (GPIOA_base+0x18)))

#define GPIOB_CRL 		(*((volatile unsigned long*) (GPIOB_base+0x00)))
#define GPIOB_CRH 		(*((volatile unsigned long*) (GPIOB_base+0x04)))
#define GPIOB_IDR 		(*((volatile unsigned long*) (GPIOB_base+0x08)))
#define GPIOB_ODR 		(*((volatile unsigned long*) (GPIOB_base+0x0C)))
#define GPIOB_BSRR 		(*((volatile unsigned long*) (GPIOB_base+0x10)))
#define GPIOB_BRR 		(*((volatile unsigned long*) (GPIOB_base+0x14)))
#define GPIOB_LCKR 		(*((volatile unsigned long*) (GPIOB_base+0x18)))

#define GPIOC_CRL 		(*((volatile unsigned long*) (GPIOC_base+0x00)))
#define GPIOC_CRH 		(*((volatile unsigned long*) (GPIOC_base+0x04)))
#define GPIOC_IDR 		(*((volatile unsigned long*) (GPIOC_base+0x08)))
#define GPIOC_ODR 		(*((volatile unsigned long*) (GPIOC_base+0x0C)))
#define GPIOC_BSRR 		(*((volatile unsigned long*) (GPIOC_base+0x10)))
#define GPIOC_BRR 		(*((volatile unsigned long*) (GPIOC_base+0x14)))
#define GPIOC_LCKR 		(*((volatile unsigned long*) (GPIOC_base+0x18)))

#define RCC_base 			(unsigned long)0x40021000
#define RCC_APB2ENR 	(*((volatile unsigned long*)(RCC_base+0x18)))
#define RCC_APB2EN_GPIOA_KEY	0x0004
#define RCC_APB2EN_GPIOB_KEY	0x0008
#define RCC_APB2EN_GPIOC_KEY	0x0010

#define PA 				0
#define PB 				1
#define PC 				2

#define I 				0
#define O10 			1
#define O2 				2
#define O50 			3

#define I_AN			0
#define I_F				1
#define I_PP			2
#define RES				3


#define O_GP_PP		0
#define O_GP_OD		1
#define O_AF_PP		2
#define O_AF_OD		3


void GPIO_INIT(unsigned long port, unsigned long pin, unsigned long dir, unsigned long conf);
unsigned long R_PIN(unsigned long port, unsigned long pin);
void W_PIN(unsigned long port, unsigned long pin, unsigned long value);
void T_PIN(unsigned long port, unsigned long pin);
