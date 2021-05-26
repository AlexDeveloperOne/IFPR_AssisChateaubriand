#include <stdio.h>
/*
Um brechó revende produtos usados, e fixa o preço de venda de cada produto conforme o valor de sua aquisição:
se o preço de aquisição de um produto é menor do de R$ 50.00, ele deve ser vendido por um preço 45% maior;
caso contrário, o lucro será de 30%. Sabendo disso, construa um algoritmo que leia o valor de aquisição de um
produto e mostre o seu valor de venda.
*/

int main()
{
	float valorProduto, precoVenda;
	
	printf("Digite o valor do Produto: ");
	scanf("%f",&valorProduto);
	
	if(valorProduto > 0 && valorProduto < 50 ){
	    precoVenda = valorProduto + (valorProduto * 0.45);
	}else{
	    precoVenda = valorProduto + (valorProduto * 0.30);
	}
	printf("\nO produto sera vendido por : %0.2f",precoVenda);
   
   return 0;
}
