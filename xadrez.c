#include <stdio.h>


// Funções recursivas
void moverBispo(int casas) {
    if (casas == 0) return;

    printf("Cima\n");
    printf("Direita\n");

    moverBispo(casas - 1);
}

void moverTorre(int casas) {
    if (casas == 0) return;

    printf("Direita\n");

    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");

    moverRainha(casas - 1);
}

int main() {
  const int BISPO = 5, TORRE = 5, RAINHA = 8;

    // NÍVEL NOVATO
    printf("=== NÍVEL NOVATO ===\n");

    // Bispo – usando FOR
    printf("\nMovimento do Bispo:\n");
    for (int i = 0; i < BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Torre – usando WHILE
    printf("\nMovimento da Torre:\n");
    int t = 0;
    while (t < TORRE) {
        printf("Direita\n");
        t++;
    }

    // Rainha – usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < RAINHA);



    // NÍVEL AVENTUREIRO
    printf("\n=== NÍVEL AVENTUREIRO ===\n");
    printf("\nMovimento do Cavalo (baixo e esquerda):\n");

    // Loop aninhado
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");

        int j = 0;
        while (j < 1) {
            printf("Esquerda\n");
            j++;
        }
    }


    // NÍVEL MESTRE
    printf("\n=== NÍVEL MESTRE ===\n");

    printf("\nBispo recursivo:\n");
    moverBispo(BISPO);

    printf("\nTorre recursiva:\n");
    moverTorre(TORRE);
    
    printf("\nRainha recursiva:\n");
    moverRainha(RAINHA);

    // Cavalo 
    printf("\nCavalo Nível Mestre:\n");

    for (int i = 0, j = 0; i < 2 && j < 2; i++, j++) {

        if (i == 0) {
            printf("Cima\n");
            continue;
        }

        if (i == 1) {
            printf("Cima\n");
            printf("Direita\n");
            break;
        }
    }

    return 0;
}
