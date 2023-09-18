#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void geraMatriz(int matriz[100][100], int n, int m) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = rand() % 50; //prencher os valores
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
    printf("\n");
}

void printDiagonal(int matriz[][100], int n, int m){

	for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        	if (i == j)
		        printf("%d ", matriz[i][j]);
		    
        }
      
    }
   printf("\n");
}



int main(){

	int n, m;
	  
	printf("Digite o número de linhas x colunas: ");
    scanf("%d%d", &n,&m);//limita as linhas e colunas da matriz 
    
	int  matriz[100][100];
	
	geraMatriz(matriz,  n,  m);
	printfMatriz(matriz,  n,  m);
	printDiagonal(matriz,  n,  m);
	
}
