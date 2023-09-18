#include <stdio.h>

void printMatriz(int m[][2], int linhas, int cols) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < cols; j++)
            printf("%3d |", m[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main() {
    int m[2][3], n[3][2], mult[2][2], i, j, soma = 0;

    // Preenche a matriz m
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento da matriz [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    // Preenche a matriz n
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Digite o elemento da matriz [%d][%d]: ", i, j);
            scanf("%d", &n[i][j]);
        }
    }

    // Calcula a multiplicação
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            soma += m[i][j] * n[j][0];
        }
        mult[i][0] = soma;
        soma = 0;
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            soma += m[i][j] * n[j][1];
        }
        mult[i][1] = soma;
        soma = 0;
    }

    // Imprime a matriz resultante
    printMatriz(mult, 2, 2);
    return 0;
}

