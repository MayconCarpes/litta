#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geraMatriz(int matriz[100][100], int n, int m) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = rand() % 10; //prencher os valores
        }
    }
}

void printfMatriz(int matriz[][100], int n, int m){
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}

int main() {
    int n, m;
    printf("Digite o numero de N linhas x M colunas: ");
    scanf("%d%d", &n,&m);//limita as linhas e colunas da matriz 
    


    int matriz[100][100]; // Declare a matriz com o tamanho máximo

    // Chamar a função para gerar a matriz com base em n e m
    geraMatriz(matriz, n, m);



    printf("gerando Matriz...\n\n");
	_sleep(1000);
    int maior_valor = matriz[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] < maior_valor) {
                maior_valor = matriz[i][j];
            }
        } 
    }

   printfMatriz(matriz, n,m); //chama a funcao para printf matriz 
    
    printf("\nO maior valor na matriz: %d\n", maior_valor);

    return 0;
}

