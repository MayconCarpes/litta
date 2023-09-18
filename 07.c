#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraMatriz(int matriz[100][100], int n, int m) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = rand() % 10; // Preencher a matriz com valores aleatórios de 0 a 9
        }
    }
}

void printfMatriz(int matriz[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%2d  |", matriz[i][j]);
        }
        printf("\n");
    }
}

void MultiplicaEscala(int matriz[][100], int n, int m, int escala) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] *= escala;
        }
    }
}

int main() {
    int n, m, escala;
    printf("Informe o valor de escala: ");
    scanf("%d", &escala);
    printf("Digite o numero de linhas e colunas: ");
    scanf("%d %d", &n, &m); // Limite o número de linhas e colunas da matriz

    int matriz[100][100];

    geraMatriz(matriz, n, m);

    printf("Matriz gerada:\n");
    printfMatriz(matriz, n, m);

    MultiplicaEscala(matriz, n, m, escala);

    printf("\nMatriz multiplicada pela escala %d:\n", escala);
    printfMatriz(matriz, n, m);

    return 0;
}

