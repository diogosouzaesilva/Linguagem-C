#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float libras, kg;

    printf("----CONVERSAO DE LIBRAS PARA KG----\n");
    printf("Insira o valor de massa em Libras: ");
    scanf("%f", &libras);

    kg = libras*0.45;

    printf("\nO valor da massa inserida convertida para KG eh de: %.2f\n", kg);
    return 0;
}
