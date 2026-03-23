#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
      char estado = 'A';
      char codigo[10] = "A01";
      char cidade[15] = "Salvador";
      int populacao = 2560000;
      int pontosturisticos = 25;
      float area = 693.83;
      float pib = 76.700000000;

  // Área para entrada de dados
     scanf("Estado %c\n", estado);
     scanf("Código: %s\n", &codigo);
     scanf("Nome da cidade: %s\n", &cidade);
     scanf("População: %d\n", populacao);
     scanf("Área: %.2f km² \n", area);
     scanf("PIB: %.3f bilhões de reais \n", pib);
     scanf("Números de pontos turísticos: %d\n", pontosturisticos);
     
  // Área para exibição dos dados da cidade

return 0;
} 
