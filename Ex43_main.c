#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float centimetro, polegada;

    printf("Insira o valor do comprimento em centimetro: ");
    scanf("%f", &centimetro);

    polegada = (centimetro/2.54);
    printf("\nO comprimento convertido em polegada eh: %.2f", polegada);
    return 0;
}
