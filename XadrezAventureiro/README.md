# ♟️ Nível Aventureiro — Validação de Movimentos

Este nível recebe **entradas do usuário** para posições de uma peça no tabuleiro (coluna e linha), e verifica se o movimento é válido para:

- **Torre**
- **Bispo**
- **Rainha**

## O que o programa faz

- Solicita ao usuário a **posição inicial** e a **posição de destino**.
- Converte as colunas (A-H) em números.
- Verifica se o movimento é válido de acordo com a regra de cada peça.

## Exemplo de uso

Coluna inicial: A
Linha inicial: 1
Coluna final: A
Linha final: 8
→ Movimento válido para a TORRE.

## Conceitos aplicados

- Entrada com `scanf`
- Estruturas `if` e `else`
- Função auxiliar para conversão de letras

## Como compilar e executar
gcc XadrezAventureiro/x-nivelaventureiro.c -o nivelaventureiro

# Executar 
./nivelaventureiro
