#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite um n�mero:");
	scanf("%f",&num);
	printf("O quadrado desse n�mero �: %f",num*num);
	return 0;
}
