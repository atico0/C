#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num = 2, soma = 0;
	for(int i = 1; i<=50; i++){
		soma = soma + num;
		printf("O n�mero %d � %d e a soma � %d \n", i, num, soma);
		num = num + 2;
		
	}
	return 0;
}
