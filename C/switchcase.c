#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int dia;
	
	printf("Digite um valor de 1 a 7: ");
	scanf("%d", &dia);
	
	//case não trabalha com condicional(somente if...else)
	//case compara com valores fixos, constantes
	//switch case
	switch(dia){
		case 1 :
			printf("Domingo\n");
		break;
		
		case 2 :
			printf("Segunda\n");
		break;
		
		case 3 :
			printf("Terca\n");
		break;
		
		case 4 :
			printf("Quarta\n");
		break;
		
		case 5 :
			printf("Quinta\n");
		break;
		
		case 6 :
			printf("Sexta\n");
		break;
		
		case 7 :
			printf("Sabado\n");
		break;
		
		default :
			printf("Numero invalido!\n");
	}
	
	system("pause");
	return 0;
}
