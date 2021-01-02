#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite uma distância em km: ");
	scanf("%f",&num);
	printf("Essa é a distância em milhas: %f",num/1.61);
	return 0;
}
