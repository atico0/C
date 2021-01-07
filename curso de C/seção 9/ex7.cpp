#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float cel_fah(float celsius){
	float fahrenheit;
	fahrenheit = celsius*(9.0/5.0) + 32;
	return fahrenheit;
}

int main(){
	
	setlocale(LC_ALL,"");

	cel_fah(45.75);
	
	return 0;
}