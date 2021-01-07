#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificador(int num){
	if (num<0){
		return -1;
	} else if(num>0){
		return 1;
	}
	return 0;
}

int main(){
	
	setlocale(LC_ALL,"");
	printf("é %d", verificador(44));
	
	return 0;
}