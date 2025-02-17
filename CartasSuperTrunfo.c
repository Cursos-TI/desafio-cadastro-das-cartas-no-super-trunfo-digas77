#include <stdio.h>

int main() {
    char pais[20];
    char estado[20];
    char nome[20];
    char codigo;
    int populacao;
    int pontos;
    float pib;
    float area;

    printf("--- Super Trunfo Países ---\n\n\n");

    //---País---
    printf("País: \n");
    scanf("%s", &pais);

    //---Estado---
    printf("Nome do Estado: \n");
    scanf("%s", &estado);
    
    //---Nome Da Cidade---
    printf("Nome da Cidade: \n");
    scanf("%s", &nome);

    //---Código da Carta(com a inicial da estado e numeração da cidade)EX: P02---
    printf("Código da carta: \n");
    scanf("%s", &codigo);

    //---População---
    printf("População: \n");
    scanf("%d", &populacao);

    //---Pontos Turísticos---
    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos);

    //---Pib---
    printf("Pib: \n");
    scanf("%f", &pib);

    //---Área---
    printf("Área da Cidade: \n");
    scanf("%d", &area);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
