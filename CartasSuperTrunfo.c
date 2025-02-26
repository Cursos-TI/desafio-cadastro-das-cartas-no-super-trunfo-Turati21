#include <stdio.h>

int main() {
    char estado, codigo, nome[500];

    int populacao, pontos;
    float area, pib;

    printf("Digite o Estado: \n");
    scanf("%s", &estado);

    printf("Digite o código: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nome);

    printf("Digite a População: \n");
    scanf("%d", &populacao);

    printf("Digite a Área em Km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", pontos);
    // Exibição dos Dados das Cartas:
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n");
    printf("Área em Km²: %f\n");
    printf("PIB: %f\n");
    printf("Quantidade de pontos turísticos: %d\n");

    return 0;

}
