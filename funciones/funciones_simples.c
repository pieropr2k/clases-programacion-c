#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h> //Para Sleep()
#include <conio.h> //Para getch()
#include <stdbool.h>

int one = 0, three = 0, five = 0; // el contador de cada "numero de cifras"

int main(void) {
	// Funciones
	//(x, y, z, m, ...) => z
	
	int x = 9, y = 8;
	int mult = multiplicacion(x, y);
	printf("%i\n", mult);
	
	// forma manual
	printf("%i\n", 1*2);
	printf("%i\n", 2*3);
	printf("%i\n", 3*4);
	printf("%i\n", 4*5);
	
	// forma automatizada
	printf("%i\n", multiplicacion(1,2));
	printf("%i\n", multiplicacion(2,3));
	printf("%i\n", multiplicacion(3,4));
	printf("%i\n", multiplicacion(4,5));
	
	hola_mundo();
	
	int ret = multiplicacion_sin_parametros();
	printf("%i\n", ret);
	
	// Asignar numeros sin o con variables?
	x = 9;
	printf("%i\n", x); // 9
	
	printf("%i\n", 9);
	
	// lo mismo se puede con las funciones
	printf("%i\n", multiplicacion_sin_parametros());
	int suma = 9 + multiplicacion_sin_parametros();
	
	printf("(%i, %i, %i)\n", 9, 9, 9);
	
	imprimir_numeros(15, 9, 10);
}

// Cuando hay un retorno
// los tipos de retornos son los mismos: int, double, char, string... osea los numericos y caracteres 

// funcion con input y output;
int multiplicacion(x, y) {
	x = x * 10;
	y = y * 10;
	return x * y;
}

// funcion sin input y output
int multiplicacion_sin_parametros() {
	int x = 10, y = 9;
	return x * y;
}


// Cuando no hay retorno
// se usa "void" => vacio

// funcion sin input y output => 
void hola_mundo() {
	printf("Hola mundo \n");
}

// funcion con inputs y sin output
void imprimir_numeros(x, y, z) {
	printf("(%i, %i, %i)\n", x, y, z);
}
