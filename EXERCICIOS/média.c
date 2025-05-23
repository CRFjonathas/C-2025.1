#include <stdio.h>

int main(){

    float av1, av2, av3;

    printf("CALCULE A SUA MÉDIA.\n");

    printf("\nNota da AV1: ");
    scanf("%f", &av1);
    printf("Nota da AV2: ");
    scanf("%f", &av2);
    printf("Nota da AV3: ");
    scanf("%f", &av3);

    float soma = av1 + av2 + av3;
    float media = soma / 3;

    printf("\nSua média é: %.2f \n", media);

    if (media >= 6.00){
        printf("\n>>> VOCÊ FOI APROVADO <<<");
    } else{
        printf("\n>>> VOCÊ FOI REPROVADO <<<");
    }

    printf("\nFIM DO PROGRAMA!");

    return 0;

}