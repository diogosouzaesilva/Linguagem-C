#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altDeg, altDes, res;
    printf("Digite a altura do degrau da escada em cm: ");
    scanf("%f", &altDeg);

    printf("Digite a altura a alcancar desejada em metros: ");
    scanf("%f", &altDes);

    altDes = altDes*100;

    res = altDes/altDeg;

    printf("Sera necessario subir %.2f degraus", res);


}
