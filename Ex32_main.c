#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int tCelsius;
    float tFah;

    printf("-------CONVERSAO DE CELSIUS PARA FAHRENHEIT-------");
    printf("\nDigite a temperatura em Celsius: ");
    scanf("%d", &tCelsius);

    tFah = tCelsius*(9.0/5.0)+32.0;

    printf("\nA temperatura em Fahrenheit eh: %.2f", tFah);

    return 0;
}
