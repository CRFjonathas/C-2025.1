#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao; 
    int numero, palpite;

    printf("Menu principal\n");
    printf("1. iniciar o jogo\n");
    printf("2. ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numero = rand() % 10 + 1; 
        printf("Digite um numero de 1 a 10: ");
        scanf("%d", &palpite);

        if (palpite == numero){
            printf("Você acertou!\n");
        } else{
            printf("Você errou! O Numero secreto era: %d \n", numero);
        }
        break;
    case 2:
        printf("Regras do jogo: \n");
        printf("1. Escolha uma opção no menu,\n");
        printf("2. Se você escolher 'Iniciar Jogo', adivinhe o numero secreto.\n");
        printf("3. O jogo termina quando você escolhe 'Sair'.\n");
        break;
    case 3:
        printf("Saindo...\n");
        break;
    default:
        printf("Opção invalida! tente novamente!\n");
        break;
    }

    return 0;
    
}