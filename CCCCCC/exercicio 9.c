#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int num;
	setlocale(LC_ALL,"");
	printf("Digite um número para ver sua tabuada:");
	scanf("%i",&num);
	printf(" %i x 1 = %i\n %i x 2 = %i\n %i x 3 = %i\n %i x 4 = %i\n %i x 5 = %i\n %i x 6 = %i\n %i x 7 = %i\n %i x 8 = %i\n %i x 9 = %i\n %i x 10 = %i",
	num,num,num,num*2,num,num*3,num,num*4,num,num*5,num,num*6,num,num*7,num,num*8,num,num*9,num,num*10);
	return 0;
}
