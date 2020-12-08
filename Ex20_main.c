#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valProd;
    float desc10, parcProd, comissaoAvis, comissaoParc, novoVal;

    printf("DIGITE O VALOR DO PRODUTO R$: ");
    scanf("%d", &valProd);

    // 10% DE DESCONTO
    desc10 = valProd*0.10;
    novoVal = valProd - desc10;
    printf("\nValor do produto com 10 por cento de desconto: %.2f",novoVal);

    //PARCELAS
    parcProd = novoVal/3;
    printf("\nValor da parcela em 3x sem juros: %.2f\n", parcProd);

    //COMISSÃO VENDEDOR
    comissaoAvis = novoVal*0.05;
    printf("Comissao a vista: %.2f\n", comissaoAvis);

    comissaoParc = valProd*0.05;
    printf("Comissao a prazo: %.2f\n", comissaoParc);

    system("pause");
    return 0;




    }



