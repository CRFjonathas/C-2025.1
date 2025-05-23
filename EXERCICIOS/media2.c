#include <stdio.h>

int main(){

    float nota1, nota2, media;
    int opcao;

    printf("Menu de Gerenciamento de Estudantes:\n\n");
    printf("1. Calcular media.\n");
    printf("2. Determinar status.\n");
    printf("3. Sair.\n\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("CALCULANDO MEDIA:\n\n");
        printf("Primeira nota: ");
        scanf("%f", &nota1);
        printf("Segunda nota: ");
        scanf("%f", &nota2);

        if((nota1 < 0 && nota1 >10) && (nota2 < 0 && nota2 >10)){
            media = (nota1 + nota2) / 2;
            printf("\nA media do aluno é: %2.f\n", media);
        }else{
            printf("Notas com valores errados\n");
        }
        break;

    case 2:
        printf("Digite a média do aluno: ");
        scanf("%f", &media);
        if (media >= 7.0){
            printf("Status: Aprovado\n");
        } else if (media >= 5.0) {
            printf("Status: Recuperação\n");
        } else {
            printf("Status: Reprovado\n");
        }
        
        break;

    case 3:
        printf("Saindo...\n");
        break;

    default:
        printf("Opção invalida. Tente novamente!");
        break;
    }

    return 0;
    
}