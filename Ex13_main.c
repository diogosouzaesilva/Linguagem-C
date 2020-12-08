#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   int alt;
   float raio, raioquadr, volumecilindro;


   printf("Insira a altura do raio: ");
   scanf("%d", &alt);

   printf("\nAgora insira o raio do cilindro: ");
   scanf("%f", &raio);

   raioquadr = pow(raio,2);
   volumecilindro = 3.141592*raioquadr*alt;

   printf("O volume do cilindro circular eh: %.2f", volumecilindro);
}
