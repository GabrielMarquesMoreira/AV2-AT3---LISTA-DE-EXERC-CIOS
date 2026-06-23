#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-55 - Ler Numeros e Mostrar o Maior                                                                   *");
    printf("\n*********************************************************************************************************************\n");

    int numero, maior = 0;

    do {

        printf("Digite um numero (negativo para sair): ");
        scanf("%d", &numero);

        if(numero > maior) {
            maior = numero;
        }

    } while(numero >= 0);

    printf("\n---------------------------------------------------------------------------------------------------------------------");
    printf("\nMaior numero informado: %d", maior);
    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    printf("*********************************************************************************************************************\n");

    return 0;
}
