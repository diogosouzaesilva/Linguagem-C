#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float m2, acres;

    printf("----CONVERSAO DE METROS QUADRADOS PARA ACRES----\n");
    printf("Insira o valor do metro quadrado: ");
    scanf("%f", &m2);

    acres = m2*0.000247;

    printf("\nO valor do metro quadrado convertido para acres eh de: %.2f\n\n", acres);
    return 0;
}
