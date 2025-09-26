#include <stdio.h>

int main() {
    // --- Declaracao de Variaveis para a Carta 1 ---
    char estado1;                   // Guarda a letra do estado (ex: 'A')
    char codigo1[4];                // Guarda o codigo da carta (ex: "A01")
    char nomeCidade1[100];          // Guarda o nome da cidade (ate 99 letras)
    int populacao1;                 // Guarda o numero de habitantes
    float area1;                    // Guarda a area da cidade em km2
    float pib1;                     // Guarda o valor do PIB
    int pontosTuristicos1;          // Guarda a quantidade de pontos turisticos

    // Variaveis para guardar as informacoes da segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Entrada de Dados da Primeira Carta ---
    printf("--- Cadastro da Primeira Carta ---\n");

    // Pede e le cada informacao do usuario
    printf("Digite o estado (uma letra de A a H): ");
    scanf(" %c", &estado1); 

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); 

    printf("Digite a populacao: ");
    scanf("%d", &populacao1); 

    printf("Digite a area em km2: ");
    scanf("%f", &area1); 

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // --- Entrada de Dados da Segunda Carta ---
    printf("\n--- Cadastro da Segunda Carta ---\n");

    // Pede e le os dados da segunda carta, da mesma forma que fez com a primeira
    printf("Digite o estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // --- Exibicao dos Dados Cadastrados ---
    printf("\n\n--- Cartas Cadastradas ---\n");

    // Mostra na tela todas as informacoes da Carta 1 de forma organizada
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1); // O ".2f" formata para exibir apenas 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Mostra na tela todas as informacoes da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    // Retorna 0 para indicar que o programa terminou com sucesso
    return 0;
}