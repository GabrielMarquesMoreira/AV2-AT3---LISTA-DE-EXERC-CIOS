#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-39 - Verificar se um Numero e Positivo                                                               *");
    printf("\n*********************************************************************************************************************\n");

    int numero;

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    while(numero <= 0) {
        printf("Valor invalido. Digite novamente: ");
        scanf("%d", &numero);
    }

    printf("\n---------------------------------------------------------------------------------------------------------------------");
    printf("\nNumero valido digitado: %d", numero);
    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    printf("*********************************************************************************************************************\n");

    return 0;
}
