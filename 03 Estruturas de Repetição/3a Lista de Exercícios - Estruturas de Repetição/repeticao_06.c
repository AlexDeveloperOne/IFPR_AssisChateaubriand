#include <stdio.h>
/*
6. Crie um programa para que retorne o somatório de todos os números entre 1 e um valor fornecido pelo usuário.
Por exemplo, se o usuário fornecer o número 4, o computador deverá calcular o somatório 1+ 2 + 3 + 4 = 10.
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
