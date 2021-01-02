#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int a[6];	
	for (int i=0; i<=5; i++){
		printf("Digite o %d número: ", i+1);
		scanf("%d", &a);
	}
	for (int c=0; c<=5; c++){
		printf("O %d número digitado foi: %d \n", 1+c, a[c]);
	}
	return 0;
}
