#include <stdio.h>
#include <windows.h> //Para Sleep()
#include <conio.h> //Para getch()
#include <stdbool.h>
#include <math.h> // para funciones matematicas

#define CONSTANTE 19 // Asi se declara una constante
// se pone asi: #define nombre_constante valor

int main(void) { 
	int opc, n, i, j, x; 
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
	
}
