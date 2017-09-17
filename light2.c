#include<avr/io.h>
#include<util/delay.h>

int main(void){
 DDRB |=(1<<0xFF);

while(1){
PORTB= 0b00000001;
_delay_ms(1000);
PORTB= 0b00000000;
_delay_ms(1000);
}

return (0);
}
