#include <stdio.h>
/*
Escreva um programa que conte em ordem reversa, de 25 a zero.
*/

int main()
{
    int i;
    
    for(i = 25 ; i >= 0 ; i--)
        printf("i -v %i\n", i);
    
    //fiz algo a mais!
    while (i < 25){
    	i++;
    	printf("i -^ %i\n",i);
	}

    return 0;
}
