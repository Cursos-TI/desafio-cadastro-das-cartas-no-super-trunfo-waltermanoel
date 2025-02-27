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
    int populacaoCidade1, populacaoCidade2 = 0;
    float areaCidade1, areaCidade2 = 0;
    float pibCidade1, pibCidade2 = 0;
    int numeroPontoTuriticoCidade1, numeroPontoTuriticoCidade2 = 0;

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
    scanf("%d", &populacaoCidade1);

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
    scanf("%d", &populacaoCidade2);

    printf("Área: ");
    scanf("%f", &areaCidade2);

    printf("PIB: ");
    scanf("%f", &pibCidade2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroPontoTuriticoCidade2);

    //Imprimindo as infomações da carta da cidade1.
    printf("\n\nCarta 1: ");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigoCidade1);
    printf("\nNome da Cidade: %s", nomeCidade1);
    printf("\nPopulação: %d", populacaoCidade1);
    printf("\nÁrea: %.3f km²", areaCidade1);
    printf("\nPIB: %.2f bilhões de reais", pibCidade1);
    printf("\nNúmero de Pontos Turísticos: %d", numeroPontoTuriticoCidade1);

    //Imprimindo as infomações da carta da cidade2.
    printf("\n\nCarta 1: ");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigoCidade2);
    printf("\nNome da Cidade: %s", nomeCidade2);
    printf("\nPopulação: %d", populacaoCidade2);
    printf("\nÁrea: %.3f km²", areaCidade2);
    printf("\nPIB: %.2f bilhões de reais", pibCidade2);
    printf("\nNúmero de Pontos Turísticos: %d", numeroPontoTuriticoCidade2);

    //Fim
    return 0;
}
