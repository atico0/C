#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num;
	printf("Digite um inteiro: ");
	scanf("%d", &num);
	if(num % 2 == 0) {
		printf("O número é par");
	} else{
		printf("O número é impar");
	}
	
	return 0;
}
