#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float larg ,alt;
	setlocale(LC_ALL,"");
	printf("Largura da parede: ");
	scanf("%f",&larg);
	printf("Altura da parede:");
	scanf("%f",&alt);
	printf("Sua parede tem dimens�o %fx%f e sua �rea � de %fm^2.\n",larg,alt,larg*alt);
	printf("Para pintar essa parede ser�o necess�rios %f litros de tinta",larg*alt/2);
	
	
	return 0;
}
