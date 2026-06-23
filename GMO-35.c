#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-35 - Sequencia de Fibonacci                                                                          *");
    printf("\n*********************************************************************************************************************\n");

    int n, i;
    int a = 0, b = 1, proximo;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    printf("\nSequencia:\n");

    for(i = 1; i <= n; i++) {
        printf("%d ", a);

        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");

    printf("*********************************************************************************************************************\n");

    return 0;
}
