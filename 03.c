#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraMatriz(int matriz[100][100], int n, int m) {
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = rand() % 10;// Preencher os valores
        }
    }
}

int ContMatriz(int matriz[100][100], int n, int m, int x) {
    int contador = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] == x) { // Usar '==' para verificar igualdade
                contador++;
            }
        }
    }
    return contador;
}

void printfMatriz(int matriz[][100], int n, int m) {
    printf("Matriz %dx%d:\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m, x, cont;
    printf("Informe o valor de x: ");
    scanf("%d", &x);
    printf("Digite o numero de linhas e colunas: ");
    scanf("%d %d", &n, &m); // Limite o número de linhas e colunas da matriz

    int matriz[100][100]; // Declare a matriz com o tamanho máximo

    // Chamar a função para gerar a matriz com base em n e m
    geraMatriz(matriz, n, m);

    printf("Matriz gerada...\n\n");

    cont = ContMatriz(matriz, n, m, x);

    printfMatriz(matriz, n, m); // Chama a função para imprimir a matriz
    printf("A quantidade de %d: %d\n", x, cont);

    return 0;
}

