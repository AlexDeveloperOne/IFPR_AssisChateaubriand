#include <stdio.h>
/*
6. Crie um programa para que retorne o somat�rio de todos os n�meros entre 1 e um valor fornecido pelo usu�rio.
Por exemplo, se o usu�rio fornecer o n�mero 4, o computador dever� calcular o somat�rio 1+ 2 + 3 + 4 = 10.
*/

int main ()
{
  int i, num, soma=0;//tive que zerar soma, pois estava apresentando o valor de '1'
  
  printf("Digite o valor para contagem: ");
  scanf("%i",&num);
  
  for (i = 0 ; i <= num ; i++)
  	soma = soma + i;

  printf("\nO valor da soma foi: %i",soma);

  return 0;
}
