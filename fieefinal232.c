#include <stdio.h>
#include <stdlib.h>

#define SIZE 11 // Tamaño del tablero

// Declaración de funciones
void moverCursor(int tablero[SIZE][SIZE], int f, int c);
void imprimirTablero(int tablero[SIZE][SIZE]);
void llenarTablero(int tablero[SIZE][SIZE]);
void limpiarBuffer();

int main(void) {
    char opc;
    int i, f = 5, c = 5;
    int tablero[SIZE][SIZE];

    // Inicializa el tablero
    llenarTablero(tablero);

    for (i = 0; i < 3; ++i) {
		tablero[f - 1 + i][c] = 219;
		tablero[f][c - 1 + i] = 219;
	}

    // Bucle principal
    do {
        system("clear"); // Usa "clear" para limpiar la pantalla (compatible con Unix/Linux)
        imprimirTablero(tablero);

        // Entrada del usuario
        do {
            printf("Ingrese una tecla (F: Salir, A: Arriba, B: Abajo, D: Derecha, I: Izquierda): ");
            scanf(" %c", &opc);
            limpiarBuffer(); // Limpia el búfer de entrada
        } while (opc != 'F' && opc != 'A' && opc != 'B' && opc != 'D' && opc != 'I');

        // Actualiza las coordenadas del cursor
        if (opc == 'A' && f > 0) f--;           // Arriba
        else if (opc == 'B' && f < SIZE - 1) f++; // Abajo
        else if (opc == 'I' && c > 0) c--;       // Izquierda
        else if (opc == 'D' && c < SIZE - 1) c++; // Derecha

        moverCursor(tablero, f, c);
    } while (opc != 'F');

    return 0;
}

// Función para llenar el tablero con caracteres vacíos ('0')
void llenarTablero(int tablero[SIZE][SIZE]) {
    int i, j;
	for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            tablero[i][j] = '0';
        }
    }
}

// Función para mover el cursor en el tablero
void moverCursor(int tablero[SIZE][SIZE], int f, int c) {
    // Restaura el tablero
    llenarTablero(tablero);

	int i, j;	
    // Dibuja el nuevo cursor (asegurando que está dentro de los límites)
    for (i = 0; i < 3; ++i) {
        if (f - 1 + i >= 0 && f - 1 + i < SIZE) // Columna vertical
            tablero[f - 1 + i][c] = 219;
        if (c - 1 + i >= 0 && c - 1 + i < SIZE) // Fila horizontal
            tablero[f][c - 1 + i] = 219;
    }
}

// Función para imprimir el tablero
void imprimirTablero(int tablero[SIZE][SIZE]) {
    int i, j;
	for (i = 0; i < SIZE; ++i) {
        for (j = 0; j < SIZE; ++j) {
            printf("%c", tablero[i][j]);
        }
        printf("\n");
    }
}

// Función para limpiar el búfer de entrada
void limpiarBuffer() {
    while (getchar() != '\n');
}

