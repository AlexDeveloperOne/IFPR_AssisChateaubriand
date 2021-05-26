/*1.  Conversor  de Unidades  de  Distância – Crie um  programa  modular  que 
solicite ao  usuário  que  insira  uma distância  em  quilômetros  e  depois
converta  essa distância em milhas. A fórmula de conversão é a seguinte:
Distância em Milhas = Distância em Quilômetros × 0,6214 Modificação:
concluído este programa, modifique-o para que o usuário informe se deseja
converter milhas para quilômetros ou vice-versa.*/

#include <stdio.h>

int main()
{
    double distKilometros, distMilhas;
    printf("\nInsira a distancia em Kilometros: ");
    scanf("%lf", &distKilometros);
    distMilhas = distKilometros * 0.6214;
    
	printf("\nA distancia em milhas eh: %.2lf\n", distMilhas);

    return 0;
}
