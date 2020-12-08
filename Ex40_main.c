#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float grau, radiano;

    printf("Insira o valor do angulo em graus: ");
    scanf("%f", &grau);

    radiano = grau*(3.141592/180);

    printf("\nO valor convertido em radiano eh: %.2f", radiano);
    return 0;
}
