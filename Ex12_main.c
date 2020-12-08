#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, aquad, bquad;
    float hipotenusa;

    printf("CALCULO DE HIPOTENUSA\n");
    printf("---------------------------\n\n");

    printf("Digite o valor do lado A: ");
    scanf("%d", &a);
    printf("Digite o valor do lado B: ");
    scanf("%d", &b);

    aquad = a*a;
    bquad = b*b;

    hipotenusa = sqrt(aquad+bquad);

    printf("O valor da hipotenusa do triangulo digitado eh: %.2f", hipotenusa);



    return 0;
}
