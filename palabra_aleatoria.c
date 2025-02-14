#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generar_palabra(int n) {
    int i;
    // bnm
	for (i = 0; i < n; i++) {
		// rand = [0, 26> = [0, 25]
        char letra = 'A' + rand() % (25+1); // Genera una letra aleatoria entre 'a' y 'z'
        printf("%c", letra);
    }
    /*
    B = A + 1
    D = A + 3
    Z = A + 25
    [ = A + 26
    */
}

int main() {
    srand(time(NULL)); // Inicializa la semilla para la generación aleatoria
    
    int n;
    printf("Ingrese el número de caracteres: ");
    scanf("%d", &n);
    
    printf("Palabra aleatoria: ");
    generar_palabra(n);
    printf("\n");
    
    return 0;
}

