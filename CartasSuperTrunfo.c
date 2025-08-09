#include <stdio.h>

int main(){
    
    char pais1[50], pais2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int atracao1, atracao2;
    int opcao;

    printf("###SUPER TRUNFO - PÁISES###\n\n");
    printf("Digite as informações para a carta 1\n\n");

    printf("Digite o nome do país:\n");
    scanf("%s", &pais1);
    printf("Digite a quantidade de habitantes do país escolhido:\n");
    scanf("%d", &populacao1);
    printf("Digite a área do país escolhido:\n");
    scanf("%f", &area1);
    printf("Digite o PIB do país escolhido:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos do país escolhido\n");
    scanf("%d", &atracao1);
    printf("\n");

    printf("Muito bem! Agora digite as informações para a carta 2\n\n");
    
    printf("Digite o nome do país:\n");
    scanf("%s", &pais2);
    printf("Digite a quantidade de habitantes do país escolhido:\n");
    scanf("%u", &populacao2);
    printf("Digite a área do país escolhido:\n");
    scanf("%f", &area2);
    printf("Digite o PIB do país escolhido:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos do país escolhido\n");
    scanf("%d", &atracao2);
    printf("\n\n");
    
    printf("Escolha qual atributo deseja fazer a comnparação\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &opcao);

    
    float densidade1 = (float) populacao1 / area1; 
    float densidade2 = (float) populacao2 / area2;
    
    printf("\n");
    printf("Carta 1: %s - Carta 2: %s\n\n", pais1, pais2);
    
    switch (opcao)
    {
    case 1:
        printf("***Comparação de cartas (Atributo: População)***\n");
        printf("Carta 1 - (%s): %d habitantes\n", pais1, populacao1);
        printf("Carta 2 - (%s): %d habitantes\n", pais2, populacao2);
        if (populacao1 > populacao2) {
            printf("Carta 1 (%s) ganhou!\n", pais1);
        }
        else if (populacao2 > populacao1) {
            printf("carta 2 (%s) ganhou!\n", pais2);
        }
        else {
            printf("Carta 1 (%s) e Carta 2 (%s) empataram\n", pais1, pais2);
        }
        break;
    case 2:
        printf("***Comparação de cartas (Atributo: Área)***\n");
        printf("Carta 1 - (%s): %.2f Km²\n", pais1, area1);
        printf("Carta 2 - (%s): %.2f Km²\n", pais2, area2);
        if (area1 > area2) {
            printf("Carta 1 (%s) ganhou!\n", pais1);
        }
        else if (area2 > area1) {
            printf("carta 2 (%s) ganhou!\n", pais2);
        }
        else {
            printf("Carta 1 (%s) e Carta 2 (%s) empataram\n", pais1, pais2);
        }
        break;
    case 3:
        printf("***Comparação de cartas (Atributo: PIB)***\n");
        printf("Carta 1 - (%s): %.2f bilhões de reais\n", pais1, pib1);
        printf("Carta 2 - (%s): %.2f bilhões de reais\n", pais2, pib2);
        if (pib1 > pib2) {
            printf("Carta 1 (%s) ganhou!\n", pais1);
        }
        else if (pib2 > pib1) {
            printf("carta 2 (%s) ganhou!\n", pais2);
        }
        else {
            printf("Carta 1 (%s) e Carta 2 (%s) empataram\n", pais1, pais2);
        }
        break;
    case 4:
        printf("***Comparação de cartas (Atributo: Pontos Turísticos)***\n");
        printf("Carta 1 - (%s): %d pontos turísticos\n", pais1, atracao1);
        printf("Carta 2 - (%s): %d pontos turísticos\n", pais2, atracao2);
        if (atracao1 > atracao2) {
            printf("Carta 1 (%s) ganhou!\n", pais1);
        }
        else if (atracao2 > atracao1) {
            printf("carta 2 (%s) ganhou!\n", pais2);
        }
        else {
            printf("Carta 1 (%s) e Carta 2 (%s) empataram\n", pais1, pais2);
        }
        break;
    case 5:
        printf("***Comparação de cartas (Atributo: Densidade demográfica)***\n");
        printf("Carta 1 - (%s): %f hab/km²\n", pais1, densidade1);
        printf("Carta 2 - (%s): %f hab/km²\n", pais2, densidade2);
        if (densidade1 < densidade2) {
            printf("Carta 1 (%s) ganhou!\n", pais1);
        }
        else if (densidade2 < densidade1) {
            printf("carta 2 (%s) ganhou!\n", pais2);
        }
        else {
            printf("Carta 1 (%s) e Carta 2 (%s) empataram\n", pais1, pais2);
        }
        break;
    default:
            printf("Opção inválida\n");
        break;
    }



    return 0;
}