#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-47 - Tabuada de um Numero                                                                            *");
    printf("\n*********************************************************************************************************************\n");

    int numero, contador = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    do {
        printf("%d x %d = %d\n", numero, contador, numero * contador);
        contador++;
    } while(contador <= 10);

    printf("*********************************************************************************************************************\n");

    return 0;
}
