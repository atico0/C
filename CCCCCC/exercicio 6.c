#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	int num;
	setlocale(LC_ALL,"");
	printf("Digite um número: ");
	scanf("%i",&num);
	printf("\n");
	printf("Você digitou o número: %i seu dobro é: %i, seu triplo é %i e sua raiz quadrada é: %f ",num,num*2,num*3,sqrt(num));
	return 0;
}
