#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    // Palindromo
    // 1945491 => 1945491
    // "amabbama" => "amabbama"
    // 345 => 543 => no es palindromo
    // 343 => 343
	
	int num = 1945491, inv = 0, res, num_copy = num;
	
	// numero inverso
	while (num_copy > 0) {
		res = num_copy % 10;
		// inv = 1
		// inv = 10* 1 + 9 = 19
		// inv  = 10 * 19 + 4 = 194
		inv = 10*inv + res;
		num_copy = num_copy / 10;
	}
    
    // si el numero es palindromo
    if (num == inv) {
    	printf("El número %d SI es palindromo\n", num);	
	} else {
		printf("El número %d NO es palindromo\n", num);	
	}

}

