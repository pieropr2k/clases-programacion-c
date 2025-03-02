## Problema: Encontrar los k elementos más cercanos al objetivo en un arreglo ordenado

Dado un arreglo de enteros ordenados, encuentra los `k` elementos más cercanos al objetivo en el arreglo donde `k` y el objetivo son enteros positivos utilizando búsqueda binaria.  

El objetivo puede o no estar presente en el arreglo de entrada.  

### Reglas:
- Si el objetivo es menor o igual que el primer elemento en el arreglo de entrada, devuelve los primeros `k` elementos.
- Si el objetivo es mayor o igual que el último elemento en el arreglo de entrada, devuelve los últimos `k` elementos.
- Los elementos devueltos deben estar en el mismo orden que están presentes en el arreglo de entrada.

### Ejemplos:

#### Entrada 1:
```plaintext
Arreglo: [10, 12, 15, 17, 18, 20, 25]
k = 4
Objetivo = 16
```
**Salida:**
```plaintext
[12, 15, 17, 18]
```

#### Entrada 2:
```plaintext
Arreglo: [2, 3, 4, 5, 6, 7]
k = 3
Objetivo = 1
```
**Salida:**
```plaintext
[2, 3, 4]
```

#### Entrada 3:
```plaintext
Arreglo: [2, 3, 4, 5, 6, 7]
k = 2
Objetivo = 8
```
**Salida:**
```plaintext
[6, 7]
```




## Problema: Generar y ordenar un arreglo en C++

### Descripción:
Escriba un programa en C++ que:
1. Genere un arreglo de números enteros de longitud `n` de forma aleatoria, donde `n` es ingresado por el usuario (máximo 100).
2. Ordene el arreglo utilizando el algoritmo de **ordenación de burbuja** de manera ascendente.
3. Solicite al usuario un número entero `k`.
4. Muestre:
   - El **arreglo original**.
   - El **arreglo ordenado**.
   - El **k-ésimo elemento** del arreglo ordenado.

### Ejemplo de ejecución:

#### Entrada:
```plaintext
Ingrese la longitud n del arreglo: 15
```
#### Salida:
```plaintext
Arreglo original: 52 53 81 47 53 38 25 75 4 49 50 67 21 29 42
Ingrese la posición k: 5
Arreglo ordenado: 4 21 25 29 38 42 47 49 50 52 53 53 67 75 81
El elemento en la posición 5 es: 38
```





## Problema: Formar el mayor número con los dígitos de `n`

### **Descripción**:
Escriba un programa en C++ que solicite un número natural `n` de **máximo 30 dígitos**, que **no tenga todos sus dígitos iguales**.  

El programa debe:
1. **Reordenar** los dígitos de `n` para formar el número **más grande posible**.
2. **Imprimir** la raíz cuadrada del número obtenido como comprobación.

---

### **Restricciones**:
- `n` debe tener como **máximo 30 dígitos**.
- `n` **no debe tener todos sus dígitos iguales**.

---

### **Entrada:**
- Un número natural `n` de hasta **30 dígitos**.

### **Salida:**
- El **mayor número posible** formado con los dígitos de `n`.
- La **raíz cuadrada** de dicho número.

---

### **Ejemplo de ejecución**:

#### **Entrada**:
```plaintext
14523
```

#### **Salida**:
```plaintext
Mayor número posible: 54321
Raíz cuadrada: 233.07
``` 

#### **Entrada**:
```plaintext
56848856
```

#### **Salida**:
```plaintext
Mayor número posible: 88866554
Raíz cuadrada: ....
``` 









## Problema: Camino con suma máxima en un tablero NxN

### Descripción:
Se le proporciona un tablero de tamaño `N×N` que contiene diferentes valores enteros. Debes encontrar el **camino con la suma máxima de valores** desde la esquina superior izquierda `(0,0)` hasta la esquina inferior derecha `(N-1, N-1)`.  

Solo puedes moverte en **dos direcciones**:
- **Derecha** `(→)`
- **Abajo** `(↓)`

### Requisitos: 
1. **Utilizar funcion** para representar la matriz.
2. Implementar una **función** para encontrar la suma máxima.
3. Manejar diferentes estrategias de recorrido. 

---

### **Entrada:**
- Un entero `N` que representa el tamaño del tablero.
- Una matriz `N×N` de enteros.

### **Salida:**
- Un entero que representa la **suma máxima de valores** desde `(0,0)` hasta `(N-1, N-1)`.

---

### **Ejemplo de ejecución:**

#### **Entrada:**
```plaintext
4
1 3 1 4
1 5 1 6
4 2 1 2
1 2 1 1
```

#### **Salida:**
```plaintext
19
```



