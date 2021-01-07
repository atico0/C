#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float maior(float n1, float n2){
	if (n1>=n2){
		return n1;
	}
	return n2;
}

int main(){
	
	setlocale(LC_ALL,"");
	maior(1,2);
	
	return 0;
}