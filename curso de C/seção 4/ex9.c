#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float salar, prest;
	printf("Digite o valor da prestação: ");
	scanf("%f",&prest);
	printf("Digite o seu salário: ");
	scanf("%f",&salar);
	if(prest<=(salar*0.2)){
		printf("Emprestimo concedido");
	}else{
		printf("Emprestimo negado");
	}
	return 0;
}
