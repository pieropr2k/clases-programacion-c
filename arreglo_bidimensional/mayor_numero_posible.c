#include <stdio.h>

#include <math.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int num = 56848856;
	mayor_numero(num);
}

void mayor_numero(int n) {
	int digits[30];
	
	int limit, i = 0, res, new_num;
	
	while (n > 0) {
		res = n % 10;
		digits[i] = res;
		i++;
		n = n / 10;
	}
	// 56848856 => 5684885 => 568488 => ... => 0
	// [5,6,8,4,8,8,5,6] => [8,8,8,...,4]
	
	ordenar_array(digits, i);
	
	limit = i, new_num = 0; 
	for (i = 0; i<limit; i++) {
		new_num *= 10;
		new_num += digits[i];
	}
	
	printf("Mayor numero posible: %i \n", new_num);
	printf("Raiz cuadrada: %lf \n", sqrt(new_num));
}


void ordenar_array(int arr[], int longitud) {  
	// ordenamiento creciente
	// burbuja: donde en N iteraciones se van ordenando los pares consecutivos
	int i, j, aux;
	// N iteraciones
	
	for(i = 0; i< longitud; i++) {
		// para ordenar por pares consecutivos
		for(j = 0; j < longitud-1; j++) {
			if (arr[j] > arr[j+1]) {
				aux = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = aux;
				/*
				aux = j+1
				j+1 = j
				 j  = aux
				*/
			}
		}
	}  
	// [4,8,5,9,3,7,4,2,7,1];
	
	//[4,8] => [8,4], aux = 8
	//[4,5] => [5,4]
	//[4,9] => [9,4]
	//[4,3] => [4,3]
	//[3,7] => [7,3]
	//[3,4] => [4,3]
	//[3,2] => [3,2]
	//[2,7] => [7,2]
	//[2,1] => [2,1]
	
	// [8,5,9,4,7,4,3,7,2,1]
	//.. si lo ejecutamos N veces
	// [9,8,7,7,5,4,4,3,2,1]
	
	
	printf("Arreglo Ordenado:\n");
	// aca imprimimos el arreglo ordenado
	for(i = 0; i< longitud; i++) {
		printf("%i, ", arr[i]);
	}
	printf("\n");
	
}
