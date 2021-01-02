#include <stdio.h>
#include <conio.h>
int main (){
  int valor;
  
  printf ("Digite um valor de 1 a 7: ");
  scanf("%d", &valor);
  
  switch ( valor )
  {
    case 1 :
    printf ("Domingo\n");
    
    
    case 2 :
    printf ("Segunda\n");
    
    
    case 3 :
    printf ("Terça\n");
    
    case 4 :
    printf ("Quarta\n");
    
    
    case 5 :
    printf ("Quinta\n");
    
    
    case 6 :
    printf ("Sexta\n");
    
    
    case 7 :
    printf ("Sabado\n");
    break;
    
    default :
    printf ("Valor invalido!\n");
  }
  
  getch();
  return 0;
}
