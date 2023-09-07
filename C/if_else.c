#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int valor1, valor2, soma, subt, mult, div, num, resto; // mesmo tipo pode colocar na mesma linha 
	
	float nota1, nota2, media;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    resto = num % 2;
    
    printf("Resto da divisao: %d\n", resto);
    
    
    //if..else com inteiro
    
    // var = 0 atribui valor, var == 0 compara; 
    if(resto == 0){
    	printf("Numero par!\n");
	}else{
		printf("Numero impar!\n");
	}
	
	//if...else aninhado
	printf("Digite a nota do aluno: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2)/ 2;
	
	printf("A nota media do aluno: %.2f\n", media); // %.2 defini numero de casas a exibir
	
	if(media >= 6){ //js é =>, no c >=
		printf("Aluno aprovado!!\n");
	}else{
		if(media <3){
			printf("Aluno reprovado :(\n");
		}else{
			printf("Aluno em recuperacao \n");
		}
	}

	system("pause"); //somente para windows
	return 0;
}
