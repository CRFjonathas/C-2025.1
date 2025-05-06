#include <stdio.h>

int main(){

    // o usuario estar entre 18 e 65 anos
    //renda menor que 3000
    //numero de dependentes maior que 2

    int idade, dependentes;
    float renda;

    printf("Sua idade: ");
    scanf("%d", &idade);
    printf("Renda mensal: ");
    scanf("%f", &renda);
    printf("Quantos dependentes você possui: ");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade <= 65){
        if(renda < 3000){
            if(dependentes > 2){
                printf("Você tem direito a beeficio!\n");
            } else{
                printf("Você não atende ao criterio de dependentes!\n");
            }

        } else {
            printf("Você não atende ao criterio renda!\n");
        }
    } else{
        printf("Você não atende ao criterio idade!\n");
    }
    
}