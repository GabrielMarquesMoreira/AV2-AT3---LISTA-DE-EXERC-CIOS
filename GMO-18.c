#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // Biblioteca necessária para comparar textos (strcmp)

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO- 18 - Login simples                                                                                   *");
    printf("\n*********************************************************************************************************************\n");

    // Definição das credenciais corretas do sistema
    char usuarioCorreto[] = "gabriel";
    char senhaCorreta[] = "12345";

    // Variáveis para guardar o que o aluno vai digitar
    char usuarioDigitado[50];
    char senhaDigitada[50];

    // Entrada de dados
    printf("Digite o usuário: ");
    scanf("%s", usuarioDigitado); // %s é usado para ler texto (string). Não usa o '&' no scanf de texto.

    printf("Digite a senha: ");
    scanf("%s", senhaDigitada);

    // strcmp devolve 0 se os dois textos forem EXATAMENTE iguais
    if (strcmp(usuarioDigitado, usuarioCorreto) == 0 && strcmp(senhaDigitada, senhaCorreta) == 0) {
        printf("\n---------------------------------------------------------------------------------------------------------------------");
        printf("\n[ ACESSO PERMITIDO ] - Bem-vindo à Biblioteca Digital!");
        printf("\n---------------------------------------------------------------------------------------------------------------------\n");
    } 
    else {
        printf("\n---------------------------------------------------------------------------------------------------------------------");
        printf("\n[ ACESSO NEGADO ] - Usuário ou senha incorretos.");
        printf("\n---------------------------------------------------------------------------------------------------------------------\n");
    }

    printf("*********************************************************************************************************************\n");

    return 0;
}
