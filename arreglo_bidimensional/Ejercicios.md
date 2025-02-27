# Lista de Ejercicios Arreglos: 

## Bidimensional

### Juego del Michi
Haz el juego del michi.


### Rotaci�n de Matriz 90�

Dada una matriz cuadrada N�N, escribe una funci�n en C que la rote 90 grados en sentido horario.

De: 

1   2   3<br>
4   5   6<br>
7   8   9

A: 

7   4   1<br>
8   5   2<br>
9   6   3

### Multiplicaci�n de Dos Matrices

Dadas dos matrices A[M][N] y B[N][P], calcula su producto matricial C[M][P]

### Suma de Diagonales

Dada una matriz cuadrada, encuentra la suma de la diagonal principal y la secundaria.
Evita sumar el elemento central dos veces si N es impar.

Ejm:
Si tenemos la siguiente matriz de **3�3**:

1 2 3 <br/>
4 5 6 <br/>
7 8 9

- **Diagonal Principal (?)**: `1, 5, 9`
- **Diagonal Secundaria (?)**: `3, 5, 7`
- **Suma sin contar el centro dos veces** (cuando ?? es impar):  
  `1 + 5 + 9 + 3 + 7 = 25` (Solo se suma el 5 una vez).

?? **Caso cuando ?? es par**:  
Si la matriz es **4�4**, todas las posiciones se suman sin problemas.

Ejemplo de una matriz **4�4**:

1 2 3 4 <br/>
5 6 7 8 <br/>
9 10 11 12 <br/>
13 14 15 16

- **Diagonal Principal (?)**: `1, 6, 11, 16`
- **Diagonal Secundaria (?)**: `4, 7, 10, 13`
- **Suma Total**:  
  `1 + 6 + 11 + 16 + 4 + 7 + 10 + 13 = 68`


### Encuentra la Submatriz con la Mayor Suma (Kadane 2D)

Dada una matriz de enteros (positivos y negativos), encuentra la submatriz de tama�o variable cuya suma sea m�xima.


## Subsecuencia mayor

Dado una matriz, sacar la subsecuencia mayor de la matriz


## Problema del Robot Nao

### Descripción del Problema

Dada una matriz 2D de números, donde todos son positivos y distintos entre sí, se tiene un robot Nao que comienza en la posición (0, 0). El robot puede moverse hacia la derecha, hacia abajo o en diagonal, seleccionando siempre la dirección que conduce al valor máximo.

El objetivo es escribir un programa en C++ que imprima la suma de la ruta total que sigue el robot.

### Especificaciones

- **Entrada:**
  - Número de filas (`ROWS`) y columnas (`COLS`) de la matriz.
  - Los elementos de la matriz.

- **Salida:**
  - La suma de la ruta total que sigue el robot.

### Ejemplo de Ejecución

**Entrada:**

Número de filas (ROWS) y columnas (COLS) de la matriz (grid):
3 3

Elementos de la matriz:
1 7 8 <br/>
2 10 11 <br/>
20 5 9

**Salida:**
31 (de 1 + 10 + 11 + 9)

### Explicación del Ejemplo

1. **Inicio del robot en (0, 0):** El robot comienza en la celda (0, 0) con valor `1`.
2. **Primer movimiento:** Desde (0, 0), el robot tiene 3 valores posibles para moverse: `2`, `7`, y `10`. Selecciona el valor máximo `10` y se mueve a esa celda.
3. **Segundo movimiento:** Desde la celda con valor `10`, el robot tiene 3 valores posibles para moverse: `5`, `9`, y `11`. Selecciona el valor máximo `11` y se mueve a esa celda.
4. **Tercer movimiento:** Desde la celda con valor `11`, solo tiene un valor disponible para moverse: `9`. Se mueve a esa celda.
5. **Suma total:** La suma de la ruta es `1 + 10 + 11 + 9 = 31`.



## Programa de Manipulación de Matrices usando Apuntadores

### Descripción del Problema

Elaborar un programa en C++ que solicite el orden de una matriz rectangular (`m` filas y `n` columnas). Luego, se leerán los valores de la matriz utilizando un apuntador. El programa debe realizar las siguientes tareas:

1. **Mostrar la matriz ingresada usando un apuntador.**
2. **Determinar las columnas cuya suma de elementos sea la mayor y la menor de todas, utilizando apuntadores.**
3. **Intercambiar los valores de esas columnas, dejando las demás iguales, utilizando apuntadores.**
4. **Mostrar la matriz resultante usando un apuntador.**
5. **Determinar el valor mínimo de los valores máximos de cada fila de la matriz, utilizando un apuntador.**

### Entrada:
- El orden de la matriz (`m` filas y `n` columnas).
- Los valores de la matriz.

### Salida:
1. La matriz ingresada.
2. La suma de cada columna.
3. La columna con la suma menor y la columna con la suma mayor.
4. La matriz resultante después del intercambio de columnas.
5. El valor mínimo de los valores máximos de cada fila.

---

## Ejemplo de Ejecución

### Entrada:

Ingrese el orden de la matriz= 3 4

2 5 6 8 <br/>
3 5 7 9 <br/>
1 4 2 6 <br/>


### Salida:

Matriz ingresada

2 5 6 8 <br/>
3 5 7 9 <br/>
1 4 2 6 <br/>

Suma de columnas: <br/>
6 14 15 23

Suma menor= 6, columna= 0 <br/>
Suma mayor= 23, columna= 3

Matriz resultante

8 5 6 2 <br/>
9 5 7 3 <br/>
6 4 2 1 <br/>

Valor minmax= 6