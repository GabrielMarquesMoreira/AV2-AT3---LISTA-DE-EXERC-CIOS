#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-53 - Confirmar Saida com S                                                                           *");
    printf("\n*********************************************************************************************************************\n");

    char sair;

    do {

        printf("\nMenu de Cadastro");
        printf("\nOperacao realizada.");

        printf("\nDeseja sair? (s para sair): ");
        scanf(" %c", &sair);

    } while(sair != 's' && sair != 'S');

    printf("\nPrograma encerrado.\n");

    printf("*********************************************************************************************************************\n");

    return 0;
}
