#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num, soma = 0;
	float media;
	
	for(int i = 1; i <=10; i++){
		printf("Digite o %d n�mero inteiro positivo: ", i);
		scanf("%d", &num);
		if (num<0){
			printf("N�mero invalido");
			i--;
		}else{
			soma = soma + num;
		}
		printf("\nA soma �: %d \n",soma);
	}
	media = (soma/10);
	printf("A media �: %f",media);
	return 0;
}
