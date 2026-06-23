#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-41 - Numero Primo com While                                                                          *");
    printf("\n*********************************************************************************************************************\n");

    int numero, divisor = 1, cont = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while(divisor <= numero) {
        if(numero % divisor == 0) {
            cont++;
        }
        divisor++;
    }

    printf("\n---------------------------------------------------------------------------------------------------------------------");

    if(cont == 2) {
        printf("\nO numero e primo.");
    } else {
        printf("\nO numero nao e primo.");
    }

    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    printf("*********************************************************************************************************************\n");

    return 0;
}
