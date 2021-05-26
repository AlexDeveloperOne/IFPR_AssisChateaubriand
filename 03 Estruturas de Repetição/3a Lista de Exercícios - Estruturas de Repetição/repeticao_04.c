#include <stdio.h>
/**
4. Projete um algoritmo que imprima uma lista de todos os números ímpares entre 0 e 30. Cada número deve ser impresso ao lado do seu dobro e do seu triplo.

*/
int main()
{
	int i, dobro, triplo;
	
    //printf("Hello World");
    printf("i  \tdobro  triplo\n");
    for(i = 1 ; i <= 30 ; i+=2){
        dobro = i*2, triplo = i*3;
        printf("%i - \t%i - \t%i\n",i,dobro,triplo);
    }
    return 0;
}
