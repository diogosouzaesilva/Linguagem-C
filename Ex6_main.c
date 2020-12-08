#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1,n2,n3,n4, media;

    printf("----MEDIA ARITMETICA----\n");

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota do aluno: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;

    printf("A media aritmetica do aluno foi de: %.2f\n\n", media);


}
