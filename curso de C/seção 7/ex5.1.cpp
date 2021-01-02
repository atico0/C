#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int cont = 0, vetor[10];
	for(int c=0; c<=9; c++){
		printf("Digite o %d valor: ", c+1);
		scanf("%d", &vetor[c]);
		if(vetor[c]%2==0){
			cont = cont +1;
		}
	}
	printf("Você digitou %d números pares", cont);
	
	return 0;
}
