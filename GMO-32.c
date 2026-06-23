#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-32 - Quadrado dos Numeros de 1 a 10                                                                  *");
    printf("\n*********************************************************************************************************************\n");

    int i;

    for(i = 1; i <= 10; i++) {
        printf("%d ao quadrado = %d\n", i, i * i);
    }

    printf("*********************************************************************************************************************\n");

    return 0;
}
