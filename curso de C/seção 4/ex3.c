#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num;
	printf("Digite um n�mero: ");
	scanf("%f",&num);
	if (num > 0){
		printf("A raiz quadrada desse n�mero �: %f",sqrt(num));
	} else{
		printf("O quadrado desse n�mero �: %f",num*num);
	}
	return 0;
}
