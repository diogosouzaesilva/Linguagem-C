#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float salariobase, gratificacao, novosalgr, impostoRenda, novosalOK;
    printf("Digite o salario-base do funcionario: ");
    scanf("%f", &salariobase);

    gratificacao = salariobase*0.05;
    novosalgr = salariobase+gratificacao;

    impostoRenda = novosalgr*0.07;
    novosalOK = novosalgr-impostoRenda;

    printf("Salario Base do funcionario: R$%.2f\nSalario com aumento de 5 por cento de gratificacao: R$%.2f\nSalario Liquido com IR descontado: R$%.2f", salariobase, novosalgr, novosalOK);
}
