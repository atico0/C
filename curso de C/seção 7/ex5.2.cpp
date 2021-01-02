#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int x, coord[2], matriz[5][5];
	coord[0]= -1;
	for(int l=0; l<=4; l++){
		for(int c=0; c<=4; c++){
			printf("Digite o valor da %d linha e %d coluna: ", l+1, c+1);
			scanf("%d", &matriz[l][c]);
		}
	}
	printf("Digite um valor: ");
	scanf("%d", &x);
	
	for(int l2=0; l2<=4; l2++){
		for(int c2=0; c2<=4; c2++){
			if(x==matriz[l2][c2]){
				coord[0]=l2;
				coord[1]=c2;
				break;
			}	
		}
		if (coord[0]!=-1){
				break;
			}
	}
	if(coord[0]!=-1){
		printf("O valor %d está na linha %d e coluna %d", x, coord[0]+1, coord[1]+1);
	}else{
		printf("Não encontrado!");
	}
	return 0;
}
