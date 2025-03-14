#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;                   // Estado: letra de A a H
    char codigo1[5];                // Código da carta: exemplo "A01"
    char nomeCidade1[50];           // Nome da cidade
    unsigned long int populacao1;   // População (unsigned long int)
    float area1;                    // Área em km²
    float pib1;                     // PIB (em bilhões de reais)
    int pontosTuristicos1;          // Número de pontos turísticos

    // Declaração de variáveis para a Carta 2
    char estado2;                   // Estado: letra de A a H
    char codigo2[5];                // Código da carta: exemplo "B02"
    char nomeCidade2[50];           // Nome da cidade
    unsigned long int populacao2;   // População (unsigned long int)
    float area2;                    // Área em km²
    float pib2;                     // PIB (em bilhões de reais)
    int pontosTuristicos2;          // Número de pontos turísticos

    // Variáveis para os novos cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Saudações
    printf("\nBem-Vindo ao Jogo Super Trunfo de Países!\n\n");
    printf("----- INSTRUÇÕES -----\n\n");
    printf("1 - Você deverá inserir, em sequência, os dados de duas cidades, os quais serão, posteriormente, exibidos.\n");
    printf("2 - A cidade que obtiver o maior valor para os campos população, área, PIB, número de pontos turísticos e PIB per capita vencerá nesses atributos. Porém, a cidade que possuir menor densidade populacional vencerá para esse atributo.\n");
    printf("3 - O atributo Super Poder corresponderá ao somatório de todos os dados numéricos, considerando que a densidade é substituída pelo seu inverso (1/densidade).\n");
    printf("4 - A cidade com o maior valor de Super Poder vencerá nesse atributo.\n\n");

    // Cadastro da Carta 1:
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (Letra do estado seguida de número de 01 a 04. Ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

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

    // Cálculo do Super Poder para cada carta:
    // Soma: população (convertida para float), área, PIB, pontos turísticos, PIB per capita e o inverso da densidade
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibição dos Dados das Cartas:
    printf("\n--- Dados das Cartas ---\n");

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das Cartas:
    printf("\nComparação de Cartas:\n");

    // População: maior vence
    if (populacao1 > populacao2)
        printf("População: Carta 1 venceu (%d)\n", (populacao1 > populacao2));
    else
        printf("População: Carta 2 venceu (%d)\n", (populacao1 > populacao2));

    // Área: maior vence
    if (area1 > area2)
        printf("Área: Carta 1 venceu (%d)\n", (area1 > area2));
    else
        printf("Área: Carta 2 venceu (%d)\n", (area1 > area2));

    // PIB: maior vence
    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu (%d)\n", (pib1 > pib2));
    else
        printf("PIB: Carta 2 venceu (%d)\n", (pib1 > pib2));

    // Pontos Turísticos: maior vence
    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2));
    else
        printf("Pontos Turísticos: Carta 2 venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2));

    // Densidade Populacional: menor vence
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", (densidade1 < densidade2));
    else
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", (densidade1 < densidade2));

    // PIB per Capita: maior vence
    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: Carta 1 venceu (%d)\n", (pibPerCapita1 > pibPerCapita2));
    else
        printf("PIB per Capita: Carta 2 venceu (%d)\n", (pibPerCapita1 > pibPerCapita2));

    // Super Poder: maior vence
    if (superPoder1 > superPoder2)
        printf("Super Poder: Carta 1 venceu (%d)\n", (superPoder1 > superPoder2));
    else
        printf("Super Poder: Carta 2 venceu (%d)\n", (superPoder1 > superPoder2));

    return 0;
}
