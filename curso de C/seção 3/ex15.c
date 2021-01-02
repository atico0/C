#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite um ângulo em radianos: ");
	scanf("%f",&num);
	printf("Esse ângulo em graus é: %f",num*180/3.14);
	
	return 0;
}
