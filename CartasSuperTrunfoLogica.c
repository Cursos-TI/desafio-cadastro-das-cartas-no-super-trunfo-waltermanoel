#include <stdio.h>

/*
    Esse pequeno programa em linguagem C é um simple jogo onde se tem cartas com informaçoes
    de duas cidades.
*/

int main() {
    //Definido e inicializando variáveis das duas cartas.
    char estado1[10] = "SP", estado2[10] = "RJ";
    char codigoCidade1[6] = "SP01", codigoCidade2[6] = "RJ01";
    char nomeCidade1[50] = "Sao-Paulo", nomeCidade2[50] = "Rio-de-Janeiro";
    unsigned long long int populacaoCidade1 = 20000000, populacaoCidade2 = 6700000;
    float areaCidade1 = 1521.2, areaCidade2 = 1200.329;
    float pibCidade1 = 828.98, pibCidade2 = 359.63;
    int numeroPontoTuriticoCidade1 = 400, numeroPontoTuriticoCidade2 = 845;
    float denPopulacionalCidade1, denPopulacionalCidade2 = 0.0;
    float pibPerCapitaCidade1, pibPerCapitaCidade2 = 0.0;

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
    printf("\n");

    // Comparando os valores das cartas
    printf("\n");
    printf("Compare os atributos e veja quem ganha:\n");

    int opcao = 0;
    printf("Escolha a opção:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numeros de Pontos turisticos\n");
    printf("5. Desidade demografica\n");

    printf("Escolha a opcao: ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao) {
        case 1:
            printf("Cidade1: %s - Cidade2: %s\n", nomeCidade1, nomeCidade2);
            printf("Comparando populacao...\n");
            printf("%s: %lluhab - %s: %lluhab\n", nomeCidade1, populacaoCidade1, nomeCidade2, populacaoCidade2);

            if (populacaoCidade1 > populacaoCidade2) {
                printf("%s venceu!", nomeCidade1);

            } else if (populacaoCidade1 < populacaoCidade2)
            {
                printf("%s venceu!", nomeCidade2);
            } else
            {
                printf("Empate!");
            }
            
            break;

            case 2:
            printf("Cidade1: %s - Cidade2: %s\n", nomeCidade1, nomeCidade2);
            printf("Comparando area...\n");
            printf("%s: %.3fKm² - %s: %.3fKm²\n", nomeCidade1, areaCidade1, nomeCidade2, areaCidade2);

            if (areaCidade1 > areaCidade2) {
                printf("%s venceu!", nomeCidade1);

            } else if (areaCidade1 < areaCidade2)
            {
                printf("%s venceu!", nomeCidade2);
            } else
            {
                printf("Empate!");
            }
            
            break;

            case 3:
            printf("Cidade1: %s - Cidade2: %s\n", nomeCidade1, nomeCidade2);
            printf("Comparando PIB...\n");
            printf("%s: R$%.2fB - %s: R$%.2fB\n", nomeCidade1, pibCidade1, nomeCidade2, pibCidade2);

            if (pibCidade1 > pibCidade2) {
                printf("%s venceu!", nomeCidade1);

            } else if (pibCidade1 < pibCidade2)
            {
                printf("%s venceu!", nomeCidade2);
            } else
            {
                printf("Empate!");
            }
            
            break;

            case 4:
            printf("Cidade1: %s - Cidade2: %s\n", nomeCidade1, nomeCidade2);
            printf("Comparando pontos turistico...\n");
            printf("%s: %d - %s: %d\n", nomeCidade1, numeroPontoTuriticoCidade1, nomeCidade2, numeroPontoTuriticoCidade2);

            if (numeroPontoTuriticoCidade1 > numeroPontoTuriticoCidade2) {
                printf("%s venceu!", nomeCidade1);

            } else if (numeroPontoTuriticoCidade1 < numeroPontoTuriticoCidade2)
            {
                printf("%s venceu!", nomeCidade2);
            } else
            {
                printf("Empate!");
            }
            
            break;

            case 5:
            printf("Cidade1: %s - Cidade2: %s\n", nomeCidade1, nomeCidade2);
            printf("Comparando PIB...\n");
            printf("%s: %.2fhab/Km² - %s: %.2fhab/Km²\n", nomeCidade1, denPopulacionalCidade1, nomeCidade2, denPopulacionalCidade2);

            if (!(denPopulacionalCidade1 > denPopulacionalCidade2)) {
                printf("%s venceu!", nomeCidade1);

            } else if (!(denPopulacionalCidade1 < denPopulacionalCidade2))
            {
                printf("%s venceu!", nomeCidade2);
            } else
            {
                printf("Empate!");
            }
            
            break;

        default:
            printf("Opcao invalida!\n");
            break;

    }

    //Fim
    return 0;
}
