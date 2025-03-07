#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

bool isInArray(int x, int arr[], int len);
void susIniciales2(int fil, int col, int matriz[fil][col], int arr1[]);
void susIniciales3(int fil, int col, int matriz[fil][col], int arr1[], int arr2[]);
void susIniciales5(int arr[], int len);
void generar_matriz(int filas, int columnas, int matriz[filas][columnas]);
void susIniciales4(int filas, int columnas, int matriz[filas][columnas]);

int main(){ 
	/*
	do{
		printf("Ingrese las dimensiones de la matriz (N, M)\n");
		scanf("%i %i", &N, &M);
	} while( (N<=1) || (M<=1));
	int matriz[N][M];
	generarMatriz(N, M, matriz);
	*/
	int N = 10;
	int vector[] = {64, 25, 25, 12, 12, 25, 12, 64, 22, 12}; 
	
	int filtrado[10];
	
	ordenar_array(vector, N, true);
	
	int long_filtrado = filtrar(vector, N, filtrado);
	
	printf("longitud filtrado: %i\n", long_filtrado);
	
	estadistica(vector, N, filtrado, long_filtrado);
}

int filtrar(int arr1[], int n, int filtrado[]) {
	int i, cont_new = 0;
	
	// limite inferior
	filtrado[0] = arr1[0];
	cont_new++;
	 
    for (i = 1; i < n; i++) {
        if (arr1[i-1]!=arr1[i]) {
    		filtrado[cont_new] = arr1[i];
			cont_new++;    	
		}
	}
	printf("ARRAY1: ");
	
	for (i = 0; i < cont_new; i++) {
        printf("%d, ", filtrado[i]);
    }
    
    printf("\n");
    return cont_new;
}

void estadistica(int arr[], int n_total, int filtrado[], int n_filtrado) {
	int frec[n_filtrado];
	int i, j, k=0, frec_index = 0, cont; 
    for (i = 0; i < n_filtrado; i++) { 
    	cont = 0;
    	for (j = k; j < n_total; j++) {
    		if (arr[j] == filtrado[i]) {
    			cont++;
    			//printf("%i", cont);
			} else {
				frec[frec_index++] = cont;
				printf("%i, Frecuencia = %i\n", filtrado[i], cont);
				k = j;
				break;
			}
			
			if (j == n_total-1) {
				frec[frec_index++] = cont;
				printf("%i, Frecuencia = %i\n", filtrado[i], cont);
			}
		}
	}
	
	int frec_copia[n_filtrado];
	
	// copia del array frecuencia
	for (i = 0; i<n_filtrado; i++) {
		frec_copia[i] = frec[i];
	}
	
	// ordenamos la frequencia
	ordenar_array(frec, n_filtrado, false);
	
	int frecuencia_de_moda = frec[0];
	
	for (i = 0; i < n_filtrado; i++) {
        if (frec_copia[i] == frecuencia_de_moda) {
        	printf("La moda es %i, su frecuencia es %i", filtrado[i], frecuencia_de_moda);
        	break;
		}
    }
	
}

void ordenar_array(int arr[], int longitud, bool es_creciente) {  
	// ordenamiento creciente
	// burbuja: donde en N iteraciones se van ordenando los pares consecutivos
	int i, j, aux;
	// N iteraciones
	for(i = 0; i< longitud; i++) {
		// para ordenar por pares consecutivos
		for(j = 0; j < longitud - 1; j++) {
			
			if (es_creciente == true) {
				// [9, 4] => [4, 9]
				if (arr[j] > arr[j+1]) {
					aux = arr[j+1];
					arr[j + 1] = arr[j];
					arr[j] = aux;
				}
				
			} else {
				// [9, 14] => [14, 9]
				if (arr[j] < arr[j+1]) {
					aux = arr[j+1];
					arr[j + 1] = arr[j];
					arr[j] = aux;
				}
				
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
