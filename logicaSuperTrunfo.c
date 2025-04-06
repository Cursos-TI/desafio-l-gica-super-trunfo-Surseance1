#include <stdio.h>

int main () {

 char estado1[1], estado2[1];
 char codigocarta1[20], codigocarta2[50];
 char nomecidade1[50], nomecidade2[50];
 float pib1, pib2, Pibpercapita1, Pibpercapita2, Densidadepop1, Densidadepop2, area1, area2;
 int pontosturisticos1, pontosturisticos2, populacao1, populacao2;
 
 //Recebimento de Dados

 printf("Digite a letra do estado da primeira carta de 'A a H' \n");
 scanf("%s", estado1);

 printf("Digite a letra do estado da segunda carta de 'A a H' \n");
 scanf("%s", estado2);

 printf("Digite o código da primeira carta \n");
 scanf("%s", codigocarta1);

 printf("Digite o código da segunda carta \n");
 scanf("%s", codigocarta2);

 printf("Digite o nome da cidade da primeira carta \n");
 scanf("%s", nomecidade1);

 printf("Digite o nome da cidade da segunda carta \n");
 scanf("%s", nomecidade2);

 printf("Digite a população da cidade da primeira carta \n");
 scanf("%d", &populacao1); 

 printf("Digite a população da cidade da segunda carta \n");
 scanf("%d", &populacao2); 

 printf("Informe a área em km² da cidade da primeira carta \n");
 scanf("%f", &area1);

 printf("Informe a área em km² da cidade da segunda carta \n");
 scanf("%f", &area2);

 printf("Informe o PIB da cidade da primeira carta \n");
 scanf("%f", &pib1);

 printf("Informe o PIB da cidade da segunda carta \n");
 scanf("%f", &pib2);

 printf("Digita a quantidade de pontos turísticos existentes na cidade da primeira carta \n");
 scanf("%d", &pontosturisticos1);

 printf("Digita a quantidade de pontos turísticos existentes na cidade da segunda carta \n");
 scanf("%d", &pontosturisticos2);

 //Calculo PibPerCapt e Densidade Populacional

 Pibpercapita1 = (float)populacao1 / pib1;
 Pibpercapita2 = (float)populacao2 / pib2;

 Densidadepop1 = (float)populacao1 / area1;
 Densidadepop2 = (float)populacao2 / area2;

 //Exibição das informações da primeira carta

 printf("\nInformações da primeira carta \n"); 
 printf("Estado: %s\n", estado1);
 printf("Código: %s\n", codigocarta1);
 printf("Nome da Cidade: %s\n", nomecidade1);
 printf("População: %d\n", populacao1);
 printf("Área: %.2fkm²\n", area1);
 printf("Pib: %.2f Milhões de Reais\n", pib1);
 printf("Pontos Turísticos da cidade: %d\n", pontosturisticos1);
 printf("Densidade Populacional: %.2f hab/km²\n", Densidadepop1);
 printf("Pib Per Capita: %.2f Reais\n", Pibpercapita1);

 //Exibição das informações da segunda carta

 printf("\nInformações da segunda carta \n"); 
 printf("Estado: %s\n", estado2);
 printf("Código: %s\n", codigocarta2);
 printf("Nome da Cidade: %s\n", nomecidade2);
 printf("População: %d\n", populacao2);
 printf("Área: %.2fkm²\n", area2);
 printf("Pib: %.2f Milhões de Reais\n", pib2);
 printf("Pontos Turísticos da cidade: %d\n", pontosturisticos2);
 printf("Densidade Populacional: %.2f hab/km²\n", Densidadepop2);
 printf("Pib Per Capita: %.2f Reais\n", Pibpercapita2);

 //Definição da Carta Vencedora pelo atributo de maior população

 if (populacao1 > populacao2) {
     printf("Carta 1 Venceu! Total da População foi maior que a Carta 2! (%d > %d)\n", populacao1, populacao2);
 } else {
     printf("Carta 2 Venceu! Total da População foi maior que a Carta 1! (%d > %d)\n", populacao2, populacao1);
 }

 return 0;
}
