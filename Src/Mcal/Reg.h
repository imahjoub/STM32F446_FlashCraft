#ifndef REG_2023_08_26_H
  #define REG_2023_08_26_H

  #include <stdint.h>

  /* ----------------------------------------------------------------------------------- */
  /*  Types definition                                                                   */
  /* ----------------------------------------------------------------------------------- */
  typedef struct
  {
    uint32_t CR;     /* DMA stream x configuration register      */
    uint32_t NDTR;   /* DMA stream x number of data register     */
    uint32_t PAR;    /* DMA stream x peripheral address register */
    uint32_t M0AR;   /* DMA stream x memory 0 address register   */
    uint32_t M1AR;   /* DMA stream x memory 1 address register   */
    uint32_t FCR;    /* DMA stream x FIFO control register       */
  } DMA_Stream_TypeDef;

  /* ----------------------------------------------------------------------------------- */
  /* Macros                                                                              */
  /* ----------------------------------------------------------------------------------- */

  /* Base addresses for peripheral registers */
  #define SCB_BASE            0xE000ED00UL
  #define RCC_BASE            0x40023800UL
  #define PWR_BASE            0x40007000UL
  #define FLASH_BASE          0x40023C00UL
  #define GPIOA_BASE          0x40020000UL
  #define SPI_BASE            0x40013000UL
  #define STK_BASE            0xE000E010UL
  #define DMA2_BASE           0x40026400UL

  /* SCB registers */
  #define SCB_CPACR           (*(volatile uint32_t*)(SCB_BASE + 0x88UL))

  /* RCC Registers */
  #define RCC_CR              (*(volatile uint32_t*)(RCC_BASE + 0x00UL))
  #define RCC_PLLCFGR         (*(volatile uint32_t*)(RCC_BASE + 0x04UL))
  #define RCC_CFGR            (*(volatile uint32_t*)(RCC_BASE + 0x08UL))
  #define RCC_AHB1ENR         (*(volatile uint32_t*)(RCC_BASE + 0x30UL))
  #define RCC_CIR             (*(volatile uint32_t*)(RCC_BASE + 0x0CUL))
  #define RCC_APB1ENR         (*(volatile uint32_t*)(RCC_BASE + 0x40UL))
  #define RCC_APB2ENR         (*(volatile uint32_t*)(RCC_BASE + 0x44UL))

  /* SysTick registers */
  #define STK_CTRL            (*(volatile uint32_t*)(STK_BASE + 0x00UL))
  #define STK_LOAD            (*(volatile uint32_t*)(STK_BASE + 0x04UL))
  #define STK_VAL             (*(volatile uint32_t*)(STK_BASE + 0x08UL))

  /* PWR registers */
  #define PWR_CR              (*(volatile uint32_t*)(PWR_BASE + 0x00UL))

  /* FLASH registers */
  #define FLASH_ACR           (*(volatile uint32_t*)(FLASH_BASE + 0x00UL))

  /* GPIOA registers */
  #define GPIOA_MODER         (*(volatile uint32_t*)(GPIOA_BASE + 0x00UL))
  #define GPIOA_OTYPER        (*(volatile uint32_t*)(GPIOA_BASE + 0x04UL))
  #define GPIOA_OSPEEDR       (*(volatile uint32_t*)(GPIOA_BASE + 0x08UL))
  #define GPIOA_PUPDR         (*(volatile uint32_t*)(GPIOA_BASE + 0x0CUL))
  #define GPIOA_ODR           (*(volatile uint32_t*)(GPIOA_BASE + 0x14UL))
  #define GPIOA_AFRL          (*(volatile uint32_t*)(GPIOA_BASE + 0x20UL))


  /* SPI1 registers */
  #define SPI_CR1             (*(volatile uint32_t*)(SPI_BASE + 0x00UL))
  #define SPI_CR2             (*(volatile uint32_t*)(SPI_BASE + 0x04UL))
  #define SPI_SR              (*(volatile uint32_t*)(SPI_BASE + 0x08UL))
  #define SPI_DR              (*(volatile uint32_t*)(SPI_BASE + 0x0CUL))
  #define SPI_CRCPR           (*(volatile uint32_t*)(SPI_BASE + 0x10UL))
  #define SPI_RXCRCR          (*(volatile uint32_t*)(SPI_BASE + 0x14UL))
  #define SPI_TXCRCR          (*(volatile uint32_t*)(SPI_BASE + 0x18UL))

  /* DMA2 registers */
  #define DMA2_STREAM2_BASE   (*(volatile uint32_t*)(DMA2_BASE + 0x040UL))
  #define DMA2_STREAM3_BASE   (*(volatile uint32_t*)(DMA2_BASE + 0x058UL))

  #define DMA2_Stream2        ((volatile DMA_Stream_TypeDef*) DMA2_STREAM2_BASE)
  #define DMA2_Stream3        ((volatile DMA_Stream_TypeDef*) DMA2_STREAM3_BASE)

#endif /* REG_2023_08_26_H */
