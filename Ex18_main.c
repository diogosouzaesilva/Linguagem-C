#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float salHora, hTrab, totSal, adicSal, novoSal;

   printf("Digite o valor por hora trabalhada: ");
   scanf("%f", &salHora);
   printf("\nDigite o total de horas trabalhadas: ");
   scanf("%f", &hTrab);

   totSal = salHora*hTrab;
   adicSal = totSal*0.1;
   novoSal = totSal + adicSal;

   printf("O salario a ser recebido com um aumento de 10 por cento eh: %.2f", novoSal);
}
