#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int maior[3], matriz[4][4];
	for(int l=0; l<=3; l++){
		for(int c=0; c<=3; c++){
			printf("Digite o valor da linha %d e coluna %d: ",l+1, c+1 );
			scanf("%d", &matriz[l][c]);
			if(l==0 && c==0){
				maior[0] =matriz[l][c];
				maior[1] =l;
				maior[2] =c;
			}
			if(maior[0]<matriz[l][c]){
				maior[0] =matriz[l][c];
				maior[1] =l;
				maior[2] =c;
			}
		}
	}
	printf("O maior valor é o %d da linha %d e coluna %d", maior[0], maior[1]+1, maior[2]+1);
	return 0;
}
