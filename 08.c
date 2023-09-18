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
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void SomaMatriz(int matriz1[][100], int matriz2[][100], int matriz3[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void SubtrairMatriz(int matriz1[][100], int matriz2[][100], int matriz3[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

int main() {
    int n, m;
    printf("Digite o numero de linhas x colunas: ");
    scanf("%d%d", &n, &m); // Limita as linhas e colunas da matriz

    int matriz1[100][100], matriz2[100][100], matriz3[100][100];
    double constante = 0.0;

    geraMatriz(matriz1, n, m);
    geraMatriz(matriz2, n, m);

    char escolha;
    do {
        printf("(a) somar as duas matrizes\n");
        printf("(b) subtrair a primeira matriz da segunda\n");
        printf("(c) adicionar uma constante às duas matrizes\n");
        printf("(d) imprimir as matrizes\n");
        printf("(e) sair\n");
        scanf(" %c", &escolha);

        int i, j;
        switch (escolha) {
            case 'a':
                SomaMatriz(matriz1, matriz2, matriz3, n, m);
                break;
            case 'b':
                SubtrairMatriz(matriz1, matriz2, matriz3, n, m);
                break;
            case 'c':
                printf("Digite o valor da constante: ");
                scanf("%lf", &constante);
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        matriz1[i][j] += constante;
                        matriz2[i][j] += constante;
                    }
                }
                break;
            case 'd':
                printf("Matriz 1:\n");
                printfMatriz(matriz1, n, m);
                printf("Matriz 2:\n");
                printfMatriz(matriz2, n, m);
                printf("Matriz Resultante:\n");
                printfMatriz(matriz3, n, m);
                break;
            case 'e':
                break;
            default:
                printf("Digite uma opcao valida.\n");
        }
    } while (escolha != 'e');

    return 0;
}

