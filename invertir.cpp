#include <stdio.h>
#include <stdbool.h>

int number_length(int x);

int main() {
    int n = 1534236469;
    int resid, expo = 0;
    long long num_inv = 0;  // Usamos long long para evitar desbordamiento
    int signo = (n < 0) ? -1 : 1;  // Guardamos el signo del número
    n = (n < 0) ? -n : n;  // Convertimos a positivo para manipularlo
    
    int N = number_length(n);

    while (n > 0) {
        resid = n % 10;  // Obtener el último dígito
        num_inv = num_inv * 10 + resid;  // Construir el número invertido
        n = n / 10;  // Reducir n
    }

    num_inv *= signo;  // Restaurar el signo original

    // Verificar si el número invertido excede los límites de int
    if (num_inv > 2147483647 || num_inv < -2147483648) {
        printf("Error: Desbordamiento de int\n");
    } else {
        printf("El numero invertido es: %lld\n", num_inv);
    }

    return 0;
}

int number_length(int x) {
    int length = 0;
    x = (x >= 0) ? x : -x;
    while (x > 0) {
        x /= 10;
        length++;
    }
    return length;
}

