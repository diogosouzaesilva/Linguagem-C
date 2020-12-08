#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float m2, acres;

    printf("----CONVERSAO DE ACRES PARA METROS QUADRADOS----\n");
    printf("Insira o valor da area em acres: ");
    scanf("%f", &acres);

    m2 = (acres*4048.58);

    printf("\nO valor da area em acres convertido para metros quadrados eh de: %.2f\n\n", m2);
    return 0;
}
