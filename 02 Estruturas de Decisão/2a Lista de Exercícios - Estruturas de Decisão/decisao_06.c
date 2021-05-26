#include <stdio.h>

/**
* 6. Crie um algoritmo para uma empresa de transportes que, a partir do peso de uma
encomenda fornecida pelo usuário, calcule o preço da remessa conforme a seguinte tabela:

Peso da encomenda									Valor
500 gramas ou menos									R$ 1,10
Mais de 500 gramas, mas não mais que 2 quilos		R$ 2,20
Mais de 2 quilos, mas não mais de 10 quilos			R$ 3,70
Mais de 10 quilos									R$ 5,00 mais R$ 3,80/kg pelo peso que ultrapassar 10 Kg

*/

int main()
{
	double pesoEncomenda, valorRemessa;
	printf("Digite o peso da encomenda: ");
	scanf("%lf", &pesoEncomenda);
	
	if(pesoEncomenda > 0 && pesoEncomenda <= 0.5){
		valorRemessa = 1.1;
		printf("\nCusto da Remessa: %0.2lf",valorRemessa);
	}else if(pesoEncomenda > 0.5 && pesoEncomenda <= 2.0){
		valorRemessa = 2.2;
		printf("\nCusto da Remessa: %0.2lf",valorRemessa);
	}else if (pesoEncomenda > 2.0 && pesoEncomenda <= 10){
		valorRemessa = 3.7;
		printf("\nCusto da Remessa: %0.2lf",valorRemessa);
	}else if (pesoEncomenda > 10.0){
		valorRemessa = 5.0 + (3.8 * (pesoEncomenda - 10));
		printf("\nCusto da Remessa: %0.2lf",valorRemessa);
	}else{
		printf("\nVoce digitou um valor errado!!");
	}
   
   return 0;
}
