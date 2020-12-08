#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, d;

    printf("Insira a coordenada de X: ");
    scanf("%f", &x);
    printf("\nInsira a coordenada de Y: ");
    scanf("%f", &y);

    d = sqrt(pow(x,2)+pow(y,2));

    printf("\nA distancia entre os pontos eh: %.2f", d);
    printf("\n\n");
    return 0;
}
