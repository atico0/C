#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num, soma = 0;
	for (int i = 0; i<5; i++){
		printf("Digite um n�mero: ");
		scanf("%f", &num);
		soma = soma + num;
	}
	printf("a soma �: %f", soma);
	return 0;
	
}
