#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-36 - Contar ate 10 com While                                                                         *");
    printf("\n*********************************************************************************************************************\n");

    int contador = 1;

    while(contador <= 10) {
        printf("%d\n", contador);
        contador++;
    }

    printf("*********************************************************************************************************************\n");

    return 0;
}
