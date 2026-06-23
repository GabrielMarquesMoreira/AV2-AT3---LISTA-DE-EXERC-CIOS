#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-56 - O Menu do Fast-Food Digital                                                                     *");
    printf("\n*********************************************************************************************************************\n");

    int opcao;

    printf("Digite o numero do combo: ");
    scanf("%d", &opcao);

    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    switch(opcao) {

        case 1:
            printf("Combo Hamburguer + Batata + Refri - R$ 30,00");
            break;

        case 2:
            printf("Combo Pizza Brotinho + Refri - R$ 25,00");
            break;

        case 3:
            printf("Combo Salada + Suco Natural - R$ 22,00");
            break;

        case 4:
            printf("Combo Balde de Frango + Molho - R$ 35,00");
            break;

        default:
            printf("Opcao invalida! Escolha de 1 a 4.");
    }

    printf("\n\n*********************************************************************************************************************\n");

    return 0;
}
