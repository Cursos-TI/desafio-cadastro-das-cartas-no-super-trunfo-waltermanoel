#include <stdio.h>

/*
    Esse pequeno programa em linguagem C é um simple jogo onde se tem cartas com informaçoes
    de duas cidades.
*/

int main() {
    //Definido e inicializando variáveis das duas cartas.
    char estado1, estado2 = ' ';
    char codigoCidade1[6], codigoCidade2[6] = " ";
    char nomeCidade1[50], nomeCidade2[50] = " ";
    unsigned long long int populacaoCidade1, populacaoCidade2 = 0;
    float areaCidade1, areaCidade2 = 0.0;
    float pibCidade1, pibCidade2 = 0.0;
    int numeroPontoTuriticoCidade1, numeroPontoTuriticoCidade2 = 0;
    float denPopulacionalCidade1, denPopulacionalCidade2 = 0.0;
    float pibPerCapitaCidade1, pibPerCapitaCidade2 = 0.0;
    float superPoderCidade1, superPoderCidade2 = 0.0; 

    //Apresentando o jogo.
    printf("Seja bem-vindo!\nEsse um jogo sobre cartas e cidades - Siga as intruções...");
    printf("\n\nEstado: Uma letra de 'A' a 'H'.\n");
    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");

    //Lendo informações da cidade1.
    printf("\nCarta 1: \n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%s", codigoCidade1);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%llu", &populacaoCidade1);

    printf("Área: ");
    scanf("%f", &areaCidade1);

    printf("PIB: ");
    scanf("%f", &pibCidade1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroPontoTuriticoCidade1);

    //Lendo informações da cidade2.
    printf("\nCarta 2: \n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", codigoCidade2);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%llu", &populacaoCidade2);

    printf("Área: ");
    scanf("%f", &areaCidade2);

    printf("PIB: ");
    scanf("%f", &pibCidade2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroPontoTuriticoCidade2);

    // Derivando dados da cidade
    denPopulacionalCidade1 = populacaoCidade1 / areaCidade1;
    denPopulacionalCidade2 = populacaoCidade2 / areaCidade2;

    pibPerCapitaCidade1 = (pibCidade1 * 1000000000) / populacaoCidade1;
    pibPerCapitaCidade2 = (pibCidade2 * 1000000000) / populacaoCidade2;

    superPoderCidade1 = populacaoCidade1 + areaCidade1 + pibCidade1 + numeroPontoTuriticoCidade1 + 
        1/denPopulacionalCidade1 + pibPerCapitaCidade1;
    superPoderCidade2 = populacaoCidade2 + areaCidade2 + pibCidade2 + numeroPontoTuriticoCidade2 + 
        1/denPopulacionalCidade2 + pibPerCapitaCidade2;

    //Imprimindo as infomações da carta da cidade1.
    printf("\n\nCarta 1: ");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigoCidade1);
    printf("\nNome da Cidade: %s", nomeCidade1);
    printf("\nPopulação: %llu", populacaoCidade1);
    printf("\nÁrea: %.3f km²", areaCidade1);
    printf("\nPIB: %.2f bilhões de reais", pibCidade1);
    printf("\nNúmero de Pontos Turísticos: %d", numeroPontoTuriticoCidade1);
    printf("\nDesidade Populacional: %.2f hab/km²", denPopulacionalCidade1);
    printf("\nPIB per Capita: %.2f reais", pibPerCapitaCidade1);
    printf("\nSuper Poder: %.2f", superPoderCidade1);

    //printf("%f", (float)15000000000 / 15);

    //Imprimindo as infomações da carta da cidade2.
    printf("\n\nCarta 2: ");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigoCidade2);
    printf("\nNome da Cidade: %s", nomeCidade2);
    printf("\nPopulação: %llu", populacaoCidade2);
    printf("\nÁrea: %.3f km²", areaCidade2);
    printf("\nPIB: %.2f bilhões de reais", pibCidade2);
    printf("\nNúmero de Pontos Turísticos: %d", numeroPontoTuriticoCidade2);
    printf("\nDesidade Populacional: %.2f hab/km²", denPopulacionalCidade2);
    printf("\nPIB per Capita: %.2f reais", pibPerCapitaCidade2);
    printf("\nSuper Poder: %.2f", superPoderCidade2);

    // Comparando os valores das cartas
    printf("\n\n");
    printf("Populacao: Carta1 venceu (%d)\n", populacaoCidade1 > populacaoCidade2);
    printf("Area: Carta 1 venceu (%d)\n", areaCidade1 > areaCidade2);
    printf("PIB: Carta 1 venceu (%d)\n", pibCidade1 > pibCidade2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", numeroPontoTuriticoCidade1 > numeroPontoTuriticoCidade2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", denPopulacionalCidade1 > denPopulacionalCidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapitaCidade1 > pibPerCapitaCidade2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoderCidade1 > superPoderCidade2);

    //Fim
    return 0;
}
