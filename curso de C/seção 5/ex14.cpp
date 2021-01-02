#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num;
	printf("Digite um número natural positivo par: ");
	scanf("%d", &num);
	for (num; num >= 0; num = num - 2){
		printf("%d \n", num);
	}
	return 0;
}
