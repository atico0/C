#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int num;
	setlocale(LC_ALL,"");
	printf("Digite um número inteiro: ");
	scanf("%i",&num);
	printf("\n");
	printf("O número que você digitou foi: %i \nO seu sucessor é: %i \nE seu antecessor é: %i",num,num+1,num-1);
	return 0;
}
