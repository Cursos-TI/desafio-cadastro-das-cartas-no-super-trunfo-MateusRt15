#include <stdio.h>

struct Carta {
    char codigo[4];                 // Ex: A01, B02
    unsigned long int populacao;    // População
    float area;                     // Área em km²
    float pib;                      // PIB em bilhões
    int pontos_turisticos;          // Número de pontos turísticos
    float densidade;                // População / Área
    float pib_per_capita;           // PIB / População
    float super_poder;              // Soma de atributos com inversão da densidade
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o codigo da cidade (ex: A01): ");
    scanf("%3s", carta1.codigo);
    printf("Digite a populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Digite a area em km²: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &carta1.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib +
                         carta1.pontos_turisticos + carta1.pib_per_capita +
                         (1 / carta1.densidade);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o codigo da cidade (ex: B02): ");
    scanf("%3s", carta2.codigo);
    printf("Digite a populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Digite a area em km²: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &carta2.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib +
                         carta2.pontos_turisticos + carta2.pib_per_capita +
                         (1 / carta2.densidade);

    // Exibição dos dados
    printf("\n=== Dados Cadastrados ===\n");

    printf("\nCarta 1 - %s\n", carta1.codigo);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: %.6f bilhoes/hab\n", carta1.pib_per_capita);
    printf("Super Poder: %.6f\n", carta1.super_poder);

    printf("\nCarta 2 - %s\n", carta2.codigo);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: %.6f bilhoes/hab\n", carta2.pib_per_capita);
    printf("Super Poder: %.6f\n", carta2.super_poder);

    // Comparação
    printf("\n=== Comparacao ===\n");
    printf("Populacao: %d\n", carta1.populacao > carta2.populacao);
    printf("Area: %d\n", carta1.area > carta2.area);
    printf("PIB: %d\n", carta1.pib > carta2.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos > carta2.pontos_turisticos);
    printf("Densidade Populacional: %d\n", carta1.densidade < carta2.densidade); // menor vence
    printf("PIB per Capita: %d\n", carta1.pib_per_capita > carta2.pib_per_capita);
    printf("Super Poder: %d\n", carta1.super_poder > carta2.super_poder);

    return 0;
}
