/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * �ļ���  �� main
 * ����    �� linxu
 * �汾    �� V1.0.0
 * ʱ��    �� 2020-10-06
 * ��Ҫ    ��   
 ********************************************************************
 * ����
 *
 *>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/
/* ͷ�ļ� ----------------------------------------------------------------*/
#include<ioCC2530.h>
#include"led.h"
#include"key.h"
unsigned int temp = 0;

//1ms��ȷ��ʱ
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* ��������Delay
* ������unsigned
* ���أ�void
* ��������ʱ����
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