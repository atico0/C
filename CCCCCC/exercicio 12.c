#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float preco;
	char por = '%';
	setlocale(LC_ALL,"");
	printf("Qual o preço do produto? R$");
	scanf("%f",&preco);
	printf("O produto que custava R$%f com o desconto de 5\%c  vai custar R$%f",preco,por,preco*0.95);
	return 0;
}
