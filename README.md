# SecuencialLeds(Beta)

Copyrigth (c) Mandragora Tools 2016

mandragoratools@gmail.com

http://bit.ly/mandragoratools

#¿Que es SecuencialLeds?

SecuencialLeds es una libreria para Arduino, que nos sirve para gestionar secuencias de leds de una forma muy simplificada.
En esta versión Beta hemos incorporado unas cuantas funciones disponibles listas para usar en nuestros proyectos.

*Esta libreria está especialmente enfocada a leds, aunque podria usarse otro tipo de dispositivos como por ejemplo relays.

#Uso

Declaramos e inicializamos la instancia de SecuencialLeds usando:

- SecuencialLed led1;

Definimos los pines donde irán conectados los leds usando para ello un Array de tipo int:

- int leds[]={2,3,4,5,6,7,8,9,10};

Declaramos la cantidad de leds que vamos a usar y los pines asociados a los mismos:

- led1.ledPins(9,leds);

Definimos la velocidad de las secuencias:

- led1.velocidad(1000);

Y por ultimo en el void loop usaremos las secuencias que esta libreria incorpora, combinandolas según lo que quramos:

- led1.ascendente();              Secuencia ascendente
- led1.descendente();             Secuencia descendente
- led1.ascInvert();             Secuencia ascendente invertida
- led1.descInvert();              Secuencia descendente invertida
- led1.progresAsc();              Progresión ascendente
- led1.progresDesc();             Progresión descendente
- led1.progresInvAsc();             Progresión invertida ascendente
- led1.progresInvDesc();              Progresión invertida descendente
- led1.ascInvert();             Secueencia ascendente invertida
- led1.descInvert();              Secuencia descendente invertida
- led1.ascPar();              Secuendia ascendente solo de leds pares
- led1.ascImpar();              Secuencia ascendente solo de leds impares
- led1.cumulAsc();              Secuencia de acumulación ascendente
- led1.cumulDesc();             Secuencia de acumulación descendente
