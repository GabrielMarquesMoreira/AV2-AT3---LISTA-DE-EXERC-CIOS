#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-57 - A Central do Brinquedo Eletronico                                                               *");
    printf("\n*********************************************************************************************************************\n");

    char cor[20];

    printf("Digite a cor: ");
    scanf("%s", cor);

    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    if(strcmp(cor,"Verde")==0)
        printf("Vamos brincar la fora!");
    else if(strcmp(cor,"Amarelo")==0)
        printf("Estou ficando com soninho...");
    else if(strcmp(cor,"Vermelho")==0)
        printf("Estou com fome, hora do lanche!");
    else
        printf("Cor desconhecida");

    printf("\n\n*********************************************************************************************************************\n");

    return 0;
}
