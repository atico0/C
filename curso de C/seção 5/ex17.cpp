#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num, soma = 0;
	printf("Digite um n�mero inteiro positivo: ");
	scanf("%d", &num);
	for (num; num >= 0; --num){
		soma = soma + num;
		printf("O n�mero � %d e a soma � %d \n", num, soma);
	}
	return 0;
}
