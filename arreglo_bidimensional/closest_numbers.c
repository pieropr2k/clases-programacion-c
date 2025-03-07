#include <stdio.h>
#include <stdlib.h>

// Funci�n para encontrar el �ndice de inserci�n m�s cercano al objetivo usando b�squeda binaria
int findClosestIndexLinear(int arr[], int n, int target) {
    int closestIndex = 0, i;
    for (i = 1; i < n; i++) {
        if (abs(arr[i] - target) < abs(arr[closestIndex] - target)) {
            closestIndex = i;
        }
    }
    return closestIndex;
}

// Funci�n para encontrar los k elementos m�s cercanos al objetivo
void findKClosestElements(int arr[], int n, int k, int target) {
    int i;
	if (target <= arr[0]) { // Caso: objetivo menor o igual al primer elemento
        for (i = 0; i < k; i++) {
        	printf("%d ", arr[i]);
		}
    } else if (target >= arr[n - 1]) { // Caso: objetivo mayor o igual al �ltimo elemento
        for (i = n - k; i < n; i++) {
        	printf("%d ", arr[i]);
		}
    } else {
        //int index = findClosestIndex(arr, n, target);
        int index = findClosestIndexLinear(arr, n, target);
        
        int left = index - 1, right = index;
        
        // Expandir desde la posici�n encontrada
        while (k > 0) {
			if (abs(arr[left] - target) <= abs(arr[right] - target)) {
                left--;
            } else {
                right++;
            }
            k--;
        }
        
        for (i = left + 1; i < right; i++) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {10, 12, 15, 17, 18, 20, 25, 29, 31};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    findKClosestElements(arr1, n1, 5, 19);
    
    int arr2[] = {2, 3, 4, 5, 6, 7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    findKClosestElements(arr2, n2, 3, 1);
    
    int arr3[] = {2, 3, 4, 5, 6, 7};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    findKClosestElements(arr3, n3, 2, 108);
    
    return 0;
}

