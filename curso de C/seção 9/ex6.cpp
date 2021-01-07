#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int segundos(int hor, int min, int seg){
	int convertido;
	convertido = seg + min*60 + hor*60*60;
	return convertido;
}

int main(){
	
	setlocale(LC_ALL,"");
	convertido(1,10,900);

	return 0;
}