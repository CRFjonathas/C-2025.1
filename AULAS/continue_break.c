#include <stdio.h>

int main(){

    int cavalo = 1;

    printf("\nCAVALO:\n\n");

    for (int i = 0; i < 4; i++) {
    if (i == 2) {
        continue; // pula a iteração 2
    }

    printf("2 Cima\n");
    printf("1 Direita\n");

    if (i == 3) {
        break; // encerra o loop na iteração 3
    }
}
    
    return 0;
}