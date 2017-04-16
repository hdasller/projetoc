#include <stdio.h> 
#include <stdlib.h> 

//Lib para LCD
#include <LiquidCrystal.h>

#define INSENANA1
#define INSENANA2
#define INSENANA3
#define INSENDG1
#define INSENDG2
#define OUTDG1
#define OUTDG2
#define OUTDG3
#define OUTDYSPLAY1
#define OUTDYSPLAY2
#define OUTDYSPLAY3
#define OUTDYSPLAY4
#define OUTDYSPLAY5
#define OUTDYSPLAY6

LiquidCrystal lcd(OUTDYSPLAY1, OUTDYSPLAY2,OUTDYSPLAY3,OUTDYSPLAY4,OUTDYSPLAY5,OUTDYSPLAY6);
lcd.begin(16, 2);
lcd.clear();




int main (void){

while(true){
lcd.setCursor(3, 0);
lcd.print("Valor do sensor1: %d", INSENANA1);
lcd.setCursor(3, 1);
lcd.print("Valor do sensor2: %d", INSENANA2);
delay(5000);
lcd.clear();

lcd.setCursor(3, 0);
lcd.print("Valor do sensor3: %d", INSENANA3);

delay(5000);
lcd.clear(); 

if(INSENANA1 > 125 ||INSENANA2 > 125 || INSENANA3 > 125){
	
	lcd.clear();
	lcd.print("Verificar DISPOSITIVO");
	//Desligar motores.
	// OUTDG1 = LOW;
	// OUTDG2 = LOW;
	// OUTDG3 = LOW;
		
	}

}


return 0;

}

