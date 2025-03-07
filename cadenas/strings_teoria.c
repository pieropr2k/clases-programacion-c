#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void funciones_manejo();
void entrada_cadenas();
bool es_palindromo(char cadena[]);

int main() {
    printf("MANEJO DE CADENAS EN C\n");
	
	// Tambien se llaman "strings"
	// 1. Declaración e inicialización de cadenas    
    printf("\n--- Declaración e Inicialización de Cadenas ---\n");
    
    //string hola = "hola"; // en C++
    
    // Sintaxis:
    //char nombre_cadena[] = "palabra";
    
    char saludo1[] = "Hola"; // Inicialización directa => ["H", "o", "l", "a]
    
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
    char cadena2[] = " Mundo"; // aca el tamaño es 6, porque se cuenta el espacio
    
    // strlen - longitud de cadena
    int sizes = strlen(cadena1);
    
    printf("Longitud de la palabra '%s' es: %lu\n", cadena1, sizes);
    printf("Longitud de la palabra '%s' es: %lu\n", cadena2, strlen(cadena2));
    
    
	//char suma[] = cadena1 + cadena2;	dara error
    
    
    // strcat: se encarga de hacer la concatenación de cadenas, y tiene que cambiar la primera cadena por la concatenacion
	/*
    Logica:
	strcat(cadena1, cadena2):
    	cadena1 = cadena1 + cadena2;
    
    Ejm:
    cadena1 = "martin"
    cadena2 = " es trika"   // cadena1 = "martin"
 	// cadena1 = "martin"
 	
    strcat(cadena1, cadena2); // cadena1 = "martin", cadena2 = " es trika"
    
    // cadena1 = "martin es trika", cadena2 = "es trika" 
    
    */
    
    strcat(cadena1, cadena2); // se modifica cadena1 y se le asigna la concatenacion
    
    printf("Concatenación: %s\n", cadena1);
    
    // strcpy - copia de cadenas
	//char copiafake[] = cadena1;
    
    // asi se inicializa una variable sin valor inicial
    char copia[100];
    /*
    Logica:
	strcpy(copia, cadena1):
    	copia = cadena1
    */
    
    
    strcpy(copia, cadena1); // se asigna la palabra de cadena1 a copia
    
    printf("Copia de cadena: %s\n", copia);
    
    char copia2[100];
    
    char cadena_ejm[] = "cadena";
    strcpy(copia2, cadena_ejm);
    
    printf("Copia de cadena2: %s\n", copia2);
    
    
	int i;
    
    // IMPRIMIR CADENA:
    char cadena_impr[] = "transforma a mayuscula"; // cadena = "transforma a mayuscula\0"
    
    // '\0': es el "vacio", indica que hasta ahi termina la cadena
    
    printf("\nIMPRIMIR CADENA:\n");
    for (i = 0; cadena_impr[i] != '\0'; i++) {
    	printf("%c - ", cadena_impr[i]);
    }
    printf("\n");
    
    
    
    // MAYUSCULAS Y MINUSCULAS
    
    // toupper y tolower
    /*
    toupper: transforma letra a mayuscula ----- up: arriba
    tolower: transforma letra a minuscula ----- lower: abajo
    */
    char cadena_prueba[] = "transforma a mayuscula"; // cadena = "transforma a mayuscula\0"
    
    // '\0': es el "vacio", indica que hasta ahi termina la cadena
    
    // Mayusculas:
    for (i = 0; cadena_prueba[i] != '\0'; i++) {
        cadena_prueba[i] = toupper(cadena_prueba[i]); // a => A, se asigna de minuscula a mayuscula cada letrita
    }
    printf("Mayúsculas: %s\n", cadena_prueba);
    
    // Minusculas:
    for (i = 0; cadena_prueba[i] != '\0'; i++) {
        cadena_prueba[i] = tolower(cadena_prueba[i]); // A => a
    }
    printf("Minúsculas: %s\n", cadena_prueba);
    
    //funciones_manejo();
    //entrada_cadenas();
    
    
    printf("\n--- Entrada de Cadenas por Teclado ---\n");
    
    char input[100];
    printf("Ingrese una cadena (sin espacios): ");
    scanf("%s", input);
    
    printf("Texto ingresado con scanf: %s\n", input);
    
    // scanf: tiene problemas para leer cadenas, si le pones un "hola mundo" solo te lee el "hola" y NO te lee todo
    
    getchar(); // Limpiar buffer, lo que hace es que input = "", osea vacia la variable input
    /*
    input = "dnfvmfmkrmkmassdasdadsddsrfkr"
	getchar(); // limpia y vacia input
	input = "" 
    */
    
    printf("Ingrese una frase (con espacios): ");
    // gets: esta para suplantar el problema de scanf, si le pones un "hola mundo" o "mi color favorito es rojo" te lo lee todo
    gets(input);
	
	//fgets(input, sizeof(input), stdin);
	//input[strcspn(input, "\n")] = 0; // Eliminar salto de línea
	
    printf("Texto ingresado con gets: %s\n", input);

	// Funciones con strings
	if (es_palindromo(input) == true) {
		printf("Es palindromo %s", input);
	} else {
		printf("NO Es palindromo %s", input);
	}
	
	
	char str1[] = "Hola";
    char str2[] = "Hola";
    
    if (str1 == str2) {
        printf("\nLas cadenas son iguales.\n");
    } else {
        printf("\nLas cadenas son diferentes.\n");
    }
    
    // strcmp: compara si ambas cadenas son iguales
	/*
    Logica:
	strcat(cadena1, cadena2):
    	return cadena1 == cadena2 (en todo)
    */

	/*
    if (strcmp(str1, str2) == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }
    */
}

// tipo_de_dato nombre_de_funcion(char nombre_cadena[]){...}
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

// abCdefedcBa  SI es palindromo
// ganador NO es palindromo

/*
palabra = "abcba" // tamaño = 5
derecha = 4 = 5-1
izquierda = 0

palabra[derecha] == palabra[izquierda]

derecha = 3
izquierda = 1

palabra[derecha] == palabra[izquierda]

derecha = 2
izquierda = 2

palabra[derecha] == palabra[izquierda]

*/
