#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;              // Estado: letra de A a H
    char codigo1[5];           // Código da carta: exemplo "A01"
    char nomeCidade1[50];      // Nome da cidade
    int populacao1;            // População
    float area1;               // Área em km²
    float pib1;                // PIB (em bilhões de reais)
    int pontosTuristicos1;     // Número de pontos turísticos

    // Declaração de variáveis para a Carta 2
    char estado2;              // Estado: letra de A a H
    char codigo2[5];           // Código da carta: exemplo "B02"
    char nomeCidade2[50];      // Nome da cidade
    int populacao2;            // População
    float area2;               // Área em km²
    float pib2;                // PIB (em bilhões de reais)
    int pontosTuristicos2;     // Número de pontos turísticos

    // Variáveis para os novos cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // Saudações
    printf("\nBem-Vindo ao Jogo Super Trunfo de Países!\n\n");
    printf("Você deverá inserir, em sequência, os dados de duas cidades, os quais serão, posteriormente, exibidos.\n\n");

    // Cadastro da Carta 1:
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (Letra do estado seguida de número de 01 a 04. Ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2:
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (Letra do estado seguida de número de 01 a 04. Ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos novos atributos:
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    
    // Convertendo PIB de bilhões para reais e calculando o PIB per capita
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos Dados das Cartas:
    printf("\n--- Dados das Cartas ---\n");

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
