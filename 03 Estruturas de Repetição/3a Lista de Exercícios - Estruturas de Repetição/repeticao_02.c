#include <stdio.h>
/*
Suponha que voc� precise criar um programa para imprimir uma lista de todos os n�meros inteiros de 1 a 100.
Qual tipo de estrutura de repeti��o (Enquanto... Fa�a..., Repita... At� e Para... Fa�a...) voc� utilizaria para isso?
Crie um programa para fazer essa listagem utilizando todas as estruturas que sejam adequadas para isso. Em sua vis�o,
existe algo que impede o uso de algumas dessas estruturas? Por qu�? E se, ao inv�s de imprimir uma listagem com todos
esses n�meros, seu programa tivesse que imprimir os n�meros que estivessem numa faixa especificada pelo usu�rio, quais
seriam as estruturas de repeti��o aplic�veis? Por qu�?
*/

int main()
{
    int i, j;
    /*
    for(i = 1 ; i <= 100 ; i++)
        printf("%i\n", i);
    */
    
    i=1;
    /*
    while(i <= 100){
        printf("%i\n",i);
        i++;
    }
    */
    
    printf("\nDigite o valor limite da contagem: ");
    scanf("%d",&j);
    printf("\n");
    
    do{
        printf("%i\n",i);
        i++;
    }while(i <= j);
    
    printf("\nfim da contagem... de 1 a %d",j);
    
    return 0;
}
