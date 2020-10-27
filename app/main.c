/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * 文件名  ： main
 * 作者    ： linxu
 * 版本    ： V1.0.0
 * 时间    ： 2020-10-06
 * 简要    ：   
 ********************************************************************
 * 副本
 *
 *>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* 头文件 ----------------------------------------------------------------*/
#include<ioCC2530.h>
#include"led.h"
#include"key.h"
unsigned int temp = 0;

//1ms精确定时
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* 函数名：Delay
* 参数：unsigned
* 返回：void
* 描述：延时函数
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void main(void)
{
  LedInit();
  KeyInit();
  LedOff(LED_ALL_E);
  while(1)
  {  
    if(KEY_PRESS == KeyStateGet(KEY_KEY1_E))
       {   
         if(KEY_PRESS == KeyStateGet(KEY_KEY1_E))
         {
         LedOn(LED_LED1_E);
         while(KEY_PRESS == KeyStateGet(KEY_KEY1_E));
       } 
     }  
      if(KEY_PRESS == KeyStateGet(KEY_KEY2_E))
      {
        LedOn(LED_LED2_E);
        while(KEY_PRESS == KeyStateGet(KEY_KEY2_E));
      }
    }
}