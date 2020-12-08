#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float ganhador1, ganhador2, ganhador3;
    int premio=780000, resto, novopremio;


    printf("-----------PREMIO----------------\n");
    printf("--------R$780.000,000--------------\n");

    ganhador1 = 780000*0.46;
    ganhador2 = 780000*0.32;
    resto = ganhador1 + ganhador2;
    novopremio = premio - resto;
    ganhador3 = novopremio;

    printf("Quantia ganha pelo Ganhador 1: %.2f\nQuantia ganha pelo Ganhador 2: %.2f\nQuantia ganha pelo Ganhador 3: %.2f", ganhador1, ganhador2, ganhador3);
}
