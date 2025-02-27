#include <stdio.h>

void generarMatrizMagica(int n, int matriz[n][n]) {
	int i, j, num; 
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            matriz[i][j] = 0;

    int fila = 0, columna = n / 2; // Comenzamos en la fila 0, columna central

    for (num = 1; num <= n * n; num++) {
        matriz[fila][columna] = num;

        // Calcular la nueva posici�n (arriba a la derecha)
        int nuevaFila = (fila - 1 + n) % n;
        int nuevaColumna = (columna + 1) % n;

        // Si la celda est� ocupada, mover hacia abajo
        if (matriz[nuevaFila][nuevaColumna] != 0) {
            fila = (fila + 1) % n;
        } else {
            fila = nuevaFila;
            columna = nuevaColumna;
        }
    }
}

void imprimirMatriz(int n, int matriz[n][n]) {
	int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    // Solicitar un n�mero impar al usuario
    printf("Ingrese un n�mero impar para la matriz m�gica: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("El n�mero debe ser impar.\n");
        return 1;
    }

    int matriz[n][n]; // Declaramos la matriz
    generarMatrizMagica(n, matriz);
    imprimirMatriz(n, matriz); 
}

