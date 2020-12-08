#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float km, milhas;

    printf("Digite a distancia em km: ");
    scanf("%f", &km);

    milhas = (km/1.61);

    printf("\nA distancia em milhas eh de: %.2f", milhas);

    return 0;
}
