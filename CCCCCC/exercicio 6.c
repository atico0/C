#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	int num;
	setlocale(LC_ALL,"");
	printf("Digite um n�mero: ");
	scanf("%i",&num);
	printf("\n");
	printf("Voc� digitou o n�mero: %i seu dobro �: %i, seu triplo � %i e sua raiz quadrada �: %f ",num,num*2,num*3,sqrt(num));
	return 0;
}
