#include <stdio.h>

int main(){
    
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //substituição condicional de elementos

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (matriz[i][j] % 3 == 0){
                matriz[i][j] = -1; // substitui multiplos de 3 por -1
            }
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}