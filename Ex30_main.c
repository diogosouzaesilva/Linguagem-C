#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float amigo1, amigo2, amigo3, valorpremio, arrecadacao;
    float prtamg1, prtamg2, prtamg3;

    printf("Valor da aposta amigo 1: ");
    scanf("%f", &amigo1);
    printf("\nValor da aposta amigo 2: ");
    scanf("%f", &amigo2);
    printf("\nValor da aposta amigo 3: ");
    scanf("%f", &amigo3);

    arrecadacao = amigo1+amigo2+amigo3;

    printf("\nTotal arrecadado: %.2f", arrecadacao);

    valorpremio = 15000;

    printf("\nValor do premio: %.2f", valorpremio);

    prtamg1 = (amigo1*100)/arrecadacao;
    prtamg2 = (amigo2*100)/arrecadacao;
    prtamg3 = (amigo3*100)/arrecadacao;

    printf("\nAmigo 1 apostou %.2f por cento do total arrecadado", prtamg1);
    printf("\nAmigo 2 apostou %.2f por cento do total arrecadado", prtamg2);
    printf("\nAmigo 3 apostou %.2f por cento do total arrecadado", prtamg3);

    printf("\n\nO amigo 1 ira receber R$%.2f", (prtamg1/100)*valorpremio);
    printf("\nO amigo 2 ira receber R$%.2f", (prtamg2/100)*valorpremio);
    printf("\nO amigo 3 ira receber R$%.2f", (prtamg3/100)*valorpremio);

    return 0;


}
