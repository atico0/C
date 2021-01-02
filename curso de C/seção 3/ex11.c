#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite uma velocidade em (m/s): ");
	scanf("%f",&num);
	printf("Essa é a velocidade em (km/h): %f",num*3.6);
	return 0;
}
