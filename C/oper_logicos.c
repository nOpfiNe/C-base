#include<stdio.h>
#include<stdlib.h>

int main(void){
	float nota1, nota2, media, frequencia;
	
	printf("Digite a primeira nota do aluno: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota do aluno: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/ 2;
	
	printf("A media deste aluno: %.2f\n", media);
	
	printf("Digite a frequencia deste aluno: ");
	scanf("%f", &frequencia);
	
	if(media >= 6 && frequencia >= 75){ //operador logico && - true e true
		printf("Aluno aprovado.\n");
	}else{
		if(media <3 || frequencia < 75){ //operador || - true ou true
			printf("Aluno reprovado.\n");
		}else{
			printf("Aluno em recuperacao.\n");
		}
	}
	
	system("pause");
	return 0;
}
