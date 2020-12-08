#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float jardas, metros;

    printf("----CONVERSAO DE METROS PARA JARDAS----\n");
    printf("Insira o valor de comprimento em metros: ");
    scanf("%f", &metros);

    jardas = metros/0.91;

    printf("\nO valor do comprimento em metros convertidos para jardas eh de: %.2f", jardas);
    return 0;
}
