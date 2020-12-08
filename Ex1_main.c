#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    float n2;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n1);

    printf("Insira um numero real: ");
    scanf("%f", &n2);

    printf("\n\n----IMPRESSAO----\n\n");

    printf("Numero inteiro inserido: %d\nNumero real inserido: %.2f\n\n", n1,n2);
    return 0;
}
