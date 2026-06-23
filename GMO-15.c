#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("\n*********************************************************************************************************************");
    printf("\n* Aluno: Gabriel Marques de Oliveira - RA 0027510                                                                   *");
    printf("\n* Programa GMO-15 - Quantas caixas cabem dentro do caminhão                                                         *");
    printf("\n*********************************************************************************************************************");

    // Valores do caminhão
    float CamH = 3.5;
    float CamC = 23.0;
    float CamL = 2.5;

    // Valores da caixa
    float CaiH = 80.0;
    float CaiC = 20.0;
    float CaiL = 20.0;

    // Variáveis de cálculo
    float VolCai, VolCam;
    int TotalCaixas; 

    // Cálculo do volume do caminhão
    VolCam = CamH * CamC * CamL;

    // Volume da caixa (convertendo cada dimensão de cm para metros dividindo por 100.0)
    VolCai = (CaiH / 100.0) * (CaiC / 100.0) * (CaiL / 100.0);

    // CÁLCULO DO TOTAL DE CAIXAS
    TotalCaixas = VolCam / VolCai;

    // EXIBIÇÃO DOS RESULTADOS
    printf("\nDimensões do Caminhão (Metros):");
    printf("\nAltura: %.1fm | Comprimento: %.1fm | Largura: %.1fm", CamH, CamC, CamL);
    printf("\nVolume Total do Caminhão: %.2fm³\n", VolCam);

    printf("\nDimensões da Caixa (Centímetros):");
    printf("\nAltura: %.0fcm | Comprimento: %.0fcm | Largura: %.0fcm", CaiH, CaiC, CaiL);
    printf("\nVolume de Cada Caixa (em Metros): %.5fm³\n", VolCai);

    printf("\n*********************************************************************************************************************");
    printf("\n* O NÚMERO MÁXIMO DE CAIXAS QUE CABEM NO CAMINHÃO É: %d", TotalCaixas);
    printf("\n*********************************************************************************************************************\n");

    return 0;
}
