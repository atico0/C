#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float alt;
	char sex;
	printf("Digite seu sexo: ");
	scanf("%c", &sex);
	printf("Digite sua altura: ");
	scanf("%f", &alt);
	
	if (sex == 'm'){
		printf("Seu peso ideal �: %f e vc � macho", (72.7*alt) - 38);
	}else if (sex == 'f'){
		printf("Seu peso ideal �: %f e vc � fem�a", (62.1*alt) - 44.7);
	}else{
		printf("Gen�ro invalido");
	}
	return 0;
}
