#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float valor,valor_desconto;
	printf("Digite o valor a pagar:");
	scanf("%f",&valor);
	valor_desconto = valor*0.9;
	printf("O valor com 10 porcento de desconto (para pagamentos a vista): %f \n",valor_desconto);
	printf("O valor de cada parcela em 3x sem juros: %f \n",valor/3);
	printf("A comissão da venda  a vista: %f \n",valor_desconto*0.05);
	printf("A comissão da venda  parcelada: %f \n",valor*0.05);

	return 0;
}
