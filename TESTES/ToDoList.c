#include <stdio.h>

int main(){

    //ESTRUTURA > TAREFA <

    struct Tarefa{
        char descricao[100];
        int concluida;
    };

    struct Tarefa tarefas[100];
    int qtd = 0;
    int opcao = 0;
    int escolha = 0;

    //ESTRUTURA > WHILE < PRINCIPAL

    while (opcao != 5){
    
        printf("MENU:\n\n");
        printf("1. Adicionar nova tarefa \n");
        printf("2. Listar tarefas \n");
        printf("3. Marcar tarefa como concluida \n");
        printf("4. remover tarefa \n");
        printf("5. Sair \n\n");

        printf("SELECIONE UMA OPÇÃO: ");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            scanf(" %[^\n]", tarefas[qtd].descricao);
            tarefas[qtd].concluida = 0;
            qtd++;
            break;

        case 2:
            if (qtd > 0){

                for(int i = 0; i < qtd; i++){
                    printf("%d. [%s] %s\n", i + 1, tarefas[i].concluida ? "✔️" : "❌", tarefas[i].descricao); // i + 1	Mostra o número da tarefa (começando em 1, não 0) - tarefas[i].concluida ? "✔️" : "❌"	Mostra "✔️" se a tarefa estiver concluída, ou "❌" se não - tarefas[i].descricao	Mostra o texto da tarefa 
                }

            } else if(qtd == 0){
                printf("Nenhuma tarefa cadastrada.\n");
            } 

            break;

        case 3:
            if (qtd > 0){

                for(int i = 0; i < qtd; i++){
                    printf("%d. [%s] %s\n", i + 1, tarefas[i].concluida ? "✔️" : "❌", tarefas[i].descricao); 
                }

                printf("Digite o numero da tarefa que você deseja marcar como concluida: ");
                scanf("%d", &escolha);

                if(escolha >= 1 && escolha <= qtd){
                    tarefas[escolha - 1].concluida = 1;
                    printf("Tarefa [%s] concluída!\n", escolha);
                } else {
                    printf("Numero invalido!\n");
                }

            } else if(qtd == 0){
                printf("Nenhuma tarefa cadastrada.\n");
            } 
            break;

        case 4:
            if (qtd > 0){

                for(int i = 0; i < qtd; i++){
                    printf("%d. [%s] %s\n", i + 1, tarefas[i].concluida ? "✔️" : "❌", tarefas[i].descricao); 
                }
                
                printf("Digite o numero da tarefa que você deseja excluir: ");
                scanf("%d", &escolha);

                if(escolha >= 1 && escolha <= qtd){
                    for(int i = escolha - 1; i < qtd - 1; i++){
                        tarefas[i] = tarefas[i + 1];
                    }

                    qtd--;
                    printf("Tarefa %d exluída!\n", escolha);

                } else {
                    printf("Numero invalido!\n");
                }

            } else {
                printf("Nenhuma tarefa cadastrada.\n");
            } 
            break;

        case 5:
            /* code */
            break;

        default:
            break;
        }
    }

    return 0;

}