#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float tFah, tCel;

    printf("----CONVERSAO DE FAHRENHEIT PARA CELSIUS");
    printf("\nDigite a temperatura em graus Fahrenheit: ");
    scanf("%f", &tFah);

    tCel = 5.0*(tFah-32.0)/9.0;

    printf("\nA temperatura em Celsius eh: %.2f", tCel);
    return 0;
}
