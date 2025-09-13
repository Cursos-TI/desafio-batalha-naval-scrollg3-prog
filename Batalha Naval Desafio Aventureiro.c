#include <stdio.h>

int main() {
    // Definindo o tamanho do tabuleiro
    int linhas = 10, colunas = 10;
    int tabuleiro[10][10];

    // Inicializando o tabuleiro com 0 (água)
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // -----------------------------
    // Posicionando os navios (todos serão marcados com "3")

    // Navio 1 - Vertical (coluna fixa, linhas variando)
    int x_vertical = 2; 
    int y_vertical_inicio = 0; 
    int tamanho_vertical = 4; 

    for (int i = 0; i < tamanho_vertical; i++) {
        tabuleiro[y_vertical_inicio + i][x_vertical] = 3;
    }

    // Navio 2 - Horizontal (linha fixa, colunas variando)
    int y_horizontal = 7; 
    int x_horizontal_inicio = 1; 
    int tamanho_horizontal = 5; 

    for (int j = 0; j < tamanho_horizontal; j++) {
        tabuleiro[y_horizontal][x_horizontal_inicio + j] = 3;
    }

    // Navio 3 - Diagonal principal (\)
    int x_diag1 = 4, y_diag1 = 2;
    int tamanho_diag1 = 3;

    for (int k = 0; k < tamanho_diag1; k++) {
        tabuleiro[y_diag1 + k][x_diag1 + k] = 3;
    }

    // Navio 4 - Diagonal secundária (/)
    int x_diag2 = 8, y_diag2 = 1;
    int tamanho_diag2 = 4;

    for (int k = 0; k < tamanho_diag2; k++) {
        tabuleiro[y_diag2 + k][x_diag2 - k] = 3;
    }

    // -----------------------------
    // Exibir o tabuleiro completo
    printf("Tabuleiro 10x10 (0 = agua, 3 = navio):\n\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
