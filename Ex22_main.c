#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char letra;

    printf("Insira uma letra minuscula: ");
    scanf("%c", &letra);

    letra = toupper(letra);
    printf("\nLetra transformada em maiuscula: %c", letra);
    printf("\n\n");

    system("pause");
    return 0;

}
