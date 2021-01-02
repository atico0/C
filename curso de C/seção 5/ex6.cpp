#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int num, soma = 0;
	float media;
	for(int i = 1; i <=10; i++){
		printf("Digite o %d número: ", i);
		scanf("%d", &num);
		soma = soma + num;
		printf("A soma é: %d \n",soma);
	}
	media = (soma/10);
	printf("A média é: %f", media);
	return 0;
}
