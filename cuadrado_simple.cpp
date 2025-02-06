#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int N = 6, DIV = 2;
    int i, j, drawByColCounter = DIV, drawByRowCounter = DIV; // contadores
	bool drawByCol = true, drawByRow = true; // booleanos

	// imprimir un cuadrado
    for (i = 0; i < N; i++) {  // por filas
		
        for (j = 0; j < N; j++) { // por columnas
        	printf(" * ");
        }
        printf("\n");
    }
    
	
    return 0;
}
