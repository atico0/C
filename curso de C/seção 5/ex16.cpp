#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num;
	printf("Digite um n�mero natural positivo impar: ");
	scanf("%d", &num);
	for (num; num >= 1; num = num - 2){
		printf("%d \n", num);
	}
	return 0;
}
