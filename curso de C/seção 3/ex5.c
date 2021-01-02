#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite um número:");
	scanf("%f",&num);
	printf("A quinta parte deste número é: %f",num/5);
	return 0;
}
