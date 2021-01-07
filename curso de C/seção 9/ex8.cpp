#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float pitagoras(float a, float b){
	float c;
	c = sqrt(a*a + b*b);
	return c;

}

int main(){
	
	setlocale(LC_ALL,"");
	
	return 0;
}
