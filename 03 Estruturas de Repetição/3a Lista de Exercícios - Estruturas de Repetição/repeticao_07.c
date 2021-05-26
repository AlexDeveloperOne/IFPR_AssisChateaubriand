#include <stdio.h>

/*
7. Crie um programa que fique lendo repetidamente alguns n�meros fornecidos pelo usu�rio.
Se o usu�rio digitar um valor especial definido por voc� (digamos, zero, -1 ou 999),
o computador deve imprimir a somat�ria dos n�meros j� fornecidos.
Defini��o: Esse valor especial que sinaliza o fim de um la�o � chamado de valor sentinela.
Como esse valor se destina simplesmente a for�ar a condi��o de sa�da do la�o, em geral ele
n�o � aproveitado na l�gica do programa.
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
