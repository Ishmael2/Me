# Me 
this is a lighting project using AVR armega328p using different components 
1. using atmega328p and LED
2.adding potentiometer to control the amount of lighting  LED can emit 
3. using push buttons to control the amount of light emited by the same(this is almost the same with potentialmeter only that it uses the push buttons insted ofpoteniometer 
4. using push button to turn on and off the LED
used terminal for programming of the ATMEG328p and fed the atmega using this three lines of coding:                                1. avr-gcc -g -Os -Wall -mcall-prologues -mmcu=atmega328p -fno-exceptions -o X.obj X.c                                                             2.avr-objcopy -R .eeprom -O ihex X.obj X.hex                                                                                      3. avrdude -b 19200 -c usbtiny -pm328p -U flash:w:X.hex (X-the name of the project working on e.g. light as i am working on light)
