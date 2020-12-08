#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, n2, n3, soma;

    printf("----SOMA DE NUMEROS INTEIROS\n");

    printf("Digite um numero para a soma: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero para a soma: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero para a soma: ");
    scanf("%d", &n3);

    soma = n1+n2+n3;

    printf("A soma dos tres numeros digitados resulta em: %d\n", soma);

    return 0;
}
