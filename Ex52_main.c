#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float m2, hectares;

    printf("----METROS QUADRADOS PARA HECTARES\n");
    printf("Insira o valor da area em metros quadrados: ");
    scanf("%f", &m2);

    hectares = m2*0.0001;

    printf("O valor da area em metros quadrados convertidos para hectares eh de: %.3f\n\n", hectares);
    return 0;
}
