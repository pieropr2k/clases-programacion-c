#include <stdio.h>
#include <windows.h> //Para Sleep()
#include <conio.h> //Para getch()
#include <stdbool.h>
int main(void) {
	int i;
	// CICLOS
	// i = postulada
	// 1 - 2 - 3 - 4 - ... - 10
	for (i=1; ; i++) {
		if (i == 10) {
			printf("INGRESASTEEE POR FIN %d \n", i);
			break;
		}
		printf("No ingresaste por %d-esima vez, sigue intentando \n", i);
	}
	
	// FOR
	// inicializacion => ejm: i = 0, i= 1 , i = 1000
	// condicion de cumplimiento - para que se siga ejecutando => ejm: i<10; i>=10 && <= 20; etc
	// variabilidad => i += 2, i+=1, i++
	//for(inicializacion; condicion de cumplimiento; variabilidad) { .... lo que quieras}
	
	
	// ejm: imprimir los 10 primeros numeros centesimales
	for (i=100; i<=1000; i+=100) {
		//printf(i);
		printf("%d\n", i);
	}
	
	
	// Si no pones la condicion de cumplimiento y no la detienes, generaras un ciclo infinito
	/*
	printf("Ciclo infinito");
	for (i=0; ; i++) {
		printf("%d\n", i);
	}
	*/
	
	
	// Residuo, simbolo = %
	int residuo = 19 % 5;
	printf("Residuo de %d entre %d es = %d\n", 19, 5, residuo);
	residuo = 24 % 4;
	printf("Residuo de %d entre %d es = %d\n", 24, 4, residuo);	
	int a = 21, b = 3;
	residuo = a % b;
	printf("Residuo de a=%d entre b=%d es = %d\n", a, b, residuo);	
	
	
	// numeros primos del 1 al 100
	int j;
	bool flag = true; // indica si la variable es prima
	// numeros del 1 al 100
	for (i=1; i<=100; i++) {
		flag = true;
		// evaluamos si es primo
		// 7 es primo porque divisores = 1 - (...nada...) - 7
		// 8 NO es primo, porque divisores = 1 - (2 - 4) - 8
		for (j=2; j<i; j++) {
			// aca determinamos si el numero es primo
			// si el residuo de i entre j es igual a 0, entonces no es primo
			if (i % j == 0) {
				// el numero ya no es primo
				flag = false;
			}
		}
		// aca vamos a imprimir solo los numeros primos
		if (flag == true) {
			printf("Numero primo: %d\n", i);
		}
	}
	
	
	// EJM: 10 primeros numeros Fibonacci
	// a + b = c
    //     a   b
				
	// a = c
	// 0, 1, 1, 2, 3, 5, 8, 13, ...
	
	int n;
	printf("El numero de fibonaccis a pedir?: \n");
  	scanf("%d", &n);
	a = 0, b = 1;
	int c;
	for (i = 1; i <= n ; i++) {
		printf("%d\n", a);
		c = a + b;
		a = b;
		b = c;	
	}
	
	
	// EJM: Fibonaccis primos
	// a + b = c
	//    -a-  b
	printf("El numero de fibonaccis a analizar? Si son primos: \n");
  	scanf("%d", &n);
	a = 0, b = 1;
	//int c;
	
	for (i = 1; i <= n ; i++) {
		c = a + b;
		// variable a analizar: a
		a = b;
		b = c;	
		
		// Fase de numero primo
		flag = true; // indica si es primo o no
		
		// analisis de numero primo
		for (j=2; j<a; j++) {
			// si el residuo de a entre j es igual a 0, entonces no es primo
			if (a % j == 0) {
				// el numero ya no es primo
				flag = false;
			}
		}
		// aca vamos a imprimir solo los numeros primos
		if (flag == true) {
			printf("Numero primo: %d\n", a);
		} 
	}
	
	
	// break - continue
	// break: rompe todo el ciclo
	
	printf("\nEncuentra el primer primo superior a 8 y para el ciclo:\n");
	// EJM: encontrar solo un numero primo superior a 8 y cuando lo encuentres paras el ciclo
	for (i = 8; i <100; i++) {
		flag = true;
		// analisis de numero primo
		for (j=2; j<i; j++) {
			// si el residuo de a entre j es igual a 0, entonces no es primo
			if (i % j == 0) {
				// el numero ya no es primo
				flag = false;
			}
		}
		if (flag == true ) {
			printf("Numero primo superior a 8 ENCONTRADO: %d\n", i);
			break; // si le quitas el programa seguira iterando
		}
	}
	
	printf("\nCon el 11 rompes el programa:\n");
	// 0 1 2 3 4 ... en el 11 paras el programa
	for (i = 0; i>=0; i++) {
		printf("%d\n", i);
		if (i==11) {
			break;
		}
	}
	
	// continue = sirve para pasar de largo un proceso, o "evitarlo"
	
	// Ejm: Imprimir todos los numeros hasta el 30 excepto el 19
	// 1 2 3 4 ... 18 (19 no lo imprime) 20 21
	printf("\nTodos los numeros menos el 19:\n");
	for (i = 1; i<=30; i++) {
		if (i==19) {
			continue;
		} else {
			printf("%d\n", i);
		}
	}
	
	// Ejm: mismo programa con Continue
	
	// numeros primos del 1 al 25
	printf("\nPrimos hasta el 25:\n");
	flag = false; // indica si la variable NO es prima, osea numero Compuesto
	// evaluamos del 1 al 25
	for (i=1; i<=25; i++) { 
		// evaluamos si es primo
		for (j=2; j<i; j++) {
			// si el residuo de i entre j es igual a 0, entonces no es primo
			if (i % j == 0) {
				// el numero ya no es primo, se vuelve compuesto
				flag = true;
				// para ahorrar
				break;
			}
		}
		// aca si el numero es compuesto, no se imprime
		if (flag == true) {
			flag = false;
			continue;
		} else {
			printf("Numero primo: %d\n", i);
		}
	}
	
	
	// WHILE
	i = 1;
	while ( i <= 20) {
		//...ejecuta	
		printf("%d\n", i);
		i = i + 1; 
	}
	
	
	while ( false ) {
		//...ejecuta	
		printf("Hackeado%d\n", 90);
	}
	
	
	// DO - WHILE
	// Do es para hacer una accion antes del while "version de prueba"
	// While: es un ciclo que se cumple si la condicion se da
	
	/*
	int tienes_dinero = false;
	
	do {
		printf("Juegas el juego%d\n", 90);
		// consigues chamba
		tienes_dinero = true;
		
	} while (tienes_dinero == true);
	*/
	
	// ejm: clave con 1 letra
	char letra = 'n';
	char input;
	bool valido = false;
	int numero_limite_veces = 0;
	do {
		printf("Cual es la clave?\n");
  		scanf(" %c", &input);
		if (letra == input) {
			valido = true;
			// para evitar que se aumente el numero de veces
			break;
		}
		numero_limite_veces++;
		
	} while (valido == false && numero_limite_veces < 3);
	
	if (numero_limite_veces == 3) {
		printf("Excediste las 3 numero de veces\n");
	} else {
		printf("Bienvenido seas\n");
	}
}
