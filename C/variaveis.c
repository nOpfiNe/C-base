#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//variaveis - local onde armezena um dado (que possui um tipo)
	
	int num = 4; //atrubuindo valor a uma variavel
	float num2 = 6.79; //float é para numeros decimais
	char letra = 'A'; //variavel tipo caracter, entre aspas simples
	char frase[20] = "programadora"; //char nomevariavel [qtddecaracter armazenad0]
    double num3 = 1.2345678; //comporta mais casas que o float, precisão dupla
    
	//Uso do printf
	printf("Hello World!\n");
	
	printf("Exibindo o numero inteiro %d \n",num); //%d valor inteiros
	printf("Exibindo um numero real %f \n", num2); //%f numeros reais, float ou double
	printf("Exibindo o caracter %c \n", letra); //%c exibe caracter
	printf("%s \n", frase); //%s quando é mais de uma letra, por ser uma string
	printf("Exibindo variavel double: %f \n", num3);
	printf("Valores: %d %f %c %s %f \n", num,num2,letra,frase,num3);
	
	system("pause"); //somente para windows
	return 0;
}

