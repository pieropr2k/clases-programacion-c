#include <stdio.h>
#include <conio.h> //Para usar getch()
int main(void) {
	
	printf("Presione una tecla para una sorpresa: ");
	getch(); //Espera por una entrada
	printf("\n%cTe ganaste una casa%c\n", 173, 33); 

	//printf("variable 1: %i variable 2: %i cualquier cosa\n", 173, 33); 
	
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187); //Empieza el gráfico de la casa con código ASCII
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 32, 32, 32, 32, 32, 32, 32, 32, 219, 32, 32, 32, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 32, 32, 32, 32, 32, 47, 92, 32, 219, 32, 32, 32, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 32, 32, 32, 32, 47, 32, 32, 92, 219, 32, 32, 32, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 32, 32, 32, 47, 32, 32, 32, 32, 219, 32, 32, 32, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 32, 32, 47, 32, 32, 32, 32, 32, 219, 92, 32, 32, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 32, 47, 95, 95, 95, 95, 95, 95, 95, 95, 92, 32, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 32, 32, 124, 32, 32, 32, 32, 32, 32, 124, 32, 32, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 32, 32, 124, 32, 32, 219, 219, 32, 32, 124, 32, 32, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 32, 32, 124, 95, 95, 219, 219, 95, 95, 124, 32, 32, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188); //Finaliza el gráfico de la casa con código ASCII
	printf("Presione una tecla para finalizar: ");
	getch(); //Permite que el usuario pueda ejecutar el programa
	printf("\n");
	return 0;
}
