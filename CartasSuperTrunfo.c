#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estadoA, estadoB;
    char codigoA[20], codigoB[20];
    char nomeA[50], nomeB[50];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontosA, pontosB;

    //Dados da cidade A
    printf("Insira os dados da primeira carta \n");
    printf("Insira o estado da cidade: \n");
    scanf("%c", &estadoA);

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

    getchar();

    //Dados da cidade B
    printf("Insira os dados da segunda carta \n");
    printf("Insira o estado da cidade B: \n");
    scanf("%c", &estadoB);

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

    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da cidade: %sPopulação: %i Habitantes\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Túristicos: %i\n\n", estadoA, codigoA, nomeA, populacaoA, areaA, pibA, pontosA);
    printf("-------------------------------------------- \n");
    printf("Carta 2:\nEstado: %c\nCódigo: %s\nNome da cidade: %sPopulação: %i Habitantes\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Túristicos: %i", estadoB, codigoB, nomeB, populacaoB, areaB, pibB, pontosB);
    

    return 0;
}
