#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Función para verificar si un número es primo
bool esPrimo(int n) {
    int i;
	if (n < 2) return false;
    for (i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// Función para verificar si un número ya ha sido impreso
bool yaFueImpreso(int numero, int ultimoImpreso) {
    return numero > ultimoImpreso;
}

int main() {
    int a, b, ultimoImpreso = -1; // Variable para almacenar el último número impreso

    // Iterar sobre todos los posibles valores de a y b
    for (a = 1; a < 32; ++a) { // 31^2 = 961, 32^2 = 1024 (más de tres cifras)
        for (b = a; b < 32; ++b) { // b >= a para evitar duplicados
        	ultimoImpreso = -1;
            int sumaCuadrados = a * a + b * b;
            if (sumaCuadrados >= 100 && sumaCuadrados <= 999 && esPrimo(sumaCuadrados)) {
                // Verificar si el número ya fue impreso
                if (yaFueImpreso(sumaCuadrados, ultimoImpreso)) {
                    printf("%d\n", sumaCuadrados);
                    ultimoImpreso = sumaCuadrados; // Actualizar el último número impreso
                }
            }
        }
    }

    return 0;
}
