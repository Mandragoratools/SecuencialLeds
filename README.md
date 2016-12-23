# SecuencialLeds(Beta)

Copyrigth (c) Mandragora Tools 2016

mandragoratools@gmail.com

http://bit.ly/mandragoratools

#¿Que es SecuencialLeds?

SecuencialLeds es una libreria para Arduino, que nos sirve para gestionar secuencias de leds de una forma muy simplificada.
En esta versión Beta hemos incorporado unas cuantas funciones disponibles listas para usar en nuestros proyectos.

*Esta libreria está especialmente enfocada a leds, aunque podria usarse otro tipo de dispositivos como por ejemplo relays.

#Referencia:
Declaramos e inicializamos la instancia de SecuencialLeds usando:

- **SecuencialLed led1;**

Definimos los pines donde irán conectados los leds usando para ello un Array de tipo int:

- **int leds[]={2,3,4,5,6,7,8,9,10};**

Declaramos la cantidad de leds que vamos a usar y los pines asociados a los mismos:

- **led1.ledPins(9,leds);**

Definimos la velocidad de las secuencias:

- **led1.velocidad(1000);**

Y por ultimo en el void loop usaremos las secuencias que esta libreria incorpora, combinandolas según lo que queramos:
***
**ascendente();**             Secuencia ascendente

**descendente();**             Secuencia descendente
 
**ascInvert();**             Secuencia ascendente invertida

**descInvert();**              Secuencia descendente invertida

**progresAsc();**              Progresión ascendente

**progresDesc();**             Progresión descendente

**progresInvAsc();**             Progresión invertida ascendente

**progresInvDesc();**              Progresión invertida descendente

**ascInvert();**             Secueencia ascendente invertida

**descInvert();**              Secuencia descendente invertida

**ascPar();**              Secuendia ascendente solo de leds pares

**ascImpar();**              Secuencia ascendente solo de leds impares

**cumulAsc();**              Secuencia de acumulación ascendente

**cumulDesc();**             Secuencia de acumulación descendente

**aleatorio();**             Secuencia aleatoria
***

#Ejemplo de uso:
***
```arduino
#include <SecuencialLed.h>

int leds[]={2,3,4,5,6,7,8,9,10};

SecuencialLed led1;

void setup() {
led1.ledPins(9,leds);
led1.velocidad(1000);
}

void loop() {
led1.ascendente();
led1.descendente();
}
```
***
