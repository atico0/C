#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num=2;
	printf("%d\n", num);
	num = num >> 1;// leva os bits 1 da variavel num (2: 0000 0010) vão 1 casas para a direita (1: 0000 0001)
	printf("%d\n", num);
	num = 2;
	printf("%d\n", num);
	num = num << 1;// leva os bits 1 da variavel num (2: 0000 0010) vão 1 casas para a esquerda (6: 0000 0100)
	printf("%d\n", num);
	num = 2;
	num = ~num; // mudas os 0's para 1's e vice versa na variavel num (2: 0000 0010) vira (-4: 1111 1011)
	printf("%d", num);
	return 0;
}
