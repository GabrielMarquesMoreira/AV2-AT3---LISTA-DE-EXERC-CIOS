#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-31 - Contagem Regressiva                                                                             *");
    printf("\n*********************************************************************************************************************\n");

    int i;

    for(i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }

    printf("*********************************************************************************************************************\n");

    return 0;
}
