#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");
    printf("Novo commit\n");

    char estado[20]= "PR";
    char codigo[10]= "a02";
    char cidade[20] = "curitiba";
    int populacao = 128000;  
    float area_em_km2 = 2900.45;  
    float pib = 619.48;
    int pontos_turisticos = 17;

    printf("Digite o estado: ");
    scanf("%s", estado);  
    printf("O estado é: %s\n", estado);

    printf("Digite o código: ");
    scanf("%s", codigo);
    printf("O código é: %s\n", codigo);

    printf("Digite a cidade: ");
    scanf("%s", cidade);
    printf("A cidade é: %s\n", cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);  
    printf("A população é: %d\n", populacao);

    printf("digite a area em km²: ");
    scanf("%f", &area_em_km2);
    printf("a area em km² é: %f\n", area_em_km2);

    printf("digite o pib: ");
    scanf("%f", &pib) ;
    printf("o pib é: %f\n", pib);

    printf("digite os pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    printf("os pontos turisticos sao: %d\n", pontos_turisticos);

    return 0;



    }