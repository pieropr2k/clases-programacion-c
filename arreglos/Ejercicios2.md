# Lista de Ejercicios Arreglos: 

## Unidimensionales

### **1. Mezcla de dos arreglos ordenados**

**Descripción:**
Dado dos arreglos unidimensionales de números enteros, `arr1` de tamaño `N` y `arr2` de tamaño `M`, ambos ordenados en forma ascendente, escribe una función en C que combine ambos arreglos en uno solo, también ordenado en forma ascendente, sin utilizar funciones de ordenamiento adicionales.

**Entrada:**
- Un número entero `N` que indica el tamaño del primer arreglo.
- Un arreglo `arr1` de `N` enteros, ordenado ascendentemente.
- Un número entero `M` que indica el tamaño del segundo arreglo.
- Un arreglo `arr2` de `M` enteros, ordenado ascendentemente.

**Salida:**
- Un nuevo arreglo `arr3` de `N + M` enteros, que contenga todos los elementos de `arr1` y `arr2`, ordenados ascendentemente.

**Ejemplo:**
```c
Input:  N = 3, arr1 = {1, 3, 5}
        M = 4, arr2 = {2, 4, 6, 8}
Output: arr3 = {1, 2, 3, 4, 5, 6, 8}
```
 
---

### **2. Encontrar la subsecuencia creciente más larga**

**Descripción:**
Dado un arreglo unidimensional de números enteros `arr` de tamaño `N`, escribe una función en C que encuentre la longitud de la subsecuencia creciente más larga. Una subsecuencia es una secuencia que se puede derivar del arreglo original eliminando algunos elementos sin cambiar el orden de los restantes.

**Entrada:**
- Un número entero `N` que indica el tamaño del arreglo.
- Un arreglo `arr` de `N` enteros.

**Salida:**
- Un número entero que representa la longitud de la subsecuencia creciente más larga.

**Ejemplo:**
```c
Input:  N = 6, arr = {5, 2, 8, 6, 3, 6, 9, 7}
Output: 4  // La subsecuencia creciente más larga es {2, 3, 6, 9}
```


---

### **3. Subarreglo con suma máxima**

**Descripción:**
Escribe una función en C que encuentre la suma máxima de un subarreglo contiguo dentro de un arreglo unidimensional de números enteros `arr` de tamaño `N`.

**Entrada:**
- Un número entero `N` que indica el tamaño del arreglo.
- Un arreglo `arr` de `N` enteros.

**Salida:**
- Un número entero que representa la suma máxima de un subarreglo contiguo.

**Ejemplo:**
```c
Input:  N = 8, arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4}
Output: 6  // El subarreglo con suma máxima es {4, -1, 2, 1}
```

**Pista:**
Este problema es conocido como el "Problema de la suma máxima de subarreglo" o "Algoritmo de Kadane".

---

### **4. Rotación cíclica de un arreglo**

**Descripción:**
Dado un arreglo unidimensional de números enteros `arr` de tamaño `N`, escribe una función en C que rote el arreglo hacia la derecha por `K` posiciones.

**Entrada:**
- Un número entero `N` que indica el tamaño del arreglo.
- Un arreglo `arr` de `N` enteros.
- Un número entero `K` que indica el número de posiciones a rotar.

**Salida:**
- El arreglo `arr` después de haber sido rotado `K` posiciones a la derecha.

**Ejemplo:**
```c
Input:  N = 5, arr = {1, 2, 3, 4, 5}, K = 2
Output: arr = {4, 5, 1, 2, 3}
```


### 5. Encontrar el elemento que aparece una vez

Descripción: En un arreglo unidimensional de números enteros arr de tamaño N, todos los elementos aparecen dos veces, excepto uno que aparece una sola vez. Escribe una función en C que encuentre el elemento que aparece una sola vez.

- Entrada:

Un número entero N que indica el tamaño del arreglo (siempre impar).

Un arreglo arr de N enteros.

- Salida:

Los números enteros que aparecen una sola vez en el arreglo.
