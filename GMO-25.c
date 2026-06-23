#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-25 - Notas e Aprovacao                                                                               *");
    printf("\n*********************************************************************************************************************\n");

    float media;

    printf("Digite a media final: ");
    scanf("%f", &media);

    printf("\n---------------------------------------------------------------------------------------------------------------------");

    if (media >= 7) {
        printf("\nAluno APROVADO.");
    }
    else if (media >= 5) {
        printf("\nAluno em RECUPERACAO.");
    }
    else {
        printf("\nAluno REPROVADO.");
    }

    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    printf("*********************************************************************************************************************\n");

    return 0;
}
