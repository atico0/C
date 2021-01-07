#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int volume(float raio){
	float vol;
	vol = (raio*raio*raio)*3.1415;
	return vol
}

int main(){
	
	setlocale(LC_ALL,"");
	printf("%d", volume(1));
	
	return 0;
}
