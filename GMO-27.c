#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-27 - Tabuada de um Numero                                                                            *");
    printf("\n*********************************************************************************************************************\n");

    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    printf("\n*********************************************************************************************************************\n");

    return 0;
}
