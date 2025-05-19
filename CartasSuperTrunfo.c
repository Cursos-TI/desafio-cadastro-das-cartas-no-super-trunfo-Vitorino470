#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
  
//Declaração de Variáveis Carta 1 
  char estado; 
  char codigo[20];
  char nome [50]; 
  unsigned int populacao; 
  float area; 
  float pib; 
  int pontos; 
  float densidade1;
  float capita1;
  float superpoder1;
  

//Entrada de Dados  
  printf("Digite uma letra de 'A' a 'H':\n");
  scanf("%c", &estado);

  printf("Digite o código da carta:  \n");
  scanf("%s", &codigo);

  printf("Digite o nome da cidade:  \n");
  scanf("%s", &nome);

  printf("Digite o número de habitantes:  \n");
  scanf("%u", &populacao);
  
  printf("Digite a área da cidade em quilômetros:  \n");
  scanf("%f", &area); 

  printf("Digite o PIB da cidade:  \n"); 
  scanf("%f", &pib); 

  printf("Digite a quantidade de pontos turisticos na cidade:  \n"); 
  scanf("%d", &pontos); 

 //Cálculos da Carta 1  
  
  densidade1 = (populacao / area); 
  capita1 = (pib / populacao);
  superpoder1 = populacao + area + pib + capita1 + (1.0 / densidade1);

//Exibição dos valores Carta 1
  printf("Carta 1\n");
  printf("Estado: %c\n", estado); 
  printf("Código da Carta: %c%s\n", estado, codigo); 
  printf("Nome da Cidade: %s\n População: %u habitantes \n", nome, populacao);
  printf("Área em Km²: %.2f Km²\n PIB: %.2f bilhões de Reais \n", area, pib);
  printf("Número de Pontos Turísticos: %d\n", pontos);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("Pib per capita: %f Reais\n\n", capita1); 
  printf("Super Poder: %.2f \n\n", superpoder1);

//Anúncio para entrada de dados da Carta 2

  printf("Agora entre com os dados da Carta 2\n\n");

//Declaração de variáveis Carta 2

  char estado02; 
  char codigo02[20];
  char nome02 [50]; 
  unsigned int populacao02; 
  float area02; 
  float pib02; 
  int pontos02;
  float densidade2;
  float capita2;
  float superpoder2; 


//Entrada de Dados

 
  printf("Digite uma letra de 'A' a 'H':\n");
  scanf(" %c", &estado02);

  printf("Digite o código da carta: \n");
  scanf("%s", &codigo02);

  printf("Digite o nome da cidade:  \n");
  scanf("%s", &nome02);

  printf("Digite o número de habitantes:  \n");
  scanf("%u", &populacao02);
  
  printf("Digite a área da cidade em quilômetros:  \n");
  scanf("%f", &area02); 

  printf("Digite o PIB da cidade:  \n"); 
  scanf("%f", &pib02); 

  printf("Digite a quantidade de pontos turisticos na cidade:  \n"); 
  scanf("%d", &pontos02); 

//Cálculos da Carta 2
    
 densidade2 = (populacao02 / area02); 
 capita2 = (pib02 / populacao02);
 superpoder2 = populacao02 + area02 + pib02 + capita2 + (1.0 / densidade2);

//Exibição de Valores
  printf("Carta 2\n");
  printf("Estado: %c\n", estado02); 
  printf("Código da Carta: %c%s\n", estado02, codigo02); 
  printf("Nome da Cidade: %s\n População: %u habitantes\n", nome02, populacao02);
  printf("Área em Km²: %.2f Km²\n PIB: %.2f bilhões de Reais\n", area02, pib02);
  printf("Número de Pontos Turísticos: %d\n", pontos02);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("Pib per capita: %f Reais\n", capita2);
  printf("Super Poder: %.2f \n\n", superpoder2); 


//Comparação das Cartas

printf("Comparando as cartas...\n\n");

//Variáveis para comparação

int resultPopul;
int resultArea;
int resultPib;
int resultTur;
int resultDens;
int resultCapit;
int resultSuper;

//Cálculos de comparação

resultPopul = populacao > populacao02;
resultArea = area > area02;
resultPib = pib > pib02;
resultTur = pontos > pontos02;
resultDens = densidade1 < densidade2;
resultCapit = capita1 > capita2;
resultSuper = superpoder1 > superpoder2; 

//Exibição do Resultado da Comparação

printf("Maior População: %d\n", resultPopul); 
printf("Maior Área: %d\n", resultArea); 
printf("Maior Pib: %d\n", resultPib); 
printf("Maior número de Pontos Turísticos: %d\n", resultTur); 
printf("Menor Densidade Populacional: %d\n", resultDens); 
printf("Maior Pib per Capita: %d\n", resultCapit); 
printf("Maior Super Poder: %d\n", resultSuper); 


  return 0; 

}
