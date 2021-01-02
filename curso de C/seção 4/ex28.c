#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL,"");
	int x,y,z, esc;
	float media;
	printf("Digite um int positivo: ");
	scanf("%d",&x);
	printf("Digite outro: ");
	scanf("%d",&y);
	printf("outro: ");
	scanf("%d", &z);
	printf("esolha qual média será calculada: \n(1) Geométrica \n(2) Ponderada \n(3) Harmônica \n(4) Aritimética: ");
	scanf("%d", &esc);
	
	if (esc == 1){
		media = (pow((x*y*z),0.33333336));
	} else if (esc == 2){
		media = (x+2*y+3*z)/6;
	} else if (esc == 3){
		media = 1/(1/x+1/y+1/z);
	} else if (esc == 4){
		media = (x+y+z)/3;
	} else{
		printf('Valor invalido');
	}
	
	printf("A média é: %f", media);
	return 0;
}
