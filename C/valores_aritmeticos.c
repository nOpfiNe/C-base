#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    
    int valor1, valor2, soma, subt, mult, div, num, resto; // mesmo tipo pode colocar na mesma linha 
    
    float nota1, nota2, media;
	
	//Scanf - mostra dados do user
	printf("Digite um numero inteiro: ");
	scanf("%d", &valor1); //&-endereço
	printf("Digite outro numero inteiro: ");
	scanf("%d", &valor2);
	
	//operadores aritmeticos
	soma = valor1 + valor2;
	subt = valor1 - valor2;
	mult = valor1 * valor2;
	div = valor1 / valor2;
	
	//Exibindo operadores
	printf("A soma de %d + %d = %d \n", valor1, valor2, soma);
	printf("A subtracao de %d - %d = %d\n", valor1, valor2, subt);
    printf("A multiplicacao de %d * %d = %d \n", valor1, valor2, mult);
    printf("A divisao de %d / %d = %d \n", valor1, valor2, div);
    
    
    //Resto
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    resto = num % 2;
    
    printf("Resto da divisao: %d\n", resto);
    
    //contas com float/double
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2)/ 2;
	
	printf("A nota media do aluno: %.2f\n", media); // %.2 defini numero de casas a exibir
	
	system("pause"); //somente para windows
	return 0;
}
