#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    printf("Numero feo: %i ", returnedNumByPosition(n));
}

int returnedNumByPosition(int pos) {
	int c = 0 + 1, i; // contamos el 1;
	if (pos == 1) {
		return 1;
	}
	//for (i = 2; c == pos; i++) {
	for (i = 2; i>=0; i++) {
		// primero se da esto
		if (isUgly(i)) {
			c++;
			printf("%i: ,", i);
		}
		if (c == pos) {
			return i;
		}
	}
	//return i;
}

// Logica proposicional

// "o": ||
// p || q || r =>            q = V => p || V || r = V

// "y": &&
// p && q && r =>            q = F => p && F && r = F

int isUgly(int x) {
	// si es divisible por 2 "o" por 3 "o" por 5
	return (x % 2 == 0) || (x % 3 == 0) || (x % 5 == 0);
	
	/*
	return ( (x % 2 == 0) || (x % 3 == 0) || (x % 5 == 0) ) {
		true;
	} else {
		false;
	}
	*/
}

/*
int esPrimo(int num) {
	// 8 = 1,2,3,4,5,6,7,8
	//Max_divisor = 8
	//Max_diferente = 4
	// 9 = 1,2,3,4,5,6,7,8,9
	int i;
	for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
*/

/*
fibo(2) = fibo(1) + fibo(0)
int fibonacci(int x) {
	if (x == 1 || x == 0) {
		return 1;
	} else {
		return fibonacci(x-2) + fibonacci(x-1);
	}
}
*/
