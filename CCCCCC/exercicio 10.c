#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float din;
	setlocale(LC_ALL,"");
	printf("Quanto dinheiro voc� tem na conta? R$");
	scanf("%f",&din);
	printf("Voc� pode comprar %f dol�res com esse dinheiro %f",din/5.56,din);
	return 0;
}
