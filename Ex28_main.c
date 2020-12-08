#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int matricula;
    float n1, n2, n3, mp;

    printf("Insira a matricula do aluno: ");
    scanf("%d", &matricula);

    printf("\nInsira a nota 1 do aluno: ");
    scanf("%f", &n1);
    printf("\nInsira a nota 2 do aluno: ");
    scanf("%f", &n2);
    printf("\nInsira a nota 3 do aluno: ");
    scanf("%f", &n3);

    mp = ((n1*1)+(n2*1)+(n3*2))/4;

    if(mp>=6){
            printf("\nMatricula: %d", matricula);
            printf("\nMedia: %.2f", mp);
            printf("\nAPROVADO - PARABENS");
    } else {
        printf("\nMatricula: %d", matricula);
        printf("\nMedia: %.2f", mp);
        printf("\nREPROVADO");
    }
    printf("\n");
    system("pause");
    return 0;
}
