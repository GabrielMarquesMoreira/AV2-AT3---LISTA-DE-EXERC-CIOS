#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-23 - Maior de Dois Numeros                                                                           *");
    printf("\n*********************************************************************************************************************\n");

    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("\n---------------------------------------------------------------------------------------------------------------------");

    if (num1 > num2) {
        printf("\nO maior numero e %.2f", num1);
    }
    else if (num2 > num1) {
        printf("\nO maior numero e %.2f", num2);
    }
    else {
        printf("\nOs numeros sao iguais.");
    }

    printf("\n---------------------------------------------------------------------------------------------------------------------\n");

    printf("*********************************************************************************************************************\n");

    return 0;
}
