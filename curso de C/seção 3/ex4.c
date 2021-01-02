#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite um número:");
	scanf("%f",&num);
	printf("O quadrado desse número é: %f",num*num);
	return 0;
}
