#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-34 - Verificar se um Numero e Primo                                                                  *");
    printf("\n*********************************************************************************************************************\n");

    int numero, i, divisores = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) {
        if(numero % i == 0) {
            divisores++;
        }
    }

    printf("\n---------------------------------------------------------------------------------------------------------------------");

    if(divisores == 2) {
        printf("\nO numero e primo.");
    }
    else {
        printf("\nO numero nao e primo.");
    }

    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    printf("*********************************************************************************************************************\n");

    return 0;
}
