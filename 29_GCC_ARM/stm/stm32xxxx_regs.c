#define SCB_CPACR		0xE000ED88	//##FPU enable
#define	SCR				0xE000ED10	//low power modes flags
#define	SYST_CSR		0xE000E010	//SysTick
#define	SYST_RVR		0xE000E014
#define	SYST_CVR		0xE000E018	

#if 									(defined STM32F411)
	//====	STM32F413
	//RCC
	#define	RCC_CR			0x40023800
	#define RCC_PLLCFGR		0x40023804
	#define RCC_CFGR		0x40023808
	#define	RCC_CIR			0x4002380C
	#define	RCC_AHB1RSTR	0x40023810
	#define	RCC_AHB2RSTR	0x40023814
	#define	RCC_AHB3RSTR	0x40023818
	#define	RCC_APB1RSTR	0x40023820
	#define	RCC_APB2RSTR	0x40023824
	#define	RCC_AHB1ENR		0x40023830
	#define	RCC_AHB2ENR		0x40023834
	#define	RCC_AHB3ENR		0x40023838
	#define	RCC_APB1ENR		0x40023840
	#define	RCC_APB2ENR		0x40023844
	#define	RCC_AHB1LPENR	0x40023850
	#define	RCC_AHB2LPENR	0x40023854
	#define	RCC_AHB3LPENR	0x40023858
	#define	RCC_APB1LPENR	0x40023860
	#define	RCC_APB2LPENR	0x40023864
	#define	RCC_BDCR		0x40023870
	#define	RCC_CSR			0x40023874
	#define	RCC_SSCGR		0x40023880
	#define	RCC_PLLI2CFGR	0x40023884
	#define	RCC_DCKCFGR		0x4002388C
	#define	RCC_CKGATENR	0x40023890
	#define	RCC_DCKCFGR2	0x40023894	
	//GPIOA
	#define GPIOA_MODER 	0x40020000  
	#define GPIOA_OTYPER	0x40020004
	#define GPIOA_OSPEEDR	0x40020008
	#define GPIOA_PUPDR		0x4002000C 
	#define GPIOA_IDR		0x40020010
	#define GPIOA_ODR		0x40020014  
	#define	GPIOA_BSRR		0x40020018
	#define	GPIOA_LCKR		0x4002001C
	#define	GPIOA_AFRL		0x40020020
	#define	GPIOA_AFRH		0x40020024
	//GPIOB
	#define	GPIOB_MODER		0x40020400
	#define GPIOB_OTYPER	0x40020404
	#define GPIOB_OSPEEDR	0x40020408
	#define GPIOB_PUPDR		0x4002040C 
	#define GPIOB_IDR		0x40020410
	#define GPIOB_ODR		0x40020414  
	#define	GPIOB_BSRR		0x40020418
	#define	GPIOB_LCKR		0x4002041C
	#define	GPIOB_AFRL		0x40020420
	#define	GPIOB_AFRH		0x40020424
	//GPIOC
	#define GPIOC_MODER 	0x40020800 
	#define GPIOC_OTYPER	0x40020804
	#define GPIOC_OSPEEDR	0x40020808
	#define GPIOC_PUPDR		0x4002080C 
	#define GPIOC_IDR		0x40020810
	#define GPIOC_ODR		0x40020814  
	#define	GPIOC_BSRR		0x40020818
	#define	GPIOC_LCKR		0x4002081C
	#define	GPIOC_AFRL		0x40020820
	#define	GPIOC_AFRH		0x40020824
	//GPIOD
	#define GPIOD_MODER		0x40020C00
	#define GPIOD_OTYPER	0x40020C04
	#define GPIOD_OSPEEDR	0x40020C08
	#define GPIOD_PUPDR		0x40020C0C 
	#define GPIOD_IDR		0x40020C10
	#define GPIOD_ODR		0x40020C14  
	#define	GPIOD_BSRR		0x40020C18
	#define	GPIOD_LCKR		0x40020C1C
	#define	GPIOD_AFRL		0x40020C20
	#define	GPIOD_AFRH		0x40020C24
	//GPIOE
	#define	GPIOE_MODER		0x40021000
	#define GPIOE_OTYPER	0x40021004
	#define GPIOE_OSPEEDR	0x40021008
	#define GPIOE_PUPDR		0x4002100C 
	#define GPIOE_IDR		0x40021010
	#define GPIOE_ODR		0x40021014  
	#define	GPIOE_BSRR		0x40021018
	#define	GPIOE_LCKR		0x4002101C
	#define	GPIOE_AFRL		0x40021020
	#define	GPIOE_AFRH		0x40021024
	//GPIOF
	#define	GPIOF_MODER		0x40021400
	#define GPIOF_OTYPER	0x40021404
	#define GPIOF_OSPEEDR	0x40021408
	#define GPIOF_PUPDR		0x4002140C 
	#define GPIOF_IDR		0x40021410
	#define GPIOF_ODR		0x40021414  
	#define	GPIOF_BSRR		0x40021418
	#define	GPIOF_LCKR		0x4002141C
	#define	GPIOF_AFRL		0x40021420
	#define	GPIOF_AFRH		0x40021424
	//GPIOG
	#define	GPIOG_MODER		0x40021800
	#define GPIOG_OTYPER	0x40021804
	#define GPIOG_OSPEEDR	0x40021808
	#define GPIOG_PUPDR		0x4002180C 
	#define GPIOG_IDR		0x40021810
	#define GPIOG_ODR		0x40021814  
	#define	GPIOG_BSRR		0x40021818
	#define	GPIOG_LCKR		0x4002181C
	#define	GPIOG_AFRL		0x40021820
	#define	GPIOG_AFRH		0x40021824
	//GPIOH
	#define	GPIOH_MODER		0x40021C00
	#define GPIOH_OTYPER	0x40021C04
	#define GPIOH_OSPEEDR	0x40021C08
	#define GPIOH_PUPDR		0x40021C0C 
	#define GPIOH_IDR		0x40021C10
	#define GPIOH_ODR		0x40021C14  
	#define	GPIOH_BSRR		0x40021C18
	#define	GPIOH_LCKR		0x40021C1C
	#define	GPIOH_AFRL		0x40021C20
	#define	GPIOH_AFRH		0x40021C24
	//FLASH
	#define	FLASH_ACR		0x40023C00
	#define	FLASH_KEYR		0x40023C04
		#define FLASH_KEY1		0x45670123
		#define FLASH_KEY2		0xCDEF89AB
	#define	FLASH_OPTKEYR	0x40023C08
		#define FLASH_OPT_KEY1	0x08192A3B
		#define FLASH_OPT_KEY2	0x4C5D6E7F
	#define	FLASH_SR		0x40023C0C
	#define	FLASH_CR		0x40023C10
	#define	FLASH_OPTCR		0x40023C14
#endif

#define	S0				0x00000001	//set bit
#define	S1				0x00000002
#define	S2				0x00000004
#define	S3				0x00000008
#define	S4				0x00000010
#define	S5				0x00000020
#define	S6				0x00000040
#define	S7				0x00000080
#define	S8				0x00000100
#define	S9				0x00000200
#define	S10				0x00000400
#define	S11				0x00000800
#define	S12				0x00001000
#define	S13				0x00002000
#define	S14				0x00004000
#define	S15				0x00008000
#define	S16				0x00010000
#define	S17				0x00020000
#define	S18				0x00040000
#define	S19				0x00080000
#define	S20				0x00100000
#define	S21				0x00200000
#define	S22				0x00400000
#define	S23				0x00800000
#define	S24				0x01000000
#define	S25				0x02000000
#define	S26				0x04000000
#define	S27				0x08000000
#define	S28				0x10000000
#define	S29				0x20000000
#define	S30				0x40000000
#define	S31				0x80000000
#define	R0				0xFFFFFFFE	//reset bit
#define	R1				0xFFFFFFFD
#define	R2				0xFFFFFFFB
#define	R3				0xFFFFFFF7
#define	R4				0xFFFFFFEF
#define	R5				0xFFFFFFDF
#define	R6				0xFFFFFFBF
#define	R7				0xFFFFFF7F
#define	R8				0xFFFFFEFF
#define	R9				0xFFFFFDFF
#define	R10				0xFFFFFBFF
#define	R11				0xFFFFF7FF
#define	R12				0xFFFFEFFF
#define	R13				0xFFFFDFFF
#define	R14				0xFFFFBFFF
#define	R15				0xFFFF7FFF
#define	R16				0xFFFEFFFF
#define	R17				0xFFFDFFFF
#define	R18				0xFFFBFFFF
#define	R19				0xFFF7FFFF
#define	R20				0xFFEFFFFF
#define	R21				0xFFDFFFFF
#define	R22				0xFFBFFFFF
#define	R23				0xFF7FFFFF
#define	R24				0xFEFFFFFF
#define	R25				0xFDFFFFFF
#define	R26				0xFBFFFFFF
#define	R27				0xF7FFFFFF
#define	R28				0xEFFFFFFF
#define	R29				0xDFFFFFFF
#define	R30				0xBFFFFFFF
#define	R31				0x7FFFFFFF
