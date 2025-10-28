#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[10][10] = {0};
    char colunas[11] = {' ', 'A','B','C','D','E','F','G','H','I','J'};
    char *linhas[10] = {" 1"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9","10"};
    printf(" ");
    for(int i = 0; i<=10; i++){
        printf("%c ", colunas[i]);

    }
    for(int i = 0; i< 10; i++){
        printf("\n");
        printf("%s",linhas[i]);
        for(int j = 0; j<10; j++){
            printf(" %d", tabuleiro[i][j]);
            }
    }
    printf("\n\n");

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Posicionar Navio Na Horizontal (2C)

    for(int i = 0; i < 3; i++ ){
        tabuleiro[1][2+i] = 3;
    }

    // Posicionar Navio Na Vertical (7I)
    
    for(int i = 0; i < 3; i++ ){
        tabuleiro[6+i][8] = 3;
    }

    printf(" ");
    for(int i = 0; i<=10; i++){
        printf("%c ", colunas[i]);

    }
    for(int i = 0; i< 10; i++){
        printf("\n");
        printf("%s",linhas[i]);
        for(int j = 0; j<10; j++){
            printf(" %d", tabuleiro[i][j]);
            }
    }
    printf("\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
