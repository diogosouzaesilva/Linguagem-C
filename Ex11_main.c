#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int raio;
    float raioquadr;

    printf("Insira o valor do raio do circulo: ");
    scanf("%d", &raio);

    raioquadr = raio*raio;

    printf("Raio do circulo: %d", raio);
    printf("Area do circulo correspondente: %.2f", 3.14*raioquadr);
    return 0;
}
