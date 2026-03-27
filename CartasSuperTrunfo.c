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

  // Área para entrada de dados
      printf("Insira o estado: ");
      scanf("%s", &estado1);

      printf("Insira o código: ");
      scanf("%s", &codigo1); 

      printf("Insira a cidade: ");
      scanf("%s", &cidade1);

      printf("Insira a população: ");
      scanf("%d", &populacao1);

      printf("Insira a área: ");
      scanf("%f", area1);

      printf("Insira o PIB: ");
      scanf("%f", &pib1);

      printf("Insira a quantidade de pontos turísticos: ");
      scanf("%d", &pturisticos1);


  // Área para exibição dos dados da cidade
      
  

      return 0;
      
  



} 
