#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int matriz [5][5];
	
	for(int l=0; l<=4; l++){
		for(int c=0; c<=4; c++){
			if(c==l){
				matriz[l][c] = 1;
			}else{
				matriz[l][c] = 0;
			}
		}
	}
	
	for(int l2=0; l2<=4; l2++){
		for(int c2=0; c2<=4; c2++){
			printf("%d \n", matriz[l2][c2]);
		}
	}
	
	printf("%d", matriz);
	return 0;
}
