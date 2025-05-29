#include <stdio.h>

int main(){

    int index;

    char * alunos [3][3] = {
        {"aluno 1", "pt: 6.0", "mat: 7.5"},
        {"aluno 2", "pt: 3.0", "mat: 8.0"},
        {"aluno 3", "pt: 6.0", "mat: 6.0"}
    };

    printf("Qual aluno vcê deseja ver as notas?\n\n");
    printf("Aluno 1\n");
    printf("Aluno 2\n");
    printf("Aluno 3\n\n");
    printf("Digite um numero de 1 a 3: ");
    scanf("%d", & index);

    index--;

    printf("As notas do %s são: %s, %s ...", alunos[index][0], alunos[index][1], alunos[index][2]);

}