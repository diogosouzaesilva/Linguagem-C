#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float tKel, tCel;

    printf("----KELVIN TO CELSIUS----");
    printf("\nDigite a temperatura em Kelvin: ");
    scanf("%f", &tKel);

    tCel = (tKel-273.15);

    printf("A temperatura em Celsius eh: %.2f", tCel);
    return 0;
}
