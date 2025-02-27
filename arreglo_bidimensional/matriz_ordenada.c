#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h> 

void llenar_array(int N, int matriz[N][N], int arr[]);
void llenar_matriz(int N, int matriz[N][N], int arr[]);
void generarMatriz(int n, int matriz[n][n]);
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]);
 
int main(){
	
	int i, j, N;
	do{
		printf("Ingrese el orden de la matriz (N):\n");
		scanf("%i", &N);
	} while( (N<2) || (N>8)); 
	srand(time(NULL));
	 
	int matriz[N][N];
	int elementos_en_array_uni[N*N];
	
	generarMatriz(N, matriz);
	
	llenar_array(N, matriz, elementos_en_array_uni);
	
	imprimirMatriz(N, N, matriz);
	ordenar_array(elementos_en_array_uni, N*N);
	llenar_matriz(N, matriz, elementos_en_array_uni);
	
	imprimirMatriz(N, N, matriz);
}

void llenar_array(int N, int matriz[N][N], int arr[]) {
    int i, j, k = 0;
	for(i=0; i<N; i++){  
		for(j=0; j<N; j++) { 
			arr[k++] = matriz[i][j];
		}   
	} 
}

void llenar_matriz(int N, int matriz[N][N], int arr[]) {
    int i, j, k = 0;
	for(i=0; i<N; i++){  
		for(j=0; j<N; j++) { 
			matriz[i][j] = arr[k++];
		}   
	} 
}

void generarMatriz(int n, int matriz[n][n]) {
	int i, j, num; 
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
        	matriz[i][j] = rand() % (101+1);
		}
	}
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
