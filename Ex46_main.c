#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    float kg, libras;
    printf("Insira o valor de quilogramas: ");
    scanf("%f", &kg);

    libras = kg/0.45;

    printf("\nO valor inserido em kg convertido para libras eh de: %.2f\n\n", libras);
    return 0;
}
