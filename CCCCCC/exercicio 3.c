#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int n1,n2;
	setlocale(LC_ALL,"");
	printf("Digite n1:");
	scanf("%i", &n1);
	printf("Digite n2:");
	//fflush(stdin);
	scanf("%i", &n2);
	printf("A soma entre %i e %i é: %i", n1, n2, n1+n2);
	
	return 0;
}
