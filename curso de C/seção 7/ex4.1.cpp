#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int x, y, soma, vetor[10];
	for(int i=0; i<=9; i++){
		printf("Digite o %d n�mero: ", i+1);
		scanf("%d", &vetor[i]);
	}
	printf("Digite uma posi��o: ");
	scanf("%d", &x);
	printf("Digite outra posi��o: ");
	scanf("%d", &y);
	soma = vetor[x-1]+vetor[y-1];
	printf("A soma entre os n�meros das posi��es %d e %d �: %d", x, y, soma);
	return 0;
}
