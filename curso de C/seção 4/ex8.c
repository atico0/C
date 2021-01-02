#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num1, num2;
	printf("Digite sua primeira nota: ");
	scanf("%f", &num1);
	if (num1 >= 0.0 && num1 <= 10.0 ){
		printf("Digite sua segunda nota: ");
		scanf("%f", &num2);
		if (num2 >= 0.0 && num2 <= 10.0 ){
			printf("A sua média é: %f", (num1 + num2)/2);
		} else{
			printf("AAAAAAAAAAAAAAAAA");
		}
	} else{
		printf("Valor invalido");
	}
	return 0;
}
