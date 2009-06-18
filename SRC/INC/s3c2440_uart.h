
#ifndef _S3C2440_UART_H_
#define _S3C2440_UART_H_

#if __cplusplus
extern "C" {
#endif

typedef struct _S3C2440_UART_ {
	_u32 ULCON; 			/* line control 			*/
	_u32 UCON;				/* control				*/
	_u32 UFCON;				/* FIFO control			*/
	_u32 UMCON;				/* modem control			*/
	_u32 UTRSTAT;			/* Tx/Rx status			*/
	_u32 UERSTAT;			/*	Rx error stataus		*/
	_u32 UFSTAT;			/* FIFO status			*/
	_u32 UMSTAT;			/* modem	status			*/
	_u32 UTXH;				/* Tx	threshold			*/
	_u32 URXH;				/* Rx	threshold			*/
	_u32 UBRDIV;			/* Baurd rate divisor	*/
} S3C2440REG_UART, *PS3C2440RER_UART;

#if __cplusplus
}
#endif

#endif
/* end of file */