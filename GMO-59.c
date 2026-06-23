#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-59 - O Assistente de Direcao                                                                         *");
    printf("\n*********************************************************************************************************************\n");

    char direcao;

    printf("Digite uma letra (N,S,L,O): ");
    scanf(" %c", &direcao);

    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    switch(direcao) {

        case 'N':
            printf("Seguir para o Norte.");
            break;

        case 'S':
            printf("Seguir para o Sul.");
            break;

        case 'L':
            printf("Virar a Leste (Direita).");
            break;

        case 'O':
            printf("Virar a Oeste (Esquerda).");
            break;

        default:
            printf("Comando invalido! Pare o robo.");
    }

    printf("\n\n*********************************************************************************************************************\n");

    return 0;
}
