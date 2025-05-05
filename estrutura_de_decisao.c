#include <stdio.h>

int main(){

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 60){
        printf("Você é um idoso");
    } else if(idade >= 18 && idade < 60){
        printf("Você é um adulto");
    } else if(idade < 18 && idade >= 12){
        printf("Você é um adolescente");
    } else{
        printf("Você é uma criança");
    }

}