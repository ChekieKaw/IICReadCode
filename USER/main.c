#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "stm32f10x_it.h"
#include "math.h"
#include "led.h"
#include "myiic.h"
#include "usart.h"



int main()
{
	delay_init();
	LED_Init();
	IIC_Init();
	uart_init(115200);
	
	LED0 =1;
	LED1=0;
	delay_ms(3000);
		
	LED0 =0;
	LED1=1;
	delay_ms(3000);
	
	LED0=1;
	LED1=0;//程序自检
	delay_ms(3000);
	LED0=0;
	LED0=0;
	delay_ms(3000);
	
	
	
	while(1)
	{
	u16 read_data_ks103;
		LED1=1;
		LED0=1;
		delay_ms(500);
		
		KS103_WriteOneByte(0xd0,0x02,0xbc);
		delay_ms(2);
		while (!READ_SCL)
		{}
			read_data_ks103=KS103_ReadOneByte(0xd0,0x02);//从地址为0xe8的超声波模块读取出数据。
			printf("Distance on 0xd0 is %d mm\n",read_data_ks103);//监测代码。
			
		
		
		LED1=0;
		LED0=0;
		delay_ms (500);//双闪指示灯，表示修改程序已经完成
	}
		
	
	}

	


			
			
				
			
		
	
	
	




