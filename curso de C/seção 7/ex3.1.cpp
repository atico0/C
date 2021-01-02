#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int vetor[10], vetor2[10];
	
	for(int i=0; i<=9; i++){
		printf("Digite o %d número: ", i+1);
		scanf("%d", &vetor[i]);
		vetor2[i] = vetor[i]*vetor[i];
	}
	
	for(int i3=0; i3<=9; i3++){
		printf("O elemento original é: %d e o quadrado é: %d \n", vetor[i3], vetor2[i3]);
	}
	
	return 0;
}
