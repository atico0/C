#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num, cont=1;
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	for(int i = 1; i<=num; i++){
		printf("%d \n", cont);
		cont = cont+2;
	}
	return 0;
}
