#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float n1,n2,media;	
	setlocale(LC_ALL,"");
	printf("Digite sua 1 nota");
	scanf("%f",&n1);
	printf("\n");
	printf("Digite sua 2 nota");
	scanf("%f",&n2);
	printf("\n");
	media = (n1+n2)/2;
	printf("A média é: %f",media);
	return 0;
}
