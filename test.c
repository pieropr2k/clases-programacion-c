#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Funci�n para verificar si un n�mero es primo
bool esPrimo(int n) {
    int i;
	if (n < 2) return false;
    for (i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// Funci�n para verificar si un n�mero ya ha sido impreso
bool yaFueImpreso(int numero, int ultimoImpreso) {
    return numero > ultimoImpreso;
}

int main() {
    int a, b, ultimoImpreso = -1; // Variable para almacenar el �ltimo n�mero impreso

    // Iterar sobre todos los posibles valores de a y b
    for (a = 1; a < 32; ++a) { // 31^2 = 961, 32^2 = 1024 (m�s de tres cifras)
        for (b = a; b < 32; ++b) { // b >= a para evitar duplicados
        	ultimoImpreso = -1;
            int sumaCuadrados = a * a + b * b;
            if (sumaCuadrados >= 100 && sumaCuadrados <= 999 && esPrimo(sumaCuadrados)) {
                // Verificar si el n�mero ya fue impreso
                if (yaFueImpreso(sumaCuadrados, ultimoImpreso)) {
                    printf("%d\n", sumaCuadrados);
                    ultimoImpreso = sumaCuadrados; // Actualizar el �ltimo n�mero impreso
                }
            }
        }
    }

    return 0;
}
