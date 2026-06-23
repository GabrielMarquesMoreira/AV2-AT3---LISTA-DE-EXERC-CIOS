#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-51 - Contagem Regressiva de 10 ate 1                                                                 *");
    printf("\n*********************************************************************************************************************\n");

    int contador = 10;

    do {
        printf("%d\n", contador);
        contador--;
    } while(contador >= 1);

    printf("*********************************************************************************************************************\n");

    return 0;
}
