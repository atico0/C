#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num;
	printf("Digite um número natural positivo impar: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i = i + 2){
		printf("%d \n", i);
	}
	return 0;
}
