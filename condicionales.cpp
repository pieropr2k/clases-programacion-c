#include <stdio.h>

int main() {
    int num;
    printf("Ingrese un n�mero: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("El n�mero es positivo.\n");
    } else if (num < 0) {
        printf("El n�mero es negativo.\n");
    } else {
        printf("El n�mero es cero.\n");
    }
    
    return 0;
}

