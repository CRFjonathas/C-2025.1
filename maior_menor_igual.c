#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int computador, jogador, resultado;
    char tipoComparacao;

    //Gerar numero aleatorio
    srand(time(0));
    computador = rand() % 100 + 1; //numero entre 1 e 100

    printf("Bem-vindo ao jogo Maior, Menos ou Igual!\n\n");
    printf("Você deve escolher um numero e um tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");
    printf("\nEscolha a comparação: ");
    scanf("%c", &tipoComparacao);
    printf("Digite um numero (entre 1 e 100): ");
    scanf("%d", &jogador);

    printf("O numero do computador é: %d", computador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("\você escoheu a opção Maior.");
        resultado = jogador > computador ? 1 : 0;       
        break;

    case 'N':
    case 'n':
        resultado = jogador < computador ? 1 : 0;
        break;
        
    case 'I':
    case 'i':
        resultado = jogador = computador ? 1 : 0;
        break;
    
    default:
        printf("Opção invalida. Tente novamente!");
        break;
    }

    printf("O numero que o computador escolheu é: %d e o do jogador é: %d", computador, jogador);

    if (resultado == 1){
        printf("Você ganhou!");
    }else{
        printf("Você perdeu!");
    }
    
    

}