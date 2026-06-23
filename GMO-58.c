#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-58 - A Calculadora de Bolso de 4 Operacoes                                                           *");
    printf("\n*********************************************************************************************************************\n");

    float n1, n2;
    char op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite a operacao (+,-,*,/): ");
    scanf(" %c", &op);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    switch(op) {

        case '+':
            printf("Resultado = %.2f", n1 + n2);
            break;

        case '-':
            printf("Resultado = %.2f", n1 - n2);
            break;

        case '*':
            printf("Resultado = %.2f", n1 * n2);
            break;

        case '/':
            printf("Resultado = %.2f", n1 / n2);
            break;

        default:
            printf("Operacao matematica nao reconhecida");
    }

    printf("\n\n*********************************************************************************************************************\n");

    return 0;
}
