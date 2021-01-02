#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	int num=10;
	while (num !=0){
		printf("%d \n",num);
		num--;
	}
	printf("FIM!");
	return 0;
}
