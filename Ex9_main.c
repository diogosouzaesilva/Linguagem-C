#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n, s, a, res;

    printf("Digite um numero: ");
    scanf("%f", &n);

    s = n*3+1;
    a = n*2-1;

    res = s+a;

    printf("A soma do sucessor do triplo de %.1f com o antecessor do dobro de %.1f eh: %.1f\n\n", n, n, res);
    return 0;
}
