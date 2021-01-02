#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float km;
	int dias;
	setlocale(LC_ALL,"");
	printf("Quantos dias alugados? ");
	scanf("%i",&dias);
	printf("Quantos kilometros rodados? ");
	scanf("%f",&km);
	printf("O total a pagar é %f",dias*60+km*0.15);
	return 0;
}
