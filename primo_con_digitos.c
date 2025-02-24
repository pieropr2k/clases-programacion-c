#include <stdio.h>
#include <stdbool.h>

bool is_primo(int n) ;
bool primo_en_cifras(int n);

int main() {
    int n = 7; // Tamaño del rombo, debe ser impar
   	int i;
   	
   	for (i=2; i<500; i++) {
   		if (is_primo(i) && primo_en_cifras(i)) {
   			printf("%i: \n", i);
		}	
	}
   	
}

// 373 = 37 = 3
bool primo_en_cifras(int n) {
	int res;
	while(n>0) {
		res = n % 10; // esta es la cifra del numero 
		
		if(res == 1 || res == 2 || res == 3 || res ==5 || res == 7){
			n = n/10;
			
		} else {
			return false;
		}
	}
	return true;
}

bool is_primo(int n) {
	int i;
	// [2,n>
	for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true;
}
