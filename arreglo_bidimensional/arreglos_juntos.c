#include <stdio.h>

#include <math.h>
#include <time.h>

int main() {
	srand(time(NULL));
	
	int N = 5, M = 6;
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
	/*
	arr1:[9,7,5|,1]
	arr2:[10,6,|2]
	
	arr3 : [10 |,9,7,| 6 | 5,1 | 2]
	
	10, 9, 
	*/ 
	int i = 0, j = 0, k = 0;
	// i: numero de elementos tomados en arr1, j: numero de elementos tomados en arr2

	// [11,10,8,7,6,5, _ ]	
	// N = 4, M = 3
	// i = 3, j = 2
	// i = 3, j = 3
	
    // Mezclar los dos arreglos ordenados en arr3
    
	while (i < N && j < M) {
        if (arr1[i] > arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    
    /*
    for (i = 0, j = 0; i<N && j<M; k++) {
    	// k aumenta si o si
    	if (arr1[i] > arr2[j]) {
    		// solo i va a aumentar
            arr3[k] = arr1[i];
            //k++;
            i++;
        } else {
        	// solo j va a aumentar
            arr3[k] = arr2[j++];
        }
	}
	*/
 
 	// [1,5,6,7, 11, _, _, _ , _ ] 
 	
 	// 2 whiles para completar de manera definitiva arr3
    while (i < N) {
        arr3[k++] = arr1[i++];
    }
    
    while (j < M) {
        arr3[k++] = arr2[j++];
    }
	
	printf("Arreglo Ordenado:\n");
	// aca imprimimos el arreglo ordenado
	for(i = 0; i< longitud; i++) {
		printf("%i, ", arr3[i]);
	}
	printf("\n");
}
