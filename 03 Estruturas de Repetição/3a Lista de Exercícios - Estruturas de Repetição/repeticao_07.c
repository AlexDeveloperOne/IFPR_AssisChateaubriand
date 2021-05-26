#include <stdio.h>

/*
7. Crie um programa que fique lendo repetidamente alguns números fornecidos pelo usuário.
Se o usuário digitar um valor especial definido por você (digamos, zero, -1 ou 999),
o computador deve imprimir a somatória dos números já fornecidos.
Definição: Esse valor especial que sinaliza o fim de um laço é chamado de valor sentinela.
Como esse valor se destina simplesmente a forçar a condição de saída do laço, em geral ele
não é aproveitado na lógica do programa.
*/

int main ()
{
    int num, sentinela = 007, soma;
    printf("Digite o primeiro valor para somar: \n");
    scanf("%d", &num);
    
    while(num != sentinela){
        soma = soma + num;
        printf("Digite outro: \n");
        scanf("%d", &num);
    }
    
    printf("\nO valor total foi: %i", soma);

  return 0;
}
