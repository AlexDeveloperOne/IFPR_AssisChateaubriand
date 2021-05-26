#include <stdlib.h>
/**
5. O programa de fidelidade de uma determinada livraria premia seus clientes de acordo com o número de livros comprados a cada mês.
Os pontos são atribuídos da seguinte forma:
• Se um cliente comprar 0 livros, ele ganhará 0 pontos.
• Se um cliente comprar um livro, ele ganhará 5 pontos.
• Se um cliente comprar dois livros, ele ganhará 15 pontos.
• Se um cliente comprar 3 livros, ele ganhará 30 pontos.
• Se um cliente comprar 4 ou mais livros, ele ganhará 60 pontos.
Crie um algoritmo que leia o número de livros comprado por um usuário e exiba o número de pontos correspondentes.
*/

int main()
{
	int livrosComprados, clientePontuacao;
	
	printf("Digite a quantidade de livros comprados: ");
	scanf("%d",&livrosComprados);
	
	if (livrosComprados == 1){
		clientePontuacao = 5;
	}else if (livrosComprados == 2){
		clientePontuacao = 15;
	}else if (livrosComprados == 3){
		clientePontuacao = 30;
	}else if (livrosComprados >= 4){
		clientePontuacao = 60;
	}
	
	printf("Voce comprou %d livros e recebeu %d pontos.",livrosComprados, clientePontuacao);
   
   return 0;
}
