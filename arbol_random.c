#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> //Para Sleep()
#include <conio.h> //Para getch()
#include <stdbool.h>
int main(void) {
	int i, j, n = 9; // Altura del árbol
	char adornments[] = {'o', 'x'}; // Lista de adornos posibles
    srand(time(NULL)); // Inicializar la semilla para la aleatoriedad

    // Generar el follaje del árbol
    for (i = 0; i < n; i++) {
    	// j c [0, n-i]
        for (j = 0; j < n - i - 1; j++) {
            printf(" "); // Espacios para centrar
        }
        
        // j c [0, 2i]
        for (j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) {
                printf("*"); // Bordes del árbol
            } else {
            	int random = (rand() % 3) + 1;
            	if (random == 1) {
            		printf("o");
				} else if (random == 2) {
					printf("x");
				} else {
					printf("*");
				}
            }
        }
        printf("\n");
    }

    // Base del árbol
    int trunk_width = 3;
    int trunk_height = 2;
    int trunk_spaces = n - trunk_width / 2 - 1;

    for (i = 0; i < trunk_height; i++) {
        for (j = 0; j < trunk_spaces; j++) {
            printf(" ");
        }
        for (j = 0; j < trunk_width; j++) {
            printf("|");
        }
        printf("\n");
    }
}
