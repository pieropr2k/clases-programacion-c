#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int count = 0; // Contador de n�meros encontrados
    int num = 2;   // Empezamos desde el primer n�mero primo

    printf("Los primeros %d n�meros primos con d�gitos primos en orden ascendente son:\n", n);

    while (count < n) { 
        bool esPrimo = true;
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            // Verificar si todos los d�gitos son primos
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
                // Verificar si los d�gitos est�n en orden ascendente
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
                    // Si cumple todas las condiciones, imprimir el n�mero
                    printf("%d\n", num);
                    count++;
                }
            }
        }
        num++; // Pasar al siguiente n�mero
    }

    return 0;
}
