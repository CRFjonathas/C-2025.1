#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    float media;

    printf("***   Programaa de Calculo de Média   ***\n");

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)  / 3;

    printf("A média é: %.2f \n", media);


    return 0;

}