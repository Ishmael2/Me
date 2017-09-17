#ifndef F_CPU
#define F_CPU 16000000UL // 16MHz clock speed 
#endif 

#include<avr/io.h>
#include <util/delay.h>

int main(void)
 {
uint16_t potentiometerValue;
uint16_t threshold_level;
threshold_level=0b10000000;
   DDRB = 0xFF; //makes port c as the output

//InitADC0();

   while(1) // infinite loop
     {
      ADCSRA|=(1<<ADSC);
      loop_until_bit_is_clear(ADCSRA, ADSC);
      potentiometerValue = ADC;
    if(potentiometerValue > threshold_level)
     {
       PORTB = 0xFF; //turn on led
       //_delay_ms(1000);//1 second delay
     }
    else
      {
       PORTB = 0x00; //  turns off all the led
       //_delay_ms(1000); //1 second delay 
       }
    return (0);
      }
   }
