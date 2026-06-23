#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-45 - Menu ate Escolher Sair                                                                          *");
    printf("\n*********************************************************************************************************************\n");

    int opcao = 0;

    while(opcao != 3) {

        printf("\n1 - Deposito");
        printf("\n2 - Saque");
        printf("\n3 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1) {
            printf("\nOpcao Deposito selecionada.\n");
        }
        else if(opcao == 2) {
            printf("\nOpcao Saque selecionada.\n");
        }
    }

    printf("\nPrograma encerrado.\n");

    printf("*********************************************************************************************************************\n");

    return 0;
}
