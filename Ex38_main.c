#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float milhas, km;

    printf("Digite a distancia em milhas: ");
    scanf("%f", &milhas);

    km = (1.61*milhas);

    printf("\nA distancia em km eh: %.2f", km);
    return 0;
}
