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
	
	/*Subsecuencia mayor:
	1era fila: inicio = 0, final = 2
	2da fila:  inicio = 6, final = 9
	3era fila: inicio = 6, final = 11
	4ta fila: inicio = 6, final = 11
	
	int matriz[4][5] = {
		{11, 17, 33, 6, 4},
		{2, 1, 3, 5, 6},
		{7, 11, 5, 2, 3},
		{3, 91, 9, 11, 56},
	};
	
	array[] = {11, 17, 33, 6, 4, 2, 1, 3, 5, 6, 7, 11, 5, 2, 3, 3, 91, 9, 11, 56},
	*/
	
	imprimirMatriz(N, M, matriz);	
	//generar_matriz(N, M, matriz);
	mayor_sub = mayor_subsecuencia(N, M, matriz); 
	printf("\nTamaño mayor subsecuencia: %i", mayor_sub);
}

int mayor_subsecuencia(int filas, int columnas, int matriz[filas][columnas]) {
	// mayor longitud de subsecuencia: 
    int i, j, longitud = 0, valor_pasado = matriz[0][0], mayor_longitud = -1;
    // indices mayor subsecuencia
	int pre_idx_inicial = 0, idx_inicial, idx_final;
    
	for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) { 
        	if (matriz[i][j] > valor_pasado) {
        		longitud++;	
			} else {
				// reinicias
				longitud = 1;
				pre_idx_inicial = j + columnas*(i); 
			}
			if (longitud > mayor_longitud) {
				mayor_longitud = longitud;
				
				// actualizan los indices "definitivos"
				idx_inicial = pre_idx_inicial; 
				idx_final = j + columnas*(i); 
			}
			// guardas el valor de la iteracion, para que en la siguiente sea un valor "predecesor" o "antiguo" 
			valor_pasado = matriz[i][j];
        }
    } 
    printf("Subsecuencia: \n");
    
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) { 
			// [idx_inicial, idx_final] 
        	if (idx_inicial <= j + columnas*(i) && j + columnas*(i) <= idx_final) {
        		printf("%i, ", matriz[i][j]);
			}
        }
    } 
    
    return mayor_longitud;
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
