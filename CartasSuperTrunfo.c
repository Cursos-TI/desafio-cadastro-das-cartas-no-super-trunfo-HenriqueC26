#include <stdio.h>

int main (){

    // Inserindo as variáveis utilizadas nas cartas 1 e 2
    char estado, estado2;
    char codigo[3], codigo2[3];
    char cidade[50], cidade2[50];
    char primeiroAtributo, segundoAtributo;
    int pontosturisticos, pontosturisticos2, resultado1, resultado2;
    float areakm, pib, areakm2, pib2, densidade1, densidade2, pibpercapta1, pibpercapta2;
    unsigned long int populacao, populacao2; 
        
    // Solicitando informacoes ao usuario da carta 1

    printf("Insira as informações da carta 1:\n");

    printf("Estado (A-H):");
    scanf(" %c", &estado);

    printf("Código da carta: "); 
    scanf( " %s", &codigo); 

    printf("Nome da cidade: "); 
    scanf(" %[^\n]", &cidade); 

    printf("População: "); 
    scanf(" %lu", &populacao); 

    printf("Área em Km²: "); 
    scanf(" %f", &areakm); 

    printf("PIB em bilhões: ");
    scanf(" %f", &pib); 

    printf("Número de pontos turisticos: ");
    scanf(" %d", &pontosturisticos); 

    
    // Solicitando informaçoes ao usuario da carta 2
    printf("Insira as informações da carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta: "); 
    scanf(" %s", &codigo2); 

    printf("Nome da cidade: "); 
    scanf(" %s", &cidade2); 

    printf("População: "); 
    scanf(" %lu", &populacao2); 

    printf("Área em Km²: "); 
    scanf(" %f", &areakm2); 

    printf("PIB: "); 
    scanf(" %f", &pib2); 

    printf("Número de pontos turisticos: ");
    scanf(" %d", &pontosturisticos2); 

    // Inserindo calculos da densidade e do pibpercapta
    densidade1 = populacao / areakm;
    pibpercapta1 = (pib * 1000000000.0) / populacao;

    densidade2 = populacao2 / areakm2;
    pibpercapta2 = (pib2 * 1000000000.0) / populacao2;

       // Calcular o inverso da densidade utilizado no calculo de super poder
       float inverso_densidade1 = (densidade1 > 0) * (1 / densidade1); 
       float inverso_densidade2 = (densidade2 > 0) * (1 / densidade2);

    // Calculando super poder das cartas 1 e 2
    float superpoderc1 = (float)populacao + areakm + pib + pontosturisticos + inverso_densidade1 + pibpercapta1; 
    float superpoderc2 = (float)populacao2 + areakm2 + pib2 + pontosturisticos2 + inverso_densidade2 + pibpercapta2; 

    // Imprimindo carta 1 e carta 2   
    printf("Carta 1: \n Estado: %c\n Codigo da carta: %s\n Nome da cidade: %s\n População: %lu\n Área em Km²: %.2f km²\n PIB: %.2f Bilhoes de reais\n Número de pontos turisticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capta: R$ %.2f\n Superpoder: %.2f\n", 
        estado, codigo, cidade, populacao, areakm, pib, pontosturisticos, densidade1, pibpercapta1, superpoderc1); 
    printf("Carta 2: \n Estado: %c\n Codigo da carta: %s\n Nome da cidade: %s\n População: %lu\n Área em Km²: %.2f km²\n PIB: %.2f Bilhoes de reais\n Número de pontos turisticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capta: R$ %.2f\n Superpoder: %.2f\n", 
        estado2, codigo2, cidade2, populacao2, areakm2, pib2, pontosturisticos2, densidade2, pibpercapta2, superpoderc2); 

     
    // Comparação das cartas
    printf("Comparação das cartas: \n");
    printf("Vencedor em populacao: Carta %d\n", (populacao > populacao2) * 1 + (populacao <= populacao2) * 2);
    printf("Vencedor em area: Carta %d\n", (areakm > areakm2) * 1 + (areakm <= areakm2) * 2);
    printf("Vencedor em PIB: Carta %d\n", (pib > pib2) * 1 + (pib <= pib2) * 2);
    printf("Vencedor em pontos turisticos: Carta %d\n", (pontosturisticos > pontosturisticos2) * 1 + (pontosturisticos <= pontosturisticos2) * 2);
    printf("Vencedor em Densidade Populacional: Carta %d\n", (densidade1 < densidade2) * 1 + (densidade1 >= densidade2) * 2);
    printf("Vencedor em PIB per capta: Carta %d\n", (pibpercapta1 > pibpercapta2) * 1 + (pibpercapta1 <= pibpercapta2) * 2);
    printf("Vencedor em Super Poder: Carta %d\n", (superpoderc1 > superpoderc2) * 1 + (superpoderc1 <= superpoderc2) * 2);

        // Inserindo if-else (população, area, PIB,pontos turisticos)

    if(populacao > populacao2){
        printf("Vencedor em população: Carta 1\n");
    }else{
        printf("Vencedor em população: Carta 2\n");
    }

    if(areakm > areakm2){
        printf("Vencedor em Area: Carta 1\n");
    }else{
        printf("Vencedor em Area: Carta 2\n");
    }

    if(pib > pib2){
        printf("Vencedor em PIB: Carta 1\n");
    }else{
        printf("Vencedor em PIB: Carta 2\n");
    }

    if(pontosturisticos > pontosturisticos2){
        printf("Vencedor em pontos turisticos: Carta 1\n");
    } else{
        printf("Vencedor em pontos turisticos: Carta 2\n");
    }

    int carta1, carta2;
    

    printf("Escolha uma opção:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("Escolha para Carta 1: ");
    scanf("%d", &carta1);
    printf("Escolha para Carta 2: ");
    scanf("%d", &carta2);

    switch (carta1)
    {
    case 1:
        printf("Carta 1: População\n");
        break;
    case 2:
        printf("Carta 1: Área\n");
        break;
    case 3:
        printf("Carta 1: PIB\n");
    case 4:
        printf("Carta 1: Pontos Turisticos\n");
        break;
    }

    switch (carta2)
    {
    case 1:
        printf("Carta 2: População\n");
        break;
    case 2:
        printf("Carta 2: Área\n");
        break;
    case 3:
    printf("Carta 2: PIB\n");
        break;
    case 4:
    printf("Carta 2: Pontos Turisticos\n");
        break;
    default:
    printf("Opção inválida para Carta 2!\n");
    }

    if (carta2 == carta1)
    {
        printf("*** Você empatou! ***\n");
    }else if ((carta1 == 1) && (carta2 == 3) ||
                (carta2 == 2) && (carta1 == 4) ||
                (carta2 == 3) && (carta1 == 1) ||
                (carta2 == 4) && (carta1 == 2))

    {
        printf(" *** Parabéns, você ganhou! ***\n");
    }   else{
        printf(" *** Você perdeu! ***\n");
    }
     
    

    srand(time(0));

    populacao = 1; rand() % 100 + 1; // Número entre 1 e 100
    populacao2 = 0; rand() % 100 +1; // Número entre 1 e 100
    areakm = 1; rand() % 100 + 1; //Número entre 1 e 100
    areakm2 = 0; rand() % 100 + 1; // Número entre 1 e 100
    pib = 1; rand() % 100 + 1; // Número entre 1 e 100
    pib2 = 0; rand() % 100 + 1; // Número entre 1 e 100
    pontosturisticos = 1; rand() % 100 + 1; // Número entre 1 e 100
    pontosturisticos2 = 0; rand() % 100 + 1; // Número entre 1 e 100

    // Inicio do jogo

    printf("Bem-vindo ao jogo Super Trunfo1\n");
    printf("Escolha o primeiro atributo.\n");
    printf("A. População: \n");
    printf("B. Área: \n");
    printf("C. PIB: \n");
    printf("D. Pontos turisticos: \n");

    printf("Escolha a comparação: \n");
    scanf("%c", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 'A':
    case 'a':
        printf ("Você escolheu a opção População!\n");
        resultado1 = populacao > populacao2 ? 1: 0;
        break;
    case 'B':
    case 'b':
        printf("Você escolheu Área!\n");
        resultado1 = areakm > areakm2 ? 1 : 0;
        break;
    case 'C':
    case 'c':
        printf("Você escolheu PIB!\n");
        resultado1 = pib > pib2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf("Você escolheu Pontos Turisticos!\n");
        resultado1 = pontosturisticos > pontosturisticos2 ? 1 : 0;
        break;
    }


    printf("Escolha o segundo atributo.\n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro.\n");
    printf("A. População: \n");
    printf("B. Área: \n");
    printf("C. PIB: \n");
    printf("D. Pontos turisticos: \n");

    printf("Escolha a comparação:\n");
    scanf("%c", &segundoAtributo);

    if(primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo");
    } else {
        switch (segundoAtributo)
    {
        case 'A':
        case 'a':
            printf ("Você escolheu a opção População!\n");
            resultado1 = populacao > populacao2 ? 1: 0;
            break;
        case 'B':
        case 'b':
            printf("Você escolheu Área!\n");
            resultado1 = areakm > areakm2 ? 1 : 0;
            break;
        case 'C':
        case 'c':
            printf("Você escolheu PIB!\n");
            resultado1 = pib > pib2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu Pontos Turisticos!\n");
            resultado1 = pontosturisticos > pontosturisticos2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida\n");
            break;
         }            
                
         if (resultado1 && resultado2)
         {
            printf("Parabéns, você venceu! \n");

         } else if (resultado1 != resultado2){
            printf("Empatou!\n");
         }else {
            printf("Infelizmente, você perdeu!\n");
         }
    
         return 0;
}