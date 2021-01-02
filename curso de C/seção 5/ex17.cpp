#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num, soma = 0;
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &num);
	for (num; num >= 0; --num){
		soma = soma + num;
		printf("O número é %d e a soma é %d \n", num, soma);
	}
	return 0;
}
