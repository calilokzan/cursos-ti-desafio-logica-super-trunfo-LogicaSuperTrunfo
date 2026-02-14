#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

 
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1;
    char codigoCarta1[10];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numPontosTuristicos1;
    float densidadePopulacional1;
    float densidadePib1;
    float superPoder1;

    char estado2;
    char codigoCarta2[10];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;
    float densidadePopulacional2;
    float densidadePib2;
    float superPoder2;
  // Área para entrada de dados

   printf("=== Criando as Cartas do Super Trunfo ===\n\n");

    printf("=== Carta 1 ===\n");

    printf("Digite uma letra de 'A' a 'H' para o estado 1: \n");
    scanf("%c", &estado1);   

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numPontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    densidadePib1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + numPontosTuristicos1 + 1/densidadePopulacional1 + densidadePib1;



    printf("=== Carta 2 ===\n");

    printf("Digite uma letra de 'A' a 'H' para o estado 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numPontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    densidadePib2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + numPontosTuristicos2 + 1/densidadePopulacional2 + densidadePib2;

  // Área para exibição dos dados da cidade

   printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", numPontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("Densidade do PIB: %.2f bilhões/km²\n", densidadePib1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("Densidade do PIB: %.2f bilhões/km²\n", densidadePib2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    // menu interativo usando switch para que o jogador possa escolher o atributo de comparação entre duas cartas de países.
    printf("Escolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Densidade do PIB\n");
    printf("7. Super Poder\n");
    int escolha;
    scanf("%d", &escolha);
    switch(escolha) {
        case 1:
            if(populacao1 > populacao2) {
                printf("A carta 1 é a vencedora! (População: %d)\n", populacao1);
            } else if(populacao1 < populacao2) {
                printf("A carta 2 é a vencedora! (População: %d)\n", populacao2);
            } else {
                printf("As cartas estão empatadas!\n");
            }
            break;
        case 2:
            if(area1 > area2) {
                printf("A carta 1 é a vencedora! (Área: %.2f km²)\n", area1);
            } else if(area1 < area2) {
                printf("A carta 2 é a vencedora! (Área: %.2f km²)\n", area2);
            } else {
                printf("As cartas estão empatadas!\n");
            }
            break;
        case 3:
            if(pib1 > pib2) {
                printf("A carta 1 é a vencedora! (PIB: %.2f bilhões)\n", pib1);
            } else if(pib1 < pib2) {
                printf("A carta 2 é a vencedora! (PIB: %.2f bilhões)\n", pib2);
            } else {
                printf("As cartas estão empatadas!\n");
            }
            break;
        case 4:
            if(numPontosTuristicos1 > numPontosTuristicos2) {
                printf("A carta 1 é a vencedora! (Número de Pontos Turísticos: %d)\n", numPontosTuristicos1);
            } else if(numPontosTuristicos1 < numPontosTuristicos2) {
                printf("A carta 2 é a vencedora! (Número de Pontos Turísticos: %d)\n", numPontosTuristicos2);
            } else {
                printf("As cartas estão empatadas!\n");
            }
            break;
        case 5:
            if(densidadePopulacional1 < densidadePopulacional2) {
                printf("A carta 1 é a vencedora! (Densidade Populacional: %.2f habitantes/km²)\n", densidadePopulacional1);
            } else if(densidadePopulacional1 < densidadePopulacional2) {
                printf("A carta 2 é a vencedora! (Densidade Populacional: %.2f habitantes/km²)\n", densidadePopulacional2);
            } else {
                printf("As cartas estão empatadas!\n");
            }
            break;
        case 6:
            if(densidadePib1 > densidadePib2) {
                printf("A carta 1 é a vencedora! (Densidade do PIB: %.2f bilhões/km²)\n", densidadePib1);
            } else if(densidadePib1 < densidadePib2) {
                printf("A carta 2 é a vencedora! (Densidade do PIB: %.2f bilhões/km²)\n", densidadePib2);
            } else {
                printf("As cartas estão empatadas!\n");
            }
            break;
        case 7:
            if(superPoder1 > superPoder2) {
                printf("A carta 1 é a vencedora! (Super Poder: %.2f)\n", superPoder1);
            } else if(superPoder1 < superPoder2) {
                printf("A carta 2 é a vencedora! (Super Poder: %.2f)\n", superPoder2);
            } else {
                printf("As cartas estão empatadas!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
    }

     // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

   

return 0;
} 


   
 
