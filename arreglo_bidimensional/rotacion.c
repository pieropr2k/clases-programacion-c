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
			matriz[i][j] = rand() %10;
			printf("%i\t", matriz[i][j]);
		}
		printf("\n");
	}  
	rotacion(N, M, matriz);
}

void rotacion(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j;
	printf("\nMatriz de %dx%d:\n", filas, columnas);
    for (j = 0; j < columnas; j++) {
        for (i = filas-1; i >= 0; i--) { 
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    } 								
}
 
