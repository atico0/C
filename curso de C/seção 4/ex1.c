#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num1, num2;
	
	printf("Digite o primeiro n�mero 1: ");
	scanf("%f",&num1);
	printf("Digite o primeiro n�mero 2: ");
	scanf("%f",&num2);
	
	if (num1>num2){
		printf("O n�mero 1 � maior que o n�mero 2");
	} else if (num1<num2){
		printf("O n�mero 2 � maior que o n�mero 1");
	}else{
		printf("Os n�meros s�o iguais");
	}
	return 0;
}
