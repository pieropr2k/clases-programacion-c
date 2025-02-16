#include <stdio.h>

#include <math.h>
#include <time.h>

int main() {
	
	srand(time(NULL));
	// ARRAYS: es una estructura de datos que **almacena y guarda** mas de 1 elemento, mas de 1 valor
	
	// Variable normal:
	int z = 6;
	//int m;
	
	// Array definido con valores:
	int array[] = {2, 4, 9, 1, 19}; // tamaño 5 
	int carros[] = {2, 4, 9, 1, 19};
	int aviones[] = {2,4,5,69,40,4,3,1,2};
	
	// OJO: Un array siempre comienza desde 0 y termina en N-1, donde N es la longitud total del arreglo-array
	
	//  N = 5 (longitud arreglo)
	// arreglo = [ 2 | 4 | 9 | 1 | 19 ]
	// indice:     0,  1,  2,  3,  4 = N - 1
	
	// Primer elemento = array[0] = array[1-1] = 2
	// SE RESTA 1 en la posicion que quieres
	
	// Tamaño del array:
	int n = sizeof(array)/sizeof(array[0]); // 5
	
	printf("Primer elemento: %i \n", array[1-1]);
	printf("Segundo elemento: %i \n", array[2-1]);
	printf("4to elemento: %i \n", array[4-1]);
	
	// con variable clasica
	int posicion = 3;
	printf("Elemento en indice %i: %i \n", posicion, array[posicion]); // array[3]
	
	// Aca tienes que definir el tamaño del array si o si
	printf("Ultimo elemento: %i \n", array[n-1]);
	printf("Tamanho del array: %i \n", n);
	
	printf("Imprimir array ya definido: ");
	// imprimir elementos del array
	// rango = [0, n-1] = [0, n>
	int i;
	for (i = 0; i <= n-1; i++) {
		printf("%i, ", array[i]);
	}
	printf("\n");
	
	
	// Array DECLARADO SIN VALORES
	// declaracion en variable comun sin valor:
	int y;
	
	
	// declaracion con array aun no definido:
	// 1 requisito: tienes que poner una longitud determinada para el arreglo
	
	//int array_without_values[];	// asi no se hace, va a arrojar error
	int array_without_values[n]; // tamaño 5, n = 5
	
	// sintaxis:
	// arreglo[tamaño_definido]
	
	/*
	longitud = 5
	
	declaracion
	int array_without_values[5];
	
	// lo que pasa internamente:
	array_without_values = { #, #, #, #, # }
	*/
	
	// imprimir array con elementos random
	printf("Array definiendose: ");
	// almacenar en el arreglo:
	for (i = 0; i < n; i++) {
		array_without_values[i] = rand() % (7+1);
	}
	// imprimir lo almacenado
	for (i = 0; i < n; i++) {
		printf("%i, ", array_without_values[i]);
	}
	
	printf("\n");
	
	// usando funciones
	imprimir_array(array, n);
	
	/*
	Array bidimensional
	int array[][] = {
		{4,5,6,7,8},
		{4,5,6,7,8},
	}; // tamaño 5, 
	*/	
}

// funciones con arrays como parametros:
//tipo_de_dato_funcion nombre_de_la_funcion(tipo_dato_del_parametro nombre_del_array[], ......)
void imprimir_array(int diferente[], int n) {
	int i;
	printf("Con funciones: ");
	for (i = 0; i<n; i++) {
		printf("%i, ", diferente[i]);
	}
}

