# Lista de Ejercicios Arreglos: 

## Unidimensionales

### **1. Mezcla de dos arreglos ordenados**

**Descripci�n:**
Dado dos arreglos unidimensionales de n�meros enteros, `arr1` de tama�o `N` y `arr2` de tama�o `M`, ambos ordenados en forma ascendente, escribe una funci�n en C que combine ambos arreglos en uno solo, tambi�n ordenado en forma ascendente, sin utilizar funciones de ordenamiento adicionales.

**Entrada:**
- Un n�mero entero `N` que indica el tama�o del primer arreglo.
- Un arreglo `arr1` de `N` enteros, ordenado ascendentemente.
- Un n�mero entero `M` que indica el tama�o del segundo arreglo.
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

### **2. Encontrar la subsecuencia creciente m�s larga**

**Descripci�n:**
Dado un arreglo unidimensional de n�meros enteros `arr` de tama�o `N`, escribe una funci�n en C que encuentre la longitud de la subsecuencia creciente m�s larga. Una subsecuencia es una secuencia que se puede derivar del arreglo original eliminando algunos elementos sin cambiar el orden de los restantes.

**Entrada:**
- Un n�mero entero `N` que indica el tama�o del arreglo.
- Un arreglo `arr` de `N` enteros.

**Salida:**
- Un n�mero entero que representa la longitud de la subsecuencia creciente m�s larga.

**Ejemplo:**
```c
Input:  N = 6, arr = {5, 2, 8, 6, 3, 6, 9, 7}
Output: 4  // La subsecuencia creciente m�s larga es {2, 3, 6, 9}
```


---

### **3. Subarreglo con suma m�xima**

**Descripci�n:**
Escribe una funci�n en C que encuentre la suma m�xima de un subarreglo contiguo dentro de un arreglo unidimensional de n�meros enteros `arr` de tama�o `N`.

**Entrada:**
- Un n�mero entero `N` que indica el tama�o del arreglo.
- Un arreglo `arr` de `N` enteros.

**Salida:**
- Un n�mero entero que representa la suma m�xima de un subarreglo contiguo.

**Ejemplo:**
```c
Input:  N = 8, arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4}
Output: 6  // El subarreglo con suma m�xima es {4, -1, 2, 1}
```

**Pista:**
Este problema es conocido como el "Problema de la suma m�xima de subarreglo" o "Algoritmo de Kadane".

---

### **4. Rotaci�n c�clica de un arreglo**

**Descripci�n:**
Dado un arreglo unidimensional de n�meros enteros `arr` de tama�o `N`, escribe una funci�n en C que rote el arreglo hacia la derecha por `K` posiciones.

**Entrada:**
- Un n�mero entero `N` que indica el tama�o del arreglo.
- Un arreglo `arr` de `N` enteros.
- Un n�mero entero `K` que indica el n�mero de posiciones a rotar.

**Salida:**
- El arreglo `arr` despu�s de haber sido rotado `K` posiciones a la derecha.

**Ejemplo:**
```c
Input:  N = 5, arr = {1, 2, 3, 4, 5}, K = 2
Output: arr = {4, 5, 1, 2, 3}
```


### 5. Encontrar el elemento que aparece una vez

Descripci�n: En un arreglo unidimensional de n�meros enteros arr de tama�o N, todos los elementos aparecen dos veces, excepto uno que aparece una sola vez. Escribe una funci�n en C que encuentre el elemento que aparece una sola vez.

- Entrada:

Un n�mero entero N que indica el tama�o del arreglo (siempre impar).

Un arreglo arr de N enteros.

- Salida:

Los n�meros enteros que aparecen una sola vez en el arreglo.
