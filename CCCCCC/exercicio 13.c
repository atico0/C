#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float salario;
	char porc = '%';
	setlocale(LC_ALL,"");
	printf("Qual é o salário de um funcionario: R$");
	scanf("%f",&salario);
	printf("Um funcionario que ganhava %f com o aumento de 15%c passa a ganhar %f",salario,porc,salario*1.15);
	
	return 0;
}
