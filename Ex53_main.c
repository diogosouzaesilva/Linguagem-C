#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float m2, hectares;

    printf("----HECTARES PARA METROS QUADRADOS\n");
    printf("Insira o valor da area em hectares: ");
    scanf("%f", &hectares);

    m2 = hectares*10000;

    printf("O valor da area em hectares convertidos para metros quadrados eh de: %.3f\n\n", m2);
    return 0;
}
