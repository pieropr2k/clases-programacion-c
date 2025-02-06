# Lista de Ejercicios

## 1. Número Palíndromo más Cercano

**Descripción:**  
Dado un número entero, devuelve el entero más cercano (sin incluirse a sí mismo) que sea un palíndromo. Si hay un empate, devuelve el menor.  
La cercanía se define como la diferencia absoluta minimizada entre dos enteros.

**Ejemplos:**

- **Ejemplo 1:**
  - **Entrada:** `n = "123"`
  - **Salida:** `121`

- **Ejemplo 2:**
  - **Entrada:** `n = "808"`
  - **Salida:** `797`

---

## 2. Contar el Número de 1s en un Rango

**Descripción:**  
Dado un número entero `n`, cuenta el número total de veces que aparece el dígito `1` en todos los enteros no negativos menores o iguales a `n`.

**Ejemplos:**

- **Ejemplo 1:**
  - **Entrada:** `n = 13`
  - **Salida:** `6`

- **Ejemplo 2:**
  - **Entrada:** `n = 0`
  - **Salida:** `0`

- **Ejemplo 3:**
  - **Entrada:** `n = 20`
  - **Salida:** `13`

- **Ejemplo 4:**
  - **Entrada:** `n = 100`
  - **Salida:** `21`

---

## 3. N-ésimo Número Feo

**Descripción:**  
Un número feo es un número entero positivo cuyos factores primos están limitados a 2, 3 y 5.  
Dado un número entero `n`, devuelve el n-ésimo número feo.

**Ejemplos:**

- **Ejemplo 1:**
  - **Entrada:** `n = 10`
  - **Salida:** `12`
  - **Explicación:** `[1, 2, 3, 4, 5, 6, 8, 9, 10, 12]` es la secuencia de los primeros 10 números feos.

- **Ejemplo 2:**
  - **Entrada:** `n = 1`
  - **Salida:** `1`
  - **Explicación:** 1 no tiene factores primos, por lo que todos sus factores primos están limitados a 2, 3 y 5.

- **Ejemplo 3:**
  - **Entrada:** `n = 15`
  - **Salida:** `24`

- **Ejemplo 4:**
  - **Entrada:** `n = 7`
  - **Salida:** `8`
 
## Triangulos

### **1. Triángulo Rectángulo con Asteriscos**
Imprime un triángulo rectángulo de altura `n`.

#### **Ejemplo**
Entrada: `n = 5`
Salida:
```
*
**
***
****
*****
```

---

### **2. Triángulo Equilátero Centrado**
Imprime un triángulo equilátero de altura `n`.

#### **Ejemplo**
Entrada: `n = 5`
Salida:
```
    *    
   ***   
  *****  
 ******* 
*********
```

---

### **3. Árbol de Navidad con Tronco**
Imprime un árbol de Navidad de altura `n`, con un tronco de 2 líneas de alto y 3 caracteres de ancho.

#### **Ejemplo**
Entrada: `n = 5`
Salida:
```
    *    
   ***   
  *****  
 ******* 
*********
   |||   
   |||   
```

---

### **4. Pirámide Hueca**
Imprime una pirámide de altura `n`, pero solo con los bordes.

#### **Ejemplo**
Entrada: `n = 5`
Salida:
```
    *    
   * *   
  *   *  
 *     * 
*********
```

---

### **5. Diamante con Asteriscos**
Imprime un diamante de tamaño `n` (debe ser impar).

#### **Ejemplo**
Entrada: `n = 5`
Salida:
```
  *  
 *** 
***** 
 *** 
  *  
```

---

### **6. Rombo Hueco**
Imprime un rombo hueco de tamaño `n` (debe ser impar).

#### **Ejemplo**
Entrada: `n = 7`
Salida:
```
   *   
  * *  
 *   * 
*     *
 *   * 
  * *  
   *   
```

---

### **7. Árbol de Navidad con Adornos Aleatorios**
Imprime un árbol de Navidad con adornos (`o` y `x`) ubicados aleatoriamente en el follaje.

#### **Ejemplo**
Entrada: `n = 5`
Salida (puede variar):
```
    *    
   *o*   
  *x*x*  
 *o*x*o* 
*********
   |||   
   |||   
```


* Escribe un programa en C que lea dos números enteros, a y b, e imprima cuántos números primos existen entre a y b (inclusive) cuyo cada dígito también sea un número primo.

## 2. Números Primos con Dígitos Primos en Secuencia

* Escribe un programa en C que reciba un número n y luego imprima los primeros n números primos que tengan la característica de que todos los dígitos del número son primos y los dígitos están en orden ascendente (por ejemplo, 23, 37, 53, 73). Los números deben ser primos en sí mismos y deben seguir esta propiedad con sus dígitos.