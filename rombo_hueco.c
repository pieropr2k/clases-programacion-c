#include <stdio.h>

int main() {
    int n = 7; // Tamaño del rombo, debe ser impar
   	if (n % 2 == 0) {
        printf("El tamaño del rombo debe ser un número impar.\n");
        return;
    }
    int mid = n / 2, i, j;
    // Parte superior del rombo
    for (i = 0; i <= mid; i++) {
        for (j = 0; j < mid - i; j++) {
            printf(" "); // Espacios iniciales
        }
        for (j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) {
                printf("*"); // Bordes del rombo
            } else {
                printf(" "); // Espacio interno
            }
        }
        printf("\n");
    }
    
    // Parte inferior del rombo
    for (i = mid - 1; i >= 0; i--) {
        for (j = 0; j < mid - i; j++) {
            printf(" "); // Espacios iniciales
        }
        for (j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) {
                printf("*"); // Bordes del rombo
            } else {
                printf(" "); // Espacio interno
            }
        }
        printf("\n");
    }
}

