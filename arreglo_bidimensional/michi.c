#include <stdio.h>

#define SIZE 3

// Función para imprimir el tablero
void printBoard(char board[SIZE][SIZE]) {
    printf("\n");
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1){
        	printf("---+---+---\n");
		} 
    }
    printf("\n");
}

// Función para verificar si hay un ganador
char checkWinner(char board[SIZE][SIZE]) {
    // Revisar filas y columnas
    int i;
    for (i = 0; i < SIZE; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0]; // Ganador por fila
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return board[0][i]; // Ganador por columna
    }

    // Revisar diagonales
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[0][0]; // Diagonal principal
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return board[0][2]; // Diagonal secundaria

    return ' '; // No hay ganador aún
}

// Función para verificar si hay empate
int isDraw(char board[SIZE][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
            if (board[i][j] == ' ')
                return 0; // Todavía hay espacios vacíos
    return 1; // Tablero lleno, es empate
}

int main() {
    char board[SIZE][SIZE] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int row, col;
    char currentPlayer = 'X';
    char winner = ' ';

    printf("?? Bienvenido al juego de Michi (3 en Raya) ??\n");

    while (winner == ' ' && !isDraw(board)) {
        printBoard(board);
        printf("Turno del jugador %c\n", currentPlayer);
        
        // Pedir posición hasta que sea válida
        do {
            printf("Ingrese fila y columna (1-3 1-3): ");
            scanf("%d %d", &row, &col);
        } while (row < 1 || row > 3 || col < 1 || col > 3 || board[row-1][col-1] != ' ');

        board[row-1][col-1] = currentPlayer;

        // Verificar ganador
        winner = checkWinner(board);

        // Cambiar de jugador
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    printBoard(board);

    // Mostrar resultado final
    if (winner != ' ')
        printf("?? ¡El jugador %c gana! ??\n", winner);
    else
        printf("?? ¡Es un empate! ??\n"); 
}

