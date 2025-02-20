#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void arreglo_random(int arr[], int a)
{
	int i;
    for (i = 0; i < a; i++)
    {
        arr[i] = rand() % 12 - 6;
    }
}
void impresion(int arr[], int a)
{
	int i;
    for (i = 0; i < a; i++)
    {
        printf("%i", arr[i]);
        if (i < a - 1)
        {
            printf(", ");
        }
    }
}
void subarreglo_mayor_suma(int arr[], int a)
{
    int mayor_index, menor_index;
    int mayor_suma = -99, suma, i, j, k;
    for (i = 0; i < a; i++)
    {
        for (j = i; j < a; j++)
        {
            suma = 0;
            for (k = i; k <= j; k++)
            {
                suma += arr[k];
            }
            if (suma > mayor_suma)
            {
                mayor_suma = suma;
            }
        }
    }
    printf("\nmayor suma: %i", mayor_suma);
}
int main()
{
    srand(time(NULL));
    int N;
    do
    {
        printf("Ingresa el numero N:\n");
        scanf("%i", &N);
    } while (N <= 0);
    int array[N];
    arreglo_random(array, N);
    impresion(array, N);
    subarreglo_mayor_suma(array, N);
    return (0);
}
