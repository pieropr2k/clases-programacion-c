#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h> 

void pedir(int N, int M, int matriz[N][M]);
void borrar(int filas, int columnas, int matriz[filas][columnas], int x);
void grabar(int filas, int columnas, int matriz[filas][columnas], int dato, int cant);
int num_emptys(int filas, int columnas, int matriz[filas][columnas]);
void generarMatriz(int n, int matriz[n][n]);
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]);
 
int main(){
	
	/*
	int i, j, N, M;
	do{
		printf("Ingrese las dimensiones de la matriz (N M)\n");
		scanf("%i %i", &N,&M);
	} while( (N<=1) || (M<=1)); 
	srand(time(NULL));
	*/

	int N = 4, M = N;
	int matriz[N][M];
	
	generarMatriz(N, matriz);
	printf("N = %i", N);
	imprimirMatriz(N, M, matriz);
	pedir(N, M, matriz);
	
}

//void borrar(int filas, int columnas, int matriz[filas][columnas], int x)
void pedir(int N, int M, int matriz[N][M]) {
	char letra;
	int dato, cant;
	
	while (true) {
		printf("Selecciona la opcion:\n");
		
		printf("G: Grabar\n");
		printf("B: Borrar\n");
		printf("F: Finalizar\n");
		scanf("%c", &letra);
		
		if (letra == 'G') {
			printf("Grabar\n");
			
			printf("Dato = ");
			scanf("%i", &dato);
			printf("Cant = ");
			scanf("%i", &cant);
			
			if (num_emptys(N, M, matriz) < cant ) {
				imprimirMatriz(N, M, matriz);
				printf("No hay espacio\n");
			} else {
				grabar(N, M, matriz, dato, cant);
				imprimirMatriz(N, M, matriz);
			}
			
		} else if (letra == 'B') {
			printf("Borrar\n");
			
			printf("Dato = ");
			scanf("%i", &dato);
			
			borrar(N, M, matriz, dato);
			imprimirMatriz(N, M, matriz);
		} else if (letra == 'F') {
			imprimirMatriz(N, M, matriz);
			break;
		} 
	}
}

void borrar(int filas, int columnas, int matriz[filas][columnas], int x) {
    int i, j;
	for(i=0; i<filas; i++){  
		for(j=0; j<columnas; j++) {
			if (matriz[i][j] == x) {
				matriz[i][j] = 0;
			}
		}   
	} 
}

void grabar(int filas, int columnas, int matriz[filas][columnas], int dato, int cant) {
	//printf("%i", dato);
	//printf("%i", cant);
    
	int i, j, k = 0;
	for(i=0; i<filas; i++){  
		for(j=0; j<columnas; j++) {
			if (matriz[i][j] == 0) {
				matriz[i][j] = dato;
				k++;
				printf("%i\n", k);
			}
			
			// return; rompe toda la funcion
			if (k == cant) {
				return;
			}
		}   
	} 
}

int num_emptys(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j, k = 0;
	for(i=0; i<filas; i++){  
		for(j=0; j<columnas; j++) {
			if (matriz[i][j] == 0) {
				k++;	
			}
		}   
	} 
	return k;
}

void generarMatriz(int n, int matriz[n][n]) {
	int i, j, num; 
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
        	matriz[i][j] = 0;
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
