#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis das duas cartas
    char nome1[30], nome2[30];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    int opcao;

    // Cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos automáticos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos automáticos
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição das cartas cadastradas
    printf("\n=== Cartas Cadastradas ===\n");
    printf("\nCarta 1 - %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f bilhoes/hab\n", pibPerCapita1);

    printf("\nCarta 2 - %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f bilhoes/hab\n", pibPerCapita2);

    // Menu interativo
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

    printf("\n=== RESULTADO ===\n");

    switch (opcao) {
        case 1:
            printf("Comparando Populacao:\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nome1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando Area:\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2)
                printf("Vencedor: %s\n", nome1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhoes\n", nome1, pib1);
            printf("%s: %.2f bilhoes\n", nome2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s\n", nome1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Comparando Pontos Turisticos:\n");
            printf("%s: %d pontos\n", nome1, pontosTuristicos1);
            printf("%s: %d pontos\n", nome2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", nome1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Comparando Densidade Demografica (menor vence):\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);

            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", nome1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Comparando PIB per Capita:\n");
            printf("%s: %.6f bilhoes/hab\n", nome1, pibPerCapita1);
            printf("%s: %.6f bilhoes/hab\n", nome2, pibPerCapita2);

            if (pibPerCapita1 > pibPerCapita2)
                printf("Vencedor: %s\n", nome1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida! Escolha um numero entre 1 e 6.\n");
            break;
    }

    return 0;
}
