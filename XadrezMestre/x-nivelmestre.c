#include <stdio.h>
#include <stdlib.h>

// Função que converte a letra da coluna (A-H) em número (1-8)
// Ex: 'A' vira 1, 'B' vira 2, ..., 'H' vira 8
int converterColuna(char letra) {
    return letra - 'A' + 1;
}

// ------------------- TORRE -------------------
// A torre se move em linha reta. Neste caso, andará 5 casas para a direita.
// A função usa recursão para mostrar os movimentos um por um.
void moverTorreMestre(int colunaAtual, int passos) {
    // Se os passos acabarem ou sair do tabuleiro (coluna > 8), para a função
    if (passos == 0 || colunaAtual > 8) return;

    // Imprime a posição atual da torre
    printf("-> %c\n", colunaAtual + 'A' - 1);

    // Chama a função novamente para a próxima casa à direita
    moverTorreMestre(colunaAtual + 1, passos - 1);
}

// ------------------- BISPO -------------------
// O bispo se move em diagonais. Neste desafio, ele deve andar 5 casas na diagonal para cima e à direita.
// Aqui usamos dois loops aninhados (um dentro do outro).
void moverBispoMestre(int linha, int coluna) {
    printf("BISPO - Movimento em diagonal (direita e cima):\n");

    // Loop externo percorre 5 passos
    for (int i = 0; i < 5; i++) {
        linha--;    // sobe uma linha
        coluna++;   // vai uma coluna para a direita

        // Se sair do tabuleiro, interrompe o movimento
        if (linha < 1 || coluna > 8) break;

        // Imprime a nova posição do bispo
        printf("-> %c%d\n", coluna + 'A' - 1, linha);
    }
}

// ------------------- RAINHA -------------------
// A rainha pode se mover em todas as direções, mas neste desafio ela vai andar 8 casas para a esquerda.
// Função recursiva para mostrar movimento passo a passo.
void moverRainhaMestre(int coluna, int passos) {
    // Para se acabou os passos ou saiu do tabuleiro (coluna < 1)
    if (passos == 0 || coluna < 1) return;

    // Imprime a posição atual da rainha
    printf("-> %c\n", coluna + 'A' - 1);

    // Move uma casa para a esquerda e chama novamente
    moverRainhaMestre(coluna - 1, passos - 1);
}

// ------------------- CAVALO -------------------
// O cavalo se move em "L": dois passos numa direção e um na outra.
// Usamos dois loops aninhados para verificar todos os movimentos possíveis em L.
// Paramos no primeiro movimento válido para cima e à direita.
void moverCavaloMestre(int linha, int coluna) {
    printf("\nCAVALO - Movimento em L (2 cima, 1 direita):\n");

    // Loop para testar variações de movimentos 
    for (int i = -2; i <= 2; i++) {
        for (int j = -2; j <= 2; j++) {
            // Só considera movimentos que formam um "L" (2 em uma direção + 1 na outra)
            if (abs(i) + abs(j) != 3) continue;

            int novaLinha = linha + i;
            int novaColuna = coluna + j;

            // Ignora se o movimento sair do tabuleiro
            if (novaLinha < 1 || novaLinha > 8 || novaColuna < 1 || novaColuna > 8)
                continue;

            // Imprime a posição válida e encerra (só 1 movimento permitido)
            printf("-> %c%d\n", novaColuna + 'A' - 1, novaLinha);
            break;
        }
        break;
    }
}

// ------------------- FUNÇÃO PRINCIPAL -------------------
int main() {
    char colunaInicial;
    int linhaInicial;

    printf("=== Jogo de Xadrez - Nível Mestre ===\n");

    // ------- MOVIMENTO DA TORRE -------
    printf("\nTORRE\nColuna inicial (A-H): ");
    scanf(" %c", &colunaInicial);
    moverTorreMestre(converterColuna(colunaInicial), 5); // 5 passos à direita

    // ------- MOVIMENTO DO BISPO -------
    printf("\nBISPO\nColuna inicial (A-H): ");
    scanf(" %c", &colunaInicial);
    printf("Linha inicial (1-8): ");
    scanf("%d", &linhaInicial);
    moverBispoMestre(linhaInicial, converterColuna(colunaInicial)); // 5 passos em diagonal

    // ------- MOVIMENTO DA RAINHA -------
    printf("\nRAINHA\nColuna inicial (A-H): ");
    scanf(" %c", &colunaInicial);
    moverRainhaMestre(converterColuna(colunaInicial), 8); // 8 passos à esquerda

    // ------- MOVIMENTO DO CAVALO -------
    printf("\nCAVALO\nColuna inicial (A-H): ");
    scanf(" %c", &colunaInicial);
    printf("Linha inicial (1-8): ");
    scanf("%d", &linhaInicial);
    moverCavaloMestre(linhaInicial, converterColuna(colunaInicial)); // 1 movimento em L

    return 0;
}
