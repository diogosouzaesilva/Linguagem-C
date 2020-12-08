#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float radiano, grau;

    printf("Insira um valor de angulo em radiano: ");
    scanf("%f", &radiano);

    grau = radiano*(180/3.141592);

    printf("\nO valor do angulo convertido para graus eh: %.2f", grau);
    return 0;
}
