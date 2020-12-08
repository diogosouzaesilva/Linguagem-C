#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num, ant, suc;

    printf("----ANTECESSOR E SUCESSOR----\n");

    printf("Insira um numero: ");
    scanf("%f", &num);

    ant = num-1;
    suc = num+1;

    printf("Antecessor: %.1f\n", ant);
    printf("Sucessor: %.1f\n\n", suc);
    return 0;
}
