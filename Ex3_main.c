#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float n1, res;

   printf("Insira um numero real: ");
   scanf("%f", &n1);

   res = pow(n1,2);

   printf("%.2f ao quadrado resulta em: %.1f", n1, res);
}
