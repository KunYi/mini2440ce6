
#ifndef _S3C2440_MEMCTRL_H_
#define _S3C2440_MEMCTRL_H_

#if __cplusplus
extern "C" {
#endif

typedef struct _S3C2440_MEMCTRL_ {
	_u32	BWSCON;
	_u32	BANKCON0;
	_u32	BANKCON1;
	_u32	BANKCON2;
	_u32	BANKCON3;
	_u32	BANKCON4;
	_u32	BANKCON5;
	_u32	BANKCON6;
	_u32	BANKCON7;
	_u32	REFRESH;
	_u32	BANKSIZE;
	_u32	MRSRB6;
	_u32	MRSRB7;

} S3C2440REG_MEMCTRL, *PS3C2440REG_MEMCTRL;

#define DW_8B	(0)
#define DW_16B	(1)
#define DW_32B	(2)


#if __cplusplus
}
#endif

#endif
/* end of file */