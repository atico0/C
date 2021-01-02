#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite uma temperatura em graus celsios:");
	scanf("%f",&num);
	printf("Essa temperatura em graus fahrenheit: %f",(num*9/5)+32);
	return 0;
}
