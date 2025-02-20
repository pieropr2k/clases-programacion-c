# Lista de Ejercicios Arreglos: 

## Bidimensional

### Juego del Michi
Haz el juego del michi.


### Rotación de Matriz 90°

Dada una matriz cuadrada N×N, escribe una función en C que la rote 90 grados en sentido horario.

De: 

1   2   3<br>
4   5   6<br>
7   8   9

A: 

7   4   1<br>
8   5   2<br>
9   6   3

### Multiplicación de Dos Matrices

Dadas dos matrices A[M][N] y B[N][P], calcula su producto matricial C[M][P]

### Suma de Diagonales

Dada una matriz cuadrada, encuentra la suma de la diagonal principal y la secundaria.
Evita sumar el elemento central dos veces si N es impar.

Ejm:
Si tenemos la siguiente matriz de **3×3**:

1 2 3 <br/>
4 5 6 <br/>
7 8 9

- **Diagonal Principal (?)**: `1, 5, 9`
- **Diagonal Secundaria (?)**: `3, 5, 7`
- **Suma sin contar el centro dos veces** (cuando ?? es impar):  
  `1 + 5 + 9 + 3 + 7 = 25` (Solo se suma el 5 una vez).

?? **Caso cuando ?? es par**:  
Si la matriz es **4×4**, todas las posiciones se suman sin problemas.

Ejemplo de una matriz **4×4**:

1 2 3 4 <br/>
5 6 7 8 <br/>
9 10 11 12 <br/>
13 14 15 16

- **Diagonal Principal (?)**: `1, 6, 11, 16`
- **Diagonal Secundaria (?)**: `4, 7, 10, 13`
- **Suma Total**:  
  `1 + 6 + 11 + 16 + 4 + 7 + 10 + 13 = 68`


### Encuentra la Submatriz con la Mayor Suma (Kadane 2D)

Dada una matriz de enteros (positivos y negativos), encuentra la submatriz de tamaño variable cuya suma sea máxima.

