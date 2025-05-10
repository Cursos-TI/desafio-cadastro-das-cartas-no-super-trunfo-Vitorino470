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
    float densidade1;
    float capita1; 

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

  //Cálculo de Densidade Populacional e Pib Per Capita

    densidade1 = (populacao / area); 
    capita1 = (pib / populacao);

  //Exibição dos dados da carta 1 
 
  printf("Carta 1 \n");
  printf("Estado: %s \n", estado);
  printf("Código da Carta: %s \n",codigo); 
  printf("Nome da Cidade: %s \n  População: %d habitantes \n", nome, populacao);
  printf("Área em Km²: %.2f Km² \n PIB: %.2f bilhões de Reais \n", area, pib);
  printf("Número de Pontos Turísticos: %d \n", pontos);
  printf("Densidade Populacional: %.2f hab/km² \n", densidade1);
  printf("Pib per capita: %f Reais \n", capita1);
      

 //Declaração de Variáveis para carta 2

 char estado02; 
 char codigo02[3];
 char nome02 [50]; 
 int populacao02; 
 float area02; 
 float pib02; 
 int pontos02;
 float densidade2;
 float capita2; 

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

 //Cálculo de Densidade Populacional e Pib Per Capita

    densidade2 = (populacao02 / area02); 
    capita2 = (pib02 / populacao02);

 //Exibição dos dados da carta 2

 printf("Carta 2 \n");
 printf("Estado: %s \n", estado02); 
 printf("Código da Carta: %s \n", codigo02); 
 printf("Nome da Cidade: %s \n População: %d habitantes \n", nome02, populacao02);
 printf("Área em Km²: %.2f Km² \n PIB: %.2f bilhões de Reais \n", area02, pib02);
 printf("Número de Pontos Turísticos: %d", pontos02);
 printf("Densidade Populacional: %.2f hab/km² \n", densidade2);
 printf("Pib per capita: %f Reais \n", capita2);


    return 0;
}
