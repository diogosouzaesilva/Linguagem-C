#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double num, quintaprt;

    printf("----A QUINTA PARTE DE UM NUMERO----\n");

    printf("Insira um numero: ");
    scanf("%lf", &num);

    quintaprt = num * 1/5;

    printf("A quinta parte de %lf eh: \n %.2lf\n", num, quintaprt);
    return 0;
}
