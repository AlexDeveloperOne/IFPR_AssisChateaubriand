#include <stdio.h>
/*
Suponha que você precise criar um programa para imprimir uma lista de todos os números inteiros de 1 a 100.
Qual tipo de estrutura de repetição (Enquanto... Faça..., Repita... Até e Para... Faça...) você utilizaria para isso?
Crie um programa para fazer essa listagem utilizando todas as estruturas que sejam adequadas para isso. Em sua visão,
existe algo que impede o uso de algumas dessas estruturas? Por quê? E se, ao invés de imprimir uma listagem com todos
esses números, seu programa tivesse que imprimir os números que estivessem numa faixa especificada pelo usuário, quais
seriam as estruturas de repetição aplicáveis? Por quê?
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
