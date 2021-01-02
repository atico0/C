#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int matriz1[4][4], matriz2[4][4], matriz3[4][4];

	for(int l=0; l<=4; l++){
		for(int c=0; c<=4; c++){
			printf("Digite o valor da %d linha e %d coluna: ", l+1, c+1);
			scanf("%d", &matriz1[l][c]);
		}
	}
	printf("\n");
	for(int l2=0; l2<=4; l2++){
		for(int c2=0; c2<=4; c2++){
			printf("Digite o valor da %d linha e %d coluna: ", l2+1, c2+1);
			scanf("%d", &matriz2[l2][c2]);
		}
	}
	printf("\n");

	for(int l3=0; l3<=4; l3++){
		for(int c3=0; c3<=4; c3++){
			if(matriz1[l3][c3]>matriz2[l3][c3]){
				matriz3[l3][c3] = matriz1[l3][c3];
			}else{
				matriz3[l3][c3] = matriz2[l3][c3];
			}
			printf("O valor da linha %d e coluna %d é: %d \n",l3, c3, matriz3[l3][c3]);
		}
	}
	
	return 0;
}
