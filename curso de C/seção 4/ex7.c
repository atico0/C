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
	if (num1 > num2){
		printf("O maior número é o: %d\n", num1);
	} else if (num2 > num1){
		printf("O maior número é o: %d\n", num2);
	} else{
		printf("Eles são iguais");
	}
	return 0;
}
