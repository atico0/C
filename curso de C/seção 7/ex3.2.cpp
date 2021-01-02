#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int matriz[4][4];
	for(int l=0; l<=3; l++){
		for(int c=0; c<=3; c++){
			matriz[l][c] = (l+1)*(c+1);
			printf("O produto entre %d e %d é: %d \n", l+1, c+1, matriz[l][c]);
		}
	}
	return 0;
}
