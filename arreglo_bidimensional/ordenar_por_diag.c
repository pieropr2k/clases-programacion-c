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
	
	int matriz[N][M], matriz2[N][M];
	
	generar_matriz(N, M, matriz);
	ordenar_matriz(N, M, matriz);
	imprimirMatriz(N, M, matriz);
	primer_cuadrante(N, M, matriz, matriz2);
	imprimirMatriz(N, M, matriz2);	
}

void primer_cuadrante(int filas, int columnas, int matriz[filas][columnas], int matriz2[filas][columnas]) {
    int i, j, k = 0, columna[filas], valores[filas*columnas];
	printf("\nMatriz de %dx%d:\n", filas, columnas);
    
	for (i = 0; i < filas; i++) { 
        for (j = 0; j < columnas; j++) {
            valores[k++] = matriz[i][j];
            matriz2[i][j] = 0;
        }
    }
    k = k - 1;
	
	for (i = filas-1; i > filas/2 - 1; i--) {  
        for (j = columnas-1; j > columnas/2 - 1; j--) {
			matriz2[i][j] = valores[k--];
        } 
    }		
}

void ordenar_matriz(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j, k = 0, columna[filas], valores[filas*columnas];
    
	printf("\nMatriz de %dx%d:\n", filas, columnas);
    for (i = 0; i < filas; i++) {  
        for (j = 0; j < columnas; j++) {
            //printf("%d\t", matriz[i][j]);
            valores[k++] = matriz[i][j];
        } 
    }
    // ordeno
    ordenar_array(valores, k);
	k = 0;
	for (i = 0; i < filas; i++) { 
        for (j = 0; j < columnas; j++) {
            matriz[i][j] = valores[k++];
        }
    } 	 								
}

void generar_matriz(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j;
	printf("\nMatriz de %dx%d:\n", filas, columnas);
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
        	// rango de 100 a 200
        	matriz[i][j] = rand() % (200+1-100)+100;
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
			if (arr[j] > arr[j+1]) {
				aux = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = aux;
			}
			/*
			arr = [4,9] => [9,4] 
			
			aux = 9 = arr[1] 
			//arr[1] = 1005
			arr[1] = 4
			
			// arr = [4,4]
			
			
			arr[0] = aux = 9
			
			// arr = [9,4]
			*/
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

