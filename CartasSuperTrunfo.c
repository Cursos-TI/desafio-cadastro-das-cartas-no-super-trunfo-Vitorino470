#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    
    //Declaração de Variáveis para carta 1
    
    char estado; 
    char codigo[3];
    char nome [50]; 
    int populacao; 
    float area; 
    float pib; 
    int pontos; 

    //Cadastro de dados da carta 1 

    printf("Digite uma letra de 'A' a 'H':  \n");
  scanf("%s", &estado);

  printf("Digite o código da carta:  \n");
  scanf("%s", &codigo);

  printf("Digite o nome da cidade:  \n");
  scanf("%s", &nome);

  printf("Digite o número de habitantes:  \n");
  scanf("%d", &populacao);
  
  printf("Digite a área da cidade em quilômetros:  \n");
  scanf("%f", &area); 

  printf("Digite o PIB da cidade:  \n"); 
  scanf("%f", &pib); 

  printf("Digite a quantidade de pontos turisticos na cidade:  \n"); 
  scanf("%d", &pontos); 

  //Exibição dos dados da carta 1

  printf("Carta 1 \n - Estado: %s \n - Código da Carta: %s \n", estado, codigo); 
  printf("- Nome da Cidade: %s \n - População: %d habitantes \n", nome, populacao);
  printf("- Área em Km²: %.2f Km² \n - PIB: %.2f bilhões de Reais \n", area, pib);
  printf("- Número de Pontos Turísticos: %d \n", pontos);

 //Declaração de Variáveis para carta 2

 char estado02[20]; 
 char codigo02[3];
 char nome02 [50]; 
 int populacao02; 
 float area02; 
 float pib02; 
 int pontos02; 

 //Cadastro de dados da carta 2

 printf("Digite uma letra de 'A' a 'H':  \n");
 scanf("%s", &estado02);

 printf("Digite o código da carta:  \n");
 scanf("%s", &codigo02);

 printf("Digite o nome da cidade:  \n");
 scanf("%s", &nome02);

 printf("Digite o número de habitantes:  \n");
 scanf("%d", &populacao02);
 
 printf("Digite a área da cidade em quilômetros:  \n");
 scanf("%f", &area02); 

 printf("Digite o PIB da cidade:  \n"); 
 scanf("%f", &pib02); 

 printf("Digite a quantidade de pontos turisticos na cidade:  \n"); 
 scanf("%d", &pontos02); 

 //Exibição dos dados da carta 2

 
 printf("Carta 2 \n - Estado: %s \n - Código da Carta: %s \n", estado02, codigo02); 
 printf("- Nome da Cidade: %s \n - População: %d habitantes \n", nome02, populacao02);
 printf("- Área em Km²: %.2f Km² \n - PIB: %.2f bilhões de Reais \n", area02, pib02);
 printf("- Número de Pontos Turísticos: %d", pontos02);


    return 0;
}
