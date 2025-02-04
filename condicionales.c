#include <stdio.h>
// si quieres booleanos importas esta libreria
#include <stdbool.h>

int main() {
	// Condicionales
	// hacer filtros para continuar el programa
	
	// principal:
	// if (condicion) { ... }
	// la condicional principal, la que hace el filtro ##numero 1 
	
	// else { ... }
	// es el acompa�ante del if, y esta para ejecutarse si las demas condiciones no se cumplen



	// solo if - else:
	// ejm: quieres ver si el numero es par o no
	int numero = 9;
	// numero par = multiplo de 2 => numero su residuo enre 2 es = a 0
	if (numero % 2 == 0) {
		printf("El n�mero %i es par.\n", numero);
	} else {
		printf("El n�mero %i es impar.\n", numero);
	}
	
	// else if (otra condicion) { ... }	
	// es la condicion suplente del if
	
	// ejm : quiero saber cuantas cifras tiene mi numero, del 1 al 1000 (de preferencia)
	 
	int num1;
    printf("Ingrese un n�mero: ");
    scanf("%d", &num1);
    // numero de 0 a 9
	if (num1 > 0 && num1 < 10) {
        printf("El n�mero tiene 1 cifra.\n");
    
    // numero de 10 a 99
    } else if (num1 >= 10 && num1 < 100) {
        printf("El n�mero tiene 2 cifras.\n");
    
    // numero de 100 a 999
    } else if (num1 >= 100 && num1 < 1000) {
        printf("El n�mero tiene 3 cifras.\n");
    
    // solo se cumple si lo demas no se cumple
	} else {
        printf("El n�mero tiene 4 cifras o +.\n");
    } 
	
	
	// Ejm: evaluar si el numero es positivo o negativo
	// numero positivo lo es si es mayor a 0, osea 1, 2, etc
	// numero negativo si es menor a 0, osea -1, -2, etc
	 
    int num;
    printf("Ingrese un n�mero: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("El n�mero es positivo.\n");
    } else if (num < 0) {
        printf("El n�mero es negativo.\n");
    } else {
        printf("El n�mero es cero.\n");
    } 
    
    // Condiciones Booleanas:
	bool booleano = true;
    // mayormente en la programacion todo lo vas a hacer en base a igualdades:
    
    bool mayor_a_cero = 9 > 0; // = true
    
	// intervalos
    int num_intervalo = 9;
    printf("Ingrese un n�mero a evaluar: ");
    scanf("%d", &num_intervalo);
    
    bool esta_en_rango = (num_intervalo > 0) && (num_intervalo < 10); // rango = <0, 10> = <0, ++oo> && <-oo, 10>
    
    if (esta_en_rango) {
    	printf("El n�mero %i esta en el rango.\n", num_intervalo);
	} else {
		printf("El n�mero %i no esta en el rango.\n", num_intervalo);
	}
    
    
    // Switch - cambio en ingles
    // sirve como opcion al if-else, y es mejor opcion si tienes demasiados intervalos
    
    // sintaxis
    /*
    switch (opcion_a_evaluar) {
    	//(opcion_a_evaluar == opcion1) => y si se cumple se procede con lo que hay adentro
		case opcion1:
			....
			break;  // para finiquitar el flujo una vez se cumpla la condicion
		case opcion2:
			....
			break;
		case opcion3:
			....
			break;
			
			...
		
		// opcion por defecto que se ejecutta automaticamente si no se cumple ningun case
		default:
			.... 
	
	}
    */
    
    // ejemplo: mini calculadora
	int opcion, x, y;

    printf("Seleccione una opci�n:\n");
    printf("1. Suma\n2. Resta\n3. Multiplicaci�n\n4. Divisi�n\n");
    scanf("%d", &opcion);

    printf("Ingrese dos n�meros: ");
    scanf("%d %d", &x, &y);

    switch(opcion) {
        case 1:
            printf("Resultado: %d\n", x + y);
            break;
        case 2:
            printf("Resultado: %d\n", x - y);
            break;
        case 3:
            printf("Resultado: %d\n", x * y);
            break;
        case 4:
        	// y no es igual a 0
            if (y != 0)
                printf("Resultado: %.2f\n", (float)x / y);
            else
                printf("Error: Divisi�n por cero.\n");
            break;
        default:
            printf("Opci�n no v�lida.\n");
    }
    //if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
    
    // para ver si el a�o es bisiesto
    // si un a�o es divisible por 4, entonces es bisiesto... pero que no sea divisible entre 100
    // si el a�o es divisible entre 100, ahi solo seria bisiesto si es divisible entre 400 si no, no lo es
    
     
    
    int anio;
    printf("Ingrese un a�o: ");
    scanf("%d", &anio);
    
	// (%4 == 0 || %400 == 0 ) && !(%100 == 0 && %400 != 0)
	// (%4 == 0 || %400 == 0 ) &&  (%100 != 0 || %400 == 0)
	/// (%4 == 0 && %100 !=0) || (%400 ==  0)
    

    // ( (es divisible enre 4) && (que no sea divisible enre 100) ) || (numero divisible entre 400) )
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {  
        printf("%d es un a�o bisiesto.\n", anio);
    } else {  
        printf("%d no es un a�o bisiesto.\n", anio);
    }


    // 
	int a, b, c;

    printf("Ingrese los tres lados del tri�ngulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) { // Verifica que sea un tri�ngulo v�lido
        if (b == a && b == c) {
            printf("Es un tri�ngulo equil�tero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Es un tri�ngulo is�sceles.\n");
        } else {
            printf("Es un tri�ngulo escaleno.\n");
        }
    } else {
        printf("No es un tri�ngulo v�lido.\n");
    }

}

