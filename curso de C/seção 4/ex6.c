#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num1, num2;
	printf("Digite um número: ");
	scanf("%d", &num1);
	printf("Digite um número: ");
	scanf("%d", &num2);
	if (num1 >= num2){
		printf("O maior número é o: %d\n", num1);
		printf("A diferença entre eles é: %d", num1- num2);
	} else if (num2 > num1){
		printf("O maior número é o: %d\n", num2);
		printf("A diferença entre eles é: %d", num2 - num1);
	}
	return 0;
}
