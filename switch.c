#include <stdio.h>

int main() {

    int opcao;
    float saldo = 1000.00;

    printf("Escolha uma opção\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer deposito\n");
    printf("3. Fazer saque\n");

    switch (opcao)
    {
    case 1:
        printf("O seu saldo é: R$ %f \n", saldo);
        break;
    
    case 2:
        printf("Deposito realizado com sucesso\n");
        break;
    case 3:
        printf("sSaque realizado com sucesso \n", saldo);
        break;
    default:
        printf("Opção invalida!\n");
        break;
    }

}