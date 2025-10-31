#include <stdio.h>
#include <string.h>

int main() {
    // ========================= NÍVEL NOVATO =========================
    // Declaração de variáveis para armazenar os dados das duas cartas
    char estado1[3], estado2[3];            // Sigla do estado (ex: SP, RJ)
    char codigo1[4], codigo2[4];            // Código da carta (ex: A01, B02)
    char cidade1[30], cidade2[30];          // Nome da cidade
    int populacao1, populacao2;             // População
    float area1, area2;                     // Área em km²
    float pib1, pib2;                       // PIB em bilhões
    int pontosTuristicos1, pontosTuristicos2; // Número de pontos turísticos
    float densidade1, densidade2;           // Densidade populacional
    float pibPerCapita1, pibPerCapita2;     // PIB per capita
    int opcao;                              // Opção do menu de comparação

    // Cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (sigla, ex: SP): ");
    scanf(" %2s", estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade e do PIB per capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (sigla, ex: RJ): ");
    scanf(" %2s", estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf(" %3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade e do PIB per capita
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição das cartas cadastradas
    printf("\n=== CARTAS CADASTRADAS ===\n");

    printf("\n[CARTA 1]\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f bilhoes/hab\n", pibPerCapita1);

    printf("\n[CARTA 2]\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f bilhoes/hab\n", pibPerCapita2);


    // ========================= NÍVEL AVENTUREIRO =========================
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARACAO ===\n");

    // Estrutura condicional com switch
    switch (opcao) {
        case 1:
            printf("Comparando Populacao...\n");
            if (populacao1 > populacao2)
                printf("Vencedor: %s (%s)\n", cidade1, codigo1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s (%s)\n", cidade2, codigo2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Area...\n");
            if (area1 > area2)
                printf("Vencedor: %s (%s)\n", cidade1, codigo1);
            else if (area2 > area1)
                printf("Vencedor: %s (%s)\n", cidade2, codigo2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB...\n");
            if (pib1 > pib2)
                printf("Vencedor: %s (%s)\n", cidade1, codigo1);
            else if (pib2 > pib1)
                printf("Vencedor: %s (%s)\n", cidade2, codigo2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparando Pontos Turisticos...\n");
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s (%s)\n", cidade1, codigo1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s (%s)\n", cidade2, codigo2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparando Densidade Demografica (menor vence)...\n");
            if (densidade1 < densidade2)
                printf("Vencedor: %s (%s)\n", cidade1, codigo1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s (%s)\n", cidade2, codigo2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Comparando PIB per Capita...\n");
            if (pibPerCapita1 > pibPerCapita2)
                printf("Vencedor: %s (%s)\n", cidade1, codigo1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Vencedor: %s (%s)\n", cidade2, codigo2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }


    // ========================= NÍVEL MESTRE =========================
    // Comparação com múltiplos atributos e soma final

    int atributo1 = 0, atributo2 = 0;
    float valoresC1[7] = {0, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1};
    float valoresC2[7] = {0, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2};

    const char *nomeAtributos[] = {
        "", "Populacao", "Area", "PIB", "Pontos Turisticos", "Densidade Demografica", "PIB per Capita"
    };

    // Escolha dos dois atributos
    do {
        printf("\nEscolha o primeiro atributo (1-6): ");
        scanf("%d", &atributo1);
    } while (atributo1 < 1 || atributo1 > 6);

    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
    } while (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1);

    // Soma dos valores
    float somaC1 = valoresC1[atributo1] + valoresC1[atributo2];
    float somaC2 = valoresC2[atributo1] + valoresC2[atributo2];

    printf("\n===== RESULTADO FINAL (Nível Mestre) =====\n");
    printf("Carta 1: %s (%s) -> Soma: %.4f\n", cidade1, codigo1, somaC1);
    printf("Carta 2: %s (%s) -> Soma: %.4f\n", cidade2, codigo2, somaC2);

    if (somaC1 > somaC2)
        printf("Vencedor Final: %s (%s)\n", cidade1, codigo1);
    else if (somaC2 > somaC1)
        printf("Vencedor Final: %s (%s)\n", cidade2, codigo2);
    else
        printf("Empate Final!\n");

    return 0;
}






