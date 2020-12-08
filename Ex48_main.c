#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float jardas, metros;

    printf("----CONVERSAO DE JARDAS PARA METROS----\n");
    printf("Insira o valor de comprimento em jardas: ");
    scanf("%f", &jardas);

    metros = 0.91*jardas;

    printf("\nO valor do comprimento em metros convertidos para jardas eh de: %.2f", metros);
    return 0;
}
