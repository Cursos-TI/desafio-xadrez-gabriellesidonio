#include <stdio.h>

int main() {
    // ------------------- TORRE -------------------
    // A Torre anda em linha reta. Vamos simular 5 movimentos para a direita usando um loop FOR.
    printf("\nMovimento da TORRE:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // ------------------- BISPO -------------------
    // O Bispo anda na diagonal. Vamos simular 5 movimentos para cima e direita com um loop WHILE.
    printf("\nMovimento do BISPO:\n");
    int j = 0;
    while (j < 5) {
        printf("Diagonal para cima e direita\n");
        j++;
    }

    // ------------------- RAINHA -------------------
    // A Rainha pode andar para todos os lados. Vamos simular 8 movimentos para a esquerda com um DO-WHILE.
    printf("\nMovimento da RAINHA:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}

