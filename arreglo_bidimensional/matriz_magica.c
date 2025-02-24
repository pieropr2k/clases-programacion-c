#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h> 

bool analizarSumas(int filas, int columnas, int matriz[filas][columnas]);
 
int main(){
	/*
	int i, j, N, M;
	do{
		printf("Ingrese las dimensiones de la matriz (N M)\n");
		scanf("%i %i", &N,&M);
	} while( (N<=1) || (M<=1)); 
	srand(time(NULL));
	*/

	int N = 3, M = 3;
	int matriz[3][3] = {{2,7,6},{9,5,1},{4,3,8}};
	//int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
	
	//generarMatriz(N, M, matriz);
	
	//imprimirMatriz(N, M, matriz);
	if (analizarSumas(N, M, matriz)) {
		printf("Es magica");
	} else {
		printf("No lo es");
	}
}

bool analizarSumas(int filas, int columnas, int matriz[filas][columnas]) {
    int i, j, sum, ideal_sum;
    // por filas
	for(i=0; i<filas; i++){
		
		// sumatoria de la fila
		sum = 0;
		for(j=0; j<columnas; j++){
			sum+=matriz[i][j]; 
		} 
		
		
		if (i==0) {
			ideal_sum = sum;
		}
		
		if (sum != ideal_sum && i != 0) {
			return false;
		}
			
	}
	
	// por columnas
	for(j=0; j<columnas; j++){ 
		sum = 0; 
		for(i=0; i<filas; i++){
			sum+=matriz[i][j]; 
		}
		if (sum != ideal_sum) {
			return false;
		}
	}
	
	
	sum = 0;
	// Traz(A)
	for(i=0; i<filas; i++){
		sum+=matriz[i][i]; 
	}
	
	if (sum != ideal_sum) {
		return false;
	}
	
	// diagonal 2
	sum = 0;
	
	for(i=0; i<filas; i++){
		sum+=matriz[i][columnas-i-1]; 
	}
	
	if (sum != ideal_sum) {
		return false;
	}
	
	return true;
}

/*
int generar_primo_en_cifras(int n) {
	int num, i, primos_cifras[] = {1,2,3,5,7}, rand_index;
	
	//for (i=0; i<n; i++) 
	do {
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
*/
