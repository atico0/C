#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float din;
	setlocale(LC_ALL,"");
	printf("Quanto dinheiro você tem na conta? R$");
	scanf("%f",&din);
	printf("Você pode comprar %f doláres com esse dinheiro %f",din/5.56,din);
	return 0;
}
