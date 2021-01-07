#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int quadrado_perfeito(int num){
	if( (float) sqrt(num) == (int) sqrt(num)){
		return 1;
	}
	return 0;
}

int main(){
	
	setlocale(LC_ALL,"");
	quadrado_perfeito(144);
	return 0;
}