#include <stdio.h>
// si quieres booleanos importas esta libreria
#include <stdbool.h>
#include <math.h>

int main() {
	  
	int n, resid, expo = 0, num_inv = 0;  
	 n =198;
	 
	 // n=198   19       8 => 800  0
	 // n=19    9        1 => 90  800 = 890
	 // n=1     1   r = 0  => 1  890 = 891
	
	while (n>0) {
		resid = n%10; // residuo
		num_inv = resid* pow(10, 3-1-expo) + num_inv;
		n = n/10; // cociente 
		expo++;
	}
	
	
	printf("El numero invvertido es: %i /n", num_inv); 
}

