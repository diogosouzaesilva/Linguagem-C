#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ano, idade, anoNasc;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &ano);

    anoNasc = ano - idade;

    printf("Seu ano de nascimento eh: %d", anoNasc);
}
