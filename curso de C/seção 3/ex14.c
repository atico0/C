#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite um ângulo em graus: ");
	scanf("%f",&num);
	printf("Esse ângulo em radianos é: %f",num*3.14/180);
	
	return 0;
}
