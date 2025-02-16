#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h> //Para Sleep()
#include <conio.h> //Para getch()
#include <stdbool.h>

// Aca declaras y defines las funciones, antes de ponerles la logica
void numeros_aleatorios(int N, int D);
bool digitosIguales(int x);
int random_en_base_a_cifras(int n_cifras);
void palabras_aleatorias(int P, int C);
bool generar_palabra_y_detectar_si_es_igual(int C);

int main(void) {
	int N, D;
	printf("Ingrese N: ");
    scanf("%d", &N);
    printf("Ingrese D: ");
    scanf("%d", &D);
	
    srand(time(NULL)); // Inicializar la semilla para la aleatoriedad
    
 	// funcion de numeros aleatorios
 	numeros_aleatorios(N, D);
 	// funcion de "palabras" aleatorias
 	palabras_aleatorias(N, D);
}

// Aca le pones la logica a las funciones

// PALABRAS
void palabras_aleatorias(int P, int C) {
	//P: num de palabras, C: num de caracteres
	int i, cont_palabras_con_letras_iguales = 0;
	
	for (i = 0; i < P;  i++) {
		if (generar_palabra_y_detectar_si_es_igual(C)) {
			cont_palabras_con_letras_iguales++;
		}
		
		// este es para ver si se imprime las comas o no
		if (i == P - 1) {
			printf("\n");
		} else {
			printf(", ");
		}
	}
	printf("Se tiene %i palabras cuyas letras son iguales. \n", cont_palabras_con_letras_iguales);
}

bool generar_palabra_y_detectar_si_es_igual(int C) {
	int i;
	bool flag = true; // va a detectar si las letras son iguales, comienza con true
    char letra = 'A' + rand() % (25+1); // estado inicial, devolvera M
    char letra_pasada = letra; // almacenara la letra que estaba en la iteracion anterior
    
    // aca se imprime la palabra
	for (i = 0; i < C; i++) {
		// ANTES DE IMPRIMIR
		
		// genero la letra aleatoria
		if (i != 0) { // quiero que se mantenga el estado inicial
			letra = 'A' + rand() % (25+1);
		}
		// aca evaluo si la letra actual con la letra anterior son diferentes
		if (letra != letra_pasada) {
			flag = false;
		}
		// imprime
        printf("%c", letra);
        
        // DESPUES DE IMPRIMIR
        // letra_pasada guarda la letra actual, la cual en la siguiente iteracion sera una letra vieja
        letra_pasada = letra;
    }
    return flag;
    // MMMMMMMM
    // MMMO
    // iteracion 3:
    // letra_pasada = M => letra = M,  letra_pasada = M
    // iteracion 4:
    // letra_pasada = M,=> letra = ?,  letra_pasada = ?
    // letra_pasada = M,=> letra = O,  letra_pasada = ?
}


// NUMEROS
void numeros_aleatorios(int N, int D) {
	//N = 5, D = 2;
	int i, rand;
	int cont_digitos_iguales = 0;
	int digitos[N]; // arreglo de tamaño N
	
	for (i = 0; i < N;  i++) {
		digitos[i] = random_en_base_a_cifras(D);
		if (digitosIguales(digitos[i]) == true) {
			cont_digitos_iguales++;
		}
		
		if (i == N - 1) {
			printf("%i\n", digitos[i]);
		} else {
			printf("%i, ", digitos[i]);
		}
	}
	printf("Se tiene %i numeros cuyos digitos son iguales. \n", cont_digitos_iguales);
	
	// Imprimo porque ya se guardaron
	for (i = 0; i<N; i++) {
		if (i == N - 1) {
			printf("%i\n", digitos[i]);
		} else {
			printf("%i, ", digitos[i]);
		}
	}
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

int random_en_base_a_cifras(int n_cifras) {
	int limite_inferior = pow(10, n_cifras - 1);
	int limite_superior = pow(10, n_cifras) - 1; 
	return limite_inferior + rand() % (limite_superior - limite_inferior + 1);
}
