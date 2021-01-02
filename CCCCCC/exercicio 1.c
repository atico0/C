#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[20];
	char t;
	t = 't';
	printf("%c",t);
	printf("%s",nome);
	
	
	
	
	printf("DIGITE SEU NOME:");
	fgets(nome, 20 ,stdin);
	printf("%s", nome);
	printf("Bem vindo %s, prazer em te conhecer", nome);
	//nome[1] ='i';
	//printf("%c", nome);
	
	return 0;
}
