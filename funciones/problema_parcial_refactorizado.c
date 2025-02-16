#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
	
    int left_part_prev, left_part, right_part_prev, right_part, a, b;
	int N = 8; // en consola
	int number = 49563527; 
	int number_copy = number;
	//printf("test %i", number / pow(10, N-2));
	
	while (number_copy > 100) {	
		
		// Paso 1: parte izquierda
		left_part_prev = number_copy / (int)pow(10, N-2); // obtiene el numero a reemplazar
		number_copy = number_copy - left_part_prev * (int)pow(10, N-2);
		
		left_part = replaced_num(left_part_prev);
		/*
		a = left_part_prev / 10;
		b = left_part_prev % 10;
		left_part_sum = a + b;
		
		// aca reemplazamos el numero
		if (left_part_sum >= 10) {
			left_part = left_part_sum - 10;
		} else {
			left_part = left_part_sum;
		}
		*/
		
		// Paso 2: parte derecha
		right_part_prev = number_copy % 100; // para almacenar el numero de 2 digitos a reemplazar (27)
		
		// numero = 49|563527 => 49 | 5635 | 27
		// number_copy = 563527  - 27 = 563500
		number_copy -= right_part_prev;
		number_copy = number_copy/ 10;
		// 563500 => 56350
				
		right_part = replaced_num(right_part_prev);
		
		
		// cambiamos el numero
		// number_copy = 56350
		number_copy = left_part * (int)pow(10, N-2-1) + number_copy + right_part;
		N-=2;
    	printf("numero %i \n", number_copy);
	}
	
	// llega a menos de 2 cifras
	number_copy = replaced_num(number_copy);
	printf("numero %i \n", number_copy);    
    return 0;
}

// 38 => 3|8

int replaced_num(int num_to_replace) {
	int a = num_to_replace / 10;
	int b = num_to_replace % 10;
		
	if (a+b >= 10) {
		return a + b - 10;
	} else {
		return a + b;
	}
}
