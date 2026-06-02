#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_percapita1;
    float superPoder1;
    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_percapita2;
    float superPoder2;
    
    // Cadastro das Cartas:
    // CARTA 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turíticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");
    // CARTA 2
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);  
    printf("Código da Carta (ex: B03): ");
    scanf("%s", codigo2);  
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turíticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    //Calculo
    densidade_populacional1 = (float) populacao1 / area1;
    pib_percapita1 = (float) pib1 * 1000000000 / populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pib_percapita1 + (1 / densidade_populacional1);

    densidade_populacional2 = (float) populacao2 / area2;
    pib_percapita2 = (float) pib2 * 1000000000 / populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_percapita2 + (1 / densidade_populacional2);

    // Exibição dos Resultados:
    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_percapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n\n");

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_percapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n\n");
    printf("\n\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    int opcao;

    printf("Menu: Escolha o atributo:\n");
    printf("1. Populaçãoo\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticosIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB percapita\n");
    printf("7. Super Poder\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Cidade 1 tem maior população.\n");
            } else {
                printf("Cidade 2 tem maior população.\n");
            }
            printf("\n\n");
            break;
        
        case 2:
            printf("Carta 1 - %s: %f\n", cidade1, area1);
            printf("Carta 2 - %s: %f\n", cidade2, area2);
            if (area1 > area2) {
                printf("Cidade 1 tem maior área.\n");
            } else {
                printf("Cidade 2 tem maior área.\n");
            }
            printf("\n\n");
            break;
        case 3:
            printf("Carta 1 - %s: %f\n", cidade1, pib1);
            printf("Carta 2 - %s: %f\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Cidade 1 tem maior PIB.\n");
            } else {
                printf("Cidade 2 tem maior PIB.\n");
            }
            printf("\n\n");
            break;
        case 4:
            printf("Carta 1 - %s: %d\n", cidade1, pontos_turisticos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Cidade 1 tem mais pontos turísticos.\n");
            } else {
                printf("Cidade 2 tem mais pontos turísticos.\n");
            }
            printf("\n\n");
            break;
        case 5:
            printf("Carta 1 - %s: %f\n", cidade1, densidade_populacional1);
            printf("Carta 2 - %s: %f\n", cidade2, densidade_populacional2);
            if (densidade_populacional1 > densidade_populacional2) {
                printf("Cidade 1 tem mais densidade populacional.\n");
            } else {
                printf("Cidade 2 tem mais densidade populacional.\n");
            }
            printf("\n\n");
            break;
        case 6:
            printf("Carta 1 - %s: %f\n", cidade1, pib_percapita1);
            printf("Carta 2 - %s: %f\n", cidade2, pib_percapita2);
            if (pib_percapita1 > pib_percapita2) {
                printf("Cidade 1 tem maior PIB percapita.\n");
            } else {
                printf("Cidade 2 tem menor PIB percapita.\n");
            }
            printf("\n\n");
            break;
        case 7:
            printf("Carta 1 - %s: %f\n", cidade1, superPoder1);
            printf("Carta 2 - %s: %f\n", cidade2, superPoder2);
            if (superPoder1 > superPoder2) {
                printf("Cidade 1 tem mais SUPER PODER.\n");
            } else {
                printf("Cidade 2 tem mais SUPER PODER.\n");
            }
            printf("\n\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}