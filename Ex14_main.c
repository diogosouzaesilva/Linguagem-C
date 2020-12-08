#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float produto, desconto, novovalor;

   printf("Insira o valor do produto em R$: ");
   scanf("%f", &produto);

   desconto = produto*0.12;
   novovalor = produto-desconto;

   printf("Valor do produto com 12 de desconto: R$%.2f", novovalor);



}
