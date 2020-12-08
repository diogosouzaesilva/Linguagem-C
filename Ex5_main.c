#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int n1, n2, n3, res;

   printf("----SOMA DOS QUADRADOS----\n");

   printf("Digite um numero: ");
   scanf("%d", &n1);
   printf("Digite o segundo numero: ");
   scanf("%d", &n2);
   printf("Digite o terceiro valor: ");
   scanf("%d", &n3);

   n1 = pow(n1,2);
   n2 = pow(n2,2);
   n3 = pow(n3,2);

   res = n1+n2+n3;

   printf("O resultado da soma do quadrado dos valores obtidos resulta em: %d\n\n", res);


    return 0;
}
