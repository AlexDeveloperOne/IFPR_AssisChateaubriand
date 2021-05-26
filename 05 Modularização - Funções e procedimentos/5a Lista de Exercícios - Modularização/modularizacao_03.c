/*
3. Valor do seguro – De acordo com alguns corretores, convém que as pessoas façam
um seguro de suas casas em pelo menos 80% da quantia que custaria para reconstruí-las.
Crie um programa modular que solicite ao usuário que insira o custo de um metro
quadrado de construção (o chamado CUB, Custo Unitário Básico de Construção),
a área construída de uma casa e, em seguida, exiba o valor mínimo de seguro
que ele ou ela deve comprar para o imóvel.
Modificação: o CUB não é o único fator que impacta no custo do imóvel.
O padrão do imóvel também deve ser levado em conta: casas de alto padrão
custam mais para serem construídas do que casas populares. Levando isso em
consideração, modifique o programa para que o usuário possa informar também
qual é o padrão de construção da casa, que pode ser um entre quatro valores
possíveis: RA, RB, RC e RD. O padrão RA é o mais alto e o RD o mais baixo.
Para essa modificação, suponha que o custo do metro quadrado construído de uma
casa do padrão RA é 40% mais caro que o CUB, o de uma casa do padrão RB 25% mais
caro, o padrão RC é igual ao CUB e, finalmente, o padrão RD é 90% do CUB.
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
	O chamado CUB, Custo Unitário Básico de Construção (m2)
	double custoDeConstrucao;
	a área construída de uma casa e,
	double areaConstruida;
	
	::Processo
	
	::Saída
	valor mínimo de seguro que ele ou ela deve comprar para o imóvel.
	*/
	
    return 0;
}
