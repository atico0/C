#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	for(int i=1; i<6; ++i ){
		printf("%d \n",i*3);	
	}
	
	return 0;
}
