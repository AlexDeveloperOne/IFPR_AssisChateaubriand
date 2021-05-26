#include <stdio.h>

/*
8. Somatório e média de uma lista de números – Construa um programa que permita a um usuário informar uma série de números,
até que um número negativo seja fornecido. Ao final, imprima o somatório desses números, a média, o valor máximo e o mínimo.
Desconsidere o último número informado pelo usuário.
*/

int main ()
{
    int num, soma;
    printf("Digite o primeiro valor para somar: \n");
    scanf("%d", &num);
    
    while(num >= 0){
        soma = soma + num;
        printf("Digite outro: \n");
        scanf("%d", &num);
    }
    
    printf("\nO valor total foi: %i", soma);

  return 0;
}
