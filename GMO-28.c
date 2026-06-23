#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-28 - Soma dos 100 Primeiros Numeros Naturais                                                         *");
    printf("\n*********************************************************************************************************************\n");

    int soma = 0;
    int i;

    for(i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("A soma dos numeros de 1 a 100 e: %d\n", soma);

    printf("\n*********************************************************************************************************************\n");

    return 0;
}
