#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num1, num2;
	printf("Digite um n�mero: ");
	scanf("%d", &num1);
	printf("Digite um n�mero: ");
	scanf("%d", &num2);
	if (num1 >= num2){
		printf("O maior n�mero � o: %d\n", num1);
		printf("A diferen�a entre eles �: %d", num1- num2);
	} else if (num2 > num1){
		printf("O maior n�mero � o: %d\n", num2);
		printf("A diferen�a entre eles �: %d", num2 - num1);
	}
	return 0;
}
