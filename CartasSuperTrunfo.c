#include <stdio.h>
int main() {
     
    
     char estado1[20], estado2[20];
     char codigocidade1 [20], codigocidade2[20];
     char nomecidade1 [20], nomecidade2[20];
     int populacao1, populacao2 ;
     float area1, area2 ;
     float pib1, pib2 ;
     int pontoturistico1, pontoturistico2 ; 

      printf("Bem vindo ao super trunfo ***Países***!!!!!\n");
      printf("Faça o cadastro da carta 1: \n");
     
      //Leitura dos dados da primeira carta.

      printf("Estado (uma letra de A a H):\n");
      scanf("%s",&estado1);
      
      printf("Código da cidade (a letra do estado mais um número de 01 a 04, ex: A01):\n");
      scanf("%s", &codigocidade1);
      
      printf("Nome da cidade:\n");
      scanf("%s", &nomecidade1);
      
      printf("População:\n");
      scanf("%d", &populacao1);
      
      printf("Área (em km2):\n");
      scanf("%f",&area1);
     
      printf("Pib:\n");
      scanf("%f", &pib1);
     
      printf("Número de pontos turisticos:\n");
      scanf("%d",&pontoturistico1);
      
      printf("\n"); // espaco entre uma sequência e outra.
      

     //Saída dos dados da primeira carta.
      printf("Carta 1\n");
      printf("Estado: %s\nCódigo da cidade:%s\nNome da cidade:%s\n", estado1, codigocidade1, nomecidade1);
      printf("População:%d\nÁrea: %f km2\nPIB: %f\nNumero de pontos turísticos: %d\n ",populacao1, area1, pib1, pontoturistico1);
     
    
      printf("\n");


      printf("Faça o cadastro da carta 2: \n");
      printf("Estado (uma letra de A a H):\n");
      scanf("%s",&estado2);
      
      printf("Código da cidade (a letra do estado mais um número de 01 a 04. ex: A01):\n");
      scanf("%s", &codigocidade2);
      
      printf("Nome da cidade:\n");
      scanf("%s", &nomecidade2);
      
      printf("População:\n");
      scanf("%d", &populacao2);
      
      printf("Área (em km2):\n");
      scanf("%f",&area2);
     
      printf("PIB:\n");
      scanf("%f",&pib2);
      
      printf("Número de pontos turisticos:\n");
      scanf("%d",&pontoturistico2);
     
      printf("\n"); // espaco entre uma sequência e outra.
      

     //Saída dos dados da primeira carta.
     

      printf("Carta 2\n");
      printf("Estado: %s\nCódigo da cidade:%s\nNome da cidade:%s\n", estado2, codigocidade2, nomecidade2);
      printf("População:%d\nÁrea: %f km2\nPIB: %f\nNumero de pontos turísticos: %d\n ",populacao2, area2, pib2, pontoturistico2);
     

     return 0;
}