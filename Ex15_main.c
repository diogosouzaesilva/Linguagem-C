#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float salario, aumento, novosalario;

    printf("Insira o salario do funcionario: ");
    scanf("%f", &salario);

    aumento = salario*0.25;
    novosalario = salario+aumento;

    printf("O novo salario com aumento de 25 por cento eh: %.2f", novosalario);


    return 0;
}
