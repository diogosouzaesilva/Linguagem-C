#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float litros, mtscub;


    printf("Digite o valor do volume em litros: ");
    scanf("%f", &litros);

    mtscub = litros/1000;

    printf("\nO valor do volume em metros cubicos eh de: %.2f", mtscub);

    return 0;
}
