#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float cilindro_vol(float alt, float raio){
	float volume;
	volume = alt*2.0*raio*3.141592;
	return volume;
}

int main(){
	
	setlocale(LC_ALL,"");
	cilindro_vol(5.4, 44.0);
	
	return 0;
}
