#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num, soma = 0;
	float media;
	
	for(int i = 1; i <=10; i++){
		printf("Digite o %d número inteiro positivo: ", i);
		scanf("%d", &num);
		if (num<0){
			printf("Número invalido");
			i--;
		}else{
			soma = soma + num;
		}
		printf("\nA soma é: %d \n",soma);
	}
	media = (soma/10);
	printf("A media é: %f",media);
	return 0;
}
