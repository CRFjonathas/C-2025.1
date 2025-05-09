#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int jogador, computador;

    srand(time(0));

    printf(">>> JOKENPÔ <<<\n\n");
    printf("ESCOLHA UMA OPÇÃO:\n\n");
    printf("1. PEDRA\n");
    printf("2. Papel\n");
    printf("3. TESOURA\n\n");
    printf("ESCOLHA: ");
    scanf("%d", &jogador);

    computador = rand () % 3 + 1;
    
    switch (jogador)
    {
    case 1:
        printf("Jogador: Pedra \n");
        break;
    case 2:
        printf("Jogador: Papel \n");
        break;
    case 3:
        printf("Jogador: Tesoura \n");
        break;        
    default:
        printf("Opção invalida!\n");
        break;
    }

    switch (computador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    if (jogador == computador){
        printf("\n### Empate ###\n");
    } else if ((jogador == 1) && (computador == 3) ||
                (jogador == 2) && (computador == 1) ||
                (jogador == 3) && (computador == 2))
    {
        printf("\n### Parabens! Você ganhou! ###\n");
    } else{
        printf("\n### Você perdeu! ###\n");
    }

    return 0;

} 