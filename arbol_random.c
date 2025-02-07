#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> //Para Sleep()
#include <conio.h> //Para getch()
#include <stdbool.h>
int main(void) {
	int i, j, n = 5; // Altura del árbol
	printf("Ingresa n: ");
    scanf("%d", &n);
	char adornments[] = {'o', 'x'}; // Lista de adornos posibles
    srand(time(NULL)); // Inicializar la semilla para la aleatoriedad
    
    /*
    n=5
    
    ----*
    ---*x*  j = 0 y 2
    --*xxx*  j = 0 y 4
    -*xxxxx*  j = 0 a 6
    *********  base c [0, 2*(5-1)]
       |||   n_spacios = 3 = 5 - (3)/2 - 1
       |||
    */
    
	// i c [0, n-1]
    // Generar el follaje del árbol
    for (i = 0; i < n; i++) {
    	// j c [0, n-i-2]
        for (j = 0; j <= n - i - 2; j++) {
            printf(" "); // Espacios para centrar
        }
        
        // j c [0, 2i]
        for (j = 0; j <= 2 * i; j++) {
            if (j == 0 || j == 2 * i || i == n-1) {
                printf("*"); // Bordes del árbol
            } else {
            	int random = (rand() % 3) + 1; // random c [1, 3]
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

    // Tronco del arbol
    int trunk_width = 3;
    int trunk_height = 2;
    int trunk_spaces = n - trunk_width / 2 - 1;

    for (i = 0; i < trunk_height; i++) {
    	// imprime espacios
        for (j = 0; j < trunk_spaces; j++) {
            printf(" ");
        }
        // imprime lo que quieres
        for (j = 0; j < trunk_width; j++) {
            printf("|");
        }
        printf("\n");
    }
}
