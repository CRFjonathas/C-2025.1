#include <stdio.h>

int main(){

    int idade;

    printf("digite a sua idade: ");
    scanf("%d", &idade);

    if (idade <= 18){
        printf("Você é menor de idade.");
    }
    else{
        printf("Você é maior de idade.");
    }

    printf("\nFIM\n");
}