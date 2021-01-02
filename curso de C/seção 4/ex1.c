#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num1, num2;
	
	printf("Digite o primeiro número 1: ");
	scanf("%f",&num1);
	printf("Digite o primeiro número 2: ");
	scanf("%f",&num2);
	
	if (num1>num2){
		printf("O número 1 é maior que o número 2");
	} else if (num1<num2){
		printf("O número 2 é maior que o número 1");
	}else{
		printf("Os números são iguais");
	}
	return 0;
}
