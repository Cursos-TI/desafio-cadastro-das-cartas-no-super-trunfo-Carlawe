#include <stdio.h>
int main() {
     
    
     char estado1[20], estado2[20];
     char codigocidade1 [20], codigocidade2[20];
     char nomecidade1 [20], nomecidade2[20];
     int populacao1, populacao2 ;
     float area1, area2 ;
     float pib1, pib2 ;
     int pontoturistico1, pontoturistico2 ; 
     float densidadepopulacional1, densidadepopulacional2;
     float pibpercapta1, pibpercapta2;
     float superpoder1, superpoder2;
     
    // densidadepopulacional1 = populacao1 / area1;
     //pibpercapta1 = pib1 / populacao1;
     //superpoder1 = populacao1 + area1 + pib1 + pontoturistico1 + densidadepopulacional1 + pibpercapta1;
     
     //densidadepopulacional2 = populacao2 / area2;
     //pibpercapta2 = pib2 / populacao2;
    // superpoder2 = populacao2 + area2 + pib2 + pontoturistico2 + densidadepopulacional2 + pibpercapta2;
      
     
     
     
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
      printf("Estado: %s\nCódigo da cidade:%s\nNome da cidade:%s\nPopulação:%d\n", estado1, codigocidade1, nomecidade1, populacao1);
      printf("Área: %f km2\nPIB: %f\nNumero de pontos turísticos: %d\n", area1, pib1, pontoturistico1);
      printf("Densidade populacional:%.2f\n", (float)populacao1 / area1);
      printf("Pib percapta:%.2f\n", pib1 / (float)populacao1);
      printf("Superpoder: %f\n", (float) populacao1 + area1 + pib1 + pibpercapta1 + densidadepopulacional1 +  (float)pontoturistico1);
    
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
      

     //Saída dos dados da segunda carta.
     

      printf("Carta 2\n");
      printf("Estado: %s\nCódigo da cidade:%s\nNome da cidade:%s\nPopulação:%d\n", estado2, codigocidade2, nomecidade2, populacao2);
      printf("Área: %f km2\nPIB: %f\nNumero de pontos turísticos: %d\n", area2, pib2, pontoturistico2);
      printf("Densidade populacional:%.2f\n", (float)populacao2 / area2);
      printf("Pib percapta:%.2f\n", pib2 / (float)populacao2);
      printf("Superpoder: %f\n", (float) populacao2 + area2 + pib2 + pibpercapta2 + densidadepopulacional2 +  (float)pontoturistico2);
      
       printf("\n");
       
      if(populacao1 > populacao2){
        printf("População: A carta 1 venceu! (%d) \n", populacao1 >  populacao2);
      }else{
        printf("População: A carta 2 venceu! (%d)\n", populacao1 > populacao2);

        }
         if(area1 > area2){
        printf("Área: A carta 1 venceu! (%d) \n", area1 > area2);
      }else{
          printf("Área: A carta 2 venceu! (%d)\n", area1 > area2);

        }
       if(pib1 > pib2){
        printf("Pib: A carta 1 venceu! (%d) \n", pib1 > pib2);
      }else{
        printf("Pib: A carta 2 venceu! (%d)\n", pib1 > pib2);

        }
       if(pontoturistico1 > pontoturistico2){
        printf("Número de pontos turisticos: A carta 1 venceu! (%d) \n", pontoturistico1 > pontoturistico2);
      }else{
        printf("Número de pontos turisticos: A carta 2 venceu! (%d)\n", pontoturistico1 > pontoturistico2);

        }
       if(densidadepopulacional1 < densidadepopulacional2){
        printf("Densidade populacional: A carta 1 venceu! (%d) \n", densidadepopulacional1 < densidadepopulacional2);
      }else{
        printf("Densidade populacional: A carta 2 venceu! (%d)\n", densidadepopulacional1 < densidadepopulacional2);

        }
       if(pibpercapta1 > pibpercapta2){
        printf("Pib percapta: A carta 1 venceu! (%d) \n", pibpercapta1 > pibpercapta2);
      }else{
        printf("Pib per capta: A carta 2 venceu! (%d)\n", pibpercapta1 > pibpercapta2);

        }
      
       if(superpoder1 > superpoder2){
        printf("Superpoder: A carta 1 venceu! (%d) \n", superpoder1 > superpoder2);
      }else{
        printf("Superpoder: A carta 2 venceu! (%d)\n", superpoder1 > superpoder2);

        }
        printf("\n");

     return 0;
}