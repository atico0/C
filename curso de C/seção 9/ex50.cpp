#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int matriz[3][3]){
	int sum=0;
	for (int i=0; i<=2; i++){
		for (int j=0; j<=2; j++){
			if (j == i){
				sum = matriz[i][j] + sum;
			}
		}
	}
	return sum;
}

int main(){
	int matrix[3][3];
	setlocale(LC_ALL,"");
	for (int i=0; i<=2; i++){
		for (int j=0; j<=2; j++){
			matrix[i][j] = 2;
		}
	}

	printf("%d", soma(matrix));
	return 0;
}