#include <stdio.h>

int main() {
    int n, area = 0, i, j, k, m, mat[10][10] = {0}, cont = 0;
    int xi, xf, yi, yf;
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) { 
        scanf("%d %d %d %d", &xi, &xf, &yi, &yf);
        for(j = xi; j <= xf; j++){
        	for(k = yi; k <= yf; k++){
        		mat[j][k] = 1;	
			}
		}
    }
    
    for (i = 0; i < 10; i++){
    	for (j = 0; j < 10; j++){
    		if(mat[i][j] != 0){
    			cont++;
			}
			printf("%3d |", mat[i][j]);
		}
		printf("\n");
	}
	printf("%d", cont);
    
    
    
    return 0;
}

