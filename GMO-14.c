#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

printf("\n*********************************************************************************************************************");
printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
printf("\n* Programa GMO-14 - Tipo de Triângulo                                                                                *");
printf("\n*********************************************************************************************************************");


int lado1, lado2, lado3;

printf("\nDigite o lado 1: ");
scanf("%d", &lado1);

printf("\nDigite o lado 2: ");
scanf("%d", &lado2);

printf("\nDigite o lado 3: ");
scanf("%d", &lado3);

if (lado1 == lado2 && lado2 == lado3) {
printf("\nO triângulo é equilatero");
}

else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
printf("O triângulo é isósceles");
}

else {
    printf("O triângulo é Escaleno");
}

return 0;


}
