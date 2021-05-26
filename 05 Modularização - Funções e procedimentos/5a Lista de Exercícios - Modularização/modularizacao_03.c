/*
3. Valor do seguro � De acordo com alguns corretores, conv�m que as pessoas fa�am
um seguro de suas casas em pelo menos 80% da quantia que custaria para reconstru�-las.
Crie um programa modular que solicite ao usu�rio que insira o custo de um metro
quadrado de constru��o (o chamado CUB, Custo Unit�rio B�sico de Constru��o),
a �rea constru�da de uma casa e, em seguida, exiba o valor m�nimo de seguro
que ele ou ela deve comprar para o im�vel.
Modifica��o: o CUB n�o � o �nico fator que impacta no custo do im�vel.
O padr�o do im�vel tamb�m deve ser levado em conta: casas de alto padr�o
custam mais para serem constru�das do que casas populares. Levando isso em
considera��o, modifique o programa para que o usu�rio possa informar tamb�m
qual � o padr�o de constru��o da casa, que pode ser um entre quatro valores
poss�veis: RA, RB, RC e RD. O padr�o RA � o mais alto e o RD o mais baixo.
Para essa modifica��o, suponha que o custo do metro quadrado constru�do de uma
casa do padr�o RA � 40% mais caro que o CUB, o de uma casa do padr�o RB 25% mais
caro, o padr�o RC � igual ao CUB e, finalmente, o padr�o RD � 90% do CUB.
*/

#include <stdio.h>

int main()
{
	double custoDeConstrucao, areaConstruida, impostoMinimo;
	char padraoImovel[2];
	printf("Insira Custo de Construcao em M2: ");
	scanf("%lf", &custoDeConstrucao);
	printf("\nAgora digite a area construida em M2: ");
	scanf("%lf", &areaConstruida);
	printf("\nDigite o padrao de seu imovel:\nRA, RB, RC ou RD");
	scanf("%s", &padraoImovel);
	
	if (padraoImovel == 'RA'){
		custoDeConstrucao = custoDeConstrucao + (custoDeConstrucao * 0.40);
		impostoMinimo = (areaConstruida * 0.8) * custoDeConstrucao;
		printf("\nImposto para casa padrao RA: %0.2f",impostoMinimo);
	}else if (padraoImovel == 'RB'){
		custoDeConstrucao = custoDeConstrucao + (custoDeConstrucao * 0.25);
		impostoMinimo = (areaConstruida * 0.8) * custoDeConstrucao;
		printf("\nImposto para casa padrao RB: %0.2f",impostoMinimo);
	}else if (padraoImovel == 'RD'){
		custoDeConstrucao = custoDeConstrucao * 0.90;
		impostoMinimo = (areaConstruida * 0.8) * custoDeConstrucao;
		printf("\nImposto para casa padrao RD: %0.2f",impostoMinimo);
	}
	/*
	impostoMinimo = (areaConstruida * 0.8) * custoDeConstrucao;
	
	
	
	
	printf("\nImposto Minimo de se imovel: %0.2f",impostoMinimo);
	
	printf("\nFim da primeira parte do programa... \n\n");
	*/
	
	/*
	::Entrada
	O chamado CUB, Custo Unit�rio B�sico de Constru��o (m2)
	double custoDeConstrucao;
	a �rea constru�da de uma casa e,
	double areaConstruida;
	
	::Processo
	
	::Sa�da
	valor m�nimo de seguro que ele ou ela deve comprar para o im�vel.
	*/
	
    return 0;
}
