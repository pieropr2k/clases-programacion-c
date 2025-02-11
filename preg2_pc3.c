#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h> //Para Sleep()
#include <conio.h> //Para getch()
#include <stdbool.h>

int one = 0, three = 0, five = 0; // el contador de cada "numero de cifras"

int main(void) {
	
	// tu tienes solo tu contraseña y tu codigo
	// solo con eso, esperas que el sistema te brinde las notas, tu informacion, etc
	
	// INICIALIZAS VARIABLES
	int i, n; // Altura del árbol
    srand(time(NULL)); // Inicializar la semilla para la aleatoriedad
 
 	numeros_aleatorios();
}

bool digitosIguales(int x) {
	int res;
	int cifra = x%10;
	while (x>0) {
		res = x%10;
		if (cifra != res) {
			return false;
		}
		x=x/10;
	}
	return true;
}
// 1111

void numeros_aleatorios() {
	int N = 5, D = 2, i, rand;
	int cont_digitos_iguales = 0;
	
	for (i = 0; i < N;  i++) {
		rand = random_en_base_a_cifras(D);
		if (digitosIguales(rand)) {
			cont_digitos_iguales++;
		}
		
		if (i == N - 1) {
			printf("%i\n", rand);
		} else {
			printf("%i, ", rand);
		}
		
	}
	printf("Se tiene %i numeros cuyos digitos son iguales. \n", cont_digitos_iguales);
}

int random_en_base_a_cifras(int n_cifras) {
	int limite_inferior = pow(10, n_cifras - 1);
	int limite_superior = pow(10, n_cifras) - 1; 
	return limite_inferior + rand() % (limite_superior - limite_inferior + 1);
}
