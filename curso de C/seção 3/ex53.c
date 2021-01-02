#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float compr, larg, prec, total;
	
	printf("comprimento: ");
	scanf("%f",&compr);
	
	printf("largura: ");
	scanf("%f",&larg);
	
	printf("preço do metro de tela: ");
	scanf("%f",&prec);
	total  = 2*prec*(compr + larg);
	printf("O preço para cobrir o terreno é: %f",total);
	return 0;
}
