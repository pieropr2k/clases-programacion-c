#include <stdio.h>

#include <math.h>
#include <time.h>

int main() {
	srand(time(NULL));
	
	int n, k;
	printf("Dame el numero N:\n");
	scanf("%d", &n);
	printf("Dame el numero k:\n");
	scanf("%d", &k);
	int arr[n], i;
	
	for (i = 0; i < n; i++) {
		arr[i] = rand() % (15+1);
		printf("%i, ", arr[i]);
	}
	
	printf("\n");
	rotacion(arr, n, k);
}

void rotacion(int arr[], int n, int k) {
	int new_arr[n];
	int i;
	for (i = 0; i<n; i++) {
		if (i<k) {
			new_arr[i] = arr[n-k+i];
		} else {
			new_arr[i] = arr[i-k];
		}
	}
	for (i = 0; i<n; i++) {
		printf("%i, ", new_arr[i]);
	}
}

