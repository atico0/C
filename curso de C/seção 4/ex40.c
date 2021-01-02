#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float custo, distri, imp;
	printf("Digite o custo: ");
	scanf("%f",&custo);
	
	if (custo<=12000){
		distri = 0.05;
		imp = 0;
	} else if ( 12000 < custo && custo <= 25000){
		distri = 0.1;
		imp = 0.15;
	} else if (custo > 25000){
		distri = 0.15;
		imp = 0.2;
	}
	printf("O custo do consumidor é: %f", custo+(custo*distri)+(custo*imp));
	return 0;
}
