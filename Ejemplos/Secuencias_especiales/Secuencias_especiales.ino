//| SecuencialLed(Beta)>> Ejemplo de secuencias especiales "cumulAsc" y "cumulDesc".                              |
//| Creado por: Mandragora Tools 2016                                                                             |
//|                                                                                                               |
//| *Para usar estas secuencias conbinadas con otras es necesario hacer lo que muestra el ejemplo, con el objetivo|
//| de que las secuencias sean completadas y no se crucen entre ellas.                                            |
//|_______________________________________________________________________________________________________________|


#include <SecuencialLed.h>

//Declaramos dos variables de tipo boolean y a la que queramos que comience primero la iniciaremos con "true"
bool b1=true;
bool b2=false;

//Definimos los pines que usaremos para nuestros leds
int pins[]={2,3,4,5,6,7,8,9,10};

//Declaramos la instancia de SecuencialLed
SecuencialLed leds1;

void setup() {

//Inicializamos SecuencialLed pasandole la cantidad de leds y los pines correspondientes
leds1.ledPins(9,pins);

//Declaramos la velocidad deseada (si esta no se especifica por defecto será de 1000 milisegundos)
leds1.velocidad(100);

}

void loop() {

//Ejecutamos la secuencia cumulDesc cuando cumulAsc haya sido completada
if(b1==true){
if(leds1.cumulDesc()){
b2=true;
b1=false;
}
}

//Ejecutamos la secuencia cumulAsc cuando cumulDesc haya sido completada
if(b2==true){
if(leds1.cumulAsc()){
b1=true;
b2=false;
}
}




}
