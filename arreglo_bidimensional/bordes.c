#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int suma_borde(int const_value, bool avanzo_en_filas, int N, int M, int matriz[N][M]);
int main(){
	int i, j, N, M;
	do{
		printf("Ingrese las dimensiones de la matriz (N M)\n");
		scanf("%i %i", &N,&M);
	} while((N<=1)||(M<=1));
	printf("Matriz inicial\n");
	srand(time(NULL));
	
	//int matriz[100][100];
	
	int matriz[N][M];
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			matriz[i][j] = rand() %10;
			printf("%i\t", matriz[i][j]);
		}
	printf("\n");
	}
	 
	
 /* 
 	int sum_1 = 0, sum_2 = 0, sum_3 = 0, sum_4 = 0;
	// filas
	for(i=0;i<N;i++){
		sum_bordes += matriz[i][0];
	}
	for(i=0;i<N;i++){
		sum_bordes +=  matriz[i][M - 1];
	}
	// columnas
	for(j=0;j<M;j++){
		sum_bordes += matriz[0][j];
	}
	for(j=0;j<M;j++){
		sum_bordes += matriz[N - 1][j];
	} 
	 	*/  
	int sum_bordes = 0; 
	int final_dimensions[] = {M-1, N-1}; //columna | fila  finales
	
	for (i = 0; i<2; i++) {
		bool flag = i%2 == 0;
		sum_bordes += suma_borde(0, flag, N, M, matriz); 
		sum_bordes += suma_borde(final_dimensions[i], flag, N, M, matriz); 
	}
	 
	
	sum_bordes = sum_bordes - (matriz[0][0] + matriz[0][M - 1] + matriz[N-1][0] + matriz[N-1][M - 1]);
	printf("La suma de los elemetos del borde son: %i", sum_bordes);
	return(0);
}

int suma_borde(int const_value, bool avanzo_en_filas, int N, int M, int matriz[N][M]) {
	int sum_bordes = 0, i, j;
	if (avanzo_en_filas == true) { 
		// avanza en fila
		for(i=0;i<N;i++){
			sum_bordes += matriz[i][const_value];
		} 
	} else { 
		// avanza en columna
		for(j=0;j<M;j++){
			sum_bordes += matriz[const_value][j];
		} 
	} 
	return sum_bordes;
}
