#include <stdio.h>

#include <math.h>
#include <time.h>
#include <stdbool.h>

int main() {
	int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	printf("\n");
	subarreglo_mayor_suma(arr, n);
}

void subarreglo_mayor_suma(int arr[], int n) {
	int mayor_index, menor_index;
	int mayor_suma = -99, suma, i, j, k;
	
	// recorre ttodo
	for (i = 0; i<n; i++) {
		// saca las subarreglos
		for (j = i; j<n; j++) {
			suma = 0;
			// suma el subarreglo
			for (k = i; k<=j; k++) {
				suma += arr[k];
			}
			if (suma>mayor_suma) {
				mayor_suma = suma;
			}
		}
	}
	printf("mayor suma: %i", mayor_suma);
	// tarea: imprime el subarreglo con la mayor suma
}

