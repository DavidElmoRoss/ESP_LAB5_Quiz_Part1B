/*
This program should count from 0-4 on the top line of the
LCD continuously every 2 seconds on a green background

What one statement must you add to this code to make this happen
*/
#include <Arduino.h> 
#include <Wire.h>
#include "rgb_lcd.h"
#include <Ticker.h>

Ticker Tom;

short counter=0;
char buf[10];
rgb_lcd LCD;

void count(void)
{
    counter++;
}

void setup()
{

}
void loop()
{
                                   // YOUR STATEMENT goes on THIS LINE
    LCD.begin(16,2);
    LCD.clear();
    LCD.setRGB(0x00,0xff,0);
    for(;;)
    {
        while(counter <=4)
        {
          LCD.setCursor(7,0);
          sprintf(buf,"%d",counter);
          LCD.print(buf);
        }
        counter=0;
    }
}

