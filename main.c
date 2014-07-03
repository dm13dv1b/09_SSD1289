#include "stm32f4xx.h"
#include "delay.h"
#include "SSD1289.h"
#include "touch_7846.h"
#include "Julija.h"

extern unsigned int xxx,yyy;
extern unsigned char flag;


int main(void)
{
  Delay(0x3FFFFF);
  LCD_Init();
  Delay(0x3FFFFF);
  LCD_Clear(WHITE);
  int i = 1;
  while(1)
  {
    Julia2(240,320,120,160,i);
    i+=10;
    if(i>1000)
      i=0;
  }
}


