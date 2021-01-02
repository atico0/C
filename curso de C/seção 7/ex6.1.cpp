#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int menor, maior, vetor[10];
	for(int c=0; c<=9; c++){
		printf("Digite o %d valor: ", c+1);
		scanf("%d", &vetor[c]);
		if(c==0){
			menor = vetor[c];
			maior = vetor[c];
		}
		if(maior<vetor[c]){
			maior = vetor[c];
		}
		if(menor>vetor[c]){
			menor = vetor[c];
		}
	}
	printf("O maior valor do digitado foi %d e o menor foi %d", maior, menor);
	return 0;
}
