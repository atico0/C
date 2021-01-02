#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float preco, aumento;
	printf("Digite o preço do produto: ");
	scanf("%f", &preco);
	if (preco<=50){
		aumento = 1.05;
	} else if (preco > 50 && preco<= 100 ){
		aumento = 1.1;
	} else if (preco > 100){
		aumento = 1.15;
	}
	printf("O novo preço é: %f", preco*aumento);
	return 0;
}
