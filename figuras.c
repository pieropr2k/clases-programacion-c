#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int N = 6, DIV = 2;
    int i, j, drawByColCounter = DIV, drawByRowCounter = DIV; // contadores
	bool drawByCol = true, drawByRow = true; // booleanos

	// imprimir
    for (i = 0; i < N; i++) {  // por filas
		if (drawByRow) {
			drawByCol = true;
		} else {
			drawByCol = false;
		}
		// contadores
		drawByRowCounter--;
		if (drawByRowCounter == 0) {
			drawByRowCounter = DIV; // reinicio
			drawByRow = !drawByRow; // cambio de booleano
		} 
		
        for (j = 0; j < N; j++) { // por columnas
        	// imprime asterisco
			if(drawByCol == true) {
        		printf(" * ");
			} else {
				printf("   ");
			}
			// una vez imprime asterisco
			// comienza a disminuir el contador
			drawByColCounter--;
			if (drawByColCounter == 0) {
				// primero cambiamos el booleano
				drawByCol = !drawByCol;
				// luego reiniciamos
				drawByColCounter = DIV;
			}
        }
        printf("\n");
    }
    
	// booleano
	bool verdad = true;
	verdad = !verdad;
	printf("verdad: %d", verdad);
	
	
    return 0;
}
