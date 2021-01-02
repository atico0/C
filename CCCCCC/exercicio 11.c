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
	printf("Sua parede tem dimensão %fx%f e sua área é de %fm^2.\n",larg,alt,larg*alt);
	printf("Para pintar essa parede serão necessários %f litros de tinta",larg*alt/2);
	
	
	return 0;
}
