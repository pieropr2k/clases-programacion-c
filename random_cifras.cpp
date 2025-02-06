#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int cifras;
    
    // Pedir al usuario la cantidad de cifras
    printf("Ingrese la cantidad de cifras: ");
    scanf("%d", &cifras);

    // Calcular el rango del número aleatorio
    int limite_inferior = pow(10, cifras - 1);  // Mínimo número con esa cantidad de cifras
    int limite_superior = pow(10, cifras) - 1;  // Máximo número con esa cantidad de cifras

    // Inicializar la semilla para números aleatorios
    srand(time(NULL));

    // Generar número aleatorio dentro del rango
    int numero_random = limite_inferior + rand() % (limite_superior - limite_inferior + 1);

    // Imprimir el número generado
    printf("Número aleatorio con %d cifras: %d\n", cifras, numero_random);

    return 0;
}

