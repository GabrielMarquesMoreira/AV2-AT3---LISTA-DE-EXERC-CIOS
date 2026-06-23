#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-40 - Tabuada com While                                                                               *");
    printf("\n*********************************************************************************************************************\n");

    int numero, contador = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    while(contador <= 10) {
        printf("%d x %d = %d\n", numero, contador, numero * contador);
        contador++;
    }

    printf("*********************************************************************************************************************\n");

    return 0;
}
