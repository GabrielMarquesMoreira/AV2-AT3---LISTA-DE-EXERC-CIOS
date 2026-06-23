#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-17 - O Sensor do Parque Temático                                                                     *");
    printf("\n*********************************************************************************************************************\n");

    int alturaCriança;

    // Entrada de dados do sensor
    printf("Digite a altura medida pelo sensor (em centímetros): ");
    scanf("%d", &alturaCriança);

    // Estrutura de decisão usando o operador de Maior ou Igual (>=)
    if (alturaCriança >= 140) {
        printf("\n---------------------------------------------------------------------------------------------------------------------");
        printf("\n[ LUZ VERDE ] - ACESSO LIBERADO!");
        printf("\nA altura de %dcm atende ao requisito mínimo de 140cm.\n", alturaCriança);
        printf("---------------------------------------------------------------------------------------------------------------------\n");
    } 
    else {
        printf("\n---------------------------------------------------------------------------------------------------------------------");
        printf("\n[ LUZ VERMELHA ] - ACESSO BARRADO!");
        printf("\nA altura de %dcm está ABAIXO do requisito mínimo de 140cm.\n", alturaCriança);
        printf("---------------------------------------------------------------------------------------------------------------------\n");
    }

    printf("*********************************************************************************************************************\n");

    return 0;
}
