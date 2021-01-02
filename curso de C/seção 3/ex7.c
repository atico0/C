#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite uma temperatura em graus fahrenheit:");
	scanf("%f",&num);
	printf("Essa temperatura em graus celsius: %f",(num-32)*5/9);
	return 0;
}
