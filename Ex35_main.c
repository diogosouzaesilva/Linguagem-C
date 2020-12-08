#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tKel, tCel;

    printf("----CELSIUS TO KELVIN----");
    printf("\nDigite a temperatura em Celsius: ");
    scanf("%f", &tCel);

    tKel = (tCel+273.15);

    printf("A temperatura em Kelvin eh: %.2f", tKel);
    return 0;
}
