#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	for (int i = 0; i<= 100000; i = i + 1000){
		printf("%d \n", i);
	}
	return 0;
}
