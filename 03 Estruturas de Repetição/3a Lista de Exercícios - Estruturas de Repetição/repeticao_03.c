#include <stdio.h>
/*
3. Escreva um programa que imprima na tela para escrever a tabuada de um número fornecido pelo usuário, de 1 a 10.
*/

int main()
{
    //printf("Hello World");
    
    int tabuada, i;
    printf("Qual tabuada voce deseja? 1 a 10\n");
    scanf("%i", &tabuada);
    
    for(i = 1 ; i <= 10 ; i++){
        int result= tabuada * i;
        printf("%i X %i = %i\n",tabuada,i,result);
    }
	    
    return 0;
}
