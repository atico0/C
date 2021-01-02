#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float peso, alt, imc;
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	printf("Digite sua altura: ");
	scanf("%f",&alt);
	imc = (peso/(alt*alt));
	
	if (imc < 18.5){
		printf("Você está abaixo do peso");
	} else if(18.5 <= imc && imc < 25.0){
		printf("Você está saudavel");
	} else if(25.0 <= imc && imc < 30.0){
		printf("Você está com excesso de peso");
	} else if(30.0 <= imc && imc < 35.0){
		printf("Você está com obesidade grau 1");
	}else if(35.0 <= imc && imc < 40.0){
		printf("Você está com obesidade grau 2");
	} else if(40.0 <= imc){
		printf("Você está com obesidade grau 3");
	}
	
	printf("\n seu imc é: %f", imc);
	return 0;
}
