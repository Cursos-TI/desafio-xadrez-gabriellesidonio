# Desafio Xadrez 

Este projeto foi dividido em três níveis: Novato, Aventureiro e Mestre, cada um com desafios diferentes.

## Nível Novato
Neste primeiro nível, o objetivo era simular movimentos fixos das peças utilizando estruturas de repetição:

Torre: anda 5 casas para a direita com for
Bispo: anda 5 casas na diagonal com while
Rainha: anda 8 casas para a esquerda com do-while
Esses movimentos são exibidos como mensagens no terminal, sem interação do usuário.

## Nível Aventureiro
Aqui o código ficou mais interativo. O usuário digita a posição inicial e final da peça, e o programa diz se o movimento é válido ou inválido de acordo com as regras de cada peça:

Torre: pode andar apenas em linha reta (mesma coluna ou linha)
Bispo: deve se mover na diagonal (diferença entre linhas = diferença entre colunas)
Rainha: pode agir como torre ou bispo
Cavalo: deve fazer o movimento em “L” (2 em uma direção + 1 na outra)

Foram usadas condições lógicas, arrays de movimentos e for com break para o cavalo.

## Nível Mestre
No último nível, o desafio foi aplicar funções recursivas e loops mais complexos:

Torre: anda 5 casas para a direita usando recursão
Bispo: anda 5 casas na diagonal usando loops aninhados
Rainha: anda 8 casas para a esquerda com recursão
Cavalo: faz 1 movimento em L com dois for aninhados, usando continue e break para controlar a lógica

Cada peça tem sua função própria, bem separada, e o usuário informa a posição inicial para ver os movimentos acontecendo no terminal.

## Foram usados
Estruturas de repetição: for, while, do-while
Condições: if, else, switch.
Funções recursivas
Loops aninhados
break e continue

## Como compilar e executar

## Nível Novato
gcc XadrezNovato/x-nivelnovato.c -o nivelnovato
./nivelnovato

## Nível Aventureiro
gcc XadrezAventureiro/x-nivelaventureiro.c -o nivelaventureiro
./nivelaventureiro

## Nível Mestre
gcc XadrezMestre/x-nivelmestre.c -o nivelmestre
./nivelmestre

