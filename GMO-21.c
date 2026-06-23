#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-21 - Numero Positivo ou Negativo                                                                     *");
    printf("\n*********************************************************************************************************************\n");

    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    printf("\n---------------------------------------------------------------------------------------------------------------------");

    if (numero > 0) {
        printf("\nO numero e positivo.");
    }
    else if (numero < 0) {
        printf("\nO numero e negativo.");
    }
    else {
        printf("\nO numero e zero.");
    }

    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    printf("*********************************************************************************************************************\n");

    return 0;
}
