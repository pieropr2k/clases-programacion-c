#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h> //Para Sleep()
#include <conio.h> //Para getch()
#include <stdbool.h>
int main(void) {
	int i, n; // Altura del árbol
	printf("Ingresa n: ");
    scanf("%d", &n);
    srand(time(NULL)); // Inicializar la semilla para la aleatoriedad
    
    int cifras, limite_inferior, limite_superior, numero_random; // para los randoms
    int one = 0, three = 0, five = 0; // el contador de cada "numero de cifras"
    int one_limit = 0.2*n, three_limit = 0.3*n, five_limit = 0.5*n; // limites de numeros a imprimir
    
    // random: 7 veces 1 => 7 = 2 + 5
    // one_limit = 0,2*10 = 2
    
    for (i = 0; i < n; i++) {
    	int random = (int) (rand() % 3) + 1; // random c [1, 3]
    	if (random == 1 && one < one_limit) {
    		// 1 cifra
    		cifras = 1;
		    limite_inferior = pow(10, cifras - 1);
		    limite_superior = pow(10, cifras) - 1; 
		    numero_random = limite_inferior + rand() % (limite_superior - limite_inferior + 1);
    		printf("%i\n", numero_random);
    		one++;
    		
		} else if (random == 2 && three < three_limit) {
			// 3 cifras
			cifras = 3;
		    limite_inferior = pow(10, cifras - 1);
		    limite_superior = pow(10, cifras) - 1; 
		    numero_random = limite_inferior + rand() % (limite_superior - limite_inferior + 1);
    		printf("%i\n", numero_random);
    		three++;
		} else if (random == 3 && five < five_limit) {
			// 5 cifras
			cifras = 5;
			limite_inferior = pow(10, cifras - 1);
		    limite_superior = pow(10, cifras) - 1; 
		    numero_random = limite_inferior + rand() % (limite_superior - limite_inferior + 1);
    		printf("%i\n", numero_random);
    		five++;
		}
    }
    
    // llenamos todos los contadores si o si
    while (one < one_limit) {
    	cifras = 1;
		limite_inferior = pow(10, cifras - 1);
		limite_superior = pow(10, cifras) - 1; 
		numero_random = limite_inferior + rand() % (limite_superior - limite_inferior + 1);
    	printf("%i\n", numero_random);
    	one++;	
	}
	
    // si no se llegan a imprimir todos:
    while (three < three_limit) {
			cifras = 3;
		    limite_inferior = pow(10, cifras - 1);
		    limite_superior = pow(10, cifras) - 1; 
		    numero_random = limite_inferior + rand() % (limite_superior - limite_inferior + 1);
    		printf("%i\n", numero_random);
    		three++;
	}
	
	while (five < five_limit) {
			cifras = 5;
			limite_inferior = pow(10, cifras - 1);
		    limite_superior = pow(10, cifras) - 1; 
		    numero_random = limite_inferior + rand() % (limite_superior - limite_inferior + 1);
    		printf("%i\n", numero_random);
    		five++;
		}
}
