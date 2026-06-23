#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-42 - Quantidade de Numeros Impares Digitados                                                         *");
    printf("\n*********************************************************************************************************************\n");

    int numero, contador = 1, impares = 0;

    while(contador <= 10) {

        printf("Digite o %d numero: ", contador);
        scanf("%d", &numero);

        if(numero % 2 != 0) {
            impares++;
        }

        contador++;
    }

    printf("\n---------------------------------------------------------------------------------------------------------------------");
    printf("\nQuantidade de numeros impares: %d", impares);
    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    printf("*********************************************************************************************************************\n");

    return 0;
}
