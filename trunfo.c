#include <stdio.h> // serve para incluir a biblioteca padrão de entrada e saida de dados
#include <string.h> // serve para incluir a biblioteca padrão de manipulação de strings

int main(){

    // VARIAVEIS:

    char estado_1,estado_2; // string
    char codigo_2[5], codigo_1[5]; // string
    char cidade_1[50], cidade_2[50]; // string
    unsigned long int populacao_1, populacao_2;   // serve para armazenar um numero muito grande
    float area_1, area_2, pib_1, pib_2; // numeros decimais
    int  pontos_turisticos_1, pontos_turisticos_2; // numero inteiro

    // IMPRIMINDO AS REGRAS DO JOGO: 

    printf("REGRAS:\n");
    printf("\n- Cada país será dividido em 8 estados (identificadas pelas letras A a H).\n");
    printf("- Cada estado terá 4 cidades (numerados de 1 a 4).\n");
    printf("- A combinação de letras e números formarão o código da carta.\n ");
    printf("\nEXEMPLO: A01; A02; B01; B02...\n");
    printf(" \n");    

    // CADASTRO DA CARTA 1:

    printf("\nDigite os dados para a Carta 1: \n");
    printf(" \n");
    printf("\nEstado (A a H): ");
    scanf(" %c", &estado_1); // "%c" usado para cadastrar ou imprimir unico caractere
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo_1); // "%s" usado para uma cadeia de caracteres (string)

    printf("Nome da cidade: ");

    getchar(); // Remove o caractere de nova linha (\n) que ficou na entrada após uma leitura anterior.
    fgets(cidade_1, sizeof(cidade_1), stdin); // Lê uma linha de texto (incluindo espaços)
    cidade_1[strcspn(cidade_1, "\n")] = 0; // Remove o caractere de nova linha (\n) do final da string lida
    
    printf("População: ");
    scanf("%lu", &populacao_1); // "%lu" usado para "unsigned long int"
    printf("Área: ");
    scanf("%f", &area_1); //"%f" usado para numeros flutuantes
    printf("PIB: ");
    scanf("%f", &pib_1);
    printf("Número de Pontos Turisticos: ");
    scanf("%d",&pontos_turisticos_1); // "%d" usado para numeros inteiros

    // CADASTRO DA CARTA 2:

    printf("\nDigite os dados para a Carta 2: \n");
    printf(" \n");
    printf("\nEstado (A a H): ");
    scanf(" %c", &estado_2);
    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo_2);

    printf("Nome da cidade: ");
    getchar();
    fgets(cidade_2, 50, stdin);
    cidade_2[strcspn(cidade_2, "\n")] = 0;
    
    printf("População: ");
    scanf("%lu", &populacao_2);
    printf("Área: ");
    scanf("%f", &area_2);
    printf("PIB: ");
    scanf("%f", &pib_2);
    printf("Número de Pontos Turisticos: ");
    scanf("%d",&pontos_turisticos_2);

    // CALCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA:

    float densidade_pop_1 = (float)populacao_1 / area_1; // converte a população para float
    float pib_per_capita_1 =  pib_1 * 1000000000 / populacao_1; // coverte o PIB para BILHÃO
    float densidade_pop_2 = (float)populacao_2 / area_2;    
    float pib_per_capita_2 =  pib_2 * 1000000000 / populacao_2; 

    // CALCULO DO SUPER PODER DA CARTA:

    float super_poder_1 = populacao_1 + area_1 + (pib_1 * 1000000000) + pontos_turisticos_1 + pib_per_capita_1 +(1 / densidade_pop_1);
    float super_poder_2 = populacao_2 + area_2 + (pib_2 * 1000000000) + pontos_turisticos_2 + pib_per_capita_2 +(1 / densidade_pop_2);

    //EXIBIÇÃO DOS DADOS DA CARTA 1:

    printf("\nCARTA 1:\n");
    printf("\nESTADO: %c\n", estado_1);
    printf("CÓDIGO: %s\n", codigo_1 );
    printf("CIDADE: %s\n",cidade_1 );
    printf("POPULAÇÃO: %lu habitantes\n",populacao_1 );
    printf("ÁREA: %.2f km²\n",area_1 );
    printf("PIB: R$ %.2f BILHÕES\n",pib_1 );
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n",pontos_turisticos_1 );
    printf("Densidade Populacional: %.2f hab/Km².\n", densidade_pop_1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita_1);
    printf("SUPER PODER: %.2f\n", super_poder_1);

    //EXIBIÇÃO DOS DADOS DA CARTA 2:

    printf("\nCARTA 2:\n");
    printf("\nESTADO: %c\n", estado_2);
    printf("CÓDIGO: %s\n", codigo_2 );
    printf("CIDADE: %s\n",cidade_2 );
    printf("POPULAÇÃO: %lu habitantes\n",populacao_2 );
    printf("ÁREA: %.2f km²\n",area_2 );
    printf("PIB: R$ %.2f BILHÕES\n",pib_2 );
    printf("PONTOS TURISTICOS: %d\n",pontos_turisticos_2 );
    printf("Densidade Populacional: %.2f hab/Km².\n", densidade_pop_2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita_2);
    printf("SUPER PODER: %.2f\n", super_poder_2);

    //EXIBIÇAO DA COMPARAÇAO DAS CARTAS:

    printf("\nCOMPARAÇÃO DE CARTAS:\n");
    printf("população: Carta %d venceu (%d)\n", (populacao_1 > populacao_2) ? 1 : 2, (populacao_1 > populacao_2) ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", (area_1 > area_2) ? 1 : 2, (area_1 > area_2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib_1 > pib_2) ? 1 : 2, (pib_1 > pib_2) ? 1 : 0);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontos_turisticos_1 > pontos_turisticos_2) ? 1 : 2, (pontos_turisticos_1 > pontos_turisticos_2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_pop_1 < densidade_pop_2) ? 1 : 2, (densidade_pop_1 < densidade_pop_2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita_1 > pontos_turisticos_2) ? 1 : 2, (pib_per_capita_1 > pib_per_capita_2));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder_1 < super_poder_2) ? 1 : 2, (super_poder_1 > super_poder_2));

    /* O primeiro %d exibe 1 se X > Y, ou 2 caso contrário (indica a carta vencedora).
       O segundo %d exibe 1 se X > Y, ou 0 caso contrário (indica se a vitória é válida ou não).*/

    return 0;
}