#include <stdio.h>
#include <stdlib.h>
#include <time.h>//Biblioteca com comandos de data e hora

int main()
{

    int idade ,anoAtual;//Esta vari�vel foi criada para receber o resultado do comando que exibe o ano atual.
    time_t data_ano;//Foi criada uma vari�vel chamada data_ano que � do tipo time_t que � um tipo de vari�vel que recebe valores de data e hora.
    time(&data_ano);
  
    struct tm *data = localtime(&data_ano);

    anoAtual = (data->tm_year+1900);    
	printf("Sua idade: ");
	scanf("%d",&idade);
	printf("Seu ano de nascimento �: %d", anoAtual- idade);
    return 0;
}
