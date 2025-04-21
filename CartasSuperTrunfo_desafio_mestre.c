#include <stdio.h>

//Desafio Aventureiro contendo a logia de calculo para Densidade populacional e PIB per capta.

float calcDensidadePopulacional(int populacao, float area) {
    return populacao / area;
}

float calcPibPerCapta(float pib, int populacao) {
    return  (pib*1e9) / populacao; //O pib foi convertido para bilhões no intuido de aumentar a precisão na hora do resultado
    
}

//Formula para calcular o super poder das cartas (Exercicio Mestre)
float calcSuperPoder(float pib, int pontos, unsigned long int populacao, float area, float pibPerCapta, float densidadePopulacional) {
    return (float) (pontos + populacao + area + pib + pibPerCapta) - densidadePopulacional;
}

int main() {
    char estadoA, estadoB, codigoA[20], codigoB[20], nomeA[50], nomeB[50];
    int pontosA, pontosB;
    unsigned long int populacaoA, populacaoB; //Alteração feita à pedido do exercicio Mestre.
    float areaA, areaB, pibA, pibB;
    float densidadePopulacionalA, pibPerCaptaA, densidadePopulacionalB, pibPerCaptaB;
    float SuperPoderA, SuperPoderB;

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
    scanf("%li", &populacaoA);

    printf("Insira a area da cidade A: \n");
    scanf("%f", &areaA);

    printf("Insira o PIB da cidade A: \n");
    scanf("%f", &pibA);

    printf("Insira a quantidade de pontos turisticos da cidade A: \n");
    scanf("%i", &pontosA);

    densidadePopulacionalA = calcDensidadePopulacional(populacaoA, areaA);
    pibPerCaptaA = calcPibPerCapta(pibA, populacaoA);
    SuperPoderA = calcSuperPoder(pibA, pontosA, populacaoA, areaA, pibPerCaptaA, densidadePopulacionalA);

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
    scanf("%li", &populacaoB);

    printf("Insira a area da cidade B: \n");
    scanf("%f", &areaB);

    printf("Insira o PIB da cidade B: \n");
    scanf("%f", &pibB);

    printf("Insira a quantidade de pontos turisticos da cidade B: \n");
    scanf("%i", &pontosB);

    densidadePopulacionalB = calcDensidadePopulacional(populacaoB, areaB);
    pibPerCaptaB = calcPibPerCapta(pibB, populacaoB);
    SuperPoderB = calcSuperPoder(pibB, pontosB, populacaoB, areaB, pibPerCaptaB, densidadePopulacionalB);

    printf("<-------Carta A------>\n");
    printf("Carta A:\nEstado: %c\nCódigo: %s\nNome da cidade: %sPopulação: %li Habitantes\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Túristicos: %i\nDensidade Populacional: %.2f hab/km²\nPib per Capta: %.2f reais\nSuper Poder: %.2f\n", estadoA, codigoA, nomeA, populacaoA, areaA, pibA, pontosA, densidadePopulacionalA, pibPerCaptaA, SuperPoderA);
    printf("-------------------------------------------- \n");
    printf("<-------Carta B------>\n");
    printf("Carta B:\nEstado: %c\nCódigo: %s\nNome da cidade: %sPopulação: %li Habitantes\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Túristicos: %i\nDensidade Populacional: %.2f hab/km²\nPib per Capta: %.2f reais\nSuper Poder: %2.f\n", estadoB, codigoB, nomeB, populacaoB, areaB, pibB, pontosB, densidadePopulacionalB, pibPerCaptaB, SuperPoderB);
    printf("-------------------------------------------- \n");
    printf("Comparação estre as cartas %s e %s\nSe o resultado foi 1 a carta %s venceu o desafio, se for 0 a carta %s venceu\n", nomeA, nomeB, nomeA, nomeB);
    printf("Papulação: %d\nÁrea: %d\nPIB: %d\nPontos Turísticos: %d\nDensidade Populacionar: %d\nPIB per capita: %d\nSuper Poder: %d", (populacaoA > populacaoB), (areaA > areaB), (pibA > pibB), (pontosA > pontosB), (densidadePopulacionalA < densidadePopulacionalB), (pibPerCaptaA > pibPerCaptaB), (SuperPoderA > SuperPoderB));

    return 0;
}