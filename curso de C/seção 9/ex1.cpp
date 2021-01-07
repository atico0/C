#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int dobrador(int num){
	int dobro = num*2;
	return dobro;
}
int main(){
	
	setlocale(LC_ALL,"");
	printf("%d", dobrador(45));
	return 0;
}
