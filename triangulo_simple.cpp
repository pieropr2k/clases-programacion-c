#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int N = 7;
    int i, j, k, l;
    bool flag = true; // indica si el triangulo se va a seguir imprimiendo

	// imprimir un triangulo
    for (i = 0; flag == true; i++) {  // por filas
		
		// imprime los espacios izquierdos
        for (j = 0; j < i; j++) {
        	printf("  ");
        }
        // para que intente terminar el ciclo for mayor
        flag = false;
        // imprimimos los asteriscos del triangulo
        for (j = i; j < N - i; j++) { 
        	printf("* ");
        	flag = true;
        }
        // imprime los espacios derechos
        for (j = N - i; j < N; j++) { /
        	printf("  ");
        }
        
        // el salto de linea
        printf("\n");
        
        // invertir el triangulo
    }
    
	
    return 0;
}
