#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void geraMatriz(int matriz[100][100], int matriz2[100][100], int matriz3[100][100] , int n, int m) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = rand() % 10; //prencher os valores
            matriz2[i][j] = rand() % 10; //prencher os valores
            matriz3[i][j] = matriz[i][j] * matriz2[i][j]; 
        }
    }
}

void printfMatriz(int matriz[][100], int n, int m){
	for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

}
int main(){

	int n, m;
	  
	printf("Digite o numero de linhas x colunas: ");
    scanf("%d%d", &n,&m);//limita as linhas e colunas da matriz 
    
	int  matriz[100][100],matriz2[100][100], matriz3[100][100];
	
	geraMatriz(matriz,matriz2, matriz3,  n,  m);
	printfMatriz(matriz,  n,  m);
	printf("\n");
	printfMatriz(matriz2,  n,  m);
	printf("\n");
	printfMatriz(matriz3,  n,  m);
}
