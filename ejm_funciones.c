#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h> //Para Sleep()
#include <conio.h> //Para getch()
#include <stdbool.h>

int one = 0, three = 0, five = 0; // el contador de cada "numero de cifras"

int main(void) {
	
	// tu tienes solo tu contraseña y tu codigo
	// solo con eso, esperas que el sistema te brinde las notas, tu informacion, etc
	
	// INICIALIZAS VARIABLES
	int i, cod, cont; 
	printf("Ingresa tu codigo: ");
    scanf("%d", &cod);
    
    printf("Ingresa tu contrasenha: ");
    scanf("%d", &cont);
 
 	// toda la logica se delega en esta funcion:
	intralu(cont, cod);
}

// funcion con parametro 
void intralu(int cont, int codigo) {
	// todo un proceso
	int x, y, z, informacion = cont + 100, notas = codigo - 90, l = 1000, cantidad_base_de_datos = 100000;
	// proceso ...
	
	x = y + z;
	cantidad_base_de_datos -= 100;
	l = notas - 90;
	cantidad_base_de_datos += 100;
	informacion = informacion + 0.99;
	
	// proceso ...
	
	printf("Bienvenido al sistema\n");
	// muestra todo lo que quieres, las notas, etc etc
}
