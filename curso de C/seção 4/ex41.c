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
		printf("Voc� est� abaixo do peso");
	} else if(18.5 <= imc && imc < 25.0){
		printf("Voc� est� saudavel");
	} else if(25.0 <= imc && imc < 30.0){
		printf("Voc� est� com excesso de peso");
	} else if(30.0 <= imc && imc < 35.0){
		printf("Voc� est� com obesidade grau 1");
	}else if(35.0 <= imc && imc < 40.0){
		printf("Voc� est� com obesidade grau 2");
	} else if(40.0 <= imc){
		printf("Voc� est� com obesidade grau 3");
	}
	
	printf("\n seu imc �: %f", imc);
	return 0;
}
