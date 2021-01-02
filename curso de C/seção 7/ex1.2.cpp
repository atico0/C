#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int matriz [4][4];
	for(int l=0; l<=3; l++){
		for(int c=0; c<=3; c++){
			printf("Digite o valor da linha %d e coluna %d: ", l+1, c+1);
			scanf("%d", &matriz[l][c]);
			
		}
	}
	printf("\n");
	for(int l=0; l<=3; l++){
		for(int c=0; c<=3; c++){
			printf("\nEsse é o valor da linha %d e coluna %d: %d ", l, c,  matriz[l][c]);
			if(matriz[l][c]>10){
				printf("Esse valor é maior que 10 ");
			}
		}
	}
	return 0;
}
