#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-46 - Contar de 1 a 10                                                                                *");
    printf("\n*********************************************************************************************************************\n");

    int contador = 1;

    do {
        printf("%d\n", contador);
        contador++;
    } while(contador <= 10);

    printf("*********************************************************************************************************************\n");

    return 0;
}
