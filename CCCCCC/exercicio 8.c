#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float num;
	setlocale(LC_ALL,"");
	printf("Digite uma distância em metro: ");
	scanf("%f",&num);
	printf("\n");
	printf("O número que você digitou corresponde a: \n");
	printf("%fkm \n ",num/1000 );
	printf(" %fhm \n ",num/100 );
	printf("%fdam \n ",num/10 );
	printf("%fdm \n ", num*10);
	printf("%fcm \n ",num*100);
	printf("%fmm ",num*1000  );
	return 0;
}
