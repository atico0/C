#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int num;
	setlocale(LC_ALL,"");
	printf("Digite um n�mero inteiro: ");
	scanf("%i",&num);
	printf("\n");
	printf("O n�mero que voc� digitou foi: %i \nO seu sucessor �: %i \nE seu antecessor �: %i",num,num+1,num-1);
	return 0;
}
