#include <stdio.h>
#include <stdlib.h>

int main() {

    /* ================= TABULEIRO ================= */
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    /* ================= NAVIOS ================= */
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3]   = {3, 3, 3};

    // Posições iniciais
    int linhaH = 2, colunaH = 3; // horizontal
    int linhaV = 5, colunaV = 7; // vertical

    // Posiciona navio horizontal
    if (colunaH + 3 <= 10) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
        }
    }

    // Posiciona navio vertical
    if (linhaV + 3 <= 10) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaV + i][colunaV] = navioVertical[i];
        }
    }

    /* ================= HABILIDADE CRUZ ================= */
    int cruz[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

    // Origem da cruz
    int cruzLinha = 4, cruzColuna = 4;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cruz[i][j] == 1) {
                int l = cruzLinha + i - 2;
                int c = cruzColuna + j - 2;

                if (l >= 0 && l < 10 && c >= 0 && c < 10) {
                    if (tabuleiro[l][c] == 0)
                        tabuleiro[l][c] = 5;
                }
            }
        }
    }

    /* ================= HABILIDADE CONE ================= */
    int cone[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i && i <= 2)
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }

    // Origem do cone
    int coneLinha = 0, coneColuna = 7;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cone[i][j] == 1) {
                int l = coneLinha + i;
                int c = coneColuna + j - 2;

                if (l >= 0 && l < 10 && c >= 0 && c < 10) {
                    if (tabuleiro[l][c] == 0)
                        tabuleiro[l][c] = 5;
                }
            }
        }
    }

    /* ================= HABILIDADE OCTAEDRO ================= */
    int octaedro[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (abs(i - 2) + abs(j - 2) <= 2)
                octaedro[i][j] = 1;
            else
                octaedro[i][j] = 0;
        }
    }

    // Origem do octaedro
    int octLinha = 7, octColuna = 3;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (octaedro[i][j] == 1) {
                int l = octLinha + i - 2;
                int c = octColuna + j - 2;

                if (l >= 0 && l < 10 && c >= 0 && c < 10) {
                    if (tabuleiro[l][c] == 0)
                        tabuleiro[l][c] = 5;
                }
            }
        }
    }

    /* ================= EXIBIÇÃO ================= */
    printf("\nTABULEIRO BATALHA NAVAL\n\n");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}