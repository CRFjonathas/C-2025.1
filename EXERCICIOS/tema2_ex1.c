#include <stdio.h>

int main (){

    float temperatura, umidade;
    int estoque;
    int estoque_min = 1000;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
    printf("Digite a umidade: ");
    scanf("%f", &umidade);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &estoque);

    if (temperatura > 30){
        printf("A temperatura está alta.\n");
    } else{
        printf("A temperatura encontra-se normal.\n");
    }
    
    if (umidade > 50){
        printf("A umidade está alta.\n");
    } else{
        printf("A umidade encontra-se normal.\n");
    }

    if (estoque < estoque_min){
        printf("A quantidade em estoque encontra-se menor que o indicado.\n");
    } else{
        printf("O estoque encontra-se normal");
    }

    return 0;

}