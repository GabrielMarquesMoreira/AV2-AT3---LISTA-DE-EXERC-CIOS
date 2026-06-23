#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-48 - Menu com Opcao de Sair                                                                          *");
    printf("\n*********************************************************************************************************************\n");

    int opcao;

    do {

        printf("\n1 - Mensagem");
        printf("\n2 - Sair");
        printf("\nEscolha: ");
        scanf("%d", &opcao);

        if(opcao == 1) {
            printf("\nVoce escolheu a mensagem!\n");
        }

    } while(opcao != 2);

    printf("\nPrograma encerrado.\n");

    printf("*********************************************************************************************************************\n");

    return 0;
}
