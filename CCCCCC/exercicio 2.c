#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	char dia[2], mes[3], ano[4];
		
	printf("Digite o seu dia de nascimento:\n");
	fgets(dia,3,stdin);
	//printf("%s",dia);
	printf("Digite o seu  m�s de nascimento:\n");
	fflush(stdin);
	fgets(mes,4,stdin);
	//printf("%s",mes);
	printf("Digite o seu ano de nascimento:\n");
	fflush(stdin);
	fgets(ano, 5, stdin);
	printf("Voc� nasceu no dia %s do m�s %s de %s",dia,mes,ano);
	return 0;
}
