#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float graus, fa;
	setlocale(LC_ALL,"");
	printf("Digite uma temperatura em graus celsios: ");
	scanf("%f",&graus);
	fa = (graus*9/5)+32;
	fa = (graus*9/5)+32;
	printf("Essa temperatura equivale a %fF",fa);
	return 0;
}
