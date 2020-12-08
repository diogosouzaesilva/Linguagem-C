#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int lado, a;
    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &lado);

    a = pow(lado,2);

    printf("A area do quadrado eh: %d", a);
    return 0;
}
