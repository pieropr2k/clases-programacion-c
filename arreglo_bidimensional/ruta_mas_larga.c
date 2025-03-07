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
	int N = 5, M = 5, mayor_sub;
	
	/*
	do{
		printf("Ingrese las dimensiones de la matriz (N, M)\n");
		scanf("%i %i", &N, &M);
	} while( (N<=1) || (M<=1));
	int matriz[N][M];
	generarMatriz(N, M, matriz);
	*/
	
	int matriz[5][5] = {
		{25, 20, 20, 20, 67},
		{25, 45, 54, 20, 67},
		{25, 25, 91, 20, 67},
		{32, 70, 60, 20, 67},
		{56, 70, 78, 20, 20}
	}; 
	
	int ARRAY1[100], ARRAY2[100];
	
	susIniciales4(N, M, matriz);
	
	susIniciales2(N, M, matriz, ARRAY1);
	susIniciales3(N, M, matriz, ARRAY1, ARRAY2);
	//(N, M, matriz, ARRAY1);
		
	//generar_matriz(N, M, matriz);
	//mayor_sub = robot_nao(N, M, matriz); 
	//printf("\nTamaño mayor ruta: %i", mayor_sub);
}

void susIniciales2(int fil, int col, int matriz[fil][col], int arr1[]) {
	int i, j, k = 0; 
    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
        	if (!isInArray(matriz[i][j], arr1, k)) {
        		int d = matriz[i][j] / 10;
        		int u = matriz[i][j] % 10;
        		if (d != u) {
        			arr1[k++] = matriz[i][j];
				}
			}
		}
	}
	printf("ARRAY1: ");
	/*
	for (i = 0; i < k; i++) {
        printf("%d, ", arr1[i]);
    }
    */
    susIniciales5(arr1, k);
    printf("\n");
}

bool isInArray(int x, int arr[], int len) {
	int i;
	for (i = 0; i < len; i++) {
        if (arr[i] == x) {
        	return true;
		}
	}
	return false;
}

void susIniciales3(int fil, int col, int matriz[fil][col], int arr1[], int arr2[]) {
	int i, j, k = 0; 
	// arr1[i] : condicion de existencia
	for (i = 0; arr1[i] != '\0'; i++) {
        int ruta = ruta_mas_larga(fil, col, matriz, arr1[i]);
        
        printf("%d, ", ruta);
        arr2[i] = ruta;
    }
    i--;
    printf("ARRAY2: ");
    susIniciales5(arr2, i);
}

int ruta_mas_larga(int fil, int col, int matriz[fil][col], int x) {
	
	// definiremos un i, j iniciales
	int i, j, counter = 0, flag = true;
	for (i = 0; i < fil, flag == true; i++) {
        for (j = 0; j < col; j++) {
        	if (matriz[i][j] == x) { 
        		flag = false;
				break;
			}
		}
	}
	
	//printf("i,j : %i %i\n", i, j);
	i = i-1;
	counter = 0, flag = true;

    while (flag == true) {
    	// evitar desborde
    	flag = false;
    	if (j + 1 < col && matriz[i][j + 1] == x) {
    		j++;
    		flag = true;
    		//derecha = matriz[i][j + 1];
		} else if (i + 1 < fil && matriz[i+1][j] == x) {
    		i++;
    		flag = true;
		} 
        counter++;
    }

    return counter;
}

void generarMatriz(int fil, int col, int matriz[fil][col]) {
	int i, j, num; 
    for (i = 0; i < fil; i++) {
        for (j = 0; j < col; j++) {
        	matriz[i][j] = rand() % (101+1);
		}
	}
}

void susIniciales4(int filas, int columnas, int matriz[filas][columnas]) {
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

void susIniciales5(int arr[], int len) {
	int i;
	for (i = 0; i < len; i++) {
        printf("%d, ", arr[i]);
	}
}
