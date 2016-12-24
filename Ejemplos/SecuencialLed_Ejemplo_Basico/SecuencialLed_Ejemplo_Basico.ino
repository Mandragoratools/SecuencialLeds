//| SecuencialLed(Beta)>> Ejemplo básico "ascendente" y "descendente".     |
//| Creado por: Mandragora Tools 2016                                      |                                                                                                            |
//|________________________________________________________________________|


#include <SecuencialLed.h>

//Definimos los pines que usaremos para nuestros leds
int leds[]={2,3,4,5,6,7,8,9,10};

//Declaramos la instancia de SecuencialLed
SecuencialLed led1;

void setup() {

//Inicializamos SecuencialLed pasandole la cantidad de leds y los pines correspondientes
led1.ledPins(9,leds);

//Declaramos la velocidad deseada (si esta no se especifica por defecto será de 1000 milisegundos)
led1.velocidad(300);



}

void loop() {

//Ejacutamos las secuencias
led1.ascendente();
led1.descendente();
}
