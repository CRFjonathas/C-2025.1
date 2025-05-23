#include <stdio.h>

int main(){

    for(int i = 1; i <= 10; i++){ //loop externo
        for (int j = 1; j <= 10; j++){ //loop interno
            printf("%d\t", i * j);
        }
            printf("\n");
    }

}