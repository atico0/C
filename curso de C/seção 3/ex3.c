#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num1, num2, num3;
	printf("Digite um n�mero:");
	scanf("%d",&num1);
	
	printf("Digite um n�mero:");
	scanf("%d",&num2);
	
	printf("Digite um n�mero:");
	scanf("%d",&num3);
	printf("A soma entre os n�meros �: %d",num1+num2+num3);
	return 0;
}
