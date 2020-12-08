#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float mtscub, litros;

    printf("Digite o valor do volume em metros cubicos: ");
    scanf("%f", &mtscub);

    litros = 1000*mtscub;

    printf("O volume em litros eh de: %.2f", litros);
    return 0;
}
