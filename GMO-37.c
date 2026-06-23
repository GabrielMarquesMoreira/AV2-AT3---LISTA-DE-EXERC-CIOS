#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-37 - Soma de Numeros ate Digitar Zero                                                                *");
    printf("\n*********************************************************************************************************************\n");

    int numero, soma = 0;

    printf("Digite um numero (0 para sair): ");
    scanf("%d", &numero);

    while(numero != 0) {
        soma += numero;

        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);
    }

    printf("\n---------------------------------------------------------------------------------------------------------------------");
    printf("\nSoma total = %d", soma);
    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    printf("*********************************************************************************************************************\n");

    return 0;
}
