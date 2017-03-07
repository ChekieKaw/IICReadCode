#ifndef __USART3_H
#define __USART3_H


#include "stdio.h"	
#include "sys.h" 
#include "stm32f10x.h"

#define USART2_REC_LEN  			1000  	//定义最大接收字节数 200
#define EN_USART2_RX 			1		//使能（1）/禁止（0）串口1接收
	  	
extern u8  USART2_RX_BUF[USART2_REC_LEN]; //接收缓冲,最大USART_REC_LEN个字节.末字节为换行符 
extern u16 USART2_RX_STA;         		//接收状态标记	


void uart2_init(u32 bound);

#endif
