#include <stdio.h>
#include <stdlib.h> // para usar abs()

int main() {
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

    printf("Habilidade: CONE\n");
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

    return 0;
}
