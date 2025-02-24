#include <stdio.h>

#include <math.h>
#include <time.h>

int main() {
	srand(time(NULL));
	
	int N = 4, M = 3;
	int arr1[N], arr2[M];
	//printf("Dame el numero N:\n");
	//scanf("%d", &n);
	generar_array(arr1, N);
	generar_array(arr2, M);
	
	imprimir_array(arr1, N);
	imprimir_array(arr2, M);
	
	ordenar_array(arr1, N);
	ordenar_array(arr2, M);
	 
	int arr3[N+M];
	generar_arr_final(arr1, N, arr2, M, arr3);
}

void generar_array(int arr[], int n) {
	int i; 
	for (i = 0; i<n; i++) {
		arr[i] = rand() %10+1;
	}
}

void imprimir_array(int diferente[], int n) {
	int i; 
	for (i = 0; i<n; i++) {
		printf("%i, ", diferente[i]);
	}
	printf("\n");
}

void ordenar_array(int arr[], int longitud) {  
	// ordenamiento creciente
	// burbuja: donde en N iteraciones se van ordenando los pares consecutivos
	int i, j, aux;
	// N iteraciones
	for(i = 0; i< longitud; i++) {
		// para ordenar por pares consecutivos
		for(j = 0; j < longitud-1; j++) {
			
			if (arr[j] < arr[j+1]) {
				aux = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = aux;
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

void generar_arr_final(int arr1[], int N, int arr2[], int M, int arr3[]) {  
	// ordenamiento creciente
	// burbuja
	int longitud = N + M;
	int i, j, k = 0, j2 = 0, aux;
	
	/*
	arr1:[9,7,5,1]
	arr2:[10,6,2]
	
	arr3 : [10 |,9,7,| 6 | 5,1 | 2]
	
	10, 9, 
	*/
	
	// arr1
	for(i = 0; i< N; i++) {
		// arr2
		for(j = j2; j < M; j++) {
			if (arr1[i] >= arr2[j]) {
				arr3[k++] = arr1[i];
				j2 = j;
				break;
			} else {
				arr3[k++] = arr2[j];
			}
			 
		}
	}
	// [4,8,5,9,3,7,4,2,7,1];
	
	
    // Copiar elementos restantes de arr2 
	
	printf("Arreglo Ordenado:\n");
	// aca imprimimos el arreglo ordenado
	for(i = 0; i< longitud; i++) {
		printf("%i, ", arr3[i]);
	}
	printf("\n");
}
