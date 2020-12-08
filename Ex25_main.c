#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int segundos, minutos, horas;
  printf("Insira um numero inteiro em segundos: ");
  scanf("%d", &segundos);

  horas = segundos/3600;
  minutos = (segundos-(horas*3600))/60;
  segundos = segundos-(horas*3600) - (minutos*60);

  printf("%dh%dm%ds", horas, minutos, segundos);




}
