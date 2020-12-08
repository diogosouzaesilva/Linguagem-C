#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float km_h, m_s;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &km_h);

    m_s = (km_h/3.6);

    printf("\nVelocidade em km/h: %.2f", km_h);
    printf("\nVelocidade em ms/s: %.2f", m_s);
    return 0;
}
