#include <stdio.h>

// ==============================
// Nível Mestre – Funções Recursivas
// ==============================

// Movimento do Bispo com função recursiva (Diagonal Superior Direita)
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passos - 1);
}

// Movimento da Torre com função recursiva (Direita)
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Movimento da Rainha com função recursiva (Esquerda)
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// ==============================
// Nível Aventureiro – Cavalo com loops aninhados
// ==============================

void moverCavaloL() {
    printf("\nMovimento do Cavalo (L):\n");
    // L = 2 para baixo, 1 para esquerda
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
        for (int j = 0; j < 1; j++) {
            printf("Esquerda\n");
        }
    }
}

// ==============================
// Nível Mestre – Cavalo com condições múltiplas
// ==============================

void moverCavaloCondicoes() {
    printf("\nMovimento do Cavalo (L para cima e direita):\n");
    int i = 0, j = 0;
    while (i < 2 || j < 1) {
        if (i < 2) {
            printf("Cima\n");
            i++;
            if (i == 1) continue;
        }

        if (j < 1) {
            printf("Direita\n");
            j++;
        }

        if (i >= 2 && j >= 1)
            break;
    }
}

// ==============================
// Função principal
// ==============================

int main() {
    // Constantes de passos
    const int passosBispo = 5;
    const int passosTorre = 5;
    const int passosRainha = 8;

    // Nível Novato – usando for/while para cada peça
    printf("===== Nível Novato =====\n");

    // Bispo - Diagonal Superior Direita
    printf("\nMovimento do Bispo:\n");
    for (int i = 0; i < passosBispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Torre - Direita
    printf("\nMovimento da Torre:\n");
    int t = 0;
    while (t < passosTorre) {
        printf("Direita\n");
        t++;
    }

    // Rainha - Esquerda
    printf("\nMovimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < passosRainha);

    // Nível Aventureiro
    printf("\n===== Nível Aventureiro =====\n");
    moverCavaloL();

    // Nível Mestre
    printf("\n===== Nível Mestre =====\n");

    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispo(passosBispo);

    printf("\nMovimento da Torre (Recursivo):\n");
    moverTorre(passosTorre);

    printf("\nMovimento da Rainha (Recursivo):\n");
    moverRainha(passosRainha);

    moverCavaloCondicoes();

    return 0;
}