#include <stdio.h>

int main(){

    int opcao;

    do{
        printf("Menu:\n");
        printf("1. opção 1\n");
        printf("2. opção 2\n");
        printf("3. Sair\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("você escolheu a opção 1\n");
            break;
        case 2:
            printf("você escolheu a opção 2\n");
            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção invalida. tente novamente!");
            break;
        } 
    } while (opcao != 3);

    return 0;
    
}