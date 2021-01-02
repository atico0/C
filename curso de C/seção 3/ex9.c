#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite uma temperatura em graus celsios:");
	scanf("%f",&num);
	printf("Essa temperatura em graus kelvin: %f",num+273.15);
	return 0;
}
