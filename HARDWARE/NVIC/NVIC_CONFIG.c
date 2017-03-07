//本文件用于中断嵌套设置
#include "NVIC_CONFIG.h"
void Init_Nvic(void)//
{
	  NVIC_InitTypeDef NVIC_InitStructure;
	  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	
	  NVIC_InitStructure.NVIC_IRQChannel=TIM5_IRQn;//TIM5全局变量中断的设置
	  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;
	  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;
	  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	  NVIC_Init(&NVIC_InitStructure);
	
	  	  NVIC_InitStructure.NVIC_IRQChannel=TIM2_IRQn ;//pwm的中断优先级设置
	  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;//主优先级
	  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 2;//从优先级
	  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	  NVIC_Init(&NVIC_InitStructure);
	
		  NVIC_InitStructure.NVIC_IRQChannel=TIM3_IRQn ;//pwm的中断优先级设置
	  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;//主优先级
	  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 2;//从优先级
	  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	  NVIC_Init(&NVIC_InitStructure);
	
	  NVIC_InitStructure.NVIC_IRQChannel=TIM4_IRQn ;//输入捕获的中断优先级设置
	  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 2;//主优先级
	  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;//从优先级
	  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	  NVIC_Init(&NVIC_InitStructure);
	
	  NVIC_InitStructure.NVIC_IRQChannel=TIM8_CC_IRQn ;//输入捕获的中断优先级设置
	  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 2;//主优先级
	  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;//从优先级
	  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	  NVIC_Init(&NVIC_InitStructure);


}
