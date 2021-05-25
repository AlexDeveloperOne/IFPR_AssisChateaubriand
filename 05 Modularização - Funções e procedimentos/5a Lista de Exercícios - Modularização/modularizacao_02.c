/*
2. Impostos sobre vendas – Crie um programa modular que peça ao usuário para informar o valor de uma compra efetuada numa loja e calcule o imposto de vendas
estadual e municipal que essa loja deve pagar. Para isso, suponha que o imposto estadual sobre vendas seja de 4% e o imposto estadual sobre vendas seja de 2%.
Ao final, o programa deve exibir o valor da compra, o imposto estadual sobre vendas, o imposto municipal sobre vendas, o imposto total sobre vendas e o total
da venda (que é a soma do valor da compra mais o imposto total sobre vendas).
*/

#include <stdio.h>

void calculaImposto (double compraEfetuada);

int main()
{
	double impostoDeVendasEstadual, impostoDeVendasMunicipal, compraEfetuada;
	
	printf("\nDigite o Valor da compra: ");
	scanf("%lf", &compraEfetuada);
	
	calculaImposto (compraEfetuada);
	
    return 0;
}

void calculaImposto (double compraEfetuada){
		//imposto estadual de 4% sobre a compra
		double impostoDeVendasEstadual = compraEfetuada * 0.04;
		//imposto municipal de 2% sobre a compra
		double impostoDeVendasMunicipal = compraEfetuada * 0.02;
		double impostoTotal = impostoDeVendasMunicipal + impostoDeVendasEstadual;
		double totalDaVenda = compraEfetuada + impostoTotal;//não concordo, mas seguirei o exercicio
		
		void relatando(){
			printf("\nCompra: %0.2f", compraEfetuada);
			printf("\nImposto Estadual: %0.2f", impostoDeVendasEstadual);
			printf("\nImposto Municipal: %0.2f", impostoDeVendasMunicipal);
			printf("\nImposto Total: %0.2f", impostoTotal);
			printf("\nTotal da Venda: %0.2f", totalDaVenda);
		}
		relatando();
	}
	
