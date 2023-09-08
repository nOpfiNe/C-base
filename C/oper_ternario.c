#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int numero;
	
	//operador ternario: pode ser mais curto que if...else em alguns casos
	//não é comuno o uso
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	//condição (ex: variavel >= 3) ? verdadeiro : falso
	numero >=18 ? printf("Positivo\n") : printf("Negativo\n");
	
	//tentativa de uso
	float valor1, valor2, media;
	
	printf("Digite uma nota: ");
	scanf("%f", &valor1);
	
	printf("Digite outra nota: ");
	scanf("%f", &valor2);
	
	media = (valor1 + valor2)/ 2;
	
	printf("A media: %.2f\n", media);
	
	media >= 6 ? printf("Parabens! Voce foi muito bem!!!\n") : printf("Melhore para a proxima!!!\n");
	
	system("pause");
	return 0;
}
