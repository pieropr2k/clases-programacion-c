#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

void generarMatriz(int filas, int columnas, int matriz[filas][columnas]);
void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]);
int generar_primo_en_cifras(int n);
bool is_primo(int n);
 
int main(){
	int i, j, N, M;
	do{
		printf("Ingrese las dimensiones de la matriz (N M)\n");
		scanf("%i %i", &N,&M);
	} while( (N<=1) || (M<=1)); 
	srand(time(NULL));

	int matriz[N][M];
	
	generarMatriz(N, M, matriz);
	
	imprimirMatriz(N, M, matriz);
}

void generarMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j, n_cifras;
	for(i=0; i<filas; i++){
		for(j=0; j<columnas; j++){
			//matriz[i][j] = rand() %10;
			n_cifras = rand() % 4+1; 
			matriz[i][j] = generar_primo_en_cifras(n_cifras); 
		} 
	}
}

int generar_primo_en_cifras(int n) {
	int num, i, primos_cifras[] = {1,2,3,5,7}, rand_index;
	
	//for (i=0; i<n; i++) 
	do {
		/*
		0 => 7 => 75
		*/
		num = 0, i = 0;
		do {
			num = num * 10;
			
			rand_index = rand() % 4+1;
			num = num + primos_cifras[rand_index];
			
			i++;
		} while (i<n);
		
	} while (is_primo(num) == false); 
	// 2453
	
	return num;
	
}

bool is_primo(int n) {
	int i;
	// [2,n>
	for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true;
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
}

