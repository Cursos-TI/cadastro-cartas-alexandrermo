#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // -------------------------------------------------------------------------
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // -------------------------------------------------------------------------

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[100];
    int  populacao1;
    float area1;
    float pib1;
    int  pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    int  populacao2;
    float area2;
    float pib2;
    int  pontosTuristicos2;

    // -------------------------------------------------------------------------
    // Área para entrada de dados
    // -------------------------------------------------------------------------

    printf("=== Cadastro de Cartas - Super Trunfo ===\n\n");

    // --- Carta 1 ---
    printf("--- Carta 1 ---\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %99[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Carta 2 ---
    printf("\n--- Carta 2 ---\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %99[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // -------------------------------------------------------------------------
    // Área para exibição dos dados das cidades
    // -------------------------------------------------------------------------

    printf("\n=== Dados das Cartas Cadastradas ===\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

