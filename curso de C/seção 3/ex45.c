#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	char mai,min;
	int conver;
	printf("Digite uma letra maiuscula: ");
	scanf("%c",&mai);
	conver= mai + 32;
	min = conver;
	printf(" %c ",min);
	return 0;
}
