#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-60 - O Validador de Dias Uteis                                                                       *");
    printf("\n*********************************************************************************************************************\n");

    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    switch(dia) {

        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia Util. Acesso liberado para o trabalho.");
            break;

        case 1:
        case 7:
            printf("Fim de Semana. Predio fechado.");
            break;

        default:
            printf("Numero de dia invalido.");
    }

    printf("\n\n*********************************************************************************************************************\n");

    return 0;
}
