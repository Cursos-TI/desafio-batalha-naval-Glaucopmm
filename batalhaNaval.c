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
    printf("\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    
    //posicionar um navio na diagonal à direita em 5C
    
    for(int i = 0; i < 3; i++ ){
        
        if (tabuleiro[4+i][2+i] == 0){
            
            tabuleiro[4+i][2+i] = 3;
        }
        else {
        printf("\n Não é possível posicionar o navio!\n");
        break;
        }
    }

    //posicionar um navio na diagonal à esquerda em 7F
    for(int i = 0; i < 3; i++ ){
        if (tabuleiro[6-i][5-i] == 0){
            tabuleiro[6-i][5-i] = 3;
        }
        else {
        printf("\n Não é possível posicionar o navio!\n");
        break;
        }    
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

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1


     //Cone em 3H
    int linha  = 2;
    int coluna = 7;

    for(int i = 0; i < 3; i++ ){
        for(int j = 0; j < (i+1); j++)
            if (tabuleiro[linha+i][coluna+j] == 0){
                tabuleiro[linha+i][coluna+0] = 1;
                tabuleiro[linha+i][coluna-j] = 1;
                tabuleiro[linha+i][coluna+j] = 1;
        }
        else {
        printf("\n Não é possível posicionar o cone!\n");
        break;
        }    
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
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

     //Cone em 3C
    linha  = 6;
    coluna = 1;

    for(int i = 0; i < 3; i++ ){            
           switch (i){
                case 0: tabuleiro[linha+i][coluna] = 1;
                        break;
                case 1: tabuleiro[linha+i][coluna-i] = 1;
                        tabuleiro[linha+i][coluna+1] = 1;
                        tabuleiro[linha+i][coluna] = 1;
                        break; 
                case 2: tabuleiro[linha+i][coluna] = 1;
                        break;          
            
            }
            
            
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


    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0


    linha  = 7;
    coluna = 5;

    for(int i = 0; i < 3; i++ ){
        switch(i){
            case(0):
                tabuleiro[linha+i][coluna] = 1;
                break;
            case(1):
                for(int j = 0; j < 5; j++ ){
                    tabuleiro[linha+i][coluna - 2 + j] = 1;
                }
            case(2):
                tabuleiro[linha+i][coluna] = 1;

        }
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

   
    
    return 0;
}
