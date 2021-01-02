#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num, soma = 0;
	for (int i = 0; i<5; i++){
		printf("Digite um número: ");
		scanf("%f", &num);
		soma = soma + num;
	}
	printf("a soma é: %f", soma);
	return 0;
	
}
