#include <stdio.h>
#include <stdbool.h>


int main() {
	int array[] = {5, 64, 123, 5, 6543, 5, 64, 123, 64, 6543, 70555, 5};
	int n = sizeof(array)/sizeof(array[0]); // tamaño del array
	
	imprimir_array(array, n); // para llamar
}

// funciones con arrays como parametros:

void imprimir_array(int arr[], int n) { // para declarar
	int i, index;
	// imprimir el array:
	for (i = 0; i<n; i++) {
		printf("%i, ", arr[i]);
	}
	printf("\n");
	
	do {
		printf("Ingresa la posicion del numero: ");
    	scanf("%d", &index);	
	} while (index < 0 || index >= 12);
	// valores_pedidos = [0,12> => contradiccion => <-oo, 0> "o" [12, +oo>
	
	// imprimiremos lo demas:
	printf("Indice = %i \n", index);
	printf("DATOS[%i] = %i\n", index, arr[index]);	
	
	int variable_a_buscar = arr[index];
	
	// cuantas veces se repite:
	int cont = 0;
	for (i = 0; i<n; i++) {
		if (arr[i] == variable_a_buscar) {
			cont++;
		}
	}
	printf("El programa calcula que el numero %i se repite %i", arr[index], cont);		
}

