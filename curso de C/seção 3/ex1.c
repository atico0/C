#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num;
	printf("Digite um n�mero:");
	scanf("%d",&num);
	printf("%d",num);
	return 0;
}
