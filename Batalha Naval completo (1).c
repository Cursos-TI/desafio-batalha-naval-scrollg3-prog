#include <stdio.h>
#include <stdlib.h> // para usar abs()

// -----------------------------
// Função do Nível Novato
void nivelNovato() {
    int linhas = 5, colunas = 5;
    int tabuleiro[5][5];

    // Inicializa o tabuleiro com 0
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navio vertical
    int x_vertical = 1;
    int y_vertical_inicio = 0;
    int tamanho_vertical = 3;

    for (int i = 0; i < tamanho_vertical; i++) {
        tabuleiro[y_vertical_inicio + i][x_vertical] = 1;
    }

    // Navio horizontal
    int y_horizontal = 4;
    int x_horizontal_inicio = 2;
    int tamanho_horizontal = 2;

    for (int j = 0; j < tamanho_horizontal; j++) {
        tabuleiro[y_horizontal][x_horizontal_inicio + j] = 2;
    }

    // Exibe coordenadas
    printf("\nCoordenadas do Navio Vertical:\n");
    for (int i = 0; i < tamanho_vertical; i++) {
        printf("(%d, %d)\n", y_vertical_inicio + i, x_vertical);
    }

    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int j = 0; j < tamanho_horizontal; j++) {
        printf("(%d, %d)\n", y_horizontal, x_horizontal_inicio + j);
    }

    // Exibe tabuleiro
    printf("\nTabuleiro 5x5:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// -----------------------------
// Função do Nível Aventureiro
void nivelAventureiro() {
    int linhas = 10, colunas = 10;
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com 0
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navio vertical
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][2] = 3;
    }

    // Navio horizontal
    for (int j = 0; j < 5; j++) {
        tabuleiro[7][1 + j] = 3;
    }

    // Navio diagonal principal "\"
    for (int k = 0; k < 3; k++) {
        tabuleiro[2 + k][4 + k] = 3;
    }

    // Navio diagonal secundária "/"
    for (int k = 0; k < 4; k++) {
        tabuleiro[1 + k][8 - k] = 3;
    }

    // Exibe tabuleiro
    printf("\nTabuleiro 10x10:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// -----------------------------
// Função do Nível Mestre
void nivelMestre() {
    int i, j;

    // -----------------------------
    // Habilidade em CONE (3x5)
    int cone[3][5] = {0};
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i) {
                cone[i][j] = 1;
            }
        }
    }

    printf("\nHabilidade: CONE\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // -----------------------------
    // Habilidade em CRUZ (5x5)
    int cruz[5][5] = {0};
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 2 || j == 2) {
                cruz[i][j] = 1;
            }
        }
    }

    printf("\nHabilidade: CRUZ\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    // -----------------------------
    // Habilidade em OCTAEDRO (3x5)
    int octaedro[3][5] = {0};
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if (abs(i - 1) + abs(j - 2) <= 1) {
                octaedro[i][j] = 1;
            }
        }
    }

    printf("\nHabilidade: OCTAEDRO\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
}

// -----------------------------
// Função principal com MENU
int main() {
    int escolha;

    do {
        printf("\n=== Desafio Batalha Naval ===\n");
        printf("1 - Nivel Novato\n");
        printf("2 - Nivel Aventureiro\n");
        printf("3 - Nivel Mestre\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                nivelNovato();
                break;
            case 2:
                nivelAventureiro();
                break;
            case 3:
                nivelMestre();
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (escolha != 0);

    return 0;
}
