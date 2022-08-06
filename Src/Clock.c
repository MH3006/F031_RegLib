/* CONSTANT DEFINITIONS **********************************************/

/* Base address of RCC registers */
#define RCC_BASE 0x40021000

/* Address offsets of RCC registers from base address */
#define RCC_CR_OFFSET       0x00 // Control register 1
#define RCC_CFGR_OFFSET     0x04 // Configuration register 1
#define RCC_CIR_OFFSET      0x08 // Interrupt register
#define RCC_APB2RSTR_OFFSET 0x0C // APB peripheral reset register 2
#define RCC_APB1RSTR_OFFSET 0x10 // APB peripheral reset register 1
#define RCC_AHBENR_OFFSET   0x14 // AHB peripheral clock enable register
#define RCC_APB2ENR_OFFSET  0x18 // APB peripheral clock enable register 2
#define RCC_APB1ENR_OFFSET  0x1C // APB peripheral clock enable register 1
#define RCC_BDCR_OFFSET     0x20 // RTC domain control register
#define RCC_CSR_OFFSET      0x24 // Control/status register
#define RCC_AHBRSTR         0x28 // AHB peripheral reset register
#define RCC_CFGR2_OFFSET    0x2C // Configuration register 2
#define RCC_CFGR3_OFFSET    0x30 // Configuration register 3
#define RCC_CR2_OFFSET      0x34 // Control register 2

/* Register bit values/masks */

/* CR Register */

/* HSI On */
#define RCC_CR_HSION_OFFSET 1
#define RCC_CR_HSION (1 << RCC_CR_HSION_OFFSET)

/* HSI Ready */
#define RCC_CR_HSIRDY_OFFSET 2
#define RCC_CR_HSIRDY (1 << RCC_CR_HSIRDY_OFFSET)

/* HSI Trim */ 
#define RCC_CR_HSITRIM_OFFSET 3
#define RCC_CR_HSITRIM_MASK (0xF << RCC_CR_HSITRIM_OFFSET)

/* HSI Cal */
#define RCC_CR_HSICAL_OFFSET 8
#define RCC_CR_HSICAL_MASK (0xFF << RCC_CR_HSICAL_OFFSET)

/* HSE On */
#define RCC_CR_HSEON_OFFSET 16
#define RCCC_CR_HSEON (1 << RCC_CR_HSEON_OFFSET)

/* HSE Ready */
#define RCC_CR_HSERDY_OFFSET 17
#define RCC_CR_HSERDY (1 << RCC_CR_HSERDY_OFFSET)

/* HSE Bypass */
#define RCC_CR_HSEBYP_OFFSET 18
#define RCC_CR_HSEBYP (1 << RCC_CR_HSEBYP_OFFSET)

/* PLL On */
#define RCC_CR_PLLON_OFFSET 24
#define RCC_CR_PLLON (1 << RCC_CR_PLLON_OFFSET)

/* PLL Ready */
#define RCC_CR_PLLRDY_OFFSET 25
#define RCC_CR_PLLRDY (1 << RCC_CR_PLLRDY_OFFSET)

/* APB1ENR Register */

/* TIM2 Enable */
#define RCC_APB1ENR_TIM2EN_OFFSET 0
#define RCC_APB1ENR_TIM2EN (1 << RCC_APB1ENR_TIM2EN_OFFSET)

/* TIM3 Enable */
#define RCC_APB1ENR_TIM3EN_OFFSET 1
#define RCC_APB1ENR_TIM3EN (1 << RCC_APB1ENR_TIM3EN_OFFSET)

/* TIM6 Enable */
#define RCC_APB1ENR_TIM6EN_OFFSET 4
#define RCC_APB1ENR_TIM6EN (1 << RCC_APB1ENR_TIM6EN_OFFSET)

/* TIM7 Enable */
#define RCC_APB1ENR_TIM7EN_OFFSET 5
#define RCC_APB1ENR_TIM7EN (1 << RCC_APB1ENR_TIM7EN_OFFSET)

/* TIM14 Enable */
#define RCC_APB1ENR_TIM14EN_OFFSET 8
#define RCC_APB1ENR_TIM14EN (1 << RCC_APB1ENR_TIM14EN_OFFSET)

/* WWDG Enable */
#define RCC_APB1ENR_WWDGEN_OFFSET 11
#define RCC_APB1ENR_WWDGEN (1 << RCC_APB1ENR_WWDGEN_OFFSET)

/* SPI2 Enable */
#define RCC_APB1ENR_SPI2EN_OFFSET 14
#define RCC_APB1ENR_SPI2EN (1 << RCC_APB1ENR_SPI2EN_OFFSET)

/* USART2 Enable */
#define RCC_APB1ENR_USART2EN_OFFSET 17
#define RCC_APB1ENR_USART2EN (1 << RCC_APB1ENR_USART2EN_OFFSET)

/* USART3 Enable */
#define RCC_APB1ENR_USART3EN_OFFSET 18
#define RCC_APB1ENR_USART3EN (1 << RCC_APB1ENR_USART3EN_OFFSET)

/* USART4 Enable */
#define RCC_APB1ENR_USART4EN_OFFSET 19
#define RCC_APB1ENR_USART4EN (1 << RCC_APB1ENR_USART4EN_OFFSET)

/* USART5 Enable */
#define RCC_APB1ENR_USART5EN_OFFSET 20
#define RCC_APB1ENR_USART5EN (1 << RCC_APB1ENR_USART5EN_OFFSET)

/* I2C1 Enable */
#define RCC_APB1ENR_I2C1EN_OFFSET 21
#define RCC_APB1ENR_I2C1EN (1 << RCC_APB1ENR_I2C1EN_OFFSET)

/* I2C2 Enable */
#define RCC_APB1ENR_I2C2EN_OFFSET 22
#define RCC_APB1ENR_I2C2EN (1 << RCC_APB1ENR_I2C2EN_OFFSET)

/* USB Enable */
#define RCC_APB1ENR_USBEN_OFFSET 23
#define RCC_APB1ENR_USBEN (1 << RCC_APB1ENR_USBEN_OFFSET)

/* CAN Enable */
#define RCC_APB1ENR_CANEN_OFFSET 25
#define RCC_APB1ENR_CANEN (1 << RCC_APB1ENR_CANEN_OFFSET)

/* CRS Enable */
#define RCC_APB1ENR_CRSEN_OFFSET 27
#define RCC_APB1ENR_CRSEN (1 << RCC_APB1ENR_CRSEN_OFFSET)

/* PWR Enable */
#define RCC_APB1ENR_PWREN_OFFSET 28
#define RCC_APB1ENR_PWREN (1 << RCC_APB1ENR_PWREN_OFFSET)

/* DAC Enable */
#define RCC_APB1ENR_DACEN_OFFSET 29
#define RCC_APB1ENR_DACEN (1 << RCC_APB1ENR_DACEN_OFFSET)

/* CEC Enable */
#define RCC_APB1ENR_CECEN_OFFSET 30
#define RCC_APB1ENR_CECEN (1 << RCC_APB1ENR_CECEN_OFFSET)

/* FUNCTION PROTOTYPES ********************************************/

/* Wait for clock sources to be ready */
void wait_for_HSI_ready(void);
void wait_for_HSE_ready(void);


/* FUNCTION DEFINITIONS *******************************************/

/**
 * @brief enables the internal high speed oscillator as the clock source
 * 
 * @return void
 * 
 */
void clock_enable_HSI(void)
{
   uint8_t hsi_status = (*((uint32_t*)(RCC_BASE + RCC_CR_OFFSET))) & RCC_CR_HSION;

   if(!hsi_status)
   {
       (*((uint32_t*)(RCC_BASE + RCC_CR_OFFSET))) |= RCC_CR_HSION;

       wait_for_HSI_ready();
   }
}

/**
 * @brief waits for high speed internal oscillator to be ready to be used
 * 
 * @note this wait is blocking
 * 
 */
void wait_for_HSI_ready(void)
{
    uint8_t hsi_ready = (*((uint32_t*)(RCC_BASE + RCC_CR_OFFSET))) & RCC_CR_HSIRDY;
       while(!hsi_ready)
       {
           hsi_ready = (*((uint32_t*)(RCC_BASE + RCC_CR_OFFSET))) & RCC_CR_HSIRDY;
       }
}

/**
 * @brief enables the internal high speed oscillator as the clock source
 * 
 * @return void
 * 
 */
void clock_enable_HSE(void)
{
   uint8_t hse_status = (*((uint32_t*)(RCC_BASE + RCC_CR_OFFSET))) & RCC_CR_HSEON;

   if(!hse_status)
   {
       (*((uint32_t*)(RCC_BASE + RCC_CR_OFFSET))) |= RCC_CR_HSEON;

       wait_for_HSI_ready();
   }
}

/**
 * @brief waits for high speed internal oscillator to be ready to be used
 * 
 * @note this wait is blocking
 * 
 * @return void
 */
void wait_for_HSE_ready(void)
{
    uint8_t hse_ready = (*((uint32_t*)(RCC_BASE + RCC_CR_OFFSET))) & RCC_CR_HSERDY;
       while(!hse_ready)
       {
           hse_ready = (*((uint32_t*)(RCC_BASE + RCC_CR_OFFSET))) & RCC_CR_HSERDY;
       }
}

/**
 * @brief enables the power clock
 * 
 * @return void
 */
void clock_enable_power(void)
{
    (*((uint32_t*)(RCC_BASE + RCC_APB1ENR_OFFSET))) |= RCC_APB1ENR_PWREN;
}




