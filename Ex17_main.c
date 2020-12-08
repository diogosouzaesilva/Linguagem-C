#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int salDia=30, dias, totSal, saldescontoIR;
    float impostoRenda;

    printf("Insira o numero de dias trabalhados: ");
    scanf("%d", &dias);

    totSal = (dias*salDia);
    impostoRenda = (totSal*0.08);
    saldescontoIR = (totSal - impostoRenda);

    printf("DIAS TRABALHADOS: %d\n", dias);
    printf("SALARIO POR DIA: %dR$\n", salDia);
    printf("SALARIO BRUTO: %dR$\n", totSal);
    printf("SALARIO LIQUIDO COM IR DESCONTADO: %dR$", saldescontoIR);


}
