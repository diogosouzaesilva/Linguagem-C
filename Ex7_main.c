#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valorreal, cotacao, dolar;

    printf("----CONVERSAO DE REAL PARA DOLAR----\n");

    printf("Digite o valor em R$: ");
    scanf("%f", &valorreal);

    printf("Digite o valor da cotacao do dolar: ");
    scanf("%f", &cotacao);

    dolar = valorreal*cotacao;

    printf("O valor correspondente em dolar eh: %.2f\n\n", dolar);
    return 0;
}
