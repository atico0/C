#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num = 1;
	printf("for\n");
	for (int i = 1; i<101; ++i){
		printf("%d \n", i);
	}
	printf("while\n");
	while (num!=101){
		printf("%d \n", num);
		num = num + 1;
	}
	num = 1;
	printf("do while \n");
	do{
		printf("%d \n", num);
		num = num + 1;
	} while(num!=101);
	return 0;
}
