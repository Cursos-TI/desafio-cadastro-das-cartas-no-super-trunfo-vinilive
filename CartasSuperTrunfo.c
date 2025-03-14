#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");
    printf("Novo commit\n");

    char estado1[20] = "SP";
    char estado2[20] = "RJ";
    char codigo1[10] = "a01";
    char codigo2[10] = "a02";
    char cidade1[20] = "sao paulo";
    char cidade2[20] = "sao paulo";
    int populacao1 = 125000;  
    int populacao2 = 123000;  
    float area_em_km2_1 = 2500.45;
    float area_em_km2_2 = 2300.45;   
    float pib1 = 699.28;
    float pib2 = 690.28;
    int pontos_turisticos1 = 27;
    int pontos_turisticos2 = 20;
    float densidade_populacional1 = populacao1 / area_em_km2_1;
    float pib_percapita1 = pib1 / populacao1;
    float densidade_populacional2 = populacao2 / area_em_km2_2;
    float pib_percapita2 = pib2 / populacao2;

    
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f\n", pib_percapita1);

    
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_percapita2);


    



    return 0;
}