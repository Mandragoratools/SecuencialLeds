/*
  SecuencialLed.h - Libreria de secuencias de leds.
  Creado por Mandragora Tools 24-12-2016
  Esta libreria es de dominio publico
*/
#ifndef SecuencialLed_h
#define SecuencialLed_h
#include "Arduino.h"

class SecuencialLed
{
   public: 

   void ledPins(int npins,int pins[]){
	
	_npins=npins;

	    for (int i=0;i<npins;i++){
   _pins[i]=pins[i];   
    }
	
	
		for (int i=0;i<npins;i++){
		pinMode(pins[i],OUTPUT);    
		}
		
   }
  

 void ascendente(){

	for (int i=0;i<_npins;i++){

	digitalWrite(_pins[i],HIGH);
	delay(_velocidad);
	digitalWrite(_pins[i],LOW);
	}  
}


 void cumulAsc(){
	for (int i=0;i<_n2;i++){

	digitalWrite(_pins[i],HIGH);
	delay(_velocidad);
	if(i==_n2){
	digitalWrite(_n2,HIGH);	
	}else{
	digitalWrite(_pins[i-1],LOW);
	}
	} 

   _n2--;
  if(_n2<=0){
	  _n2=_npins;
	  exit;
	  }
	}



 void ascDos(){

	for (int i=0;i<_npins;i++){

	digitalWrite(_pins[i],HIGH);
	digitalWrite(_pins[i+1],HIGH);
	delay(_velocidad);
	digitalWrite(_pins[i],LOW);
	digitalWrite(_pins[i+1],LOW);
	}  
}

 void ascInvert(){

	for (int i=0;i<_npins;i++){
	digitalWrite(_pins[i],HIGH);
	}  
	
	for (int i=0;i<_npins;i++){
	digitalWrite(_pins[i],LOW);
	delay(_velocidad);
	digitalWrite(_pins[i],HIGH);
	} 
}



 void progresAsc(){

	for (int i=0;i<_npins;i++){

	digitalWrite(_pins[i],HIGH);
	delay(_velocidad);
	}  
}


 void progresInvAsc(){

	for (int i=0;i<_npins;i++){

	digitalWrite(_pins[i],LOW);
	delay(_velocidad);
	}  
}


 void descendente(){

	for (int i=_npins;i>-1;i--){

	digitalWrite(_pins[i],HIGH);
	delay(_velocidad);
	digitalWrite(_pins[i],LOW);
	}  
}





 void cumulDesc(){
	
		for (int i=_npins;i>_n3;i--){

	digitalWrite(_pins[i],HIGH);
	delay(_velocidad);
	if(i==_n3){
	digitalWrite(_pins[i],HIGH);
	} else{
	digitalWrite(_pins[i+1],LOW);	
	}
 }
 _n3++;
 if(_n3>=_npins)_n3=-1;
 }
	


 void descDos(){

	for (int i=_npins;i>-1;i--){

	digitalWrite(_pins[i],HIGH);
	digitalWrite(_pins[i+1],HIGH);
	delay(_velocidad);
	digitalWrite(_pins[i],LOW);
	digitalWrite(_pins[i+1],LOW);

	}  
}

 void descInvert(){

	for (int i=_npins;i>-1;i--){
	digitalWrite(_pins[i],HIGH);
	}  
	
	for (int i=_npins;i>-1;i--){
	digitalWrite(_pins[i],LOW);
	delay(_velocidad);
	digitalWrite(_pins[i],HIGH);
	} 
}


 void progresDesc(){

	for (int i=_npins;i>-1;i--){

	digitalWrite(_pins[i],HIGH);
	delay(_velocidad);
	}  
}



 void progresInvDesc(){

	for (int i=_npins;i>-1;i--){

	digitalWrite(_pins[i],LOW);
	delay(_velocidad);
	}  
}


 void aleatorio(){
byte rand=random(0,_npins);
digitalWrite(_pins[rand],HIGH);
delay(_velocidad);
digitalWrite(_pins[rand],LOW);	 
}

 void ascPar(){
	for (int i=0;i<_npins;i++){

	if(i & 0x01){
		
	}else{digitalWrite(_pins[i*1],HIGH);
	delay(_velocidad);
	digitalWrite(_pins[i*1],LOW);
	}
	}	 
}


 void ascImpar(){
	for (int i=0;i<_npins;i++){

	if(i & 0x01){
	digitalWrite(_pins[i*1],HIGH);
	delay(_velocidad);
	digitalWrite(_pins[i*1],LOW);	
	}
	}	 
}



	void velocidad(int veloz){
		
	_velocidad=veloz;	
	
	
	}
	
	
	private:
    int _pins[12];
	int _npins;
	int _velocidad;
	int _n;
	int _n2=_npins;
	int _n3=-1;

};

#endif