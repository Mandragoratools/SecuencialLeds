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
	compvelocidad();
	for (int i=0;i<_npins;i++){

	digitalWrite(_pins[i],HIGH);
	delay(_velocidad);
	digitalWrite(_pins[i],LOW);
	}  
}


bool cumulAsc(){
	 compvelocidad();
	for (int i=0;i<_n2;i++){
	digitalWrite(_pins[i],HIGH);
	digitalWrite(_pins[i-1],LOW);
	delay(_velocidad);
	} 

   _n2--;
  if(_n2<=0){_n2=_npins;
  return true;
  }else{return false;}
	}



 void ascDos(){
	compvelocidad();
	for (int i=0;i<_npins;i++){

	digitalWrite(_pins[i],HIGH);
	digitalWrite(_pins[i+1],HIGH);
	delay(_velocidad);
	digitalWrite(_pins[i],LOW);
	digitalWrite(_pins[i+1],LOW);
	}  
}

 void ascInvert(){
	compvelocidad();
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
	compvelocidad();
	for (int i=0;i<_npins;i++){

	digitalWrite(_pins[i],HIGH);
	delay(_velocidad);
	}  
}


 void progresInvAsc(){
	compvelocidad();
	for (int i=0;i<_npins;i++){

	digitalWrite(_pins[i],LOW);
	delay(_velocidad);
	}  
}


 void descendente(){
	compvelocidad();
	for (int i=_npins;i>-1;i--){

	digitalWrite(_pins[i],HIGH);
	delay(_velocidad);
	digitalWrite(_pins[i],LOW);
	}  
}





 bool cumulDesc(){
	compvelocidad();
		for (int i=_npins;i>_n3;i--){

	digitalWrite(_pins[i],HIGH);
	digitalWrite(_pins[i+1],LOW);
	delay(_velocidad);
 }
 _n3++;
 if(_n3>=_npins){
	 _n3=-1;
	 return true;
 }else{
	 return false;
 }
 
 }
	


 void descDos(){
	compvelocidad();
	for (int i=_npins;i>-1;i--){

	digitalWrite(_pins[i],HIGH);
	digitalWrite(_pins[i+1],HIGH);
	delay(_velocidad);
	digitalWrite(_pins[i],LOW);
	digitalWrite(_pins[i+1],LOW);

	}  
}

 void descInvert(){
	compvelocidad();
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
	compvelocidad();
	for (int i=_npins;i>-1;i--){

	digitalWrite(_pins[i],HIGH);
	delay(_velocidad);
	}  
}



 void progresInvDesc(){
	 compvelocidad();

	for (int i=_npins;i>-1;i--){

	digitalWrite(_pins[i],LOW);
	delay(_velocidad);
	}  
}


 void aleatorio(){
	 compvelocidad();
byte rand=random(0,_npins);
digitalWrite(_pins[rand],HIGH);
delay(_velocidad);
digitalWrite(_pins[rand],LOW);	 
}

 void ascPar(){
	 compvelocidad();
	for (int i=0;i<_npins;i++){

	if(i & 0x01){
		
	}else{digitalWrite(_pins[i*1],HIGH);
	delay(_velocidad);
	digitalWrite(_pins[i*1],LOW);
	}
	}	 
}


 void ascImpar(){
	 compvelocidad();
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
	int _velocidad=0;
	int _n;
	int _n2=_npins;
	int _n3=-1;
	void compvelocidad(){
		if(_velocidad==0){
		_velocidad=1000;	
		}
		
	}

};

#endif

