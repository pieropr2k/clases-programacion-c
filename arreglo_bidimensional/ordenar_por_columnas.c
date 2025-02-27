#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void ordenar_array(int arr[], int longitud);
void generar_matriz(int filas, int columnas, int matriz[filas][columnas]);
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]);

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
	
	/*
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			matriz[i][j] = rand() %10;
			printf("%i\t", matriz[i][j]);
		}
		printf("\n");
	}  
	*/
	generar_matriz(N, M, matriz);
	ordenar_matriz(N, M, matriz);
	imprimirMatriz(N, M, matriz);	
}

void ordenar_matriz(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j, k = 0, columna[filas];
	printf("\nMatriz de %dx%d:\n", filas, columnas);
    for (j = 0; j < columnas; j++) {
    	 
        for (i = 0; i < filas; i++) { 
            //printf("%d\t", matriz[i][j]);
            columna[i] = matriz[i][j];
        }
        ordenar_array(columna, filas);
        for (i = 0; i < filas; i++) { 
            //printf("%d\t", matriz[i][j]);
            matriz[i][j] = columna[i];
        }
    } 								
}

void generar_matriz(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j;
	printf("\nMatriz de %dx%d:\n", filas, columnas);
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
        	matriz[i][j] = rand() % (20+1);
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void ordenar_array(int arr[], int longitud) {  
	// ordenamiento creciente
	// burbuja: donde en N iteraciones se van ordenando los pares consecutivos
	int i, j, aux;
	// N iteraciones
	for(i = 0; i< longitud; i++) {
		// para ordenar por pares consecutivos
		for(j = 0; j < longitud-1; j++) {
			if (arr[j] < arr[j+1]) {
				aux = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = aux;
			}
			
		}
	}  
	// [4,8,5,9,3,7,4,2,7,1];
	printf("Arreglo Ordenado:\n");
	// aca imprimimos el arreglo ordenado
	for(i = 0; i< longitud; i++) {
		printf("%i, ", arr[i]);
	}
	printf("\n");
	
}

void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j;
	printf("\nMatriz de %dx%d:\n", filas, columnas);
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
