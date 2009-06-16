

#ifndef _S3C2440_REG_BASE_
#define _S3C2440_REG_BASE_
/* 
 *	The file to define base register physical address of functions block
 */
 
#if __cplusplus
extern "C" {
#endif

/* To refernce Table 1-4. S3C2440A Special Registers in Chapter 1 at datasheet */
#define S3C2440_BASE_REG_MEMCTRL_PA		(0x48000000)
#define S3C2440_BASE_REG_OHCI_PA		(0x49000000)
#define S3C2440_BASE_REG_INTR_PA		(0x4A000000)
#define S3C2440_BASE_REG_DMA_PA			(0x4B000000)
#define S3C2440_BASE_REG_CLKPM_PA		(0x4C000000)
#define S3C2440_BASE_REG_LCD_PA			(0x4D000000)
#define S3C2440_BASE_REG_NAND_PA		(0x4E000000)
#define S3C2440_BASE_REG_CAMERA_PA		(0x4F000000)
#define S3C2440_BASE_REG_UART_PA		(0x50000000)
#define S3C2440_BASE_REG_UART0_PA		S3C2440_BASE_REG_UART_PA
#define S3C2440_BASE_REG_UART1_PA		(S3C2440_BASE_REG_UART_PA+0x4000)
#define S3C2440_BASE_REG_UART2_PA		(S3C2440_BASE_REG_UART_PA+0x8000)
#define S3C2440_BASE_REG_PWM_PA			(0x51000000)
#define S3C2440_BASE_REG_USBD_PA		(0x52000000)
#define S3C2440_BASE_REG_WATCHDOG_PA	(0x53000000)
#define S3C2440_BASE_REG_I2C_PA			(0x54000000)
#define S3C2440_BASE_REG_I2S_PA			(0x55000000)
#define S3C2440_BASE_REG_GPIO_PA		(0x56000000)
#define S3C2440_BASE_REG_RTC_PA			(0x57000000)
#define S3C2440_BASE_REG_ADC_PA			(0x58000000)
#define S3C2440_BASE_REG_SPI_PA			(0x59000000)
#define S3C2440_BASE_REG_SDH_PA			(0x5A000000)
#define S3C2440_BASE_REG_AC97_PA		(0x5B000000)

#if __cplusplus
}
#endif
 
#endif
/* end of file */
 