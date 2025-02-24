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
	printf("\n");
	
	int x1, x2;
	do{
		printf("Ingrese las filas inicial y final de la matriz\n");
		scanf("%i %i", &x1,&x2);
	} while((x1<=1)||(x2<=1)); 
	
    int y1, y2;
	do{
		printf("Ingrese las columnas inicial y final de la matriz\n");
		scanf("%i %i", &y1,&y2);
	} while((y1<=1)||(y2<=1)); 
	
	
	submatriz(x1, x2, y1, y2, N, M, matriz); 
}

void submatriz(int x1, int x2, int y1, int y2, int filas, int columnas, int matriz[filas][columnas]) {
    int i, j;
	printf("\nMatriz de %dx%d:\n", filas, columnas);
    for (i = x1; i < x2; i++) {
        for (j = y1; j < y2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
