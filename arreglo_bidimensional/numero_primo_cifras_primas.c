#include <stdio.h>

#include <math.h>
#include <time.h>
#include <stdbool.h>

void eliminar_duplicados(int arr[], int n);
bool is_in(int x, int arr[], int n);
int main() {
	int arr[] = {2,3,1,3,6,3,5,4,1,10,4,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	printf("\n");
	eliminar_duplicados(arr, n);
}

void eliminar_duplicados(int arr[], int n) {
	// subconjunto que filtra los elementos unicos tal que no se repitan
	int arr_unicos[100];
	// contador: unicos, el cual te va a indicar cuantos elementos unicos hay
	int unicos = 0, i; 
	
	for (i = 0; i<n; i++) {
		// indica si el elemento se esta repitiendo
		if (is_in(arr[i], arr_unicos, unicos)) {
			continue;
		// si el elemento es nuevo y no se repite 
		} else {
			arr_unicos[unicos] = arr[i]; 
			unicos++;
		}
	}
	
	printf("Elementos unicos:\n");
	for (i = 0; i<unicos; i++) {
		printf("%i, ", arr_unicos[i]);
	}
}
bool is_primo(int x, int n) {
	int i;
	for (i = 0; i<n; i++) {
		if (x == arr[i]) {
			return true;
		}
	}
	return false;
}

