4. Rotación cíclica de un arreglo
Descripción: Dado un arreglo unidimensional de números enteros arr de tamaño N, escribe una función en C que rote el arreglo hacia la derecha por K posiciones.

Entrada:
Un número entero N que indica el tamaño del arreglo.
Un arreglo arr de N enteros.
Un número entero K que indica el número de posiciones a rotar.

Salida:
El arreglo arr después de haber sido rotado K posiciones a la derecha.

Ejemplo:
Input:  N = 5, arr = {1, 2, 3, 4, 5}, K = 2
Output: arr = {4, 5, 1, 2, 3}
Pista: Una forma eficiente de realizar la rotación es invertir partes del arreglo.



3. Subarreglo con suma máxima
Descripción: Escribe una función en C que encuentre la suma máxima de un subarreglo contiguo dentro de un arreglo unidimensional de números enteros arr de tamaño N.

Entrada:
Un número entero N que indica el tamaño del arreglo.
Un arreglo arr de N enteros.

Salida:
Un número entero que representa la suma máxima de un subarreglo contiguo.

Ejemplo:
Input:  N = 8, arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4}
Output: 6  // El subarreglo con suma máxima es {4, -1, 2, 1}
Pista: Este problema es conocido como el "Problema de la suma máxima de subarreglo" o "Algoritmo de Kadane".
