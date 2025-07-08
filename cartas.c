#include <stdio.h>

int main(){
char estado [10] = "Bahia";
char estado2 [10] = "Rio";

char codigo1 [4] = "A01";
char codigo2 [4] = "B02";

char cidade1 [10] = "Salvador";
char cidade2 [10] = "Caxias";

int populacao1 = 1235334;
int populacao2 = 23234532;

int pontot1 = 232;
int pontot2 = 131;

float pib1 = 699.280;
float pib2 = 365.238;

printf("Estado: %s \n", estado);
printf("Código: %s \n", codigo1);
printf("Nome da cidade: %s \n", cidade1);
printf("Polulação: %d \n", populacao1);
printf("Pontos turisticos: %d \n", pontot1);
printf("PIB: %f \n", pib1);

printf("--------\n");


printf("Estado: %s \n", estado2);
printf("Código: %s \n", codigo2);
printf("Nome da cidade: %s \n", cidade2);
printf("Polulação: %d \n", populacao2);
printf("Pontos turisticos: %d \n", pontot2);
printf("PIB: %f \n", pib2);


return 0;
