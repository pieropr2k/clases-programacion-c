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
	int N = 3, M = 3, mayor_sub;
	
	/*
	do{
		printf("Ingrese las dimensiones de la matriz (N, M)\n");
		scanf("%i %i", &N, &M);
	} while( (N<=1) || (M<=1));
	int matriz[N][M];
	generarMatriz(N, M, matriz);
	*/
	
	int matriz[3][3] = {
		{1, 7, 8},
		{2, 10, 11},
		{20, 5, 9}
	}; 
	
	imprimirMatriz(N, M, matriz);	
	//generar_matriz(N, M, matriz);
	mayor_sub = robot_nao(N, M, matriz); 
	printf("\nTamaño mayor ruta: %i", mayor_sub);
}

int robot_nao(int filas, int columnas, int matriz[filas][columnas]) {
    int i = 0, j = 0, suma_ruta = matriz[0][0], derecha, diagonal, abajo;

    while (i < filas - 1 || j < columnas - 1) {
    	
    	// evitar desborde
    	if (j + 1 < columnas) {
    		derecha = matriz[i][j + 1];
		} else {
			derecha = -1;
		}
    	
    	if (i + 1 < filas && j + 1 < columnas) {
    		diagonal = matriz[i+1][j + 1];
		} else {
			diagonal = -1;
		}
		
		if (i + 1 < filas) {
    		abajo = matriz[i + 1][j];
		} else {
			abajo = -1;
		}

        if (derecha >= diagonal && derecha >= abajo && j + 1 < columnas) {
            j++;
            // i = i
            // j = j + 1
            printf("derecha\n");
        } else if (diagonal >= derecha && diagonal >= abajo && i + 1 < filas && j + 1 < columnas) {
            i++;
            j++;
            // i = i + 1
            // j = j + 1
            printf("diagonal\n");
        } else if (abajo >= derecha && abajo >= diagonal && i + 1 < filas) {
            i++;
            // i = i + 1
            // j = j
            printf("abajo\n");
        }

        suma_ruta += matriz[i][j];
    }

    return suma_ruta;
}

/*
int robot_nao(int filas, int columnas, int matriz[filas][columnas]) {
	// mayor longitud de ruta: 
    int i = 0, j = 0, suma_ruta = matriz[0][0];
	
	//matriz[i][j+1] derecha
	//matriz[i+1][j+1] diagonal derecha-abajo
	//matriz[i+1][j]   abajo
	
	while (true) {		
		// derecha es mayor
		if (i < filas && j+1 < columnas) {
			
			if (matriz[i][j+1] > matriz[i+1][j] && matriz[i][j+1] > matriz[i+1][j+1]) {
				suma_ruta += matriz[i][j+1];
				i = i;
				j = j+1;
				
				printf("derecha");
			}
			
		
		}
		 
		// diagonal es mayor
		if (i+1 < filas && j+1 < columnas) {
			
			if (matriz[i+1][j+1] > matriz[i+1][j] && matriz[i+1][j+1] > matriz[i][j+1]) {
				
				suma_ruta += matriz[i+1][j+1];
				i = i+1;
				j = j+1;
				
				printf("diag");
			}
		
		}
		 
		// abajo es mayor
		if (i+1 < filas && j < columnas) {
			printf("abajo");
			
			if (matriz[i+1][j] > matriz[i+1][j+1] && matriz[i+1][j] > matriz[i][j+1]) {
				suma_ruta += matriz[i+1][j];
				i = i+1;
				j = j;
				
				printf("abajo");
			}
		}
		
		if (i == filas - 1 && j == columnas - 1) {
			break;
		}
	}
	
	return suma_ruta;	
}
*/

/*
	// derecha es mayor
	if (i < filas && j+1 < columnas && matriz[i][j+1] > matriz[i+1][j] && matriz[i][j+1] > matriz[i+1][j+1]) {
		suma_ruta += matriz[i][j+1];
		i = i;
		j = j+1;
	// diagonal es mayor
	} else if (i+1 < filas && j+1 < columnas && matriz[i+1][j+1] > matriz[i+1][j] && matriz[i+1][j+1] > matriz[i][j+1]) {
		suma_ruta += matriz[i+1][j+1];
		i = i+1;
		j = j+1;
	// abajo es mayor
	} else if (i+1 < filas && j < columnas && matriz[i+1][j] > matriz[i+1][j+1] && matriz[i+1][j] > matriz[i][j+1]) {
		suma_ruta += matriz[i+1][j];
		i = i+1;
		j = j;
	}
	*/
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
