#include <stdio.h>

/*
8. Somat�rio e m�dia de uma lista de n�meros � Construa um programa que permita a um usu�rio informar uma s�rie de n�meros,
at� que um n�mero negativo seja fornecido. Ao final, imprima o somat�rio desses n�meros, a m�dia, o valor m�ximo e o m�nimo.
Desconsidere o �ltimo n�mero informado pelo usu�rio.
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
