#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> //Para Sleep()
#include <conio.h> //Para getch()
#include <stdbool.h>
int main(void) {
	int i, j, n = 6; // Altura del árbol
	char adornments[] = {'o', 'x'}; // Lista de adornos posibles
    srand(time(NULL)); // Inicializar la semilla para la aleatoriedad

    // Generar el follaje del árbol
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" "); // Espacios para centrar
        }
        
        for (j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i || i == n-1) {
                printf("*"); // Bordes del árbol
            } else {
				printf(" ");
            }
        }
        printf("\n");
    }
}
