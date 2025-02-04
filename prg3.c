#include <stdio.h>
// si quieres booleanos importas esta libreria
#include <stdbool.h>
#include <math.h>

int main() {
	  
	int anio, anio_copy, anio_mayor, resid, left, i, j, k, div;  
	
	printf("Ingrese un año: ");
    scanf("%d", &anio);
	
	// 1234
	// 3412
	//  n % 100 = residio
	// 1234 % 100 = 34
	// 1234 / 100 = 12
	
	//1234 | 100
	//       q = 12
	//r = 34 
	
	anio_copy = anio;
	resid = anio_copy % 100;
	left = anio_copy / 100;
	// 34 x 100 + 12 = 3400 + 12
	anio_mayor = resid * 100 + left;
	
	printf("El menor anio es %i y el mayor anio es : %i /n", anio, anio_mayor); 
	 
	int mayor_num = -1, div_mayor = -1; 
	
	// 1, 2, 3, ...
	// -99, -1
	
	for (i= anio; i<=anio_mayor; i++) { 
		div = 0;
		// 30 40	
		for (j = 1; j<= i; j++) {
			if (i % j == 0) {
				div++; 
		    }  
		}
		if (div >= div_mayor) {
			// cambio de variable
				div_mayor = div;
				mayor_num = i;
		} 
	} 
    
    printf("El numero con mayor cantidad de divisores es : %i /n", mayor_num);
    printf("El mayor cantidad de divisores es : %i /n", div_mayor);
    //printf("El numero de divisores : %i",div_mayor);

}

