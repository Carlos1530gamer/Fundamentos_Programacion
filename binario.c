#include<stdio.h>
#include <stdlib.h>
//Declaracion de variables globales y funciones
int Binario[8]={0,0,0,0,0,0,0,0};
void Menu_Principal(void);
int Con_Binario(int Numero_Nor);
int Con_Decimal(int Numero_Bin);

//inicia funcion principal
int main(){
int FLujo, Desicion,Numero;
for (FLujo=1;FLujo!=0;){
Menu_Principal();
scanf("%d",&Desicion);
switch(Desicion){
	case 1:
    printf("Dame el numero decimal, para pasarlo a binario: ");
    scanf("%d",&Numero);
    Con_Binario(Numero);
	break;
	case 2:
    printf("Dame el numero binario, para pasarlo a decimal: ");
    scanf("%d",&Numero);
    Con_Decimal(Numero);
	break;
	case 3:
    printf("Gracias por utlizar el programa.");
    return 0;
	break;
    default:
    printf("Numero no identificado\nPor favor ingrese un valor valido.");
    break;
}

}
}//Finaliza funcion principal

//Inicia funcion para mostrar menu
void Menu_Principal(void){
system("clear");
printf("1.- Convertir de decimal a binario.\n");
printf("2.- Convertir binario a decimal.\n");
printf("0.- Salir.\n");
printf("\n\n\n\n\nCual opcion prefieres?: ");
}//Termina funcion para mostrar menu
int Con_Binario(int Numero_Nor){
	int Reco;
	for (Reco=0;Reco<=8;Reco++)
	{
	Binario[Reco]=Numero_Nor%2;
	Numero_Nor=Numero_Nor%2;
	if(Numero_Nor==1 || Numero_Nor==0){
		Binario[Reco+1]=Numero_Nor;
		break;
	}
	}
	printf("Este es tu codigo convertido: \n");
	for(Reco=8;Reco>=0;Reco++){
		printf("%d",Binario[Reco]);
	}
	return 0;
}