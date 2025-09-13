#include <stdio.h>

int main() {
    // Definindo o tamanho do tabuleiro
    int linhas = 5, colunas = 5;
    int tabuleiro[5][5];

    // Inicializando o tabuleiro com 0 (água)
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // -----------------------------
    // Posicionando os navios manualmente
    // Um navio na vertical (coluna fixa, linhas variando)
    int x_vertical = 1; // coluna onde ficará o navio vertical
    int y_vertical_inicio = 0; // linha inicial
    int tamanho_vertical = 3; // tamanho do navio vertical

    for (int i = 0; i < tamanho_vertical; i++) {
        tabuleiro[y_vertical_inicio + i][x_vertical] = 1;
    }

    // Um navio na horizontal (linha fixa, colunas variando)
    int y_horizontal = 4; // linha onde ficará o navio horizontal
    int x_horizontal_inicio = 2; // coluna inicial
    int tamanho_horizontal = 2; // tamanho do navio horizontal

    for (int j = 0; j < tamanho_horizontal; j++) {
        tabuleiro[y_horizontal][x_horizontal_inicio + j] = 2;
    }

    // -----------------------------
    // Exibir as coordenadas de cada parte dos navios
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < tamanho_vertical; i++) {
        printf("(%d, %d)\n", y_vertical_inicio + i, x_vertical);
    }

    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int j = 0; j < tamanho_horizontal; j++) {
        printf("(%d, %d)\n", y_horizontal, x_horizontal_inicio + j);
    }

    // -----------------------------
    // Exibir o tabuleiro
    printf("\nTabuleiro (0 = agua, 1 = navio vertical, 2 = navio horizontal):\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
