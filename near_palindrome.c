#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    // 121 ... 123 ... 131
	
	int num = 808, inv = 0, res, num_copy;
	int final, cont = 1, left_reverse, right_reverse;
	
	while (cont < num) {
		// parte izquierda
		int left = num-cont;
		// inverso
		num_copy = left;
		inv = 0;
		while (num_copy > 0) {
			res = num_copy % 10;
			inv = 10*inv + res;
			num_copy = num_copy / 10;
		}
		left_reverse = inv;
		// si es palindromo asignar
		if (left == left_reverse) {
			final = left;
			break;	
		}
		
		// parte derecha
		int right = num + cont;
		// sacamos inverso
		num_copy = right;
		inv = 0;
		while (num_copy > 0) {
			res = num_copy % 10;
			inv = 10*inv + res;
			num_copy = num_copy / 10;
		}
		right_reverse = inv;
		// palindromo
		if (right == right_reverse) {
			final = right;
			break;	
		}
		cont++;
	}
	
	printf("El número mas cercano es: %d\n", final);

}

