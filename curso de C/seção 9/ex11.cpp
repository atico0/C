#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media(float n1, float n2, float n3, char letra){
	float med;
	if (letra == 'A') {
		med = (n1+n2+n3)/3.0
		return med
	}else if (letra == 'P'){
		med = (n1*5.0 + n2*3.0 + n3*2.0 )/10.0;
		return med
	}
	return 0.0
}

int main(){
	
	setlocale(LC_ALL,"");
	
	return 0;
}