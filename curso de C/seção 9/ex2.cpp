#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void atual (int dia, int mes, int ano){
	char mes_extenso[3];
	switch (mes)
	{
		case 1:
		mes_extenso = "jan";
		break;
		case 2:
		mes_extenso = "fev";
		break
		case 3:
		mes_extenso = "mar";
		break
		case 4:
		mes_extenso = "abr";
		break
		case 5:
		mes_extenso = "mai";
		break
		case 6:
		mes_extenso = "jun";
		break
		case 7:
		mes_extenso = "jul";
		break
		case 8:
		mes_extenso = "ago";
		break
		case 9:
		mes_extenso = "set";
		break
		case 10:
		mes_extenso = "out";
		break
		case 11:
		mes_extenso = "nov";
		break
		case 12:
		mes_extenso = "dez";
		break
		default:
		mes_extenso = "inv";

	}
	if (mes_extenso == "inv"){
		printf("Valor invalido")
	}else{
		printf("DIA %d do mes %s do ano %d", dia, mes_extenso, ano);
	}
	
}

int main(){
	
	setlocale(LC_ALL,"");
	time_t mytime;
    mytime = time(NULL);
    printf(ctime(&mytime));
	return 0;
}
