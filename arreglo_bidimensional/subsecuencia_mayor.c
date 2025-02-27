#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int mayor_subsecuencia(int filas, int columnas, int matriz[filas][columnas]);
void ordenar_array(int arr[], int longitud);
void generar_matriz(int filas, int columnas, int matriz[filas][columnas]);
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]);

int main(){
	int N = 4, M = 5, mayor_sub;
	
	do{
		printf("Ingrese las dimensiones de la matriz (N, M)\n");
		scanf("%i %i", &N, &M);
	} while( (N<=1) || (M<=1));
	int matriz[N][M];
	
	generarMatriz(N, M, matriz);
	
	/*
	int matriz[4][5] = {
		{11, 17, 33, 6, 4},
		{2, 1, 3, 5, 6},
		{7, 11, 5, 2, 3},
		{3, 91, 9, 11, 56},
	};
	*/
	
	imprimirMatriz(N, M, matriz);	
	//generar_matriz(N, M, matriz);
	mayor_sub = mayor_subsecuencia(N, M, matriz); 
	printf("\nTamaño mayor tamaño: %i", mayor_sub);
}

int mayor_subsecuencia(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j, c = 0, past = matriz[0][0], mayor = -1, pre_inicio = 0, inicio, final;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) { 
        	if (matriz[i][j] > past) {
        		c++;	
			} else {
				c = 1;
				pre_inicio = j + columnas*(i); 
			}
			if (c > mayor) {
				inicio = pre_inicio; 
				mayor = c;
				final = j + columnas*(i); 
			} 
			past = matriz[i][j];
        }
    } 
    printf("Subsecuencia: \n");
    
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {  
        	if (inicio <= j + columnas*(i) && j + columnas*(i) <= final) {
        		printf("%i, ", matriz[i][j]);
			}
        }
    }
    
    return mayor;
}

void generarMatriz(int fil, int col, int matriz[fil][col]) {
	int i, j, num; 
    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
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
