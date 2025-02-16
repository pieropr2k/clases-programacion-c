#include <stdio.h>

#include <math.h>
#include <time.h>

int main() {
	srand(time(NULL));
	
	int n;
	printf("Dame el numero N:\n");
	scanf("%d", &n);
	
	int longitud = get_longitud(n);
	generar_digitos(n, longitud);
}

void generar_digitos(int n, int longitud) {
	int arr[longitud];
	int i = 0, j, aux;
	for(i = 0; i< longitud; i++) {
		arr[i] = n%10;
		n = n/10;
	}
	// imprimir cada digito como tal
	for(i = longitud-1; i >= 0; i--) {
		printf("%i, ", arr[i]);
	}
	printf("\n");
	
	// ordenamiento creciente
	// burbuja
	for(i = 0; i< longitud; i++) {
		for(j = 0; j < longitud-1; j++) {
			if (arr[j] > arr[j+1]) {
				aux = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = aux;
			}
			
		}
	}
	// [4,8,5,9,3,7,4,2,7,1];
	
	// aca imprimimos el arreglo ordenado
	for(i = 0; i< longitud; i++) {
		printf("%i, ", arr[i]);
	}
	printf("\n");
	
	printf("Elemento menor: %i\n", arr[0]);
	printf("Elemento mayor: %i\n", arr[longitud - 1]);
	
	// imprimir ordenamiento decrecientemente
	for(i = longitud-1; i >= 0; i--) {
		printf("%i, ", arr[i]);
	}
	
}

int get_longitud(int n) {
	int c = 0;
	while (n>0) {
		int res = n%10;
		n = n/10;
		c++;
	}
	return c;
}

