#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int count = 0; // Contador de números encontrados
    int num = 2;   // Empezamos desde el primer número primo

    printf("Los primeros %d números primos con dígitos primos en orden ascendente son:\n", n);

    while (count < n) { 
        bool esPrimo = true;
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            // Verificar si todos los dígitos son primos
            int temp = num;
            bool digitosPrimos = true;
            while (temp > 0) {
                int digito = temp % 10;
                if (digito != 2 && digito != 3 && digito != 5 && digito != 7) {
                    digitosPrimos = false;
                    break;
                }
                temp /= 10;
            }

            if (digitosPrimos) {
                // Verificar si los dígitos están en orden ascendente
                temp = num;
                int prevDigito = temp % 10;
                temp /= 10;
                bool digitosAscendentes = true;
                while (temp > 0) {
                    int currentDigito = temp % 10;
                    if (currentDigito >= prevDigito) {
                        digitosAscendentes = false;
                        break;
                    }
                    prevDigito = currentDigito;
                    temp /= 10;
                }

                if (digitosAscendentes) {
                    // Si cumple todas las condiciones, imprimir el número
                    printf("%d\n", num);
                    count++;
                }
            }
        }
        num++; // Pasar al siguiente número
    }

    return 0;
}
