#include <stdio.h>
#include <stdlib.h>

// Essa função transforma a letra da coluna (tipo 'A', 'B', etc.) em número (1 a 8)
// Isso facilita na hora de comparar e fazer cálculos
int converterColuna(char letra) {
    return letra - 'A' + 1;
}

int main() {
    char colunaInicial, colunaFinal;
    int linhaInicial, linhaFinal;

    printf("=== Simulador de Movimentos: Torre, Bispo, Rainha e Cavalo ===\n");

    // Aqui o usuário informa a posição inicial da peça
    printf("Informe a posição inicial (coluna A-H e linha 1-8):\n");
    printf("Coluna: ");
    scanf(" %c", &colunaInicial);
    printf("Linha: ");
    scanf("%d", &linhaInicial);

    // Agora a posição final (pra onde a peça quer ir)
    printf("\nInforme a posição de destino (coluna A-H e linha 1-8):\n");
    printf("Coluna: ");
    scanf(" %c", &colunaFinal);
    printf("Linha: ");
    scanf("%d", &linhaFinal);

    // Converte as letras das colunas em números (A vira 1, B vira 2, etc.)
    int coluna1 = converterColuna(colunaInicial);
    int coluna2 = converterColuna(colunaFinal);

    printf("\n--- Resultado ---\n");

    // --- TORRE ---
    // A torre anda em linha reta: ou na mesma coluna ou na mesma linha
    if (linhaInicial == linhaFinal || coluna1 == coluna2) {
        printf("Movimento válido para a TORRE.\n");
    } else {
        printf("Movimento inválido para a TORRE.\n");
    }

    // --- BISPO ---
    // O bispo anda na diagonal, então a diferença entre as linhas e colunas tem que ser igual
    if (abs(linhaInicial - linhaFinal) == abs(coluna1 - coluna2)) {
        printf("Movimento válido para o BISPO.\n");
    } else {
        printf("Movimento inválido para o BISPO.\n");
    }

    // --- RAINHA ---
    // A rainha pode andar como torre ou como bispo, então a gente aproveita as duas verificações
    if ((linhaInicial == linhaFinal || coluna1 == coluna2) ||
        (abs(linhaInicial - linhaFinal) == abs(coluna1 - coluna2))) {
        printf("Movimento válido para a RAINHA.\n");
    } else {
        printf("Movimento inválido para a RAINHA.\n");
    }

    // --- CAVALO ---
    // O cavalo anda em L: 2 casas em uma direção e 1 na outra
    // A gente guarda todos os 8 movimentos possíveis dele nesse array
    int movimentosCavalo[8][2] = {
        {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
        {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
    };

    int ehMovimentoValido = 0;

    // Aqui a gente testa se algum dos movimentos possíveis do cavalo bate com a posição final
    for (int i = 0; i < 8; i++) {
        int novaLinha = linhaInicial + movimentosCavalo[i][0];
        int novaColuna = coluna1 + movimentosCavalo[i][1];

        if (novaLinha == linhaFinal && novaColuna == coluna2) {
            ehMovimentoValido = 1;
            break; // achou um movimento válido, pode parar de verificar
        }
    }

    if (ehMovimentoValido) {
        printf("Movimento válido para o CAVALO.\n");
    } else {
        printf("Movimento inválido para o CAVALO.\n");
    }

    return 0;
}
