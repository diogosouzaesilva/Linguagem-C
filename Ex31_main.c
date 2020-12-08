#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float compTerreno, largTerreno, precoArame, valortotal;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &compTerreno);
    printf("\nDigite a largura do terreno: ");
    scanf("%f", &largTerreno);
    printf("\nValor do metro do arame: ");
    scanf("%f", &precoArame);

    valortotal = (compTerreno*largTerreno*precoArame);

    printf("\nCusto total para cercar o terreno: %.2f", valortotal);

    return 0;



}
