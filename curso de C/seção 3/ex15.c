#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite um �ngulo em radianos: ");
	scanf("%f",&num);
	printf("Esse �ngulo em graus �: %f",num*180/3.14);
	
	return 0;
}
