#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float polegada, centimetro;

    printf("Insira o comprimento em polegadas: ");
    scanf("%f", &polegada);

    centimetro = polegada*2.54;

    printf("\nO comprimento convertido em cm eh: %.2f", centimetro);
    return 0;
}
