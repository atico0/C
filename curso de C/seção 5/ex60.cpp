#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num, maior, menor, cont = 0, soma = 0, cont_par = 0, soma_par = 0;
	float media, media_par;
	printf("Digite um n�mero (0 para parar): ");
	scanf("%d", &num);
	menor = num;
	maior = num;
	
	while (num != 0 ){
		soma = num + soma;
		cont++;
		media = soma/cont;
		if ((num % 2) == 0){
			soma_par = num + soma_par;
			cont_par++;
			media_par = soma_par/cont_par;
		}
		printf("Digite um n�mero (0 para parar): ");
		scanf("%d", &num);
		if(num > maior){
			maior = num;
		}
		if(num < menor){
			menor = menor;
		}
	}
	
	printf("A soma �: %d \n", soma);
	printf("A m�dia �: %f \n", media);
	printf("A quant de n�meros �: %d \n",cont);
	printf("O maior �: %d \n", maior);
	printf("O menor �: %d \n", menor);
	printf("A m�dia de pares �: %f \n",media_par);
	return 0;
}
