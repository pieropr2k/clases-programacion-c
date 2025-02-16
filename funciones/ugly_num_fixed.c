#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    printf("Numero feo: %i ", returnedNumByPosition(n));
}

int returnedNumByPosition(int pos) {
	int c = 1, i; // contamos el 1;
	
	if (pos == 1) {
		return 1;
		printf("%i ", 1);
	}
	printf("%i, ", 1);
	//for (i = 2; c == pos; i++) {
	for (i = 2; i>=0; i++) {
		// primero se da esto
		if (isUgly(i)) {
			c++;
			printf("%i, ", i);
		}
		if (c == pos) {
			return i;
		}
	}
	//return i;
}
/*
2 - 3 - 5
24 = 2*2*2*3 => 2*2 => 2 => 1 => flag = true
35 = 5 * 7 => 7
*/
int isUgly(int x) {
	// SOLO es divisible por 2 "o" por 3 "o" por 5
	bool flag; // indica si el numero es feo
	while (x>1) {
		flag = false;
		if (x%2 == 0) {
			x = x/2;
			flag = true;
		}
		if (x%3 == 0) {
			x = x/3;
			flag = true;
		}
		if (x%5 == 0) {
			x = x/5;
			flag = true;
		}
		if (flag == false) {
			break;
		}
	}
	return flag;
	//return (x % 2 == 0) || (x % 3 == 0) || (x % 5 == 0);
}
