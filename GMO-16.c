#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-16 - Múltiplo de 3 e/ou 5                                                                            *");
    printf("\n*********************************************************************************************************************");

   int numeroPedido;

    printf("Digite o número do pedido: ");
    scanf("%d", &numeroPedido);

    if (numeroPedido % 3 == 0 && numeroPedido % 5 == 0) {
        printf("\nParabéns! Seu pedido é múltiplo de 3 e 5.");
        printf("\nVocê ganhou os DOIS brindes: Um refrigerante e uma sobremesa!\n");
    }
    else if (numeroPedido % 3 == 0) {
        printf("\nParabéns! Seu pedido é múltiplo de 3.");
        printf("\nVocê ganhou um brinde: Um refrigerante!\n");
    }
    else if (numeroPedido % 5 == 0) {
        printf("\nParabéns! Seu pedido é múltiplo de 5.");
        printf("\nVocê ganhou um brinde: Uma sobremesa!\n");
    }
    else {
        printf("\nQue pena! Esse número de pedido não possui brindes nesta promoção.\n");
    }

return 0;

}
    
