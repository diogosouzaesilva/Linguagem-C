#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float km_h;
    float m_s;

    printf("Digite a velocidade em m/s: ");
    scanf("%f", &m_s);

    km_h = (m_s*3.6);

    printf("A velocidade em km/h eh: %.2f", km_h);
    return 0;
}
