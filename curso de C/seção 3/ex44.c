#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int quant;
	float degrau, altura;
	printf("Altura do dos degrais da escada:");
	scanf("%f",&degrau);
	printf("Altura desejada: ");
	scanf("%f",&altura);
	quant = (altura / degrau);
	printf("O n�mero subidos ser�o: %d", quant);
	return 0;
}
