#include <stdio.h>

int main() {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("El número es positivo.\n");
    } else if (num < 0) {
        printf("El número es negativo.\n");
    } else {
        printf("El número es cero.\n");
    }
    
    return 0;
}

