#include <stdio.h> 
#include <stdlib.h> 

//Lib para LCD
//#include <LiquidCrystal.h>

//LiquidCrystal lcd(OUTDYSPLAY1, OUTDYSPLAY2,OUTDYSPLAY3,OUTDYSPLAY4,OUTDYSPLAY5,OUTDYSPLAY6);
//lcd.begin(16, 2);

//#define OUTDYSPLAY1
//#define OUTDYSPLAY2
//#define OUTDYSPLAY3
//#define OUTDYSPLAY4
//#define OUTDYSPLAY5
//#define OUTDYSPLAY6



int main (void){

int sen1, sen2, sen3,sendg1, sendg2, motor1, motor2, motor3;

motor1 = 1;
motor2 = 1;
motor3 = 1;	


printf("Valor sensor Freezer 1 (Numeros de 0 a 1023)\n");
scanf("%d", &sen1);
printf("Valor sensor Freezer 2 (Numeros de 0 a 1023)\n ");
scanf("%d", &sen2);
printf("Valor sensor Freezer 3 (Numeros de 0 a 1023)\n");
scanf("%d", &sen3);

printf("Porta aberta? (0 p/ nao  ou 1 p/ sim)\n");
scanf("%d", &sendg1);

printf("Freezer conectado a internet? (0 p/ nao  ou 1 p/ sim)\n");
scanf("%d", &sendg2);


if(sendg1 == 1){
printf("Led Porta Aberta aceso\n");	
	//lcd.print("Freezer com a porta aberta");		
motor1 = 0;
motor2 = 0;
motor3 = 0;	

}else{
	printf("Led Porta Aberta apagado\n");	
}

if(sendg2==1){
printf("Led Sem Conexao aceso\n");	
	//lcd.print("Sem conexao com a internet");
}else{
	printf("Led Sem Conexao apagado\n");	
	
}
if(sendg1 != 1)
{
	if(sen1 > 500){
		printf("Freezer 1 com problema\n");	
		//lcd.print("Freezer 1 com problema");		
		}
	if(sen2 > 500){
		printf("Freezer 2 com problema\n");			
		//lcd.print("Freezer 2 com problema");		
	}
	
	if(sen3 > 500){
		printf("Freezer 3 com problema\n");			
		//lcd.print("Freezer 3 com problema");		
	}
	
	
}

if(motor1 == 0 || motor2 == 0 || motor3 == 0){
printf("Motores desligados \n");	
//lcd.print("Motores desligados ");		
}


return 0;

}

