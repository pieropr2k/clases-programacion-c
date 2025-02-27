#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void funciones_manejo();
void entrada_cadenas();
bool es_palindromo(char cadena[]);

int main() {
    printf("MANEJO DE CADENAS EN C\n");
	
	// 1. Declaración e inicialización de cadenas    
    printf("\n--- Declaración e Inicialización de Cadenas ---\n");
    
    //string hola = "hola"; // en C++
    
    char saludo1[] = "Hola"; // Inicialización directa
    char saludo2[10] = "Mundo"; // Especificando tamaño
    
    // %s: string
    
    printf("Saludo 1: %s\n", saludo1);
    printf("Saludo 2: %s\n", saludo2);
    
    char nombre[] = "Juan";
    char apellido[] = "Perez";
    printf("Nombre completo: %s %s\n", nombre, apellido);
    

	// 2. Funciones útiles para manejar cadenas    
    printf("\n--- Funciones de Manejo de Cadenas ---\n");
    
    char cadena1[] = "Hola";
    char cadena2[] = " Mundo";
    
    // strlen - longitud de cadena
    int sizes = strlen(cadena1);
    
    printf("Longitud de '%s' con variable: %lu\n", cadena1, sizes);
    printf("Longitud de '%s': %lu\n", cadena1, strlen(cadena1));
    
    // strcat - concatenación de cadenas
    strcat(cadena1, cadena2);
    printf("Concatenación: %s\n", cadena1);
    
    // strcpy - copia de cadenas
    //char copiafake[] = cadena1;
    
    // asi se inicializa una variable sin valor inicial
    char copia[100];
    
    
    strcpy(copia, cadena1);
    printf("Copia de cadena: %s\n", copia);
    
    int i;
    // toupper y tolower
    /*
    toupper: transforma letra a mayuscula
    tolower: transforma letra a minuscula
    */
    for (i = 0; cadena1[i] != '\0'; i++) {
        cadena1[i] = toupper(cadena1[i]);
    }
    printf("Mayúsculas: %s\n", cadena1);
    
    for (i = 0; cadena1[i] != '\0'; i++) {
        cadena1[i] = tolower(cadena1[i]);
    }
    printf("Minúsculas: %s\n", cadena1);
    
    //funciones_manejo();
    //entrada_cadenas();
    
    
    printf("\n--- Entrada de Cadenas por Teclado ---\n");
    
    char input[100];
    printf("Ingrese una cadena (sin espacios): ");
    scanf("%s", input);
    
    printf("Texto ingresado con scanf: %s\n", input);
    
    getchar(); // Limpiar buffer
    
    printf("Ingrese una frase (con espacios): ");
    
    gets(input);  
	
	//fgets(input, sizeof(input), stdin);
	//input[strcspn(input, "\n")] = 0; // Eliminar salto de línea
	
    printf("Texto ingresado con fgets: %s\n", input);
	
	if (es_palindromo(input)) {
		printf("Es palindromo %s", input);
	} else {
		printf("NO Es palindromo %s", input);
	}
}

bool es_palindromo(char cadena[]) {
	//printf("%s", cadena);
	//printf("%i", strlen(cadena));
	
    int izquierda = 0;
    int derecha = strlen(cadena) - 1;

    while (izquierda < derecha) {
        
        if (tolower(cadena[izquierda]) != tolower(cadena[derecha])) {
            return false; // No es palíndromo
        }
        izquierda++;
        derecha--;
    }
    return true; // Es palíndromo
}
