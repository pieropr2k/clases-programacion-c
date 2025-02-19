#include <stdio.h>

/*
    TEORÍA DE ARREGLOS BIDIMENSIONALES
    ---------------------------------------
    - Un arreglo bidimensional es una estructura de datos que almacena elementos en filas y columnas.
    - Se declara especificando el número de filas y columnas: tipo nombre[fila][columna].
    - Los índices de los arreglos en C comienzan desde 0.
*/

#define FILAS 3
#define COLUMNAS 4

void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]);

int main() {
	
	// arreglo unidimencional:
	int array_uni[] = {2,3,6}; // N = 3
	// recordar: todo se cuenta desde 0 hasta N - 1 
	printf("elemento array: %i\n", array_uni[0]);	
	int posicion = 2; 
	printf("elemento array: %i\n", array_uni[posicion]);	
    // Declaración e inicialización de un arreglo bidimensional
    int matriz[FILAS][COLUMNAS] = {
        {1, 2, 3, 4}, // fila: 0
        {5, 6, 7, 8}, // fila: 1
        {9, 10, 11, 12}  // fila: 2
    }; 

	printf("fila %i columna %i: %i\n", 0, 0, matriz[0][0]);
	printf("fila %i columna %i: %i\n", 0, 1, matriz[0][1]);
	printf("fila %i columna %i: %i\n", 0, 2, matriz[0][2]);
	printf("fila %i columna %i: %i\n", 1, 0, matriz[1][0]);
	printf("fila %i columna %i: %i\n", 2, 0, matriz[2][0]); 
	
	int fila_azar = 1, col_azar = 2;
	printf("fila %i columna %i: %i\t\n", fila_azar, col_azar, matriz[fila_azar][col_azar]);  
    
	printf(" \n");
	/*
        RECORRER Y MOSTRAR UN ARREGLO BIDIMENSIONAL
        -------------------------------------------
        - Se usa un bucle anidado: uno para las filas y otro para las columnas.
    */

    printf("Matriz de %ix%i:\n", FILAS, COLUMNAS);
    int i, j;
    // de arriba a abajo
	for (i = 0; i < FILAS; i++) {
		// izquierda a derecha
        for (j = 0; j < COLUMNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    /*
        MODIFICACIÓN DE UN ELEMENTO
        ---------------------------
        - Se puede acceder y modificar un elemento mediante sus índices.
    */
    int x_azar = 9;
    x_azar = 11;
    
    // primero declaras la fila y columna a la que quieres apuntar y luego cambias el valor
    matriz[1][2] = 99;  
    matriz[2][2] = 48;
	matriz[1][1] = x_azar; 
    
	printf("\nMatriz después de modificar un elemento:\n");
    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    // A => filas, columnas
    // A_t = A.t (transpuesta) 
    // A_t => columnas, filas 
    
    printf("\nMatriz antes:\n");
    for (i = 0; i < FILAS; i++) { 
        for (j = 0; j < COLUMNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz transpuesta:\n");
    for (i = 0; i < COLUMNAS; i++) {
        for (j = 0; j < FILAS; j++) {
            printf("%d\t", matriz[j][i]);
        }
        printf("\n");
    }
    
    // variable sin valores declarados:
    // si matriz[FILAS][COLUMNAS]
    
    // MATRIZ TRANSPUESTA
    printf("\nMatriz transpuesta con valores:\n");
    int matriz_t[COLUMNAS][FILAS];
    
    for (i = 0; i < COLUMNAS; i++) {
        for (j = 0; j < FILAS; j++) { 
            matriz_t[j][i] = matriz[j][i];
            
            printf("%d\t", matriz_t[j][i]);
        }
        printf("\n");
    }

    /*
        USO DE ARREGLOS BIDIMENSIONALES EN FUNCIONES
        --------------------------------------------
        - Se puede pasar un arreglo bidimensional a una función especificando su número de columnas.
    */
    printf("\nMatriz impresa con funciones:\n");
    imprimirMatriz(FILAS, COLUMNAS, matriz);
    
    int maximo = encontrarMaximo(FILAS, COLUMNAS, matriz);
    printf("\nEl valor máximo en la matriz es: %d\n", maximo);
}

// FUNCIONES CON ARREGLOS BIDIMENCIONALES:
// void funcion_cualquiera(int t, int arreglo[] ){ ...}
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j;
	printf("\nMatriz de %dx%d:\n", filas, columnas);
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int encontrarMaximo(int filas, int columnas, int matriz[filas][columnas]) {
    int max = matriz[0][0], i, j;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            if (matriz[i][j] > max) {
                max = matriz[i][j];
            }
        }
    }
    return max;
}
