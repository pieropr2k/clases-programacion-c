#include <stdio.h>

#include <stdlib.h>
#include <math.h>
#include <time.h> 

void sum_acu(int x, int y, int a[x][y]);
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]);

int main(){
	int filas, col, i, j, k; 
	srand(time(NULL)); 
	
	printf("Dame las filas:\n");  
	scanf("%d", &filas);
	printf("Dame las columnas:\n");  
	scanf("%d", &col);
	
	int mat[filas][col]; 
	
	// random 
	for(i=0; i<filas; i++){
		for(j=0; j<col; j++){
			mat[i][j] = rand() % (25+1);	 
		}
	} 
	
	imprimirMatriz(filas, col, mat);
	sum_acu(filas, col, mat);
}
 
void sum_acu(int x, int y, int a[x][y]){
	printf("\n"); 
	int matrix[x][y], k, i, j, sum;
	
    for (i=0; i<x; i++){ 
        for(j=0; j<y; j++){
            sum = 0;
            // este subciclo hace la sumatoria:
        	for (k=j; k<y; k++) { 
        		sum+=a[i][k];
			}
			matrix[i][j] = sum;
			printf("%d\t",matrix[i][j]);
	    }	
	  	printf("\n"); 
    }
    //imprimirMatriz(x, y, matrix);
}
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
	printf("\n"); 
    int i, j;
	printf("\nMatriz de %dx%d:\n", filas, columnas);
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
