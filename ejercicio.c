#include <stdio.h>
#include <math.h>

int main() {
	int cifras;
	printf("Ingrese la cantidad de cifras: ");
    scanf("%d", &cifras);
    
    int limite_inferior = pow(10, cifras - 1); 
    int limite_superior = pow(10, cifras) - 1;
    
    srand(time(NULL));
    
	int num = limite_inferior + rand() % (limite_superior - limite_inferior + 1);
    
    //num = 459685, 
	int j, num_copy, cifra_mayor = -1, posicion_cifra_mayor = -1;
    int temp_num, divisor = 1, i = 0;

    // Copia del número original
    num_copy = num;
    
    // Encontrar la cifra mayor y su posición
    while (num_copy > 0) {
        int digito = num_copy % 10;
        if (digito > cifra_mayor) {
            cifra_mayor = digito;
            posicion_cifra_mayor = i; // Guardamos la posición en la que está la cifra mayor
        }
        num_copy /= 10;
        i++;
    }

    // Calcular el divisor para eliminar la cifra en la posición encontrada
    for (j = 0; j < posicion_cifra_mayor; j++) {
        divisor *= 10;
    }

    // Construir el número sin la cifra mayor
    int parte_izquierda = num / (divisor * 10); // Parte antes de la cifra eliminada
    int parte_derecha = num % divisor;          // Parte después de la cifra eliminada

    int num_final = parte_izquierda * divisor + parte_derecha;

    // Imprimir resultados
    printf("Número original: %d\n", num);
    printf("Cifra mayor encontrada: %d\n", cifra_mayor);
    printf("Posición de la cifra mayor (contando desde 0): %d\n", posicion_cifra_mayor);
    printf("Número final después de eliminar la cifra mayor: %d\n", num_final);
}

