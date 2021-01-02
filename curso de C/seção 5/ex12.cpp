#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num;
	printf("Digite um número natural positivo: ");
	scanf("%d", &num);
	for (num; num >= 0; num--){
		printf("%d \n", num);
	}
	return 0;
}
