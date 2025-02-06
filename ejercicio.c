#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int n = 4, num, num_copy, num_final, res, cifra_mayor = -1, posicion_cifra_mayor = 0; // Tamaño del rombo, debe ser impar
   	num = 459610;
   	num_copy = num;
   	bool flag = false;
   	
   	while (num_copy > 0) {
   		res = num_copy % 10;
   		if (cifra_mayor < res) {
   			cifra_mayor = res;
		}
   		num_copy /= 10;	
	}
	
	num_copy = num;
	while (num_copy > 0) {
		res = num_copy % 10;
		if (res == cifra_mayor) {
			break;
		}
		posicion_cifra_mayor++;
		num_copy /= 10;	
	}
	
	printf("Mayor cifra: %i \n", cifra_mayor);
	printf("Mayor posicion: %i \n", posicion_cifra_mayor);
	
	num_final = num - cifra_mayor * pow (10, posicion_cifra_mayor);
	
	printf("Mayor cifra: %i", num_final);
}

