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
	if (num1 > num2){
		printf("O maior n�mero � o: %d\n", num1);
	} else if (num2 > num1){
		printf("O maior n�mero � o: %d\n", num2);
	} else{
		printf("Eles s�o iguais");
	}
	return 0;
}
