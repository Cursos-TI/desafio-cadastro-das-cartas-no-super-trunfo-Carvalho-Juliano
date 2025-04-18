#include <stdio.h>

int main() {
    char estadoA, estadoB, codigoA[20], codigoB[20], nomeA[50], nomeB[50];
    int populacaoA, populacaoB, pontosA, pontosB;
    float areaA, areaB, pibA, pibB;

    //Dados da carta A
    printf("Insira os dados da primeira carta \n");
    printf("Insira o estado da cidade: \n");
    scanf(" %c", &estadoA);

    printf("Insira o codigo da carta A: \n");
    scanf("%s", codigoA);

    getchar();

    printf("Insira o nome da cidade A: \n");
    fgets(nomeA, 50, stdin);

    printf("Insira a população da cidade A: \n");
    scanf("%i", &populacaoA);

    printf("Insira a area da cidade A: \n");
    scanf("%f", &areaA);

    printf("Insira o PIB da cidade A: \n");
    scanf("%f", &pibA);

    printf("Insira a quantidade de pontos turisticos da cidade A: \n");
    scanf("%i", &pontosA);

    //Dados da carta B
    printf("Insira os dados da segunda carta \n");
    printf("Insira o estado da cidade B: \n");
    scanf(" %c", &estadoB);

    printf("Insira o codigo da carta B: \n");
    scanf("%s", codigoB);

    getchar();

    printf("Insira o nome da cidade B: \n");
    fgets(nomeB, 50, stdin);

    printf("Insira a população da cidade B: \n");
    scanf("%i", &populacaoB);

    printf("Insira a area da cidade B: \n");
    scanf("%f", &areaB);

    printf("Insira o PIB da cidade B: \n");
    scanf("%f", &pibB);

    printf("Insira a quantidade de pontos turisticos da cidade B: \n");
    scanf("%i", &pontosB);

    printf("<-------Carta A------>\n");
    printf("Carta A:\nEstado: %c\nCódigo: %s\nNome da cidade: %sPopulação: %i Habitantes\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Túristicos: %i\n", estadoA, codigoA, nomeA, populacaoA, areaA, pibA, pontosA);
    printf("-------------------------------------------- \n");
    printf("<-------Carta B------>\n");
    printf("Carta B:\nEstado: %c\nCódigo: %s\nNome da cidade: %sPopulação: %i Habitantes\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Túristicos: %i", estadoB, codigoB, nomeB, populacaoB, areaB, pibB, pontosB);
    

    return 0;
}