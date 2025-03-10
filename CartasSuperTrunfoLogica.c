#include <stdio.h>

/*
    Esse pequeno programa em linguagem C é um simple jogo onde se tem cartas com informaçoes
    de duas cidades.
*/

int main() {
    //Definido e inicializando variáveis das duas cartas.
    char estado1[10], estado2[10];
    char codigoCidade1[6], codigoCidade2[6] = " ";
    char nomeCidade1[50], nomeCidade2[50] = " ";
    unsigned long long int populacaoCidade1, populacaoCidade2 = 0;
    float areaCidade1, areaCidade2 = 0.0;
    float pibCidade1, pibCidade2 = 0.0;
    int numeroPontoTuriticoCidade1, numeroPontoTuriticoCidade2 = 0;
    float denPopulacionalCidade1, denPopulacionalCidade2 = 0.0;
    float pibPerCapitaCidade1, pibPerCapitaCidade2 = 0.0;

    //Lendo informações da cidade1.
    printf("\nCarta 1: \n");

    printf("Estado: ");
    scanf(" %s", &estado1);

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
    scanf(" %s", &estado2);

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

    //Imprimindo as infomações da carta da cidade1.
    printf("\n\nCarta 1: ");
    printf("\nEstado: %s", estado1);
    printf("\nCódigo: %s", codigoCidade1);
    printf("\nNome da Cidade: %s", nomeCidade1);
    printf("\nPopulação: %llu", populacaoCidade1);
    printf("\nÁrea: %.3f km²", areaCidade1);
    printf("\nPIB: %.2f bilhões de reais", pibCidade1);
    printf("\nNúmero de Pontos Turísticos: %d", numeroPontoTuriticoCidade1);
    printf("\nDesidade Populacional: %.2f hab/km²", denPopulacionalCidade1);
    printf("\nPIB per Capita: %.2f reais", pibPerCapitaCidade1);

    //Imprimindo as infomações da carta da cidade2.
    printf("\n\nCarta 2: ");
    printf("\nEstado: %s", estado2);
    printf("\nCódigo: %s", codigoCidade2);
    printf("\nNome da Cidade: %s", nomeCidade2);
    printf("\nPopulação: %llu", populacaoCidade2);
    printf("\nÁrea: %.3f km²", areaCidade2);
    printf("\nPIB: %.2f bilhões de reais", pibCidade2);
    printf("\nNúmero de Pontos Turísticos: %d", numeroPontoTuriticoCidade2);
    printf("\nDesidade Populacional: %.2f hab/km²", denPopulacionalCidade2);
    printf("\nPIB per Capita: %.2f reais", pibPerCapitaCidade2);

    // Comparando os valores das cartas
    printf("\n\nComparacao de cartas (Atributo: Pib per Capita):\n");

    printf("\n");
    printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, pibPerCapitaCidade1);
    printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, pibPerCapitaCidade2);

    if (pibPerCapitaCidade1 > pibPerCapitaCidade2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu ou empatou!\n", nomeCidade2);
    }
    

    //Fim
    return 0;
}
