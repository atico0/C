#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite um n�mero:");
	scanf("%f",&num);
	printf("A quinta parte deste n�mero �: %f",num/5);
	return 0;
}
