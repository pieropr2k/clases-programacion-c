#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
 
int main(){
	int i, j, N, M;
	do{
		printf("Ingrese las dimensiones de la matriz (N M)\n");
		scanf("%i %i", &N,&M);
	} while((N<=1)||(M<=1));
	printf("Matriz inicial\n");
	srand(time(NULL));
	
	//int matriz[100][100];
	
	int matriz[N][M];
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			//matriz[i][j] = rand() %10;
			matriz[i][j] = rand() % 8 - 2;
			printf("%i\t", matriz[i][j]);
		}
		printf("\n");
	}  
	printf("\n");
	int res = submatriz_mayor(N, M, matriz);
	printf("%i\t", res);
}

int submatriz_mayor(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j, k, z, x1, x2, max_sum = -190, sum;  
    
	printf("\nMatriz de %dx%d:\n", filas, columnas);
	// recorren todo el arreglo
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) { 
            // sacan las submatrices
            for (k = i; k < filas; k++) { 
            	for (z = j; z < columnas; z++) {
            		
            		// sacan suma de la submatriz
					sum = 0;
            		for (x1 = i; x1 <= k; x1++) {
            			for (x2 = j; x2 <= z; x2++) {
            				sum+=matriz[x1][x2];
            			}
					}
            		if (sum>max_sum) {
						max_sum = sum;
					}
				} 
			} 
        } 
        
    }
	return max_sum;						
}
 
