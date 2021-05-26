/**
 * 2. Escreva um algoritmo que leia dois numeros fornecidos pelo usuario e,
 * conforme o valor deles, exiba uma das seguintes mensagens:
 * O primeiro numero informado eh o maior, o segundo
 * numero eh o maior ou Ambos os numeros sao iguais.
 */

#include <stdio.h>

//using namespace std;

int main()
{
	int num1, num2;
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("\nDigite o segundo numero: ");
	scanf("%d",&num2);
	
	if(num1 > num2){
		printf("\nO primeiro numero informado eh o maior!!");
	}else if (num2 > num1){
		printf("\nO segundo numero e o maior!!");
	}else{
		printf("\nAmbos os numeros sao iguais!!");
	}
   
   return 0;
}
