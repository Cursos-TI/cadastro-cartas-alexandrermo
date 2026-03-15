#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: Nível avançado — cadastra duas cartas, calcula atributos derivados,
// calcula o Super Poder e compara carta a carta em cada atributo numérico.

int main() {
    // -------------------------------------------------------------------------
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // -------------------------------------------------------------------------

    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int  pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int  pontosTuristicos2;

    // Variáveis calculadas
    float densidadePopulacional1; // habitantes por km²
    float pibPerCapita1;          // PIB dividido pela população (em reais)
    float densidadePopulacional2;
    float pibPerCapita2;
    double superPoder1;
    double superPoder2;

    // Variáveis de comparação (1 = Carta 1 vence, 0 = Carta 2 vence)
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontosTuristicos;
    int resultadoDensidade;
    int resultadoPibPerCapita;
    int resultadoSuperPoder;

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
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // -------------------------------------------------------------------------
    // Cálculos: densidade populacional e PIB per capita
    // -------------------------------------------------------------------------

    // PIB fornecido em bilhões de reais; multiplicamos por 1e9 para obter reais
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1         = (pib1 * 1e9) / populacao1;

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2         = (pib2 * 1e9) / populacao2;

    // Super Poder: soma dos atributos numéricos + inverso da densidade
    superPoder1 = (double)populacao1 + area1 + pib1 + (double)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);
    superPoder2 = (double)populacao2 + area2 + pib2 + (double)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Comparações entre Carta 1 e Carta 2
    resultadoPopulacao       = populacao1 > populacao2;
    resultadoArea            = area1 > area2;
    resultadoPib             = pib1 > pib2;
    resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    resultadoDensidade       = densidadePopulacional1 < densidadePopulacional2; // menor vence
    resultadoPibPerCapita    = pibPerCapita1 > pibPerCapita2;
    resultadoSuperPoder      = superPoder1 > superPoder2;

    // -------------------------------------------------------------------------
    // Área para exibição dos dados das cidades
    // -------------------------------------------------------------------------

    printf("\n=== Dados das Cartas Cadastradas ===\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\nComparacao de Cartas:\n\n");
    printf("Populacao: Carta %d venceu (%d)\n", 2 - resultadoPopulacao, resultadoPopulacao);
    printf("Area: Carta %d venceu (%d)\n", 2 - resultadoArea, resultadoArea);
    printf("PIB: Carta %d venceu (%d)\n", 2 - resultadoPib, resultadoPib);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", 2 - resultadoPontosTuristicos, resultadoPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - resultadoDensidade, resultadoDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - resultadoPibPerCapita, resultadoPibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", 2 - resultadoSuperPoder, resultadoSuperPoder);

    return 0;
}

