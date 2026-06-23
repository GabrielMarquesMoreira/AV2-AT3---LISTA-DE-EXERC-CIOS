#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-44 - Contar Digitos de um Numero                                                                     *");
    printf("\n*********************************************************************************************************************\n");

    int numero, digitos = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    while(numero > 0) {
        numero = numero / 10;
        digitos++;
    }

    printf("\n---------------------------------------------------------------------------------------------------------------------");
    printf("\nQuantidade de digitos: %d", digitos);
    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    printf("*********************************************************************************************************************\n");

    return 0;
}
