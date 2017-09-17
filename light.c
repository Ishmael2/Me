#ifndef F_CPU
#define F_CPU 16000000UL // 16MHz clock speed 
#endif 

#include<avr/io.h>
#include <util/delay.h>

int main(void)
 {
   DDRB = 0xFF; //makes port c as the output
   while(1) // infinite loop
     {
       PORTB = 0xFF; //turn on led
       _delay_ms(1000);//1 second delay
       PORTB = 0x00; //  turns of all the led
       _delay_ms(1000); //1 second delay
      }
   }
