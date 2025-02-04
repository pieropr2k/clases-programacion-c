#include <stdio.h>
// si quieres booleanos importas esta libreria
#include <stdbool.h>
#include <math.h>

int main() {
	
	//1000 => 33 => 9-9
	// 100 => 10
	// constante
	const int max_square_num = 9;
	int i, j, k, min_sqr, max_sqr, num;
	double min_sqr_pre, max_sqr_pre;
	bool flag = true;
	
	for (i=1; i<=max_square_num; i++) {
		min_sqr_pre = sqrt(100-pow(i,2));
		min_sqr = ceil(min_sqr_pre); 
		// max_sqr
		max_sqr_pre = sqrt(1000-pow(min_sqr,2));
		max_sqr = floor(max_sqr_pre); 
		
		for (j = min_sqr; j<= max_sqr; j++) {
			flag = true;
			num = pow(i,2) + pow(j,2);
			// si cumple se imprime
			for (k=2; k<num; k++) {
				// si el residuo de i entre j es igual a 0, entonces no es primo
				if (num % k == 0) {
					// el numero ya no es primo, se vuelve compuesto
					flag = false;
					// para ahorrar
					break;
				}
			}
			if (flag == true) {
				printf("Numero primo: %i\n", num);
			}
		}
	}
	
	/* 
	
	 // numeros primos del 1 al 100
	int j;
	bool flag = true; // indica si la variable es prima
	// numeros del 1 al 100
	for (i=1; i<=100; i++) {
		flag = true;
		// evaluamos si es primo
		// 7 es primo porque divisores = 1 - (...nada...) - 7
		// 8 NO es primo, porque divisores = 1 - (2 - 4) - 8
		for (j=2; j<i; j++) {
			// aca determinamos si el numero es primo
			// si el residuo de i entre j es igual a 0, entonces no es primo
			if (i % j == 0) {
				// el numero ya no es primo
				flag = false;
			}
		}
		// aca vamos a imprimir solo los numeros primos
		if (flag == true) {
			printf("Numero primo: %d\n", i);
		}
	}
	*/ 

}

