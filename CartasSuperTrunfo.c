#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1 = 'A', estado2 = 'B';
    char codigo1 [10] = "A01", codigo2 [10] = "B01";
    char cidade1 [15] = "Salvador", cidade2 [15] = "Londrina";
    int populacao1 = 2560000, populacao2 = 581382;
    int pturisticos1 = 25, pturisticos2 = 15;
    float area1 = 693.83, area2 = 1651;
    float pib1 = 76.700000000, pib2 = 27.900000000;
    float densidadepop1 = (float) populacao1 / area1, densidadepop2 = (float) populacao2 / area2;
    float pibpercapita1 = (float) (pib1 * 1000000000) / populacao1 , pibpercapita2 = (float) (pib2 * 1000000000) / populacao2;
    float superpoder1 = (float) populacao1 + pib1 + area1 + pturisticos1 + (densidadepop1 / 1) + pibpercapita1;
    float superpoder2 = (float) populacao2 + pib2 + area2 + pturisticos2 + (densidadepop2 / 1) + pibpercapita2;

  // Área para entrada de dados

  //Carta 1:

     printf("\nInsira os dados da Carta 1: \n");

      printf("Insira o estado: ");
      scanf("%s", &estado1);

      printf("Insira o código: ");
      scanf("%s", codigo1); 

      printf("Insira a cidade: ");
      scanf("%s", cidade1);

      printf("Insira a população: ");
      scanf("%d", &populacao1);

      printf("Insira a área: ");
      scanf("%f", &area1);

      printf("Insira o PIB: ");
      scanf("%f", &pib1);

      printf("Insira a quantidade de pontos turísticos: ");
      scanf("%d", &pturisticos1);

      printf("Insira a densidade populacional: ");
      scanf("%f", &densidadepop1);

      printf("Insira o PIB per capita: ");
      scanf("%f", &pibpercapita1);

      printf("Super Poder 1: ");
      scanf("%f", &superpoder1);

      //Carta 2
      
      printf("\nInsira os dados da Carta 2: \n");

      printf("Insira o estado: ");
      scanf("%s", &estado2);

      printf("Insira o código: ");
      scanf("%s", codigo2); 

      printf("Insira a cidade: ");
      scanf("%s", cidade2);

      printf("Insira a população: ");
      scanf("%d", &populacao2);

      printf("Insira a área: ");
      scanf("%f", &area2);

      printf("Insira o PIB: ");
      scanf("%f", &pib2);

      printf("Insira a quantidade de pontos turísticos: ");
      scanf("%d", &pturisticos2);

      printf("Insira a densidade populacional: ");
      scanf("%f", &densidadepop2);

      printf("Insira o PIB per capita: ");
      scanf("%f", &pibpercapita2);

      printf("Super Poder 2: ");
      scanf("%f", &superpoder2);

  // Área para exibição dos dados da cidade
  
    printf("\nCarta 1: \n");
    printf("Estado: %s\n", &estado1);
    printf("Código: %s\n", &codigo1);
    printf("Nome da cidade: %s\n", &cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d\n", pturisticos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidadepop1);
    printf("PIB per capita: %.2f reais \n", pibpercapita1);
    printf("Super poder 1: %f \n", superpoder1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", &codigo2);
    printf("Nome da cidade: %s\n", &cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Números de pontos turísticos: %d\n", pturisticos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidadepop2);
    printf("PIB per capita: %.2f reais \n", pibpercapita2);
    printf("Super poder 2: %f \n", superpoder2);
  
    //Comparação

    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 >= populacao2);
    printf("Área: Carta 2 venceu (%d)\n", area1 >= area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 >= pib2);
    printf("Pontos turísticos: Carta 1 venceu (%d)\n", pturisticos1 >= pturisticos2);
    printf("Densidade populacional: Carta 2 venceu (%d)\n", densidadepop1 >= densidadepop2);
    printf("PIB per capita: Carta 2 venceu (%d)\n", pibpercapita1 >= pibpercapita2);
    printf("Super poder: Carta 1 venceu (%d)\n", superpoder1 >= superpoder2);
    
      return 0;
      
  



} 
