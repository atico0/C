#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	float num, maior, menor;
	for(int i= 1; i <= 10; i++){
		printf("Digite o %d número: ",i);
		scanf("%f", &num);
		if(i == 1){
			maior = num;
			menor = num;
		}else{
			if (num > maior){
				maior = num;
			}else if(num < menor){
				menor = num;
			}
		}
	}
	printf("O maior número é: %f e  o menor número é: %f",maior,menor);
	return 0;
}
