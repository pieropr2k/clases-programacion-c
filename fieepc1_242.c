#include <stdio.h>
#include <windows.h> //Para Sleep()
#include <conio.h> //Para getch()
#include <stdbool.h>
#include <math.h> // para funciones matematicas

#define CONSTANTE 19 // Asi se declara una constante
// se pone asi: #define nombre_constante valor

int main(void) {
	// nueva constante
	const int nombre = 25;
	//const tipo_dato nombre_variable = 90; // para poner valor definitivo
	
	printf("Constante es %i\n", nombre);
	
	
	// Tipos de datos:
	// Enteros => %i en un printf
	int v = 98;
	int v2 = 19;
	
	// printf("Resultado: %inicial_caracter", variable);
	
	printf("Tu numero de tinka es %i\n", v);
	// %i = indica que es entero (int)
	
	// Character = caracter => %c
	
	char car = 'H'; // valor inicial de car es H
	
	car = 'A'; // actualizar de 'H' a 'A' => car = 'A'
	printf("Tu letra es %c\n", car); 
	
	
	// Para almacenar valores decimales
	// float es mas limitado en numero de decimales
	float var2 = 100.91;
	printf("float %f\n", var2);
	
	// Para DOUBLE, es diferente => %lf
	// double tiene mas alcance que float
	// double = long float => %lf
	
	double var = 98.90;
	//printf("double %d\n", var); => asi no se pone
	printf("double %lf\n", var); 
	
	
	// booleano => %d
	// 2 valores: true y false
	// 1 bit => true : 1 , false : 0
	
	bool flag = false;
	printf("boolean %d\n", flag); 
	
	/*
	if (flag) {
		printf("debe imprimir si es verdadero %lf\n", var); 
	}
	*/
	
	
	
	
	
	
	
	
	// Variables
	int opc, n, i, j, x=0;
	int loquesea2;
	// Asi se declara una variable:
	//tipo_dato nombre_variable;
	//tipo_dato nombre_variable = 90; // para poner valor inicial
	
	int loquesea = 90;
	//90
	//90
	//90
	
	loquesea += 5;
	//loquesea = loquesea + 5;
	
	//95
	//95
	//95
	//...
	loquesea = 1000;
	// 1000
	printf("Resultado: %i\n", loquesea);
	
	
	printf("Resultado: %i\n",var2);
	
	
	
	// Operadores
	
	// + , - : suma y resta 
	
	/*
	
	int variable_testeo = 90;
	printf("Variable inicial: %i\n", variable_testeo);
	
	// incremento por 1
	variable_testeo++; // variable = variable + 1
	printf("Variable incremento por 1: %i\n", variable_testeo);
	
	// incremento por n
	// valor inicial = 91
	variable_testeo = 91;
	
	int n_ = 8;
	variable_testeo += n_; 
	printf("Variable incremento por n: %i\n", variable_testeo);
	
	*/
	
	
	
	int variable_testeo = 91;
	printf("Variable inicial: %i\n", variable_testeo); // 91
	// 91
	// decremento por 1
	variable_testeo--; // variable = variable - 1
	printf("Variable decremento por 1: %i\n", variable_testeo);
	
	// decremento por n
	// valor inicial = 90
	variable_testeo = 90;
	
	// decremento por n
	int n_ = 8;
	variable_testeo -= n_;  // variable = variable - n_
	printf("Variable decremento por n: %i\n", variable_testeo);
	
	
	
	
	
	// Multiplicacion => x
	// * => asi se representa en la programacion
	
	int variable_test = 10;
	printf("Variable inicial: %i\n", variable_test); 
	
	printf("Multiplicacion: %i\n", variable_test * 29 ); 
	
	
	// Division => %
	// Representacion = " / "
	
	variable_test = 18;
	printf("Variable inicial: %i\n", variable_test);  // 18
	
	variable_test /= 3;
	//variable_test = variable_test / 3;
	
	printf("Division: %i\n", variable_test ); // 6
	
	//variable_test = 21;
	//printf("Division entre cero: %i\n", variable_test / 0 ); // error
	
	/*
	// teclados
	
	// primero declaramos las variables con su tipos
	int entero;
	//int entero1, entero2;
	
	// Una vez declaramos las variables recien hacemos scanf
	printf("Introduce un entero: \n");
  	scanf("%d", &entero);
  	
  	printf("Esto es todo lo que has escrito:\n");
  	printf("%d\n",entero);
  	
  	
  	
	int entero1, entero2;
	
	printf("Introduce dos enteros separados por un espacio: \n");
  	scanf("%d %d", &entero1, &entero2);
  	
  	
  	printf("Esto es todo lo que has escrito:\n");
  	printf("%d %d\n",entero1, entero2);
	
	*/
	
	//printf("%d %d %f %s\n",entero1,entero2,decimal,cadena);
	
	
	
	// numero ASCII
	// con character's osea caracter
	// importante: declararlo como char
	char letra;
	printf("Introduce el numero ASCII: \n");
  	scanf("%d", &letra);
	
	printf("Tu letra ASCII es %c\n", letra); 
	
	
	
	// Funciones matematicas
	
	
	
	
	/*
	// decremento por 1
	variable_test--; // variable = variable - 1
	printf("Variable decremento por 1: %i\n", variable_test);

	
	
	// decremento por n
	// valor inicial = 90
	variable_test = 90;
	
	// decremento por n
	int n__ = 8;
	variable_testeo -= n__;  // variable = variable - n_
	printf("Variable decremento por n: %i\n", variable_testeo);
	
	
	
	*/
	
	
	
	//variable_testeo = variable_testeo - 9;
	
	//printf("Variable restada: %i\n", variable_testeo);
	
	// Producto: *
	// Division: /
	
	/*
	int variable_testeo = 90;
	printf("Variable inicial: %i\n", variable_testeo);
	variable_testeo = variable_testeo + 10;
	
	printf("Variable sumada: %i\n", variable_testeo);
	variable_testeo = variable_testeo - 9;
	
	printf("Variable restada: %i\n", variable_testeo);
	
	*/
	
	
	
	
	
	
	
	
	
	
	//printf(xdnuevo,163);
	
	/*
	printf("1. N%cmero triangular\n0. Salir\n\n",163);
	
	printf("Ingrese una opci%cn: ",162);
	scanf("%d", &opc);
	if (opc == 1) {
		printf("Ingrese un valor entero para n: ");
		scanf("%d", &n);
		for (i = 1; i <= n; i++) { //Algoritmo para saber si se trata de un número triangular
			x = (i*(i + 1)*0.5 == n ? i : x);
		}
		if (x != 0) {
			printf("%d es un n%cmero triangular: True (%d es el n%cmero triangular n%cmero: %d)\n", n, 163, n, 163, 163, x);
			printf("Dibujo:\n\n");
			for (i = 1; i <= x; i++) { //Se hace el triángulo con blucles para controlar filas y columnas
				for (j = 1; j <= x - i; j++) {
					printf(" ");
				}
				for (j = 1; j <= i; j++) {
					printf("* ");
				}
				printf("\n");
				
			}
		}
		else {
			printf("%d no es un n%cmero triangular: Falso\n", n, 163);
			return 2;
		}
		getch();
		return 2;
	}
	else if (opc == 0) {
		system("cls");
		printf("Hasta la vista...\n");
		Sleep(15000);
		return 1;
	}
	printf("Opci%cn inv%clida\n", 162, 160);
	getch();
	return 0; //Diferentes opciones de return para saber por dónde terminó el programa
	*/
}
