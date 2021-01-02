#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//	a[0,1,2,3,4,5] = [1,0,5,-2,-5,7];
	setlocale(LC_ALL,"");
	int soma, a[6];
	a[0] = 1;
	a[1] = 0;
	a[2] = 5;
	a[3] = -2;
	a[4] = -5;
	a[5] = 7;
	for(int i=0; i<=5; i++){
		printf("%d \n", a[i]);
	}
	soma = a[0]+a[1]+a[5];
	printf("A soma é: %d \n", soma);
	a[4] = 100;
	printf("O novo valor é: %d \n", a[4]);
	for(int i=0; i<=5; i++){
		printf("%d \n", a[i]);
	}
	return 0;
}
