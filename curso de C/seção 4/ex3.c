#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite um número: ");
	scanf("%f",&num);
	if (num > 0){
		printf("A raiz quadrada desse número é: %f",sqrt(num));
	} else{
		printf("O quadrado desse número é: %f",num*num);
	}
	return 0;
}
