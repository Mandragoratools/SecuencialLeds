#include <SecuencialLed.h>

int leds[]={2,3,4,5,6,7,8,9,10};

SecuencialLed led1;

void setup() {
led1.ledPins(9,leds);


led1.velocidad(300);



}

void loop() {

led1.ascendente();
led1.descendente();
}
