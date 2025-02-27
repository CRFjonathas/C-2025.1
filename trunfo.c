#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Jonathas Nicacio Silva

int main(){

    printf("REGRAS:\n");
    printf(" \n");
    printf("- Cada país será dividido em 8 estados (identificadas pelas letras A a H).\n");
    printf("- Cada estado terá 4 cidades (numerados de 01 a 04).\n");
    printf("- A combinação de letras e números formarão o código da carta.\n ");
    printf(" \n");
    printf("EXEMPLO: A01; A02; B01; B02...\n");
    printf(" \n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //VARIAVEIS:

    char estado_1[1], estado_2[1], cidade_1[50], cidade_2[50];
    int populacao_1, populacao_2, codigo_1, codigo_2, pontos_turisticos_1, pontos_turisticos_2;
    float area_1, area_2, pib_1, pib_2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf(" \n");
    printf("Carta 1: \n");
    printf(" \n");
    printf(" \n");
    printf("Estado: ");
    scanf("%c", &estado_1); // '%c' imprime um unico caractere
    printf("Código: %s0", estado_1);
    scanf("%d", &codigo_1);
    
    //limpar buffer de entrada
    getchar(); // isso consome o '\n' que sobra apos o scanf

    printf("Nome da cidade: ");
    fgets(cidade_1, 50, stdin);
    cidade_1[strcspn(cidade_1, "\n")] = 0;
    
    printf("População: ");
    scanf("%d", &populacao_1);
    printf("Área: ");
    scanf("%f", &area_1);
    printf("PIB: ");
    scanf("%f", &pib_1);
    printf("Número de Pontos Turisticos: ");
    scanf("%d",&pontos_turisticos_1);

    // DADOS DA CARTA 2:

    printf(" \n");
    printf("Carta 2: \n");
    printf(" \n");
    printf(" \n");
    printf("Estado: ");
    scanf("%c", &estado_2);
    printf("Código: %s0", estado_2);
    scanf("%d", &codigo_2);
    
    getchar();

    printf("Nome da cidade: ");
    fgets(cidade_2, 50, stdin);
    cidade_2[strcspn(cidade_2, "\n")] = 0;
    
    printf("População: ");
    scanf("%d", &populacao_2);
    printf("Área: ");
    scanf("%f", &area_2);
    printf("PIB: ");
    scanf("%f", &pib_2);
    printf("Número de Pontos Turisticos: ");
    scanf("%d",&pontos_turisticos_2);


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf(" \n");
    printf(" \n");
    printf("CARTA 1:\n");
    printf(" \n");
    printf("ESTADO: %s\n", estado_1);
    printf("CODIGO DA CIDADE: %s0%d\n",estado_1, codigo_1 );
    printf("CIDADE: %s\n",cidade_1 );
    printf("POPULAÇÃO: %d habitates\n",populacao_1 );
    printf("ÁREA: %.2f km²\n",area_1 );
    printf("PIB: R$ %.2f BILHÕES\n",pib_1 );
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n",pontos_turisticos_1 );

    printf(" \n");
    printf(" \n");
    printf("CARTA 2:\n");
    printf(" \n");
    printf("ESTADO: %s\n", estado_2);
    printf("CODIGO DA CIDADE: %s0%d\n",estado_2, codigo_2 );
    printf("CIDADE: %s\n",cidade_2 );
    printf("POPULAÇÃO: %d habitates\n",populacao_2 );
    printf("ÁREA: %.2f km²\n",area_2 );
    printf("PIB: R$ %.2f BILHÕES\n",pib_2 );
    printf("PONTOS TURISTICOS: %d\n",pontos_turisticos_2 );

    return 0;
}