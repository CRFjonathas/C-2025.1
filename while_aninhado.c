#include <stdio.h>

int main(){

    int i = 1;

    while (i <= 10) //loop externo
    {
        int j = 1; //variavel local

        while (j <= 10)
        {
            printf("%d\t", i * j);

            j++; //incremento loop interno
        }
        printf("\n");

        i++;
    }

    return 0;
    

}