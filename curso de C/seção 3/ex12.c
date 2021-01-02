#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite uma distância em milhas: ");
	scanf("%f",&num);
	printf("Essa é a distância em km: %f",num*1.61);
	return 0;
}
