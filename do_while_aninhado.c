#include <stdio.h>

int main (){

    int i = 1;

    do { //loop externo
        int j = 1; //variavel local
        do{ //loop interno
            printf("%d\t", i * j);
            j++; //incremento loop interno
        } while (j <= 10); // condição interna
        printf("\n");
        i++; //incremento loop externo
    } while (i <= 10);

    return 0;

}