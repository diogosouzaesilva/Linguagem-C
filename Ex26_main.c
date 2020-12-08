#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int horas = 13, minutos = 10, segundos = 10,durExp = 19000;
   printf("Hora de inicio da experiencia biologica: %dh%dm%ds", horas, minutos, segundos);
   int hr, min, seg;
   hr = durExp/3600;
   min = (durExp-(hr*3600))/60;
   int horafinal, minutofinal, segundosfinal;

   horafinal = horas+hr;
   minutofinal = minutos+min;
   segundosfinal = segundos+seg;

   printf("\nHora do fim da experiencia biologica: %dh%dm%ds", horafinal, minutofinal, segundosfinal);
   printf("\n\n");

   system("pause");
   return 0;
}
