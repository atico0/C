#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite uma dist�ncia em milhas: ");
	scanf("%f",&num);
	printf("Essa � a dist�ncia em km: %f",num*1.61);
	return 0;
}
