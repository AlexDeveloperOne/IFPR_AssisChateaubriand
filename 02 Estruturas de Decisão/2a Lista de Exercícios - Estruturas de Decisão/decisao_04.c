#include <stdio.h>

/**
* Escreva um algoritmo que leia três números fornecidos pelo usuário
* e mostre se a soma de dois deles resulta no terceiro.
*/

int main()
{
	int num1, num2, num3;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &num2);
	printf("\nDigite o terceiro numero: ");
	scanf("%d", &num3);
	
	
	if(num1 == (num2 + num3)){
		printf("\nnum1 eh igual a soma de num2 com num3");
	}else if (num2 == (num1 + num3)){
		printf("\nnum2 eh igual a soma de num1 com num3");
	}else if (num3 == (num1 + num2)){
		printf("\nnum3 eh igua a coma de num1 com num2");
	}
   
   return 0;
}
