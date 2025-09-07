#include <stdio.h>

int main(){
    
    char pais1[50], pais2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int atracao1, atracao2;
    int primeiroAtrib, segundoAtrib;
    int resultado1, resultado2;
    float soma1, soma2;

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
    
    

    float densidade1 = (float) populacao1 / area1; 
    float densidade2 = (float) populacao2 / area2;
    
    printf("***COMPARAÇÃO DE CARTAS***\n");
    printf("Escolha o PRIMEIRO atributo a ser comparado\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n\n");
    
    printf("Escolha o atributo: ");
    scanf("%d", &primeiroAtrib);
    printf("\n");
    
    if (primeiroAtrib < 1 || primeiroAtrib > 5) 
    { 
        printf("Opção inválida. Reinicie o jogo!\n");
    } else 
    {    
        switch (primeiroAtrib)
    {
    case 1:
        /*
        Neste ponto foi utilizado operador ternário pq foi solicitado no exercício, mas
        neste caso acredito que não seria indicado, pq caso o valor do atributo 1 e o valor do atributo 2 forem iguais,
        o programa interpretará como o atributo 2 sendo maior.
        Exemplo: resultado1 = populacao1 > populacao2 1 : 0;
        se as populações forem iguais o resultado será 0.
        0 indica que a carta 2 ganhou e não empate.
        */
    
        printf("Você escolheu a opção POPULAÇÃO\n");
        printf("A população da Carta 1 (%s) é: %d habitantes. - A população da carta 2 (%s) é %d habitantes.\n\n", pais1, populacao1, pais2, populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu a opção ÁREA\n");
        printf("A área da Carta 1 (%s) é: %.2f km² - A área da carta 2 (%s) é %.2f km²\n\n", pais1, area1, pais2, area2);
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu a opção PIB\n");
        printf("O PIB da Carta 1 (%s) é: %.2f bilhões de reais. - O PIB da carta 2 (%s) é %.2f bilhões de reais.\n\n", pais1, pib1, pais2, pib2);
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu a opção NÚMERO DE PONTOS TURÍSTICOS\n");
        printf("O número de pontos turísticos da Carta 1 (%s) é: %d - O número de pontos turísticos da carta 2 (%s) é %d\n\n", pais1, atracao1, pais2, atracao2);
        resultado1 = atracao1 > atracao2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu a opção DENSIDADE DEMOGRÁFICA\n");
        printf("A densidade demográfica da Carta 1 (%s) é: %.2f hab/km² - A densidade demográfica da carta 2 (%s) é %.2f hab/km²\n\n", pais1, densidade1, pais2, densidade2);
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;    
    }
    
    printf("Escolha o SEGUNDO atributo a ser comparado\n");
    printf("ATENÇAÕ: você deve escolher um atributo diferente do primeiro!\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n\n");
    
    printf("Escolha o atributo: ");
    scanf("%d", &segundoAtrib);
    
    if (segundoAtrib < 1 || segundoAtrib > 5)
    {
        printf("Opção inválida. Reinicie o jogo!\n");
    }
    else
    {
    if (primeiroAtrib == segundoAtrib)
    {
        printf("Os atributos escolhidos são iguais. Reinicie o jogo!\n");
    }
    else {
        switch (segundoAtrib)
        {
        case 1:
            printf("Você escolheu a opção POPULAÇÃO\n");
            printf("A população da Carta 1 (%s) é: %d habitantes. - A população da carta 2 (%s) é %d habitantes.\n\n", pais1, populacao1, pais2, populacao2);
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu a opção ÁREA\n");
            printf("A área da Carta 1 (%s) é: %.2f km² - A área da carta 2 (%s) é %.2f km²\n\n", pais1, area1, pais2, area2);
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu a opção PIB\n");
            printf("O PIB da Carta 1 (%s) é: %.2f bilhões de reais. - O PIB da carta 2 (%s) é %.2f bilhões de reais.\n\n", pais1, pib1, pais2, pib2);
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu a opção NÚMERO DE PONTOS TURÍSTICOS\n");
            printf("O número de pontos turísticos da Carta 1 (%s) é: %d - O número de pontos turísticos da carta 2 (%s) é %d\n\n", pais1, atracao1, pais2, atracao2);
            resultado2 = atracao1 > atracao2 ? 1 : 0;
        break;
        case 5:
            printf("Você escolheu a opção DENSIDADE DEMOGRÁFICA\n");
            printf("A densidade demográfica da Carta 1 (%s) é: %.2f hab/km² - A densidade demográfica da carta 2 (%s) é %.2f hab/km²\n\n", pais1, densidade1, pais2, densidade2);
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;    
        }
    
    if (resultado1 && resultado2 ) {
        printf("Carta 1 (%s) ganhou!\n\n", pais1);
    }
    else if (resultado1 != resultado2) {
        printf("Carta 1 (%s) e Carta 2 (%s) empataram!\n\n", pais1, pais2);
    }
    else {
        printf("Carta 2 (%s) ganhou!\n\n", pais2);
    }
    
    }

    }

    }
 
    
    printf("SOMA DOS ATRIBUTOS\n\n");
   
    if ((primeiroAtrib == 1 && segundoAtrib == 2) || (primeiroAtrib == 2 && segundoAtrib == 1) )
    {
        soma1 = populacao1 + area1;
        soma2 = populacao2 + area2;
        
        printf("A soma dos atributos da carta 1 é: %.2f e a soma dos atributos da carta 2 é: %.2f\n", soma1, soma2);
        if (soma1 > soma2) {
            printf("Carta 1 (%s) ganhou a rodada!\n", pais1);
        }
        else if (soma1 < soma2) {
            printf("Carta 2 (%s) ganhou a rodada!", pais2);
        }
        else {
            printf("Rodada empatada!");
        }

    }
    
    else if ((primeiroAtrib == 1 && segundoAtrib == 3) || (primeiroAtrib == 3 && segundoAtrib == 1) )
    {
        soma1 = populacao1 + pib1;
        soma2 = populacao2 + pib2;
        
        printf("A soma dos atributos da carta 1 é: %.2f e a soma dos atributos da carta 2 é: %.2f\n", soma1, soma2);
        if (soma1 > soma2) {
            printf("Carta 1 (%s) ganhou a rodada!\n", pais1);
        }
        else if (soma1 < soma2) {
            printf("Carta 2 (%s) ganhou a rodada!", pais2);
        }
        else {
            printf("Rodada empatada!");
        }

    }
    
    else if ((primeiroAtrib == 1 && segundoAtrib == 4) || (primeiroAtrib == 4 && segundoAtrib == 1) )
    {
        soma1 = populacao1 + atracao1;
        soma2 = populacao2 + atracao2;
        
        printf("A soma dos atributos da carta 1 é: %.2f e a soma dos atributos da carta 2 é: %.2f\n", soma1, soma2);
        if (soma1 > soma2) {
            printf("Carta 1 (%s) ganhou a rodada!\n", pais1);
        }
        else if (soma1 < soma2) {
            printf("Carta 2 (%s) ganhou a rodada!", pais2);
        }
        else {
            printf("Rodada empatada!");
        }

    }

    else if ((primeiroAtrib == 1 && segundoAtrib == 5) || (primeiroAtrib == 5 && segundoAtrib == 1) )
    {
        soma1 = populacao1 + 1 / densidade1;
        soma2 = populacao2 + 1 /densidade2;
        
        printf("A soma dos atributos da carta 1 é: %.2f e a soma dos atributos da carta 2 é: %.2f\n", soma1, soma2);
        if (soma1 > soma2) {
            printf("Carta 1 (%s) ganhou a rodada!\n", pais1);
        }
        else if (soma1 < soma2) {
            printf("Carta 2 (%s) ganhou a rodada!", pais2);
        }
        else {
            printf("Rodada empatada!");
        }

    }

    else if ((primeiroAtrib == 2 && segundoAtrib == 3) || (primeiroAtrib == 3 && segundoAtrib == 2) )
    {
        soma1 = area1 + pib1;
        soma2 = area2 + pib2;
        
        printf("A soma dos atributos da carta 1 é: %.2f e a soma dos atributos da carta 2 é: %.2f\n", soma1, soma2);
        if (soma1 > soma2) {
            printf("Carta 1 (%s) ganhou a rodada!\n", pais1);
        }
        else if (soma1 < soma2) {
            printf("Carta 2 (%s) ganhou a rodada!", pais2);
        }
        else {
            printf("Rodada empatada!");
        }

    }

    else if ((primeiroAtrib == 2 && segundoAtrib == 4) || (primeiroAtrib == 4 && segundoAtrib == 2) )
    {
        soma1 = area1 + atracao1;
        soma2 = area2 + atracao2;
        
        printf("A soma dos atributos da carta 1 é: %.2f e a soma dos atributos da carta 2 é: %.2f\n", soma1, soma2);
        if (soma1 > soma2) {
            printf("Carta 1 (%s) ganhou a rodada!\n", pais1);
        }
        else if (soma1 < soma2) {
            printf("Carta 2 (%s) ganhou a rodada!", pais2);
        }
        else {
            printf("Rodada empatada!");
        }

    }

    else if ((primeiroAtrib == 2 && segundoAtrib == 5) || (primeiroAtrib == 5 && segundoAtrib == 2) )
    {
        soma1 = area1 + 1 / densidade1;
        soma2 = area2 + 1 / densidade2;
        
        printf("A soma dos atributos da carta 1 é: %.2f e a soma dos atributos da carta 2 é: %.2f\n", soma1, soma2);
        if (soma1 > soma2) {
            printf("Carta 1 (%s) ganhou a rodada!\n", pais1);
        }
        else if (soma1 < soma2) {
            printf("Carta 2 (%s) ganhou a rodada!", pais2);
        }
        else {
            printf("Rodada empatada!");
        }

    }

    else if ((primeiroAtrib == 3 && segundoAtrib == 4) || (primeiroAtrib == 4 && segundoAtrib == 3) )
    {
        soma1 = pib1 + atracao1;
        soma2 = pib2 + atracao2;
        
        printf("A soma dos atributos da carta 1 é: %.2f e a soma dos atributos da carta 2 é: %.2f\n", soma1, soma2);
        if (soma1 > soma2) {
            printf("Carta 1 (%s) ganhou a rodada!\n", pais1);
        }
        else if (soma1 < soma2) {
            printf("Carta 2 (%s) ganhou a rodada!", pais2);
        }
        else {
            printf("Rodada empatada!");
        }

    }
    
    else if ((primeiroAtrib == 3 && segundoAtrib == 5) || (primeiroAtrib == 5 && segundoAtrib == 3) )
    {
        soma1 = pib1 + 1 / densidade1;
        soma2 = pib2 + 1 / densidade2;
        
        printf("A soma dos atributos da carta 1 é: %.2f e a soma dos atributos da carta 2 é: %.2f\n", soma1, soma2);
        if (soma1 > soma2) {
            printf("Carta 1 (%s) ganhou a rodada!\n", pais1);
        }
        else if (soma1 < soma2) {
            printf("Carta 2 (%s) ganhou a rodada!", pais2);
        }
        else {
            printf("Rodada empatada!");
        }

    }

    else {
        ((primeiroAtrib == 4 && segundoAtrib == 5) || (primeiroAtrib == 5 && segundoAtrib == 4) );

        soma1 = atracao1 + 1 / densidade1;
        soma2 = atracao2 + 1 / densidade2;
        
        printf("A soma dos atributos da carta 1 é: %.2f e a soma dos atributos da carta 2 é: %.2f\n", soma1, soma2);
        if (soma1 > soma2) {
            printf("Carta 1 (%s) ganhou a rodada!\n", pais1);
        }
        else if (soma1 < soma2) {
            printf("Carta 2 (%s) ganhou a rodada!", pais2);
        }
        else {
            printf("Rodada empatada!");
        }

    }

    return 0;
}