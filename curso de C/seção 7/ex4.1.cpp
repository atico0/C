#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int x, y, soma, vetor[10];
	for(int i=0; i<=9; i++){
		printf("Digite o %d número: ", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("Digite uma posição: ");
	scanf("%d", &x);
	printf("Digite outra posição: ");
	scanf("%d", &y);
	soma = vetor[x-1]+vetor[y-1];
	printf("A soma entre os números das posições %d e %d é: %d", x, y, soma);
	return 0;
}
