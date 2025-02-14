#include <stdio.h>
#include <stdbool.h>


int main() {
	
	// ARRAYS: es una estructura de datos que **almacena y guarda** mas de 1 elemento, mas de 1 valor
	
	// Array definido con valores:
	int x = 6;
	
	int array[] = {4,5,6,7,8, 12, 45, 9, 90}; // tamaño 9, 
	
	// OJO: Un array siempre comienza desde 0 y termina en N-1, donde N es el tamaño total del arreglo-array
	
	// Tamaño del array:
	int n = sizeof(array)/sizeof(array[0]); // 9
	
	printf("Primer elemento: %i \n", array[1-1]);
	printf("Segundo elemento: %i \n", array[2-1]);
	printf("4to elemento: %i \n", array[4-1]);
	
	int posicion = 6;
	
	printf("Elemento en posicion %i: %i \n", posicion, array[posicion-1]);
	
	
	printf("Ultimo elemento: %i \n", array[n-1]);
	printf("Tamanho del array: %i \n", n);
	
	// Array definido sin valores:
	int y;
	
	//int array_without_values[];	// asi no se hace
	int array_without_values[5]; // tamaño 5
	// Aca tienes que definir el tamaño del array si o si
	/*
	Array bidimensional
	int array[][] = {
		{4,5,6,7,8},
		{4,5,6,7,8},
	}; // tamaño 5, 
	*/
	
	imprimir_array(array, n);
	
	
}

// funciones con arrays como parametros:

//tipo_de_dato_funcion nombre_de_la_funcion(tipo_dato_del_parametro nombre_del_array[], ......)

void imprimir_array(int arr[], int n) {
	int i;
	for (i = 0; i<n; i++) {
		printf("%i, ", arr[i]);
	}
}

